# Actividad 3 — Propiedad Intelectual, Marca y Vigilancia Tecnológica

**Tema:** DistanciaCero — El Seguro que se Olvida que Existe
**Fecha:** 09/09/2026
**Blueprint:** Creación de valor
**DVF:** 🟢 Factible

---

## Objetivo de la actividad

Esta semana tocaba responder la pregunta que sigue después de encontrar una oportunidad deseable: **¿me la puedo apropiar?** Es decir, ¿alguien ya registró lo que quiero construir, puedo registrar mi propia marca, y qué tan libre está el terreno tecnológico donde voy a operar.

La actividad avanza en tres frentes articulados: **naming y decisión de marca** (comparar finalistas y elegir uno con criterio estratégico), **auditoría digital** (verificar que el nombre elegido sea viable en dominios, SEO y redes) y **vigilancia tecnológica** (buscar patentes existentes que puedan bloquear o afectar el proyecto, e interpretar sus reclamos).

Documento aquí todo el proceso que seguimos con el equipo para el proyecto **"El Seguro que se Olvida que Existe"** — el sistema digital-físico de tranquilidad a distancia para hijos con un padre o madre mayor que vive solo(a).

---

## Contexto del producto

- **Problema:** hijos e hijas de 35–55 años en México con un padre/madre de 65+ que vive solo y lejos, viviendo con ansiedad y culpa constante.
- **Mecanismo:** artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con microcontrolador tipo ESP32 + sensor de movimiento/presencia (acelerómetro o PIR), con conectividad celular/LoRa propia — sin depender del WiFi del adulto mayor.
- **IA:** un modelo que corre en la nube (no en el dispositivo) aprende el patrón individual de rutina de cada usuario y detecta cuando esa rutina se rompe — no la caída en sí, sino la desviación del comportamiento esperado.
- **Personalidad de marca:** confiable, discreta, cálida, tecnológica pero nunca clínica.

---

## Investigación con IA

Al igual que en la actividad anterior, usé distintos "roles" de IA encadenados: uno para generar y evaluar opciones de naming, otro para auditar la viabilidad digital de esas opciones, y otros dos para el taller de vigilancia tecnológica (términos de búsqueda de patentes e interpretación de reclamos).

### Prompt 1 — Generación de nombres

#### IA utilizada

**IA:** Perplexity — rol de experto senior en branding, naming y estrategia de marca

#### Prompt

```text
Actúa como un Experto Senior en Branding, Naming y Estrategia de Marca...
Con base en el contexto de negocio (sistema digital-físico de tranquilidad
a distancia para hijos con padres mayores que viven solos), genera 12
propuestas de nombres de marca distribuidas en 4 categorías creativas
(3 nombres por categoría): Evocadores, Compuestos, Inventados/Neologismos,
Disruptivos/Creativos. Para cada nombre: significado y concepto, tono y
personalidad, slogan cortísimo opcional.
```

#### Resultado de la IA

> Se generaron 12 propuestas repartidas en las 4 categorías. De ese universo se seleccionaron dos finalistas para la siguiente ronda de evaluación: **SilencioActivo** (categoría disruptiva/creativa, enfatiza el mecanismo de silencio por excepción) y **DistanciaCero** (categoría compuesta, enfatiza el beneficio emocional de cercanía a pesar de la distancia).

---

### Prompt 2 — Evaluación estratégica de los finalistas

#### IA utilizada

**IA:** Claude (Anthropic) — rol de consultor senior en estrategia de marca

#### Prompt

```text
Actúa como un Consultor Senior en Estrategia de Marca, Branding y
Posicionamiento de Mercado. Evalúa dos opciones finalistas: "SilencioActivo"
y "DistanciaCero" para mi proyecto (sistema digital-físico de tranquilidad
a distancia para hijos con padres mayores que viven solos). Incluye:
análisis individual de fortalezas/debilidades/psicología de cada nombre,
matriz comparativa (memorabilidad, claridad del mensaje, versatilidad,
diferenciación, del 1 al 10), asociación de marca y riesgos, y veredicto
final con recomendación.
```

#### Resultado de la IA

> Se encontró una tensión real entre comunicar el *beneficio* (sentirse cerca aunque estés lejos → gana DistanciaCero) y comunicar el *mecanismo diferenciador* (no molesta, solo avisa por excepción → gana SilencioActivo). La recomendación fue usar **DistanciaCero** como nombre comercial — convierte mejor en el momento emocional de decisión del cliente — y reservar "silencio activo" como pilar de mensaje/storytelling.

