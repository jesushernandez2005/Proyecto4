# Actividad 2 — Búsqueda de Oportunidad

**Tema:** Deporte en adultos mayores
**Fecha:** 02/09/2026
**Modo:** Explorador

---

##  Objetivo de la actividad

En esta actividad trabajé utilizando el **Modo Explorador**, cuyo objetivo es identificar una oportunidad de producto a partir de un problema real antes de desarrollar una solución.

Mi tema seleccionado fue **el deporte en adultos mayores**, enfocado hacia un negocio con tres componentes articulados: una aplicación con IA, un artefacto físico inteligente y una página web de venta.

La actividad busca identificar problemas y oportunidades relacionados con este grupo de usuarios, utilizando herramientas de inteligencia artificial para investigar, analizar y encontrar posibles oportunidades de negocio.

El proceso del Modo Explorador comienza buscando problemas reales antes de elegir una solución, y avanza por etapas: investigación de mercado → ruptura de consenso → síntesis de insights → Pain-Gain Map → SCAMPER → remix de ideas → filtro DVN → verificación de deseabilidad → matriz de selección → reporte final.

---

##  Tema seleccionado

### Deporte en adultos mayores

El tema que elegí para explorar es la relación entre **los adultos mayores y la actividad física/deporte**, dentro del contexto mexicano.

Durante la actividad busqué identificar problemas, necesidades y oportunidades que puedan existir para este grupo de personas, y para las personas que los cuidan a distancia.

**Pregunta inicial:**

> ¿Qué problemas relacionados con el deporte y la actividad física enfrentan los adultos mayores en México, y qué oportunidades podrían existir para resolverlos con un producto digital-físico?

---

#  Investigación con IA

Durante la actividad utilicé herramientas de inteligencia artificial para investigar el tema y encontrar posibles oportunidades. Usé distintos "roles" de IA para cada etapa: uno para encontrar información y datos reales, y otros para analizar los resultados desde una perspectiva más creativa, crítica y estratégica.

---

## Prompt 1 — Investigación de mercado (documento base)

###  IA utilizada

**IA:** Investigación de mercado (documento con datos de CONAPO, ENASEM, ENSANUT, IMSS, PROFECO)

###  Prompt

```text
[Investigación de mercado sobre oportunidades de negocio: deporte para
adultos mayores en LATAM — datos demográficos (CONAPO 2025, ENASEM 2024)
y 4 oportunidades identificadas: prevención de caídas, sarcopenia,
osteoartrosis de rodilla y ejercicio para enfermedades crónicas]
```

###  Resultado de la IA

> México tiene 17.1 millones de personas de 60+ años (12.8% de la población) y la ENASEM 2024 estima 32 millones de personas de 50+. Se identificaron 4 oportunidades con problema frecuente, costo observable, evidencia de pago por soluciones imperfectas y mercado LATAM >50,000 personas: (1) prevención de caídas — 47.8% de los mayores de 65 cayó en los últimos 6 meses, fractura hasta $250,000 MXN vs. prevención ~$3,500; (2) sarcopenia — 13–46% de prevalencia, pérdida de ~6% de masa muscular por década desde los 45; (3) osteoartrosis de rodilla — 10–20% de prevalencia en 65–74 años, hasta 80% en mayores de 80; (4) crónicas (diabetes/hipertensión) — 18.3% y 43.3% de prevalencia respectivamente, con baja adherencia al ejercicio prescrito.

---

## Prompt 2 — Ruptura de consenso, problema oculto y segmento ignorado

###  IA utilizada

**IA:** Claude (Anthropic) — rol de innovador especializado en mercados emergentes LATAM

###  Prompt

