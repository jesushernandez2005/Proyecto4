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
**Primer Prompt(Perplexity):**
Actúa como un Experto Senior en Branding, Naming y Estrategia de Marca con más de 15 años de experiencia creando identidades memorables para startups y marcas globales. Tu objetivo es ayudarme, en mi rol de emprendedor, a conceptualizar y desarrollar nombres comerciales de alto impacto.
1. CONTEXTO DE MI NEGOCIO
¿Qué hace mi negocio / Producto o servicio?: Un sistema digital-físico que le da tranquilidad diaria a los hijos que viven lejos de un padre o madre mayor que vive solo. Un artefacto discreto (integrado en un objeto cotidiano como un bastón, un sillón o una taza) detecta pasivamente la rutina diaria del adulto mayor con conectividad celular/LoRa propia, sin depender de WiFi ni de que él haga nada. Una app guarda silencio total mientras todo esté normal y solo avisa al hijo/a por excepción, cuando algo se sale de lo habitual.
Público objetivo: Hijos e hijas adultos de 35 a 55 años en México, con un padre o madre de 65+ años que vive solo(a) y lejos de ellos. Suelen tener ingresos estables, ya gastan en el bienestar de sus padres (llamadas, remesas, servicios de monitoreo), y viven con ansiedad y culpa constantes por no poder estar presentes físicamente.
Propuesta única de valor / Diferencial: A diferencia de la teleasistencia reactiva que ya existe (botones de pánico, apps de check-in diario que hay que revisar), este producto no exige atención constante ni acción del adulto mayor. Se instala una sola vez, no depende de WiFi doméstico, y desaparece de la vida digital del hijo — solo se hace notar cuando realmente importa. Vende tranquilidad diaria comprobable a distancia, no vigilancia ni alarmas.
Valores y personalidad de la marca: Confiable, discreto, cálido, silenciosamente presente, respetuoso de la dignidad y autonomía del adulto mayor, tecnológico pero humano — no clínico ni institucional.
Industria / Sector: Tecnología para el cuidado familiar / eldertech / bienestar y salud a distancia (hardware conectado + IA + servicios digitales).
2. TAREA A EJECUTAR
Con base en el contexto provisto, genera 12 propuestas de nombres de marca únicos y originales, distribuidos equitativamente en 4 categorías creativas (3 nombres por categoría):
Evocadores (3 nombres): Nombres sugerentes que transmiten la esencia, la emoción o la experiencia de la marca sin describirla literalmente.
Compuestos (3 nombres): Nombres creados mediante la unión inteligente de dos palabras existentes en español o inglés que refieran al valor o actividad del negocio.
Inventados / Neologismos (3 nombres): Palabras totalmente originales, fáciles de pronunciar y recordar, con una sonoridad moderna y atractiva.
Disruptivos / Creativos (3 nombres): Nombres fuera de lo convencional, atrevidos, metafóricos o inesperados que rompan con las normas tradicionales de la industria.
3. FORMATO DE ENTREGA
Para cada uno de los 12 nombres, presenta la información de la siguiente manera:
Nombre de la marca
Tipo de nombre: [Evocador / Compuesto / Inventado / Disruptivo]
Significado y concepto: Breve explicación del porqué del nombre y qué transmite.
Tono y personalidad: ¿Cómo se siente la marca al pronunciarla?
Sugerencia de Slogan cortísimo (opcional): Una frase de 3 a 5 palabras que refuerce el nombre.

```

**Prompt 2 — Evaluación de los 3 finalistas**

```
**Segundo Prompt(claude):**
Actúa como un Consultor Senior en Estrategia de Marca, Branding y Posicionamiento de Mercado. Tu trabajo es asesorarme como emprendedor a tomar la decisión final de naming para mi proyecto, evaluando dos opciones finalistas: "SilencioActivo" y "DistanciaCero".

1. CONTEXTO DE MI NEGOCIO

Producto / Servicio: Un sistema digital-físico (app con IA + artefacto físico conectado) que le da tranquilidad diaria a los hijos que viven lejos de un padre o madre mayor que vive solo. Un artefacto discreto, integrado en un objeto cotidiano (bastón, sillón, taza), detecta pasivamente la rutina diaria del adulto mayor mediante conectividad celular/LoRa propia (sin depender de WiFi ni de que él haga nada). La app guarda silencio total mientras todo esté normal y solo avisa al hijo/a por excepción, cuando algo se sale de lo habitual.
Público objetivo: Hijos e hijas adultos de 35 a 55 años en México, con un padre o madre de 65+ años que vive solo(a) y lejos de ellos. Ya gastan en el bienestar de sus padres (llamadas, remesas, servicios de monitoreo como Estoy Bien o Care 60+) y viven con ansiedad y culpa constantes por no poder estar presentes físicamente.
Propuesta de valor y personalidad: El beneficio principal es la tranquilidad diaria comprobable a distancia, sin necesidad de preguntar, llamar ni sentir culpa. A diferencia de la teleasistencia reactiva (botones de pánico, apps que hay que revisar), este producto se instala una sola vez y desaparece de la vida digital del hijo — solo se hace notar cuando realmente importa. La personalidad de marca es confiable, discreta, cálida y silenciosamente presente; tecnológica pero humana, nunca clínica ni institucional.

