# Anexos del proyecto final: DistanciaCero

[← Volver a la página del proyecto final](index.md)

## A. BOM completo con cotizaciones y proveedores

El detalle, con fórmulas, está en la hoja **BOM_final** del [Excel](DistanciaCero_costos_y_calculos.xlsx).

**Producto (el que usa el modelo financiero, con módulo celular)**

| Componente | Especificación | Precio (MXN) | Estado | Proveedor / referencia |
|---|---|--:|---|---|
| Módulo celular | SIM7600E-H, breakout 4G con antena | 2,100 | Cotizado | 4gltemall.com, US$129 (Actividad 7) |
| Módulo celular (alternativa DFM) | SIM7600E-H en formato LCC | 805 | "Desde" US$49.47, 6 en existencia | LCSC C5338795, consultado 05/11/2026 (Actividad 8) |
| Microcontrolador | ESP32-S3 (8 MB de flash) | 120 | Estimado | LCSC N8R8 "desde" US$3.48 (Actividad 8) |
| Sensores | MPU6050 + PIR HC-SR501 (sin PIR desde la semana 8) | 125 | Estimado | Sin cotizar |
| Batería y carga | 18650 + TP4056 (semana 7); LiPo Jauch LP103450JH 1.92 Ah (semana 8) | 175 | Estimado | Sin cotizar |
| PCB | 2 capas + ensamble | 250 | Estimado | JLCPCB |
| Carcasa | Impresión 3D (PETG, 2 piezas en la semana 8) | 200 | Estimado | Impresión propia |
| **Total** | | **2,970** | 1 de 6 líneas cotizada | |

**Prototipo que se demuestra (WiFi, sin PCB):** ESP32-S3 Super Mini · MPU6050 (GY-521) · LiPo 3.7 V · jumpers · objeto anfitrión. **Los precios pagados están por llenar** en las celdas amarillas de la hoja BOM_final; no se inventó ninguno.

## B. Repositorio, README y bitácoras

