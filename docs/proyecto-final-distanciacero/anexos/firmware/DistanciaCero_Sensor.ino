/*
  DistanciaCero — Firmware del sensor (ESP32-S3 + MPU6050 + LiPo 3.7 V)
  Proyecto 4 · Jesús y Andrea

  Qué hace
  - Lee el MPU6050 a 50 Hz y detecta movimiento (alguien se sienta, toma el bastón o levanta la taza).
  - Publica por MQTT (mismo protocolo que la app y que sim_dispositivo.py):
      distanciacero/<ID>/conexion   retenido   {"estado":"online"|"offline"}   (offline = "última voluntad")
      distanciacero/<ID>/estado     retenido   cada 30 s y en cada cambio
      distanciacero/<ID>/actividad             cuando empieza un episodio de movimiento (máx. 1 por minuto)
  - Escucha órdenes en distanciacero/<ID>/cmd:
      {"accion":"umbral","min":240}   {"accion":"reiniciar"}   {"accion":"identificar"}
  - Si pasan <umbral> minutos sin movimiento, marca "alerta" y (opcional) manda una notificación push con ntfy.sh.

  Bibliotecas (Administrador de bibliotecas de Arduino IDE):
  - PubSubClient (Nick O'Leary)
  Placa: "ESP32S3 Dev Module" (paquete esp32 de Espressif, 2.x o 3.x). USB CDC On Boot: Enabled para ver el monitor serie.

  Conexiones (ESP32-S3 Super Mini, sin PCB, con jumpers)
  - MPU6050 (GY-521): VCC→3V3, GND→GND, SDA→GPIO 5, SCL→GPIO 6.
  - LiPo 3.7 V soldada a los pads B+ / B- de la parte de atrás (se carga por el USB-C).
  - Sin divisor de batería: BAT_PIN = -1 (la app muestra la batería como no disponible).
  - LED RGB integrado (GPIO 48): azul = buscando WiFi, amarillo = WiFi sí pero sin servidor,
    verde = conectado a la app, rojo = no encuentra el MPU6050, blanco = movimiento detectado.
  - Red WiFi: solo 2.4 GHz. Las redes de la universidad con usuario y contraseña (tipo eduroam)
    no funcionan; usa el hotspot de tu celular.
*/

#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <HTTPClient.h>
#include <PubSubClient.h>
#include <Preferences.h>
#include <Wire.h>
#include <time.h>
#include <esp_arduino_version.h>

// ====================== CONFIGURACIÓN (edita esto) ======================
const char* WIFI_SSID   = "TU_RED_WIFI";      // se quitó la red real antes de publicar
const char* WIFI_PASS   = "TU_CONTRASENA";    // se quitó la contraseña real antes de publicar

const char* MQTT_HOST   = "broker.hivemq.com";   // broker público gratuito (solo para prototipo)
const uint16_t MQTT_PORT = 1883;

const char* OBJETO      = "sillon";               // "sillon" | "baston" | "portavasos"
const char* NTFY_TOPIC  = "";                     // opcional: p. ej. "distanciacero-jesus-7f3a" (app ntfy en el celular)

const int   PIN_SDA     = 5;
const int   PIN_SCL     = 6;
const int   PIN_LED     = 48;                     // LED RGB integrado de la Super Mini
const int   BAT_PIN     = -1;                     // GPIO del divisor de batería, o -1 si no hay
const float BAT_DIVISOR = 2.0;                    // 100k/100k → 2.0

// Sensibilidad del movimiento. Ajusta con DEBUG_MOV = true viendo el monitor serie.
const float UMBRAL_GIRO_DPS = 6.0;   // giro (°/s) que cuenta como movimiento
const float UMBRAL_ACC_G    = 0.035; // cambio de aceleración (g) que cuenta como movimiento
const int   MUESTRAS_SEGUIDAS = 3;   // muestras seguidas por encima del umbral (filtra ruido)
const bool  DEBUG_MOV = false;       // true = imprime la señal cada 0.5 s para calibrar

const uint32_t UMBRAL_MIN_DEFECTO = 240; // minutos sin actividad antes de alertar (la app lo puede cambiar)
// ========================================================================

#define FW_VERSION "0.2-supermini"
#define MPU_ADDR 0x68

WiFiClient net;
PubSubClient mqtt(net);
Preferences prefs;