2. TAREA A EJECUTAR

Realiza una evaluación comparativa rigurosa y crítica de ambos nombres para ayudarme a elegir el ganador definitivo. Tu análisis debe incluir:

Análisis Individual:
SilencioActivo: Fortalezas, debilidades, psicología del nombre y qué transmite a nivel perceptual.
DistanciaCero: Fortalezas, debilidades, psicología del nombre y qué transmite a nivel perceptual.
Criterios de Evaluación (Matriz Comparativa): Evalúa ambos nombres del 1 al 10 en:
Memorabilidad y Sonoridad (Fácil de recordar y pronunciar).
Claridad del Mensaje (Relación con el beneficio del producto/servicio).
Versatilidad para el futuro (Si la marca se expande a otros productos).
Diferenciación (Impacto frente a competidores).
Asociación de Marca y Aplicabilidad:
Sugiere cómo se verían en un slogan o tagline.
Identifica posibles riesgos o malentendidos de cada opción.
Veredicto y Recomendación Final:
Da tu recomendación clara de cuál deberías elegir según el tipo de cliente o estrategia de posicionamiento que convenga seguir.

```

**Prompt 3 — Verificación digital de pertinencia**

```
Tercer Prompt(claude):
Actúa como un Especialista en Protección de Marca, SEO y Auditoría de Activos Digitales. Tu objetivo es ayudarme, en mi rol de emprendedor, a realizar una verificación digital de pertinencia, disponibilidad y viabilidad operativa para mis dos nombres finalistas: "SilencioActivo" y "DistanciaCero".

1. CONTEXTO DE MI NEGOCIO

Industria / Sector: Eldertech / tecnología para el cuidado familiar a distancia — hardware conectado (sensores, ESP32, conectividad celular/LoRa) + app con IA + servicio digital.
Mercado Objetivo Principal: México, con posibilidad de expansión a Hispanoamérica.
Producto o Servicio Principal: Un sistema digital-físico que le da tranquilidad diaria a los hijos que viven lejos de un padre o madre mayor que vive solo. Un artefacto discreto, integrado en un objeto cotidiano (bastón, sillón, taza), detecta pasivamente la rutina diaria del adulto mayor sin depender de WiFi ni de que él haga nada. La app guarda silencio total mientras todo esté normal y solo avisa al hijo/a por excepción, cuando algo se sale de lo habitual.

2. TAREA A EJECUTAR

Realiza un diagnóstico de viabilidad digital analizando los siguientes 5 pilares para ambos nombres:

Intención de Búsqueda y Viabilidad SEO:
¿Existen palabras clave muy competidas que bloqueen el posicionamiento orgánico de estos nombres?
¿Qué tipo de contenido suele aparecer si un usuario busca literalmente "Silencio Activo" o "Distancia Cero" en Google?
Facilidad Fonética y "Radio Test":
Evalúa el riesgo de confusión al dictar el nombre oralmente (errores comunes de ortografía, tildes, uso de la 'C/S/Z' o palabras pegadas).
Determina la idoneidad de las variantes de dominio web sugeridas (ej. .com, .mx, .io, .app).
Huella Digital y Presencia en Redes:
Analiza la viabilidad de nombres de usuario (handles) para redes sociales principales (Instagram, LinkedIn, X, TikTok, YouTube).
Identificación de Riesgos de Posicionamiento:
¿Existen significados negativos, asociaciones no deseadas o usos comunes en el lenguaje coloquial que puedan desviar la atención del producto?
Matriz de Riesgo Operativo y Veredicto Digital:
Asigna un nivel de riesgo digital (Bajo, Medio, Alto) para cada opción.
Concluye cuál de las dos marcas presenta un camino más limpio y eficiente para construir presencia digital desde cero.

3. FORMATO DE ENTREGA

Presenta la respuesta estructurada en puntos clave y concluye con una tabla comparativa de viabilidad digital que resuma los hallazgos para rápida lectura.
```

### 6.2 Prompts del taller de vigilancia tecnológica (plantilla completada)

**Prompt 1 — Términos de búsqueda (Claude)**

```
Actúa como especialista en vigilancia tecnológica para startups de hardware + software en mercados emergentes.

Concepto: "El Seguro que se Olvida que Existe" (nombre comercial final aún por definir — finalistas: "SilencioActivo" / "DistanciaCero") — un sistema digital-físico que detecta pasivamente la rutina diaria de un adulto mayor que vive solo, y notifica a un hijo/a que vive lejos solo cuando algo se sale de lo habitual, sin necesidad de que el adulto mayor haga ninguna acción intencional ni de que exista WiFi en su hogar.

Mecanismo técnico: Un artefacto integrado en un objeto de uso cotidiano (bastón, sillón, taza u otro objeto que la persona ya toca por inercia), con un microcontrolador tipo ESP32 y un sensor de movimiento/presencia (acelerómetro, PIR o similar) que registra eventos de actividad a lo largo del día. La transmisión de datos se hace vía conectividad celular de bajo consumo o LoRa, integrada directamente en el dispositivo, para no depender de la configuración de WiFi doméstico.

