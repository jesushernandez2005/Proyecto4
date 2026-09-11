# Semana 3 — Propiedad Intelectual, Marca y Vigilancia Tecnológica

**Blueprint:** Creación de valor · **DVF:** 🟢 Factible

Esta semana tocaba responder la pregunta que sigue después de encontrar una oportunidad deseable: ¿me la puedo apropiar? Osea, ¿alguien ya registró lo que quiero construir, puedo registrar mi propia marca, y qué tan libre está el terreno tecnológico donde voy a operar. Documento aquí todo el proceso que seguimos con el equipo para el proyecto **"El Seguro que se Olvida que Existe"** — el sistema digital-físico de tranquilidad a distancia para hijos con un padre o madre mayor que vive solo(a).

---

## 1. Contexto del producto

- **Problema:** hijos e hijas de 35–55 años en México con un padre/madre de 65+ que vive solo y lejos, viviendo con ansiedad y culpa constante.
- **Mecanismo:** artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con microcontrolador tipo ESP32 + sensor de movimiento/presencia (acelerómetro o PIR), con conectividad celular/LoRa propia — sin depender del WiFi del adulto mayor.
- **IA:** un modelo que corre en la nube (no en el dispositivo) aprende el patrón individual de rutina de cada usuario y detecta cuando esa rutina se rompe — no la caída en sí, sino la desviación del comportamiento esperado.
- **Personalidad de marca:** confiable, discreta, cálida, tecnológica pero nunca clínica.

---

## 2. Naming: SilencioActivo vs. DistanciaCero

Usamos tres prompts encadenados con Claude para llegar del nombre a la decisión final.

### Prompt 1 — Evaluación estratégica de marca

Le pedí a Claude que actuara como consultor senior de branding y comparara los dos finalistas en memorabilidad, claridad del mensaje, versatilidad y diferenciación.

**Hallazgo clave:** hay una tensión real entre comunicar el *beneficio* (sentirse cerca aunque estés lejos → gana DistanciaCero) y comunicar el *mecanismo diferenciador* (no molesta, solo avisa por excepción → gana SilencioActivo). La recomendación fue usar **DistanciaCero** como nombre comercial (convierte mejor en el momento emocional de decisión del cliente) y reservar el concepto de "silencio activo" como pilar de mensaje/storytelling.

| Criterio | SilencioActivo | DistanciaCero |
|---|---|---|
| Memorabilidad y sonoridad | 6.5 | 8.5 |
| Claridad del mensaje | 6 | 8.5 |
| Versatilidad a futuro | 7 | 6 |
| Diferenciación | 9 | 6 |

### Prompt 2 — Auditoría digital (dominios, SEO, redes)

Aquí la cosa cambió de tono. Búsqueda real, no solo opinión de marca:

- **SilencioActivo** choca con algo serio: `silencioactivo.com` ya está en uso activo por una empresa de musicoterapia en España, y "silencio activo" es además un término clínico ya establecido en psicoterapia y mindfulness. Eso significa SEO cuesta arriba desde el día uno y riesgo de confusión de categoría (bienestar emocional vs. nuestro producto).
- **DistanciaCero** tiene el `.com` parkeado en venta (no en uso activo) y colisiona con el handle `@distancia.cero` de una banda de rock argentina en Instagram/TikTok/Spotify — pero es un territorio semántico mucho más disperso y ajeno a nuestra categoría.

**Veredicto del riesgo digital:** SilencioActivo = riesgo alto. DistanciaCero = riesgo medio, con camino más limpio para construir presencia desde cero (recomendación: `distanciacero.mx` + handle con sufijo distintivo en redes, y registrar la marca ante IMPI cuanto antes para blindar el nombre).

### Decisión

Con branding + auditoría digital apuntando en la misma dirección, el nombre que avanza es **DistanciaCero**.

---

## 3. Vigilancia tecnológica

### Prompt 3 — Términos, códigos IPC y ruta de búsqueda

Antes de tocar cualquier base de patentes, le pedí a Claude que armara el kit de búsqueda: términos ES/EN con sinónimos, combinaciones AND, y códigos IPC relevantes.

**Combinaciones AND que vamos a usar en las bases:**

```
("elderly" OR "senior" OR "aging in place") AND ("passive sensor" OR "non-wearable")
AND ("routine" OR "pattern of behaviour" OR "baseline activity")

("anomaly detection" OR "deviation from expected pattern") AND ("elderly monitoring")
AND ("cellular" OR "LoRa" OR "LPWAN" OR "NB-IoT")

("walking stick" OR "cane" OR "chair" OR "mug") AND ("sensor" OR "accelerometer" OR "PIR")
AND ("alarm" OR "alert" OR "notification")
```

**Códigos IPC/CPC más relevantes** (verificados contra clasificaciones reales de patentes existentes en este espacio):

| Código | Qué cubre | Por qué importa |
|---|---|---|
| G08B21/0423 ⭐ | Alarma basada en detectar desviación de un patrón esperado de comportamiento/horario | Coincide casi exactamente con nuestro componente de IA |
| G08B21/0461 ⭐ | Sensor integrado en un objeto asociado a la persona pero no portado (silla, bastón, sensor de cama) | Coincide literalmente con nuestro mecanismo físico |
| G08B21/0438 | Grupo general de medios sensores para alarmas de inactividad de adultos mayores | Grupo paraguas — cubrir siempre |
| A61B5/1118 | Medición de nivel de actividad por movimiento corporal | Relevante si el sensor también mide actividad fisiológica |
| G16H40/67 | TIC para gestión/administración remota de recursos de salud | Cubre el backend en la nube + app del familiar |