- **Repositorio:** [github.com/jesushernandez2005/Proyecto4](https://github.com/jesushernandez2005/Proyecto4) (MkDocs Material, publicado con GitHub Actions).
- **App:** `docs/app/index.html`. Firmware y simulador: [Anexo C](#c-archivos-de-diseno-cad-esquematicos-y-firmware).

**Bitácora de entregables semanales**

| Semana | Entregable | Fecha |
|---|---|---|
| 1 | [Actividad 1: SCAMPER](../actividades/actividad-01.md) | agosto 2026 |
| 2 | [Actividad 2: búsqueda de oportunidad](../actividades/actividad-02.md) | 02/09/2026 |
| 3 | [Actividad 3: PI, marca y vigilancia](../actividades/actividad-03.md) | 09/09/2026 |
| 4 | [Actividad 4: mercado y propuesta de valor](../actividades/actividad-04.md) | 17/09/2026 (entrevistas: 18/09) |
| 5 | [Actividad 5: PDS y arquitectura](../actividades/actividad-05.md) | 24/09/2026 |
| 6 | [Actividad 6: concepto de diseño](../actividades/actividad-06.md) | 01/10/2026 |
| 7 | [Actividad 7: viabilidad técnica y económica](../actividades/actividad-07.md) | 08/10/2026 (act. 22/10) |
| 8 | [Actividad 8: prototipado y DFM](../actividades/actividad-08.md) | 05/11/2026 |
| 9 | [Actividad 9: integración, go-to-market y pitch](../actividades/actividad-09.md) | 06/11/2026 |
| Final | App web, firmware y simulador | 23/11/2026 |
| Final | Landing con los tres productos, Excel y esta página | 24/11/2026 |

**Bitácora de commits (resumen):** 30 commits entre el 21/08/2026 y el 06/11/2026. Los mensajes son genéricos ("actualiza", "aa"), así que no permiten seguir las sesiones de trabajo. **Pendiente:** desde ahora, un commit por sesión con un mensaje que diga qué cambió. Ejemplo: `landing: precio a $3,990 y tres productos`.

## C. Archivos de diseño: CAD, esquemáticos y firmware

| Archivo | Estado |
|---|---|
| [Firmware del sensor (`DistanciaCero_Sensor.ino`, v0.2-supermini)](anexos/firmware/DistanciaCero_Sensor.ino) | Se quitaron la red WiFi y la contraseña reales antes de publicarlo |
| [Simulador del sensor (`sim_dispositivo.py`)](anexos/firmware/sim_dispositivo.py) | Para probar el modo real de la app sin hardware |
| STL de la carcasa (variantes A y B) y planos | Entregados con la [Actividad 8](../actividades/actividad-08.md); **subir los STL al repositorio: PENDIENTE** |
| PCB | No aplica en el prototipo actual (sin PCB) |

**Conexiones (esquema del prototipo):**

| MPU6050 (GY-521) | ESP32-S3 Super Mini |
|---|---|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO 5 |
| SCL | GPIO 6 |
| LiPo 3.7 V | Pads B+ / B− (se carga por USB-C) |

**Cómo reproducir una unidad:**

1. En Arduino IDE instala el paquete **esp32** de Espressif y la biblioteca **PubSubClient**.
2. Elige la placa **ESP32S3 Dev Module** con **USB CDC On Boot: Enabled**.
3. Conecta el MPU6050 como en la tabla y suelda la LiPo a B+ / B−.
4. En el `.ino` escribe tu red WiFi de 2.4 GHz y el `OBJETO` (`sillon`, `baston` o `portavasos`).
5. Sube el código y abre el monitor serie a 115200: ahí aparece el código del sensor (por ejemplo, `DC-7F3A`).
6. Escribe ese código en la [app](https://jesushernandez2005.github.io/Proyecto4/app/) (Ajustes → Conexión al dispositivo).
7. Calibra con `DEBUG_MOV = true` y ajusta `UMBRAL_GIRO_DPS` y `UMBRAL_ACC_G`.

**Protocolo MQTT** (base: `distanciacero/<CÓDIGO>/`)

| Tema | Quién publica | Contenido |
|---|---|---|
| `conexion` (retenido) | ESP32 | `{"estado":"online"}`; si se desconecta, el broker publica `"offline"` |
| `estado` (retenido, cada 30 s) | ESP32 | batería, señal, `inactivoSeg`, `umbralMin`, `alerta` |
| `actividad` | ESP32 | un mensaje al inicio de cada episodio de movimiento |
| `cmd` | App | `umbral`, `reiniciar`, `identificar` |
| `app` | App | respuestas del cuidador, confirmaciones y botones del adulto mayor |

## D. Datos crudos de entrevistas y pruebas de usuario

- [Resultados de validación, semana 3 (PDF)](../actividades/resultados_validacion_semana3.pdf): tres entrevistas con citas.
- Hoja **Entrevistas** del [Excel](DistanciaCero_costos_y_calculos.xlsx).
- [Encuesta en línea del 25/11/2026 (Google Sheets, 47 respuestas)](https://docs.google.com/spreadsheets/d/1eeBf3EU33XPdDGuRwuHZk6xZu-9kGYs7PMgu7OJc9qk/edit?usp=sharing): perfil, producto, precio, landing y app. Resumen en la [sección 18](index.md#encuesta-en-linea-25112026-n-47).
- **Consentimiento de las entrevistas: PENDIENTE documentar** (cómo se pidió y si se puede publicar el nombre de pila).
- Pruebas con usuarios: **0 sesiones** (protocolo y hoja en la [Actividad 9](../actividades/actividad-09.md)).
- [Presentación final (PPTX)](anexos/DistanciaCero_presentacion_final.pptx) y [guion de pitch y demo (PDF)](anexos/DistanciaCero_guion_pitch_y_demo.pdf).

## E. Hojas de cálculo del modelo financiero

[DistanciaCero_costos_y_calculos.xlsx](DistanciaCero_costos_y_calculos.xlsx), con las fórmulas visibles. Azul = dato capturado · negro = fórmula · verde = viene de otra hoja · amarillo = supuesto clave o celda por llenar.

| Hoja | Qué contiene |
|---|---|
| Resumen | Indicadores para la presentación y qué es dato y qué es supuesto |
| **Landing** | Cada número de la landing con su fórmula y su fuente |
| Supuestos | Precio, CAC, comisiones, tasa y costo operativo |
| Costos · BOM_final · DFM | BOM del producto, BOM del prototipo (por llenar) y DFM antes y después |
| Costos_DFS · Desarrollo · IA_costo | Costos D/F/S, ciclos de aprendizaje y costo de la IA |
| Precio_rango | Cost-plus, value-based, piso y techo |
| Economia_unitaria · Flujo_24m · Churn · Sensibilidad | CAC, LTV, payback, flujo a 24 meses, VPN y escenarios |
| Mercado · Entrevistas | TAM, SAM y SOM; las tres entrevistas |

## F. Bibliografía y fuentes de datos

- INEGI, ENIGH 2024 (hogares, ingreso y gasto).
- INEGI, Comunicado 475/19, ENADID 2018 (1.7 millones de personas de 60+ que viven solas).
- Coneval 2020 (hogares unipersonales de 65+), citado en la Actividad 4.
- Giraldo-Rodríguez et al., *Revista de Saúde Pública*, 2013 (piloto de teleasistencia en CDMX).
- Banxico, tipo de cambio FIX del 09/10/2026 ($18.4163 por USD).
- seniorliving.org, precios de Medical Guardian, consultado el 25/08/2026; security.org, planes de Ring, consultado el 28/09/2026.
- LCSC: SIM7600E-H LCC (C5338795) y ESP32-S3-WROOM-1-N8R8, consultado el 05/11/2026.
- Documentación de Espressif sobre el consumo del ESP32-S3, consultada el 06/11/2026.
- IMPI (MARCanet, SIGA), LATIPAT y Lens.org; patente MX 351729 B.
- Ley General de Economía Circular (vigente desde el 20/01/2026); NOM-001-SCFI-2018; Ley Federal de Protección al Consumidor.
- Entrevistas propias de la semana 3 (n = 3).