```text
Actúa como un innovador con experiencia en detectar oportunidades de
negocio que el mercado ignora... Necesito que hagas 3 cosas:
1. ROMPE EL CONSENSO: ¿Cuál de las 4 oportunidades está siendo atacada
de la forma más predecible? ¿Qué ángulo contraintuitivo nadie está viendo?
2. ENCUENTRA EL PROBLEMA OCULTO: ¿cuál es el problema raíz que, si se
resolviera, haría innecesarios 2 o más de estos problemas al mismo tiempo?
3. EL SEGMENTO IGNORADO: ¿hay un grupo con estos problemas al doble de
intensidad que no aparece en los análisis de mercado convencionales?
```

###  Resultado de la IA

> **Consenso roto:** Prevención de caídas es la oportunidad más predecible (sensor + botón de pánico). El ángulo contraintuitivo es que el mejor predictor de una caída no es el déficit físico sino el **miedo a caer** (kinesiofobia) — el producto debería generar confianza y evidencia de progreso, no medir riesgo.
>
> **Problema oculto:** las 4 oportunidades comparten el mismo cuello de botella — la adherencia — y esta falla por **"soledad funcional"**: el ejercicio prescrito no tiene quién lo atestigüe. El negocio real es una plataforma de **"testigo diario"** que cierra un loop social todos los días.
>
> **Segmento ignorado:** los padres y madres mexicanos cuyos hijos migraron o viven lejos — tienen el doble de riesgo en los 4 problemas, no tienen voz digital propia, pero sí un pagador real: el hijo que ya demuestra disposición a pagar por su bienestar (remesas, llamadas diarias de "¿ya comiste?").

---

## Prompt 3 — Síntesis en insights y selección de oportunidad

###  IA utilizada

**IA:** Claude (Anthropic) — rol de estratega de innovación

###  Prompt

```text
Actúa como un estratega de innovación... Necesito que hagas lo siguiente:
1. SINTETIZA EN INSIGHTS cada oportunidad (quién / qué le cuesta / por
qué las soluciones actuales no bastan / dónde está el espacio).
2. ELIGE Y JUSTIFICA cuál insight tiene el espacio de negocio más claro
para app con IA + artefacto físico + canal de venta digital.
3. FORMULA EL INSIGHT GANADOR en 3–4 oraciones sin jerga.
```

###  Resultado de la IA

> Se sintetizaron 5 insights (los 4 originales + el insight transversal del "testigo diario"). Se eligió el insight de **prevención de caídas como puerta de entrada al testigo diario**, porque el usuario es compartido entre las 4 condiciones, el gancho de venta ("evitar $250,000 MXN") es el más fuerte y menos abstracto, y el artefacto (sensores simples en un objeto cotidiano) es viable en 6 meses.
>
> **Insight ganador:** "Millones de adultos mayores mexicanos hacen ejercicio solos en su casa — o dejan de hacerlo — sin que nadie se entere, y eso, no la falta de fuerza o equilibrio, es lo que los lleva a la caída que cuesta $250,000 en el hospital... Un artefacto que registre su movimiento diario en un objeto que ya usan, conectado a una app que le muestra a ese hijo 'hoy sí se movió', convierte el ejercicio prescrito en un ritual social diario en vez de una tarea que se abandona sola."

---

## Prompt 4 — Pain-Gain Map (ampliación y cuestionamiento)

###  IA utilizada

**IA:** Claude (Anthropic) — rol de investigador UX especializado en LATAM

###  Prompt

```text
Actúa como un investigador de experiencia de usuario... Amplía y
cuestiona nuestro Pain-Gain Map (no lo valides).
1. DOLORES QUE NO VIMOS (mínimo 2 adicionales, normalizados o
emocionales, en contexto LATAM)
2. GANANCIAS QUE SUBESTIMAMOS (mínimo 2 de segundo orden)
3. EL CRUCE MÁS PODEROSO entre el mapa ampliado
```

###  Resultado de la IA