| Criterio | SilencioActivo | DistanciaCero |
|---|---|---|
| Memorabilidad y sonoridad | 6.5 | 8.5 |
| Claridad del mensaje | 6 | 8.5 |
| Versatilidad a futuro | 7 | 6 |
| Diferenciación | 9 | 6 |

---

### Prompt 3 — Auditoría digital (dominios, SEO, redes)

#### IA utilizada

**IA:** Claude (Anthropic) — rol de especialista en protección de marca, SEO y auditoría de activos digitales

#### Prompt

```text
Actúa como un Especialista en Protección de Marca, SEO y Auditoría de
Activos Digitales. Realiza un diagnóstico de viabilidad digital para
"SilencioActivo" y "DistanciaCero" en 5 pilares: intención de búsqueda
y viabilidad SEO, facilidad fonética y "radio test", huella digital y
presencia en redes, riesgos de posicionamiento (significados negativos
o asociaciones no deseadas), y matriz de riesgo operativo con veredicto
digital final.
```

#### Resultado de la IA

> **SilencioActivo** choca con algo serio: `silencioactivo.com` ya está en uso activo por una empresa de musicoterapia en España, y "silencio activo" es además un término clínico ya establecido en psicoterapia y mindfulness — SEO cuesta arriba desde el día uno y riesgo de confusión de categoría.
>
> **DistanciaCero** tiene el `.com` parkeado en venta (no en uso activo) y colisiona con el handle `@distancia.cero` de una banda de rock argentina en redes — pero es un territorio semántico mucho más disperso y ajeno a nuestra categoría.
>
> **Veredicto del riesgo digital:** SilencioActivo = riesgo alto. DistanciaCero = riesgo medio, con camino más limpio para construir presencia desde cero. Recomendación: `distanciacero.mx` + handle con sufijo distintivo en redes, y registrar la marca ante IMPI cuanto antes.

**Decisión:** con branding + auditoría digital apuntando en la misma dirección, el nombre que avanza es **DistanciaCero**.

---

### Prompt 4 — Términos de búsqueda para vigilancia tecnológica

#### IA utilizada

**IA:** Claude (Anthropic) — rol de especialista en vigilancia tecnológica para startups de hardware + software en mercados emergentes

#### Prompt

```text
Actúa como especialista en vigilancia tecnológica para startups de
hardware + software en mercados emergentes. Concepto: sistema
digital-físico que detecta pasivamente la rutina diaria de un adulto
mayor que vive solo (artefacto en objeto cotidiano + ESP32 + sensor de
movimiento/presencia + conectividad celular/LoRa) y notifica al hijo/a
solo cuando la rutina se rompe (IA que aprende el patrón individual,
procesamiento en la nube). Entrega: términos en ES y EN (principales +
sinónimos + combinaciones AND), códigos IPC relevantes (3–5 con
descripción), y secuencia de bases de búsqueda a seguir.
```

#### Resultado de la IA

> Se entregaron 3 combinaciones AND de búsqueda (rutina/sensor pasivo, detección de anomalías + conectividad, objeto cotidiano + sensor + alarma) y 5 códigos IPC/CPC relevantes, dos de ellos con coincidencia casi literal:

| Código | Qué cubre | Por qué importa |
|---|---|---|
| G08B21/0423 ⭐ | Alarma basada en detectar desviación de un patrón esperado de comportamiento/horario | Coincide casi exactamente con nuestro componente de IA |
| G08B21/0461 ⭐ | Sensor integrado en un objeto asociado a la persona pero no portado (silla, bastón, sensor de cama) | Coincide literalmente con nuestro mecanismo físico |
| G08B21/0438 | Grupo general de medios sensores para alarmas de inactividad de adultos mayores | Grupo paraguas — cubrir siempre |
| A61B5/1118 | Medición de nivel de actividad por movimiento corporal | Relevante si el sensor también mide actividad fisiológica |
| G16H40/67 | TIC para gestión/administración remota de recursos de salud | Cubre el backend en la nube + app del familiar |

> **Ruta de búsqueda recomendada:** IMPI/SIGA (México, primero y más barato) → LATIPAT (18 países LATAM) → Lens.org (cobertura global + literatura académica + árbol de citas).

---

### Prompt 5 — Interpretación de reclamos de una patente real

#### IA utilizada

**IA:** Claude (Anthropic) — rol de analista de PI para equipos de ingeniería sin formación legal

#### Prompt

```text
Actúa como analista de PI para equipos de ingeniería sin formación legal.
Analiza la patente MX 351729 B ("Pieza de recubrimiento de suelo para
la detección de caídas", titular Abcd Innovation, Francia, concedida en
México el 25 oct. 2017) frente a nuestro concepto (sensor integrado en
objeto cotidiano + IA de rutina + conectividad celular/LoRa + alerta
por excepción a un familiar a distancia). Responde: qué protege la
patente, qué NO protege, si nuestro concepto cae dentro o fuera, veredicto
(dentro/fuera/zona gris), y recomendación (ignorar/ajustar/asesoría
legal/usar como guía).
```