Componente de IA: Un modelo que aprende el patrón de rutina individual de cada usuario (horario en que se levanta, tiempo que pasa en ciertas zonas de la casa, momentos habituales de salida) a partir de los eventos de movimiento/presencia recibidos, y detecta desviaciones significativas respecto a ese patrón aprendido — no la ausencia de movimiento en sí, sino la ruptura de la rutina esperada. El procesamiento de aprendizaje y detección de anomalías corre en el backend/nube (no en el dispositivo), que consume los eventos enviados por el artefacto y genera la alerta por excepción hacia la app del hijo/a.

Entrega:

Términos en ES y EN (principales + sinónimos + combinaciones AND)
Códigos IPC relevantes (3–5 con descripción)
Secuencia: IMPI → LATIPAT → Lens.org
```

**Prompt 2 — Interpretar reclamos (Claude)**

```
Actúa como analista de PI para equipos de ingeniería sin formación legal.

Concepto: Un sistema digital-físico que detecta pasivamente la rutina diaria de un adulto mayor que vive solo, mediante un artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con sensor de movimiento/presencia y conectividad celular/LoRa propia (sin depender de WiFi). Un modelo de IA que corre en la nube aprende el patrón de rutina individual de cada usuario y detecta desviaciones significativas respecto a ese patrón — no la caída en sí, sino la ruptura de la rutina esperada — notificando por excepción a un familiar a distancia solo cuando algo cambia, sin requerir ninguna acción intencional del adulto mayor.

Patente:

Título: "Pieza de recubrimiento de suelo para la detección de caídas" (en inglés: "Floor covering item for detecting droppages")
Número: MX 351729 B (solicitud MX/a/2014/012654)
Titular: Abcd Innovation (empresa francesa; inventor: Claude Desgorces)
Estado en MX: Otorgada — patente vigente registrada ante el IMPI (concesión el 25 de octubre de 2017), validación mexicana de una solicitud PCT con prioridad francesa
Año: Prioridad 19 abr. 2012, solicitud presentada 8 abr. 2013, otorgada el 25 oct. 2017

Reclamos (nota de transparencia: el texto público de Google Patents/IMPI para este registro solo expone el resumen de la invención, equivalente en contenido a la reivindicación independiente 1; las reivindicaciones dependientes 2–5 no están disponibles en texto extraíble en las fuentes consultadas — para el texto literal completo habría que descargar el expediente en PDF directamente del IMPI o de Espacenet):

(Independiente, según el resumen oficial) Una pieza de recubrimiento para la detección de caídas que comprende: un cuerpo delimitado por bordes; una pluralidad de sensores de presión distribuidos según una geometría seleccionada dentro del cuerpo; una unidad de procesamiento conectada a al menos algunos de los sensores de presión, dispuesta para recolectar la información de estado de dichos sensores; al menos una primera toma y una segunda toma, cada una conectada a la unidad de procesamiento, dispuestas cerca de un borde y diseñadas para poder conectarse a la toma de otra pieza similar; donde la unidad de procesamiento está dispuesta para relacionar la información de localización obtenida de dicha información de estado con la información de ubicación de la pieza, recibir información de otra primera pieza similar a través de la primera toma, y emitir la información relacionada y/o recibida hacia otra segunda pieza similar a través de la segunda toma.
2–5. (No disponibles en texto extraíble en las fuentes consultadas — reivindicaciones dependientes que, según la clasificación IPC de la patente, cubren variantes de la geometría de sensores, el tipo de conector entre piezas, y el modo de transmisión entre piezas contiguas.)

Responde:

Qué protege (sin jerga legal)
Qué NO protege
¿Nuestro concepto cae dentro o fuera?
Veredicto: dentro ⚠️ / fuera ✅ / zona gris ❌
Recomendación: ignorar / ajustar / asesoría legal / usar como guía
```

**Prompt 3 — Actores tecnológicos en LATAM (Perplexity)**

```
Actúa como analista de inteligencia tecnológica en LATAM. Busca primero en MX y LATAM, luego global.

Concepto: Un sistema digital-físico que le da tranquilidad diaria a los hijos que viven lejos de un padre o madre mayor que vive solo. Un artefacto discreto integrado en un objeto cotidiano (bastón, sillón, taza) detecta pasivamente la rutina diaria del adulto mayor mediante conectividad celular/LoRa propia (sin depender de WiFi ni de que él haga nada). Una app guarda silencio total mientras todo esté normal y solo avisa al hijo/a por excepción, cuando algo se sale de lo habitual. Sector: Eldertech / tecnología de cuidado familiar a distancia — hardware conectado (IoT, sensores) + IA + software como servicio.

Entrega:

Actores en México: nombre, tipo, qué hace, nivel de actividad
Actores en LATAM (BR, CO, AR, CL, PE)
Actores globales con presencia en LATAM
2–3 papers relevantes últimos 3 años
Conclusión: densidad MX/LATAM + implicación para el equipo
```