> Se agregaron 2 dolores nuevos: la culpa silenciosa de haber normalizado el distanciamiento, y la incomodidad de depender de un vecino o familiar para "checar". Se agregaron 2 ganancias nuevas: recuperar atención mental propia, y tener evidencia compartible con hermanos que reduce conflictos familiares sobre quién cuida más.
>
> **Cruce más poderoso:** El miedo a "la llamada" (dolor de fondo permanente) × Confirmación diaria de que está bien y activo (ganancia). Este cruce gana porque el dolor no es puntual sino un estado constante, así que la solución debe ser un hábito diario que reemplace la incertidumbre — no una alerta reactiva de emergencia.

---

## Prompt 5 — SCAMPER explorado

###  IA utilizada

**IA:** Claude (Anthropic) — rol de facilitador senior de innovación disruptiva

###  Prompt

```text
Actúa como un facilitador senior de innovación disruptiva...
Aplica cada letra de SCAMPER al cruce dolor ⭐ + ganancia ⭐ y genera
2 ideas exploración por letra (Sustituir, Combinar, Adaptar, Modificar
al extremo, Poner en otro uso, Eliminar, Reordenar).
```

###  Resultado de la IA

> Se generaron 14 ideas (2 por letra). Las más relevantes para el concepto final:
> - **E1 (Eliminar):** quitar toda acción intencional del adulto mayor — el artefacto detecta pasivamente desde un objeto que ya toca por inercia.
> - **S2 (Sustituir):** sustituir "detección de movimiento" por "detección de rutina rota" — la IA aprende el patrón personal de cada usuario.
> - **M1 (Modificar al extremo):** llevar la frecuencia de notificación al extremo opuesto — de diaria a cero, solo alerta por excepción.
> - **E2 (Eliminar):** quitar la dependencia de WiFi doméstico con conectividad celular/LoRa integrada en el artefacto.

---

## Prompt 6 — Remix de ideas

###  IA utilizada

**IA:** Claude (Anthropic) — rol de sintetizador de conceptos de negocio

###  Prompt

```text
Actúa como un sintetizador de conceptos de negocio... Genera 3 conceptos
remix cruzando las ideas SCAMPER elegidas (E1, S2, M1, E2). Cada remix
debe cruzar al menos 2 ideas y generar un concepto que no existía en
ninguna por separado.
```

###  Resultado de la IA

> Se generaron 3 remixes:
> 1. **El Gemelo de Rutina** (E1 + S2) — un perfil de normalidad aprendido que se vuelve más valioso con el tiempo de uso.
> 2. **El Seguro que se Olvida que Existe** (M1 + E2) — instalación sin fricción técnica + silencio total, solo excepción.
> 3. **El Seguro que Paga Otro** (S2 + M1 + E2) — modelo B2B2C donde aseguradoras o AFOREs pagan el producto para reducir su propio costo por fracturas.

---

## Prompt 7 — Filtro DVN (Deseable / Novedoso / Viable)

###  IA utilizada

**IA:** Claude (Anthropic) — rol de evaluador crítico de conceptos de negocio

###  Prompt

```text
Actúa como un evaluador crítico... Evalúa cada concepto (A, B, C) bajo
el filtro DVN: 🔴 Deseable / 🟣 Novedoso / 🟢 Viable, con justificación
específica y una pregunta clave por lente. Recomienda un concepto para
el Paso 5.
```

###  Resultado de la IA

> **Concepto A (Gemelo de Rutina):** ✅✅⚠️ — refinar antes (depende de semanas de datos para ser confiable).
> **Concepto B (El Seguro que se Olvida que Existe):** ✅⚠️✅ — llevar al Paso 5 (más ejecutable en 6 meses, riesgo de deseabilidad acotado).
> **Concepto C (El Seguro que Paga Otro):** ⚠️✅❌ — descartar para el MVP (ciclo de venta institucional de 12–24 meses, incompatible con 6 meses).
>
> **Concepto recomendado: El Seguro que se Olvida que Existe**, por ser el más viable en la ventana de tiempo disponible y genuinamente novedoso frente a la teleasistencia reactiva que existe hoy en México.