#### Resultado de la IA

> **Qué protege:** un piso modular hecho de piezas conectadas físicamente entre sí (mediante conectores/tomas en los bordes), cada una con una cuadrícula de sensores de presión, que en conjunto detectan la ubicación y postura de una persona mediante la presión distribuida en el suelo.
>
> **Qué NO protege:** nada relacionado con sensores integrados en objetos cotidianos, conectividad inalámbrica celular/LoRa, aprendizaje de rutina individual por IA, procesamiento en la nube, ni notificación a un familiar a distancia.
>
> **Veredicto: fuera ✅.** Ningún elemento estructural de la patente coincide con nuestra arquitectura. No hay ruta razonable de infracción ni por equivalencia.
>
> **Recomendación:** usar como guía. No bloquea el lanzamiento actual, pero queda archivada como referencia de diseño-alrededor. Antes de una ronda de inversión grande conviene que un agente de patentes revise el expediente completo como buena práctica general, no por riesgo de esta patente en particular.

---

## Conclusión FTO (freedom to operate) de esta semana

| Nivel | Situación encontrada | Acción |
|---|---|---|
| 🟢 Alta | Sin patentes vigentes que cubran nuestro mecanismo específico (objeto cotidiano + IA de rutina + alerta por excepción) | Continuar y documentar — pendiente correr la ruta completa IMPI → LATIPAT → Lens.org con 3–5 patentes más antes de cerrar semana 4 |

**Nombre de marca elegido:** DistanciaCero (con blindaje pendiente vía registro de marca en IMPI, clase 9 y clase 42).

**Pendiente para la siguiente semana:** búsqueda fonética individual en `marcanet.impi.gob.mx`, completar vigilancia tecnológica profunda (3–5 patentes analizadas), y síntesis de las 3 entrevistas de validación.

---

## ¿Qué aprendí?

Esta actividad me hizo ver que la validación de una idea no termina cuando confirmas que hay un problema real y gente dispuesta a pagar — todavía falta confirmar que el terreno está libre para construirla y para apropiarte del nombre con el que la vas a vender.

También aprendí que branding y viabilidad digital no siempre apuntan hacia el mismo lado: el nombre que suena mejor en papel (SilencioActivo) resultó ser el más riesgoso en la práctica por colisiones de dominio y de categoría ya existentes. Sin la auditoría digital, hubiéramos elegido el nombre equivocado solo por sonar más diferenciado.

En vigilancia tecnológica entendí que interpretar una patente no es solo ver si el tema se parece, sino comparar elemento por elemento lo que el reclamo realmente protege contra lo que nuestro producto hace — dos productos pueden vivir en el mismo espacio de problema (detección de caídas) sin pisarse en absoluto a nivel de reivindicación.

---

## Reflexión personal

> Lo que más me quedó de esta actividad fue lo distinto que se siente evaluar una decisión "con gusto" (qué nombre me gusta más) contra evaluarla con evidencia (qué nombre es más seguro registrar y más barato de posicionar). Antes de la auditoría digital yo me hubiera ido por SilencioActivo casi sin dudarlo, porque comunica mejor el mecanismo del producto. Ver que ese mismo nombre ya tiene uso activo en otra categoría y una carga semántica clínica que no nos conviene fue un buen recordatorio de que la intuición de marca necesita verificarse con datos reales antes de comprometerse con un nombre. Lo mismo con la patente: dio tranquilidad ver, punto por punto, que nuestra arquitectura no se parece en nada a la protegida — pero también quedó claro que esto es solo el primer filtro, y que antes de invertir en serio hace falta una revisión más profunda con más patentes y, eventualmente, con un agente de patentes real.

---

### Enlaces

*  [Claude_1](https://claude.ai/share/8d6230c2-8d26-4e3f-8494-94dfd8a93147)
*  [Claude_2](https://www.perplexity.ai/search/1228713b-8bdf-40da-9d99-3ef4f72a041a)
*  [Perplexity](https://www.perplexity.ai/search/7820f1ea-a8dc-46bc-a5dc-156025a9cc32)

### Presentación de nombre

* [Nombre](distanciacero_fto.pdf)

## Estado de la actividad

✅ **Actividad completada**

**Tema:** Propiedad Intelectual, Marca y Vigilancia Tecnológica
**Evidencias:** Prompts + resultados de IA + matriz de evaluación de naming + auditoría digital + códigos IPC + interpretación de reclamos + conclusión FTO