char deviceId[12];        // "DC-7F3A"
char baseTopic[40];       // "distanciacero/DC-7F3A"

uint32_t umbralMin = UMBRAL_MIN_DEFECTO;
bool hayMPU = false;
bool huboActividad = false;
uint32_t ultimaActividadMs = 0;
uint32_t ultimaPubActividadMs = 0;
uint32_t ultimoEstadoMs = 0;
uint32_t ultimoIntentoMqttMs = 0;
uint32_t ultimaLecturaMs = 0;
uint32_t ultimoDebugMs = 0;
bool alertaEnviada = false;
int  seguidas = 0;

// Filtros del MPU
float biasGx = 0, biasGy = 0, biasGz = 0;
float lpAx = 0, lpAy = 0, lpAz = 1;
float dbgGiro = 0, dbgAcc = 0;

// ---------------------------------------------------------------- LED RGB
void led(uint8_t r, uint8_t g, uint8_t b) {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  rgbLedWrite(PIN_LED, r, g, b);
#else
  neopixelWrite(PIN_LED, r, g, b);
#endif
}
// Destello corto cada 3 s con el estado de la conexión
void ledEstado() {
  static uint32_t ultimo = 0;
  if (millis() - ultimo < 3000) return;
  ultimo = millis();
  if (!hayMPU)                              led(20, 0, 0);    // rojo
  else if (WiFi.status() != WL_CONNECTED)   led(0, 0, 15);    // azul
  else if (!mqtt.connected())               led(15, 10, 0);   // amarillo
  else                                      led(0, 12, 0);    // verde
  delay(30);
  led(0, 0, 0);
}

// ---------------------------------------------------------------- MPU6050
void mpuWrite(uint8_t reg, uint8_t val) {
  Wire.beginTransmission(MPU_ADDR); Wire.write(reg); Wire.write(val); Wire.endTransmission();
}
bool mpuRead(int16_t* ax, int16_t* ay, int16_t* az, int16_t* gx, int16_t* gy, int16_t* gz) {
  Wire.beginTransmission(MPU_ADDR); Wire.write(0x3B);
  if (Wire.endTransmission(false) != 0) return false;
  if (Wire.requestFrom((uint8_t)MPU_ADDR, (uint8_t)14) != 14) return false;
  uint8_t b[14]; for (int i = 0; i < 14; i++) b[i] = Wire.read();
  *ax = (b[0] << 8) | b[1];  *ay = (b[2] << 8) | b[3];  *az = (b[4] << 8) | b[5];
  // b[6..7] = temperatura
  *gx = (b[8] << 8) | b[9];  *gy = (b[10] << 8) | b[11]; *gz = (b[12] << 8) | b[13];
  return true;
}
bool mpuInit() {
  Wire.begin(PIN_SDA, PIN_SCL);
  Wire.setClock(100000);   // 100 kHz: más estable con jumpers
  Wire.beginTransmission(MPU_ADDR);
  if (Wire.endTransmission() != 0) return false;
  mpuWrite(0x6B, 0x00);  // despertar
  delay(50);
  mpuWrite(0x1A, 0x03);  // filtro pasa bajas ~44 Hz
  mpuWrite(0x1B, 0x00);  // giroscopio ±250 °/s  (131 LSB por °/s)
  mpuWrite(0x1C, 0x00);  // acelerómetro ±2 g     (16384 LSB por g)
  // Calibración del giroscopio: 1 s quieto
  int16_t ax, ay, az, gx, gy, gz; long sx = 0, sy = 0, sz = 0; int n = 0;
  for (int i = 0; i < 100; i++) {
    if (mpuRead(&ax, &ay, &az, &gx, &gy, &gz)) { sx += gx; sy += gy; sz += gz; n++;
      lpAx = ax / 16384.0; lpAy = ay / 16384.0; lpAz = az / 16384.0; }
    delay(10);
  }
  if (n) { biasGx = sx / (float)n; biasGy = sy / (float)n; biasGz = sz / (float)n; }
  return n > 50;
}
// Devuelve true si esta muestra cuenta como movimiento
bool detectarMovimiento() {
  int16_t ax, ay, az, gx, gy, gz;
  if (!mpuRead(&ax, &ay, &az, &gx, &gy, &gz)) return false;
  float fx = ax / 16384.0, fy = ay / 16384.0, fz = az / 16384.0;
  float wx = (gx - biasGx) / 131.0, wy = (gy - biasGy) / 131.0, wz = (gz - biasGz) / 131.0;
  float giro = sqrtf(wx * wx + wy * wy + wz * wz);
  float dx = fx - lpAx, dy = fy - lpAy, dz = fz - lpAz;
  float dAcc = sqrtf(dx * dx + dy * dy + dz * dz);
  // La referencia sigue lentamente a la gravedad (así un cambio de inclinación cuenta una vez, no para siempre)
  const float a = 0.02;
  lpAx += a * (fx - lpAx); lpAy += a * (fy - lpAy); lpAz += a * (fz - lpAz);
  dbgGiro = max(dbgGiro, giro); dbgAcc = max(dbgAcc, dAcc);
  bool arriba = (giro > UMBRAL_GIRO_DPS) || (dAcc > UMBRAL_ACC_G);
  seguidas = arriba ? seguidas + 1 : 0;
  return seguidas >= MUESTRAS_SEGUIDAS;
}