**Ruta de búsqueda:** IMPI/SIGA (México, primero y más barato) → LATIPAT (18 países LATAM, para nuestra expansión regional) → Lens.org (cobertura global + literatura académica + árbol de citas, para no gastar en abogado de PI antes de saber si ya hay antecedente internacional).

---

## 4. Interpretación de reivindicaciones: MX 351729 B

Como ejercicio del Paso 6 (interpretar reclamos con Claude), analizamos una patente real que aparece en el espacio de detección de caídas de adultos mayores:

> **"Pieza de recubrimiento de suelo para la detección de caídas"** — MX 351729 B, titular Abcd Innovation (Francia), concedida en México el 25 oct. 2017, validación mexicana de una solicitud PCT con prioridad francesa de 2012.

**Qué protege:** un piso modular hecho de piezas conectadas físicamente entre sí (mediante conectores/tomas en los bordes), cada una con una cuadrícula de sensores de presión, que en conjunto detectan la ubicación y postura de una persona (de pie o caída) mediante la presión distribuida en el suelo.

**Qué NO protege:** nada relacionado con sensores integrados en objetos cotidianos (bastón/sillón/taza), conectividad inalámbrica celular/LoRa, aprendizaje de rutina individual por IA, procesamiento en la nube, ni notificación a un familiar a distancia — todo eso queda completamente fuera del texto de la reivindicación 1.

**Veredicto: fuera ✅**

Ningún elemento estructural de la patente (piso, conectores físicos entre piezas, sensores de presión en cuadrícula) coincide con nuestra arquitectura (objeto único + radio celular/LoRa + IA de rutina + alerta por excepción). No hay ruta razonable de infracción ni por equivalencia — la distancia técnica es demasiado amplia.

**Recomendación: usar como guía.** No bloquea el lanzamiento actual, pero queda archivada como referencia de diseño-alrededor por si en algún momento exploramos variantes de sensado por piso. Antes de una ronda de inversión grande, de todas formas conviene que un agente de patentes revise el expediente completo como buena práctica general — no por riesgo de esta patente en particular.

---

## 5. Conclusión FTO (freedom to operate) de esta semana

| Nivel | Situación encontrada | Acción |
|---|---|---|
| 🟢 Alta | Sin patentes vigentes que cubran nuestro mecanismo específico (objeto cotidiano + IA de rutina + alerta por excepción) | Continuar y documentar — pendiente correr la ruta completa IMPI → LATIPAT → Lens.org con 3–5 patentes más antes de cerrar semana 4 |

**Nombre de marca elegido:** DistanciaCero (con blindaje pendiente vía registro de marca en IMPI, clase 9 y clase 42).

**Pendiente para semana 4:** búsqueda fonética individual en `marcanet.impi.gob.mx`, completar vigilancia tecnológica profunda (3–5 patentes analizadas), y síntesis de las 3 entrevistas de validación.

---

## 6. Anexo — Prompts utilizados

Registro de los 6 prompts de la actividad: los 3 de naming los armé yo desde cero (Paso 3), y los otros 3 son la plantilla del taller de vigilancia tecnológica (Paso 5) que completé con la información de nuestro proyecto.

### 6.1 Prompts de naming (autogenerados)

**Prompt 1 — Generación de nombres**

```
[pegar aquí el prompt que usé para generar los 12 nombres iniciales
y elegir los 3 finalistas]
```

**Prompt 2 — Evaluación de los 3 finalistas**

```
[pegar aquí el prompt de evaluación comparativa de branding
— el que usé para comparar SilencioActivo vs. DistanciaCero]
```

**Prompt 3 — Verificación digital de pertinencia**

```
[pegar aquí el prompt de auditoría digital
— dominios, SEO, redes sociales]
```

### 6.2 Prompts del taller de vigilancia tecnológica (plantilla completada)

**Prompt 1 — Términos de búsqueda (Claude)**

```
Actúa como especialista en vigilancia tecnológica para startups
de hardware + software en mercados emergentes.

Concepto: [pegar aquí]
Mecanismo técnico: [pegar aquí]
Componente de IA: [pegar aquí]

Entrega:
- Términos en ES y EN (principales + sinónimos + combinaciones AND)
- Códigos IPC relevantes (3–5 con descripción)
- Secuencia: IMPI → LATIPAT → Lens.org
```

**Prompt 2 — Interpretar reclamos (Claude)**

```
Actúa como analista de PI para equipos de ingeniería sin formación legal.

Concepto: [pegar aquí]
Patente: Título / Número / Titular / Estado en MX / Año
Reclamos: [pegar aquí]

Responde:
1. Qué protege (sin jerga legal)
2. Qué NO protege
3. ¿Nuestro concepto cae dentro o fuera?
   Veredicto: dentro ⚠️ / fuera ✅ / zona gris ❌
4. Recomendación: ignorar / ajustar / asesoría legal / usar como guía
```

**Prompt 3 — Actores tecnológicos en LATAM (Perplexity)**

```
Actúa como analista de inteligencia tecnológica en LATAM.
Busca primero en MX y LATAM, luego global.

Concepto: [pegar aquí]

Entrega:
- Actores en México: nombre, tipo, qué hace, nivel de actividad
- Actores en LATAM (BR, CO, AR, CL, PE)
- Actores globales con presencia en LATAM
- 2–3 papers relevantes últimos 3 años
- Conclusión: densidad MX/LATAM + implicación para el equipo
```