---

## Prompt 8 — Verificación de deseabilidad y diagnóstico

###  IA utilizada

**IA:** Claude (Anthropic) — rol de mentor de emprendimiento

###  Prompt

```text
Actúa como un mentor de emprendimiento... Interpreta la verificación de
deseabilidad (5 señales confirmadas con evidencia): 1) diagnóstico de
deseabilidad, 2) riesgo de suicidio creativo, 3) mapa de 3 hipótesis
falseables para probar con usuarios en la semana siguiente.
```

###  Resultado de la IA

> **Diagnóstico:** deseabilidad **media** — las 5 señales genéricas del dolor están confirmadas (pago, comunidades, frecuencia, costo, workarounds), pero ninguna evidencia secundaria respalda específicamente la apuesta del "silencio por excepción"; de hecho, los workarounds documentados (mensajes diarios, apps de botón) apuntan al comportamiento opuesto.
>
> **Riesgo de suicidio creativo:** medio — tipo "producto sin dolor real" (el hijo podría aprobar el silencio en teoría pero revisar la app obsesivamente en la práctica por falta de confianza inicial).
>
> **3 hipótesis falseables para semana 3:** sobre el dolor (frecuencia de preocupación espontánea), sobre la solución (preferencia real por silencio vs. confirmación diaria) y sobre el pago (disposición a pagar $300–$600 MXN/mes, comparado con lo que ya pagan por "Estoy Bien" o "Care 60+").

---

#  Oportunidades encontradas

| # | Oportunidad | Problema identificado | Comentarios |
|---|-------------|------------------------|-------------|
| 1 | Prevención de caídas | 47.8% de mayores de 65 cayó en los últimos 6 meses; fractura hasta $250,000 MXN | Oportunidad elegida como puerta de entrada del concepto final |
| 2 | Sarcopenia | 13–46% de prevalencia; pérdida de ~6% de masa muscular por década desde los 45 | Baja adherencia al gimnasio tradicional en este segmento |
| 3 | Osteoartrosis de rodilla | 10–20% de prevalencia en 65–74 años; hasta 80% en mayores de 80 | Fisioterapia presencial cara y episódica |
| 4 | Ejercicio en enfermedades crónicas | Diabetes 18.3%, hipertensión 43.3% en 50+; indicación médica sin plan ejecutable | Mayor volumen de mercado, requiere más educación |

---

#  Insight de oportunidad

### ¿Quién tiene el problema?

> Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a) en México.

### ¿Cuál es el problema?

> El miedo constante a "la llamada" — no saber si su padre/madre está bien durante el día, sin ninguna señal objetiva entre llamadas o visitas.

### ¿Qué les cuesta no resolverlo?

> Ansiedad y culpa diaria documentadas; en el peor caso, una fractura de cadera por caída no prevenida cuesta entre $150,000 y $420,000 MXN en atención hospitalaria en México.

### ¿Por qué las soluciones actuales no son suficientes?

> Los workarounds actuales (llamadas diarias, favores a vecinos, cámaras domésticas) exigen esfuerzo activo y constante del hijo, generan fatiga y no dan certeza objetiva; los servicios de teleasistencia existentes (ej. "Estoy Bien") son reactivos y dependen de que el adulto mayor recuerde participar.

### ¿Dónde está la oportunidad?

> Entre "llamar todos los días para checar" (esfuerzo activo, sin certeza) y "esperar hasta que algo salga mal" (certeza tardía y catastrófica), hay espacio para un sistema pasivo que detecta la rutina diaria del adulto mayor sin que él tenga que hacer nada, y que solo interrumpe al hijo cuando algo realmente cambia.

---

#  Pain-Gain Map

##  Usuario / segmento

**Usuario:** Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a).

---

##  Dolores (Pains)