// ---------------------------------------------------------------- Batería
int bateriaPct() {
  if (BAT_PIN < 0) return -1;
  uint32_t mv = 0;
  for (int i = 0; i < 16; i++) mv += analogReadMilliVolts(BAT_PIN);
  float v = (mv / 16.0) * BAT_DIVISOR / 1000.0;
  // Curva aproximada de LiPo 1S (reposo)
  const float V[] = {3.30, 3.60, 3.70, 3.75, 3.80, 3.87, 3.95, 4.05, 4.20};
  const int   P[] = {   0,   10,   20,   30,   40,   55,   70,   85,  100};
  if (v <= V[0]) return 0;
  for (int i = 1; i < 9; i++) if (v <= V[i]) return P[i-1] + (int)((v - V[i-1]) / (V[i] - V[i-1]) * (P[i] - P[i-1]));
  return 100;
}

// ---------------------------------------------------------------- MQTT
void topic(char* out, size_t n, const char* sub) { snprintf(out, n, "%s/%s", baseTopic, sub); }

void publicarEstado() {
  if (!mqtt.connected()) return;
  long inactivo = huboActividad ? (long)((millis() - ultimaActividadMs) / 1000) : -1;
  time_t ahora = time(nullptr);
  char json[320];
  snprintf(json, sizeof(json),
    "{\"id\":\"%s\",\"obj\":\"%s\",\"fw\":\"%s\",\"bat\":%d,\"rssi\":%d,\"inactivoSeg\":%ld,"
    "\"huboActividad\":%s,\"umbralMin\":%lu,\"alerta\":%s,\"sensor\":%s,\"t\":%ld}",
    deviceId, OBJETO, FW_VERSION, bateriaPct(), (int)WiFi.RSSI(), inactivo,
    huboActividad ? "true" : "false", (unsigned long)umbralMin, alertaEnviada ? "true" : "false",
    hayMPU ? "true" : "false", (long)(ahora > 1700000000 ? ahora : 0));
  char t[64]; topic(t, sizeof(t), "estado");
  mqtt.publish(t, json, true);
  ultimoEstadoMs = millis();
}

void publicarActividad() {
  if (!mqtt.connected()) return;
  time_t ahora = time(nullptr);
  char json[96];
  snprintf(json, sizeof(json), "{\"obj\":\"%s\",\"intensidad\":\"leve\",\"t\":%ld}", OBJETO, (long)(ahora > 1700000000 ? ahora : 0));
  char t[64]; topic(t, sizeof(t), "actividad");
  mqtt.publish(t, json);
  ultimaPubActividadMs = millis();
}

void banner() {
  Serial.println();
  Serial.println("==========================================");
  Serial.printf ("  DistanciaCero · código para la app: %s\n", deviceId);
  Serial.printf ("  Objeto: %s · umbral: %lu min · MPU6050: %s\n", OBJETO, (unsigned long)umbralMin, hayMPU ? "OK" : "NO ENCONTRADO");
  Serial.println("==========================================");
}

// Lee un número después de "clave": en un JSON sencillo
long jsonNumero(const char* s, const char* clave, long porDefecto) {
  char k[24]; snprintf(k, sizeof(k), "\"%s\"", clave);
  const char* p = strstr(s, k); if (!p) return porDefecto;
  p = strchr(p + strlen(k), ':'); if (!p) return porDefecto;
  return strtol(p + 1, nullptr, 10);
}

