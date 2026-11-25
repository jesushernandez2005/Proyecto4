#!/usr/bin/env python3
"""
DistanciaCero — simulador del sensor (para probar la app sin el ESP32).

Publica exactamente los mismos mensajes MQTT que el firmware:
  distanciacero/<ID>/conexion   (retenido)  {"estado":"online"|"offline"}
  distanciacero/<ID>/estado     (retenido)  cada 30 s
  distanciacero/<ID>/actividad              cuando hay movimiento
y escucha órdenes en distanciacero/<ID>/cmd.

Uso:
  pip install paho-mqtt
  python sim_dispositivo.py                 # ID DC-SIM1, broker público de HiveMQ
  python sim_dispositivo.py --id DC-7F3A --auto 20

Teclas (escribe y presiona Enter):
  m  -> simular movimiento (alguien se sienta)
  q  -> salir (publica "offline")
"""
import argparse, json, random, threading, time
import paho.mqtt.client as mqtt

ap = argparse.ArgumentParser()
ap.add_argument("--id", default="DC-SIM1")
ap.add_argument("--host", default="broker.hivemq.com")
ap.add_argument("--port", type=int, default=1883)
ap.add_argument("--obj", default="sillon", choices=["sillon", "baston", "portavasos"])
ap.add_argument("--auto", type=int, default=0, help="segundos entre movimientos automáticos (0 = solo manual)")
ap.add_argument("--bat", type=int, default=85)
a = ap.parse_args()

BASE = f"distanciacero/{a.id.upper()}"
ultima_actividad = None          # time.monotonic() del último movimiento
umbral_min = 240
bat = a.bat

def estado_json():
    inactivo = int(time.monotonic() - ultima_actividad) if ultima_actividad else -1
    return json.dumps({
        "id": a.id.upper(), "obj": a.obj, "fw": "sim-0.1",
        "bat": bat, "rssi": random.randint(-70, -55),
        "inactivoSeg": inactivo, "huboActividad": ultima_actividad is not None,
        "umbralMin": umbral_min,
        "alerta": bool(ultima_actividad and inactivo >= umbral_min * 60),
        "t": int(time.time()),
    })

def on_connect(c, u, flags, rc, props=None):
    print(f"Conectado a {a.host}:{a.port} como {a.id.upper()}")
    c.subscribe(BASE + "/cmd")
    c.publish(BASE + "/conexion", json.dumps({"estado": "online"}), retain=True)
    c.publish(BASE + "/estado", estado_json(), retain=True)

def on_message(c, u, msg):
    global umbral_min
    try:
        d = json.loads(msg.payload)
    except Exception:
        return
    acc = d.get("accion")
    print(f"<- orden recibida: {d}")
    if acc == "umbral" and isinstance(d.get("min"), (int, float)):
        umbral_min = max(1, int(d["min"]))
    elif acc == "reiniciar":
        print("   (simulado) reiniciando…")
    elif acc == "identificar":
        print(f"   *** Soy {a.id.upper()} ***")
    c.publish(BASE + "/estado", estado_json(), retain=True)

def movimiento():
    global ultima_actividad
    ultima_actividad = time.monotonic()
    cli.publish(BASE + "/actividad", json.dumps({"obj": a.obj, "intensidad": "leve", "t": int(time.time())}))
    cli.publish(BASE + "/estado", estado_json(), retain=True)
    print("-> movimiento publicado")

cli = mqtt.Client(mqtt.CallbackAPIVersion.VERSION2, client_id=f"{a.id}-sim-{random.randint(0, 9999)}")
cli.will_set(BASE + "/conexion", json.dumps({"estado": "offline"}), retain=True)
cli.on_connect = on_connect
cli.on_message = on_message
cli.connect(a.host, a.port, keepalive=30)
cli.loop_start()

def latido():
    n = 0
    while True:
        time.sleep(1)
        n += 1
        if a.auto and n % a.auto == 0:
            movimiento()
        if n % 30 == 0:
            cli.publish(BASE + "/estado", estado_json(), retain=True)

threading.Thread(target=latido, daemon=True).start()
print(f"Código para la app: {a.id.upper()}   (m + Enter = movimiento, q + Enter = salir)")
try:
    while True:
        k = input().strip().lower()
        if k == "m":
            movimiento()
        elif k == "q":
            break
except (KeyboardInterrupt, EOFError):
    pass
cli.publish(BASE + "/conexion", json.dumps({"estado": "offline"}), retain=True).wait_for_publish(2)
cli.loop_stop()
cli.disconnect()