| #    | Dolor                                                                                         | Intensidad |
| ---- | ----------------------------------------------------------------------------------------------- | ---------- |
| ⭐ D1 | El miedo a "la llamada" — la incertidumbre de fondo permanente sobre cuándo llegará la mala noticia | Alta       |
| D2   | No existe un sistema económico y no invasivo que avise si hubo una caída                        | Alta       |
| D3   | No saber si el padre/madre está bien durante el día genera ansiedad constante                    | Alta       |
| D4   | La culpa silenciosa de haber normalizado el distanciamiento en la comunicación diaria             | Media      |
| D5   | Depender de un vecino o familiar para "checar", con la incomodidad de pedir el favor recurrente  | Media      |

---

## Ganancias (Gains)

| #    | Ganancia                                                                                   | Importancia |
| ---- | ---------------------------------------------------------------------------------------------- | ----------- |
| ⭐ G1 | Confirmación diaria de que el familiar mayor está bien y activo                                | Alta        |
| G2   | Dejar de sentir culpa y ansiedad por no poder estar presente físicamente                       | Alta        |
| G3   | Reducir el tiempo de respuesta ante una caída, de horas a minutos                              | Media       |
| G4   | Recuperar atención mental — estar presente en la propia vida sin el ruido de la preocupación    | Media       |
| G5   | Tener evidencia compartible con hermanos u otros familiares, reduciendo conflictos de "quién cuida más" | Baja / Media |

---

##  Cruce más poderoso

**Dolor principal:** El miedo a "la llamada" (incertidumbre de fondo permanente)

**Ganancia principal:** Confirmación diaria de que está bien y activo

### ¿Por qué este cruce?

> Este dolor no es puntual como una caída — es un estado permanente que acompaña al hijo/a todos los días, por lo que la solución no puede ser reactiva (avisar solo cuando algo malo pasa) sino un hábito diario que reemplace la incertidumbre con una señal recurrente. Es lo que este usuario ya paga hoy en ansiedad, llamadas y culpa.

### Oportunidad en una oración

> Existe una oportunidad para **el hijo o hija que vive lejos de un padre mayor que vive solo** que necesita **una señal diaria y confiable de que su papá o mamá está bien y activo, sin tener que preguntar, llamar ni sentirse culpable** porque actualmente **la única forma de saberlo es interrumpir su día para llamar, pedirle el favor a alguien más, o vivir con la incertidumbre hasta que algo sale mal.**

---

# Documento Pain-Gain Map

Aquí colocaré el documento utilizado o generado para representar el Pain-Gain Map.

**[ Ver / descargar Pain-Gain Map](../assets/Pain-Gain-Map.pdf)**

> Si el archivo tiene otro nombre, cambiar la ruta anterior por el nombre real del PDF.

### Evidencia

![Pain-Gain Map](../assets/Pain_Gain_Map.jpg)

---

#  Resultados finales de la IA

### Resultado final

> **Concepto elegido: "El Seguro que se Olvida que Existe"**
>
> Un artefacto con conectividad celular/LoRa propia (sin depender de WiFi doméstico) detecta pasivamente la rutina diaria del adulto mayor desde un objeto que ya usa por costumbre. La app guarda silencio total mientras todo esté normal y solo interrumpe al hijo por excepción, cuando algo cambia. El canal de venta no promete "otra app de monitoreo", promete "instala una vez, olvídate para siempre".
>
> **Origen SCAMPER:** M1 (frecuencia de notificación al extremo: de diaria a cero, solo excepción) + E2 (eliminación de la dependencia de WiFi doméstico).
>
> **Puntaje DVN:** ✅ Novedoso, ✅ Viable, ⚠️ Deseable (riesgo identificado: el silencio total podría generar ansiedad de "¿sigue funcionando?" — a validar en entrevistas de la semana 3).
>
> Se completó también la **Matriz de Selección** con este concepto en la columna "Concepto A", y el **Reporte de Oportunidad — Semana 2** con el problema, la evidencia, el Pain-Gain Map final, el concepto recomendado y las 3 hipótesis para la siguiente semana.