void alRecibir(char* t, byte* payload, unsigned int len) {
  char msg[200]; len = min(len, (unsigned int)sizeof(msg) - 1);
  memcpy(msg, payload, len); msg[len] = 0;
  Serial.printf("<- orden: %s\n", msg);
  if (strstr(msg, "\"umbral\"")) {
    long m = jsonNumero(msg, "min", umbralMin);
    if (m >= 1 && m <= 24 * 60) {
      umbralMin = m; prefs.putUInt("umbral", umbralMin);
      alertaEnviada = false;
      Serial.printf("   umbral = %lu min\n", (unsigned long)umbralMin);
    }
    publicarEstado();
  } else if (strstr(msg, "\"reiniciar\"")) {
    char tc[64]; topic(tc, sizeof(tc), "conexion");
    mqtt.publish(tc, "{\"estado\":\"offline\"}", true);
    delay(300); ESP.restart();
  } else if (strstr(msg, "\"identificar\"")) {
    banner(); publicarEstado();
  }
}

void conectarMqtt() {
  if (mqtt.connected() || WiFi.status() != WL_CONNECTED) return;
  if (millis() - ultimoIntentoMqttMs < 5000) return;
  ultimoIntentoMqttMs = millis();
  char clientId[32]; snprintf(clientId, sizeof(clientId), "%s-%04X", deviceId, (unsigned)(esp_random() & 0xFFFF));
  char tc[64]; topic(tc, sizeof(tc), "conexion");
  Serial.printf("MQTT: conectando a %s… ", MQTT_HOST);
  if (mqtt.connect(clientId, nullptr, nullptr, tc, 0, true, "{\"estado\":\"offline\"}")) {
    Serial.println("listo");
    mqtt.publish(tc, "{\"estado\":\"online\"}", true);
    char tcmd[64]; topic(tcmd, sizeof(tcmd), "cmd");
    mqtt.subscribe(tcmd);
    publicarEstado();
  } else {
    Serial.printf("falló (rc=%d)\n", mqtt.state());
  }
}

// ---------------------------------------------------------------- Alerta push opcional (ntfy.sh)
void enviarNtfy(const char* texto) {
  if (strlen(NTFY_TOPIC) == 0 || WiFi.status() != WL_CONNECTED) return;
  WiFiClientSecure tls; tls.setInsecure();      // prototipo: sin validar certificado
  HTTPClient http;
  String url = String("https://ntfy.sh/") + NTFY_TOPIC;
  if (http.begin(tls, url)) {
    http.addHeader("Title", "DistanciaCero");
    http.addHeader("Priority", "high");
    http.addHeader("Tags", "warning");
    int code = http.POST((uint8_t*)texto, strlen(texto));
    Serial.printf("ntfy: %d\n", code);
    http.end();
  }
}

// ---------------------------------------------------------------- setup / loop
void setup() {
  Serial.begin(115200);
  led(0, 0, 0);
  delay(800);

  WiFi.mode(WIFI_STA);
  uint64_t mac = ESP.getEfuseMac();   // MAC de fábrica: el código nunca cambia
  snprintf(deviceId, sizeof(deviceId), "DC-%02X%02X", (unsigned)((mac >> 32) & 0xFF), (unsigned)((mac >> 40) & 0xFF));
  snprintf(baseTopic, sizeof(baseTopic), "distanciacero/%s", deviceId);

  prefs.begin("dc", false);
  umbralMin = prefs.getUInt("umbral", UMBRAL_MIN_DEFECTO);

  if (BAT_PIN >= 0) analogReadResolution(12);
  hayMPU = mpuInit();
  banner();
  if (!hayMPU) Serial.println("Revisa el cableado del MPU6050 (SDA/SCL/3V3/GND).");

  // Diagnóstico: redes WiFi que la ESP32 alcanza a ver (solo 2.4 GHz)
  Serial.println("Redes WiFi visibles:");
  int nRedes = WiFi.scanNetworks();
  bool vistaMiRed = false;
  for (int i = 0; i < nRedes; i++) {
    Serial.printf("  %-32s  %4d dBm  %s\n", WiFi.SSID(i).c_str(), WiFi.RSSI(i),
                  WiFi.encryptionType(i) == WIFI_AUTH_WPA2_ENTERPRISE ? "(empresarial: NO compatible)" : "");
    if (WiFi.SSID(i) == WIFI_SSID) vistaMiRed = true;
  }
  if (!vistaMiRed) Serial.printf("!! No veo la red \"%s\": revisa el nombre exacto o que sea de 2.4 GHz\n", WIFI_SSID);
  WiFi.scanDelete();

  WiFi.onEvent([](WiFiEvent_t e, WiFiEventInfo_t info) {
    Serial.printf("WiFi: desconectado, razón %d\n", info.wifi_sta_disconnected.reason);
  }, ARDUINO_EVENT_WIFI_STA_DISCONNECTED);
  WiFi.setSleep(false);                // mientras probamos; luego lo regresas a true
  WiFi.setAutoReconnect(true);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  WiFi.setTxPower(WIFI_POWER_8_5dBm);  // DESPUÉS de begin(), si no a veces no se aplica
  // configTime() se llama hasta que hay WiFi (en loop). Llamarlo antes provoca el
  // error "Required to lock TCPIP core functionality" en el paquete esp32 3.x.

  mqtt.setServer(MQTT_HOST, MQTT_PORT);
  mqtt.setCallback(alRecibir);
  mqtt.setBufferSize(512);
  mqtt.setKeepAlive(30);
  mqtt.setSocketTimeout(5);
}