### Ideas o conclusiones importantes

* El problema real detrás de las 4 oportunidades de mercado no era "cómo hacer ejercicio", sino la falta de un "testigo" diario que sostenga la adherencia — el mismo cuello de botella explica caídas, sarcopenia, artrosis y enfermedades crónicas.
* El comprador real de este tipo de producto no es siempre el usuario final: el hijo/a que vive lejos tiene tanto la ansiedad como el poder adquisitivo para pagar por tranquilidad.
* La evidencia de mercado (Perplexity) confirmó que el dolor y el pago ya existen hoy, pero no respaldó automáticamente el diseño elegido (silencio por excepción) — la investigación secundaria valida el problema, no las decisiones de diseño, y eso debe probarse con usuarios reales.
* El filtro DVN fue clave para descartar a tiempo un concepto atractivo en el papel (pago institucional vía aseguradoras) que era inviable dentro del plazo de 6 meses del MVP.

---

#  Conversación con la IA

Para conservar evidencia del proceso, agrego aquí el enlace a la conversación que utilicé durante la actividad.

** [Ver conversación con la IA](PEGAR-AQUI-LINK-DE-LA-CONVERSACION)**

> El enlace puede sustituirse por el enlace real de la conversación cuando esté disponible.

---

#  Evidencias adicionales

### Documentos

* [ Pain-Gain Map](../assets/Pain-Gain-Map.pdf)
* [ Matriz de Selección — Equipo](../assets/MATRIZ_DE_SELECCION_Equipo_chuy.docx)
* [ Reporte de Oportunidad — Semana 2](../assets/Reporte_Oportunidad_Semana2.pdf)
* [ Otros documentos](../assets/)

### Enlaces

*  [Conversación con IA](PEGAR-AQUI-LINK)
*  [Otra fuente utilizada](PEGAR-AQUI-LINK)

---

#  ¿Qué aprendí?

Esta actividad me ayudó a entender que antes de pensar directamente en una solución es importante **identificar primero un problema real**, y que ese problema casi nunca es el que aparece más obvio en los datos.

Al trabajar con el tema del deporte en adultos mayores empecé buscando "prevención de caídas" como la oportunidad más clara, pero al cuestionar el consenso encontré que el verdadero cuello de botella era la adherencia — y detrás de la adherencia, la falta de un "testigo" diario. Eso cambió por completo el enfoque del producto: de un sensor de emergencias a un sistema de tranquilidad diaria para el hijo/a que vive lejos.

También aprendí que la IA no sustituye el análisis del equipo, sino que sirve para obtener información, generar nuevas perspectivas (rompiendo el consenso, aplicando SCAMPER, cruzando ideas en remixes) y para poner a prueba las propias ideas con un filtro crítico (DVN) antes de invertir tiempo construyendo algo que nadie quiere.

---

#  Reflexión personal

> Lo que más me llamó la atención de esta actividad fue darme cuenta de que el problema que "se ve" en los datos de mercado (caídas, fracturas, costos hospitalarios) no siempre es el problema que realmente hay que resolver. El ejercicio de romper el consenso y buscar el problema oculto me obligó a pensar más allá de la primera solución obvia, y a entender que a veces el usuario que paga no es el mismo que el usuario que usa el producto — en este caso, el hijo que vive lejos y no el adulto mayor. También me quedó claro que la evidencia de mercado puede confirmar que un problema existe sin confirmar que mi solución específica es la correcta, así que el siguiente paso real es probarlo con personas de verdad, no solo con más investigación.

---

## Estado de la actividad

 **Actividad completada**

**Tema:** Deporte en adultos mayores
**Modo:** Explorador
**Evidencias:** Prompts + resultados de IA + Pain-Gain Map + SCAMPER + Remix de ideas + Filtro DVN + Matriz de Selección + Reporte de Oportunidad Semana 2