void loop() {
  static uint32_t ultimoWifiMs = 0;
  static bool horaConfigurada = false;
  static bool wifiAvisado = false;
  if (WiFi.status() == WL_CONNECTED) {
    if (!wifiAvisado) {
      wifiAvisado = true;
      Serial.printf("WiFi: conectado a %s · IP %s · señal %d dBm\n", WIFI_SSID, WiFi.localIP().toString().c_str(), (int)WiFi.RSSI());
    }
    if (!horaConfigurada) {
      configTime(-6 * 3600, 0, "pool.ntp.org", "time.google.com");  // Centro de México
      horaConfigurada = true;
    }
  } else if (millis() - ultimoWifiMs > 20000) {
    ultimoWifiMs = millis();
    wifiAvisado = false;
    wl_status_t st = WiFi.status();
    Serial.printf("WiFi: sin conexión a \"%s\" (%s)\n", WIFI_SSID,
      st == WL_NO_SSID_AVAIL ? "no encuentro la red" :
      st == WL_CONNECT_FAILED ? "contraseña incorrecta o red rechazada" :
      st == WL_DISCONNECTED ? "intentando conectar" : "otro estado");
    WiFi.disconnect();
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    WiFi.setTxPower(WIFI_POWER_8_5dBm);
  }
  conectarMqtt();
  mqtt.loop();

  // Lectura del sensor a 50 Hz
  if (hayMPU && millis() - ultimaLecturaMs >= 20) {
    ultimaLecturaMs = millis();
    if (detectarMovimiento()) {
      bool nuevoEpisodio = !huboActividad || (millis() - ultimaActividadMs > 60000);
      huboActividad = true;
      ultimaActividadMs = millis();
      if (alertaEnviada) { alertaEnviada = false; Serial.println("Movimiento después de la alerta: todo bien."); }
      if (nuevoEpisodio || millis() - ultimaPubActividadMs > 60000) {
        Serial.println("-> movimiento");
        led(12, 12, 12); delay(40); led(0, 0, 0);
        publicarActividad();
        publicarEstado();
      }
    }
  }

  if (DEBUG_MOV && millis() - ultimoDebugMs > 500) {
    ultimoDebugMs = millis();
    Serial.printf("giro max %.2f °/s (umbral %.1f) · acc max %.3f g (umbral %.3f)\n", dbgGiro, UMBRAL_GIRO_DPS, dbgAcc, UMBRAL_ACC_G);
    dbgGiro = 0; dbgAcc = 0;
  }

  // Alerta del propio dispositivo
  if (huboActividad && !alertaEnviada && millis() - ultimaActividadMs >= umbralMin * 60000UL) {
    alertaEnviada = true;
    Serial.println("!! Sin actividad: se cumplió el umbral");
    publicarEstado();
    char texto[120];
    snprintf(texto, sizeof(texto), "No detectamos actividad en el %s desde hace %lu min.", OBJETO, (unsigned long)umbralMin);
    enviarNtfy(texto);
  }

  if (millis() - ultimoEstadoMs > 30000) publicarEstado();
  ledEstado();
}
