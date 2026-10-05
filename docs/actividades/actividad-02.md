# Actividad 2 — Búsqueda de Oportunidad

**Tema:** Deporte en adultos mayores
**Fecha:** 02/09/2026
**Modo:** Explorador

---

## 1. Objetivo de la actividad

En esta actividad trabajé con el **Modo Explorador**, cuyo objetivo es identificar una oportunidad de producto a partir de un problema real antes de desarrollar una solución.

Mi tema fue **el deporte en adultos mayores**, enfocado en un negocio con tres componentes articulados: una aplicación con IA, un artefacto físico inteligente y una página web de venta.

El proceso avanza por etapas:

```text
Investigación de mercado → Ruptura de consenso → Síntesis de insights → Pain-Gain Map
→ SCAMPER → Remix de ideas → Filtro DVN → Verificación de deseabilidad
→ Matriz de selección → Reporte final
```

**Pregunta inicial:**

> ¿Qué problemas relacionados con el deporte y la actividad física enfrentan los adultos mayores en México, y qué oportunidades podrían existir para resolverlos con un producto digital-físico?

---

## 2. Desarrollo: mis prompts y las respuestas de la IA

Usé dos herramientas: **Perplexity** para buscar datos y evidencia real, y **Claude** para analizar, cuestionar y generar ideas, asignándole un rol distinto en cada etapa. Abajo está cada prompt tal como lo escribí y la respuesta completa que obtuve, en el orden en que los hice. Las respuestas se despliegan con un clic.

!!! note "Nota sobre los prompts 5, 6, 7, 8 y 10"
    Esos prompts los envié a Claude como **archivo adjunto** (las plantillas del taller ya llenas con mi información), y los archivos no se conservan en el historial del chat. Por eso en esos pasos el recuadro del prompt muestra lo que le pedí; las respuestas sí están completas.

---

### Prompt 1 — Investigación de mercado

**IA utilizada:** Perplexity — rol de analista senior de oportunidades de negocio en LATAM

??? question "Mi prompt (clic para desplegar)"
    Actúa como un analista senior de oportunidades de negocio con experiencia en mercados emergentes de América Latina, especializado en identificar problemas donde una solución digital-física integrada puede generar tracción comercial real. Tu metodología combina análisis de brechas de mercado, detección de comportamientos no atendidos y evaluación de disposición a pagar en contextos de recursos limitados.

    Somos un equipo de emprendedores en México desarrollando un negocio basado en producto digital-físico. Nuestro stack incluye: desarrollo de aplicaciones móviles y web con IA integrada, hardware conectado (ESP32, Raspberry Pi, sensores, actuadores, comunicaciones BLE/MQTT/WiFi), diseño y manufactura de producto físico (CAD, impresión 3D, PCB), e integración de modelos de IA tanto en dispositivo como en la nube. El resultado que buscamos es un negocio con tres componentes articulados: una aplicación con IA, un artefacto físico inteligente y una página web de venta con propuesta de valor clara. Tenemos seis meses para llegar a un MVP comercializable y validado.

    Identifica 4 oportunidades de negocio no resueltas o mal resueltas en el sector de [Deporte para adultos de la tercera edad] en México y América Latina que cumplan estas condiciones:

    - El problema ocurre de forma frecuente (semanal o diaria) y tiene un costo observable para el usuario
    - Existe evidencia de que la gente ya paga por soluciones imperfectas o pierde tiempo y dinero por no tenerlas
    - La oportunidad se puede atacar con una solución que combine inteligencia artificial, interfaz digital y componente físico
    - El mercado potencial en LATAM supera las 50,000 personas o negocios con disposición real a pagar

    Para cada oportunidad entrega:

    - El problema concreto: quién lo tiene, cuándo ocurre, cuánto le cuesta no resolverlo
    - La solución actual más usada y por qué sigue siendo insuficiente
    - Por qué una solución que combine app con IA + artefacto físico inteligente es el enfoque correcto para este problema
    - Estimado del tamaño de mercado en LATAM con fuente

    No propongas soluciones tecnológicas todavía. Solo problemas con contexto de mercado suficiente para evaluar su potencial.

??? example "Respuesta de Perplexity (clic para desplegar)"
    #### Oportunidades de negocio: deporte para adultos mayores en LATAM

    **Contexto demográfico que valida el sector.** México tiene **17.1 millones de personas de 60+ años (12.8% de la población)** según CONAPO 2025, y la ENASEM 2024 estima **32 millones de personas de 50+ años**. La transición es acelerada: hacia 2030 habrá más adultos mayores que jóvenes de 0–14 años, y hacia 2070 llegarán al 34.2% de la población. Este grupo ya gasta de su bolsillo en salud, fisioterapia y membresías, pero con soluciones fragmentadas y sin continuidad — exactamente el tipo de brecha que un producto digital-físico con IA puede atacar.

    Las cuatro oportunidades que siguen cumplen las condiciones: problema frecuente con costo observable, evidencia de pago por soluciones imperfectas, atacable con app+IA+artefacto físico, y mercado LATAM >50,000 personas con disposición real a pagar.

    **1. Prevención de caídas (equilibrio y fuerza)**

    **El problema.** El 47.8% de los adultos mayores de 65 años cayó en los seis meses previos; el 75% de las caídas ocurre dentro de casa y el baño concentra ~12% de los incidentes. El costo de no resolverlo es extremo y observable: **prevenir una caída en el baño cuesta ~$3,500, pero atender una fractura supera los $250,000** en gastos hospitalarios. Ocurre a diario (riesgo constante) y el desencadenante — pérdida de equilibrio y fuerza — es entrenable.

    **Solución actual e insuficiencia.** La oferta dominante son programas presenciales de prevención (valorados en $2,400–$3,600) y equipamiento pasivo del hogar (barras, sillas, andaderas). Son insuficientes porque son episódicos (unas cuantas sesiones), no entrenan la causa de fondo (equilibrio/fuerza) de forma sostenida, y el equipamiento pasivo no detecta el deterioro progresivo del riesgo.

    **Por qué app+IA+físico es el enfoque correcto.** El riesgo de caída se construye en semanas y solo se reduce con entrenamiento de equilibrio y fuerza **repetido y medible**. Un artefacto físico que mida estabilidad/fuerza + IA que detecte el aumento de riesgo y ajuste la rutina + app que guíe sesiones diarias convierte un evento catastrófico puntual en una práctica cotidiana monitoreada.

    **Mercado LATAM.** Con ~75–80 millones de adultos mayores en la región (extrapolando el 12.8% mexicano a ~600M de habitantes), incluso un 1–2% con disposición a pagar por prevención activa representa **750,000–1.5 millones de personas**. En México, el segmento de 50+ ya es de 32 millones.

    **2. Sarcopenia: pérdida de masa y fuerza muscular**

    **El problema.** La sarcopenia (pérdida de masa muscular + fuerza) afecta al **13.3%** de adultos mayores mexicanos según ENSANUT, al **20.7%** de adultos mayores sanos, y sube a **~46%** en mayores de 65 años en algunos estudios. Es progresiva y diaria: sin entrenamiento de fuerza se pierde ~6% de masa muscular por década desde los 45 años. El costo observable es la pérdida de independencia, más caídas, más fragilidad y dependencia funcional.

    **Solución actual e insuficiencia.** La respuesta es el gimnasio tradicional (membresías de $300–$600/mes en México), pero la adherencia de adultos mayores es baja: solo el 42.7% de hombres y 22.2% de mujeres de 53+ hace actividad física 3 veces por semana. Los gimnasios no están diseñados para este segmento (sin progresión adaptada, sin medición de fuerza, sin supervisión geriátrica) y por eso la gente paga y abandona.

    **Por qué app+IA+físico es el enfoque correcto.** El tratamiento de la sarcopenia es entrenamiento de fuerza **progresivo y dosificado**, que exige medir fuerza real (no solo asistir). Un sensor/artefacto que mida fuerza y repeticiones + IA que dosifique la carga según progreso + app que motive y haga seguimiento resuelve el problema de adherencia que el gimnasio no ataca.

    **Mercado LATAM.** Con 13–46% de prevalencia, son **10–15 millones de adultos mayores** en LATAM con la condición; el segmento con disposición a pagar por entrenamiento de fuerza supervisado y medible supera el **millón de personas** solo en México.

    **3. Osteoartrosis de rodilla y dolor articular**

    **El problema.** La osteoartrosis afecta al **10.5%** de adultos mexicanos, al **10–20%** de personas de 65–74 años, y hasta el **80%** de mayores de 80 años. Es uno de los 10 principales motivos de consulta y discapacidad. El dolor y la rigidez son **diarios**, y el costo de no tratarlo es la cirugía de prótesis de rodilla, que la gente intenta evitar a toda costa.

    **Solución actual e insuficiencia.** La guía del IMSS establece que **el ejercicio es el tratamiento de primera línea** para la artrosis, independientemente de la edad. Pero la oferta actual es fisioterapia presencial episódica: **$400–$700 por sesión** y paquetes de $1,000–$4,720. Es cara, de corta duración y no se sostiene en casa, donde el paciente pasa la mayor parte del tiempo con dolor.

    **Por qué app+IA+físico es el enfoque correcto.** El manejo de la artrosis es un programa de ejercicio de **largo plazo, dosificado por dolor y movilidad**. Un artefacto que mida rango de movimiento y carga + IA que ajuste la rutina según dolor reportado + app que guíe la sesión en casa replica la fisioterapia a una fracción del costo y con continuidad real.

    **Mercado LATAM.** Con 10–20% de prevalencia, son **8–16 millones de adultos mayores** en LATAM con artrosis; quienes ya pagan por fisioterapia o buscan evitar la cirugía representan **más de un millón de personas** con disposición a pagar.

    **4. Ejercicio para control de enfermedades crónicas (diabetes e hipertensión)**

    **El problema.** La diabetes afecta al **18.3%** de los adultos mexicanos (~14.6 millones) y la hipertensión al **43.3%** de las personas de 50+ (ENASEM). El ejercicio es parte central del control de ambas, pero el comportamiento no atendido es evidente: la mayoría de adultos mayores **no cumple** — solo 42.7% de hombres y 22.2% de mujeres de 53+ hace actividad física 3 veces por semana. El costo observable es el descontrol glucémico, complicaciones y gasto médico recurrente.

    **Solución actual e insuficiencia.** La indicación médica ("haga ejercicio") no viene acompañada de un programa ejecutable. Los pacientes recurren a caminatas sin supervisión, clases comunitarias intermitentes o nada. No hay un sistema que conecte la medición de salud (glucosa, presión) con una prescripción de ejercicio segura y ajustada, por eso la adherencia colapsa.

    **Por qué app+IA+físico es el enfoque correcto.** El control de crónicas exige **ejercicio regular y seguro**, dosificado por estado de salud del día. Un wearable/artefacto que registre signos (frecuencia, esfuerzo) + IA que ajuste la sesión según riesgo y condición + app que conecte con el paciente y su familia convierte la recomendación médica en una rutina medible y segura.

    **Mercado LATAM.** La diabetes en la región supera los **50 millones de adultos** y la hipertensión es la comorbilidad más común en mayores de 50 años. El segmento de adultos mayores con crónicas y disposición a pagar por ejercicio guiado y seguro supera con creces el **millón de personas** en LATAM.

    **Lectura para el equipo**

    Las cuatro oportunidades comparten un mismo patrón: **un problema de salud que se resuelve con ejercicio repetido y medible, donde la oferta actual es presencial, episódica y cara, y donde la adherencia es el verdadero cuello de botella**. Tu stack (app con IA + artefacto físico conectado + página de venta) encaja de forma natural porque el valor está en convertir una recomendación médica en una rutina cotidiana monitoreada.

    De las cuatro, las de **mayor disposición a pagar inmediata** son caídas y artrosis (dolor/evento catastrófico observable), mientras que sarcopenia y crónicas tienen mayor volumen de mercado pero requieren más educación. Para un MVP de 6 meses, caídas y artrosis ofrecen el ciclo de venta más corto y el argumento de "evitar el gasto de $250,000" más contundente.

    *Nota sobre cifras:* los datos de prevalencia y costos son mexicanos (CONAPO, INEGI/ENASEM, IMSS, PROFECO); las estimaciones de mercado LATAM son extrapolaciones conservadoras a partir de esas fuentes y deben validarse con investigación primaria antes de comprometer recursos.

**Mi decisión:** con estas 4 oportunidades como base, en lugar de elegir una directamente le pedí a Claude que las cuestionara.

---

### Prompt 2 — Ruptura de consenso, problema oculto y segmento ignorado

**IA utilizada:** Claude — rol de innovador especializado en mercados emergentes

??? question "Mi prompt (clic para desplegar)"
    Actúa como un innovador con experiencia en detectar oportunidades de negocio que el mercado ignora porque parecen demasiado nicho, demasiado obvias o demasiado difíciles. Tu enfoque es el pensamiento lateral aplicado a mercados emergentes: buscas lo que todos ven pero nadie está atacando, y lo que nadie ve porque está demasiado cerca. Tienes especial habilidad para imaginar negocios donde la combinación de inteligencia artificial, interfaces digitales y objetos físicos inteligentes crea una propuesta de valor que ninguno de los tres componentes podría crear por separado. Estamos construyendo un negocio en México con tres componentes articulados: una aplicación con IA, un artefacto físico inteligente y una página web de venta. Nuestras capacidades abarcan tanto el desarrollo de software e IA como el diseño y manufactura de hardware conectado. Tenemos seis meses para llegar a MVP comercializable. Estas son las 4 oportunidades que identificamos a través de análisis de mercado: [archivo adjunto con la respuesta del Prompt 1] Necesito que hagas 3 cosas:

    1. **ROMPE EL CONSENSO:** ¿Cuál de las 4 oportunidades está siendo atacada de la forma más predecible? ¿Qué ángulo contraintuitivo nadie está viendo porque todos asumen lo mismo sobre ese problema? ¿Cómo cambiaría la propuesta de valor si el artefacto físico, la app y la web de venta se articularan de una forma no convencional?
    2. **ENCUENTRA EL PROBLEMA OCULTO:** Debajo de estas 4 oportunidades superficiales, ¿cuál es el problema raíz que, si se resolviera con una solución digital-física integrada, haría innecesarios 2 o más de estos problemas al mismo tiempo? ¿Qué negocio emerge de resolver ese problema raíz?
    3. **EL SEGMENTO IGNORADO:** ¿Hay algún grupo de usuarios que tiene estos problemas con el doble de intensidad pero que no aparece en los análisis de mercado convencionales porque no tiene voz digital — no escribe en foros, no da entrevistas, no aparece en reportes — pero que claramente existe en la realidad mexicana y tiene disposición real a pagar?

    No me repitas lo que Perplexity ya encontró. Dame lo que el análisis de mercado convencional no puede ver.

??? example "Respuesta de Claude (clic para desplegar)"
    #### Rompiendo el consenso

    **1. La oportunidad más predecible: Prevención de caídas**

    Es la más "vendible" en el documento (el argumento de los $250,000 es demasiado bueno para no usarlo primero), y por eso mismo es la que todo el mundo va a atacar igual: sensor que detecta la caída o el desequilibrio, botón de pánico, alerta a la familia. Es el patrón Life Alert / Apple Watch reinventado para México. Todos asumen que el problema es físico (equilibrio, fuerza) y que el artefacto debe medir el cuerpo.

    **El ángulo que nadie está viendo:** el predictor más fuerte de una caída no es el déficit físico — es el miedo a caer (kinesiofobia). Un adulto mayor con miedo se mueve menos "por si acaso", pierde fuerza más rápido por ese mismo miedo, y entra en un círculo donde el miedo produce exactamente la fragilidad que temía. La ciencia geriátrica lo llama el Falls Efficacy Scale, y es más predictivo que las pruebas de equilibrio solas.

    Si el artefacto no está diseñado para medir riesgo sino para generar evidencia de progreso que combata el miedo — "hoy tu equilibrio fue mejor que ayer", visible y compartible con la familia — el producto deja de ser un sensor de desastres y se convierte en un generador de confianza. Eso cambia todo: la app deja de hablar el lenguaje del "riesgo" (que la gente evita mirar) y empieza a hablar el lenguaje del logro.

    **El giro no convencional en la articulación:** casi todos van a poner el artefacto en el cuerpo (wearable) porque la adherencia a usarlo se asume resuelta con diseño. Pero la adherencia a wearables en adultos mayores mexicanos es pésima — se olvidan, los encuentran incómodos, los dejan cargando. La jugada contraintuitiva es poner la inteligencia en un objeto que el adulto mayor ya toca todos los días sin que se lo pidas: el bastón, el descansabrazos de su sillón favorito, el tapete del baño. Cero fricción de adopción porque no es un dispositivo nuevo en su vida — es un objeto viejo que empezó a cuidarlo. Y la web de venta ya no vende "un sensor de caídas para mamá", vende "cambia el bastón que ya usa, no le pidas que aprenda algo nuevo."

    #### El problema oculto

    Las 4 oportunidades comparten el mismo cuello de botella, y el propio documento lo dice sin explotarlo: la adherencia. Pero hay que ir un nivel más abajo — ¿por qué falla la adherencia si la gente sabe que debe moverse y quiere evitar la silla de ruedas o la cirugía?

    No es falta de información ni de motivación individual. Es la ausencia de un testigo. Un adulto mayor que hace sus ejercicios de equilibrio, su rutina de fuerza o su caminata solo, en su casa, sin nadie que lo vea ni lo espere, abandona — no porque no le importe, sino porque no existe consecuencia social inmediata al no hacerlo. Es **"soledad funcional"**: el ejercicio prescrito no tiene quién lo atestigüe.

    Esto explica por qué el gimnasio tradicional falla con este segmento (nadie los espera, nadie nota su ausencia) y por qué la fisioterapia sí funciona mientras dura (hay una persona real esperándolos cada semana) pero se abandona en cuanto termina el paquete pagado — se acaba el testigo, se acaba la constancia.

    **El problema raíz:** no es "cómo entreno equilibrio" o "cómo dosifico fuerza" — es cómo genero un lazo de responsabilidad social diario alrededor del movimiento de una persona que vive sola o cuya familia está lejos.

    **El negocio que emerge de resolver eso:** no cuatro productos verticales (uno para caídas, otro para artrosis, otro para sarcopenia, otro para crónicas), sino una sola plataforma de **"testigo diario"** — un ritual físico-digital que no le pregunta al usuario qué diagnóstico tiene, sino que cierra el loop social todos los días: el artefacto registra que la persona se movió, la IA ajusta la rutina según su condición (ahí sí entran caídas/sarcopenia/artrosis/crónicas como programas dentro del sistema, no como productos separados), y alguien se entera — un hijo, una hija, un grupo de pares en su misma cuadra. El valor no está en la métrica clínica, está en que existir y moverse hoy generó una señal que alguien más vio. Eso resuelve simultáneamente adherencia en caídas, sarcopenia, artrosis y crónicas con una sola arquitectura, y convierte su stack (app+artefacto+web) en una plataforma horizontal en vez de cuatro nichos compitiendo por el mismo bolsillo.

    #### El segmento ignorado

    Hay un segmento con el doble de intensidad en estos cuatro problemas, con disposición real a pagar — y probablemente en dólares — que no aparece en ENASEM, CONAPO ni en ningún reporte de mercado convencional porque la variable que los define no es edad ni ingreso: **son los padres y madres mexicanos cuyos hijos migraron a Estados Unidos.**

    Este grupo:

    - Vive solo o con apoyo mínimo (el hijo que normalmente cuidaría está ausente físicamente).
    - Tiene, por tanto, el doble de riesgo de caída, doble de sarcopenia por falta de actividad social/familiar diaria, y doble de riesgo en el manejo de crónicas porque no hay quien supervise si tomó su medicamento o hizo su caminata.
    - No tiene voz digital propia — no llena encuestas de salud, no está en foros de bienestar, no da entrevistas — pero es una realidad documentada y masiva en México (millones de hogares con remesas activas).
    - Sí tiene un pagador real y con alto poder adquisitivo relativo: el hijo migrante. Las remesas ya demuestran disposición a pagar por el bienestar de los padres — es dinero que ya fluye mensualmente por culpa (o amor) de la distancia. Un producto que le permita a ese hijo en Chicago o Los Ángeles ver que su papá se movió hoy, que su mamá tomó su pastilla, es exactamente el tipo de tranquilidad por la que esa población ya paga en remesas, seguros informales y llamadas diarias de "¿ya comiste, ya caminaste?".

    La web de venta, en este caso, no debería estar en español-México ni cobrar en pesos — debería estar en inglés, cobrar en dólares, y hablarle directamente a la ansiedad del hijo migrante sobre el padre que no puede visitar. Es el mismo artefacto físico y la misma IA, pero el canal de venta y el idioma de la propuesta de valor cambian por completo. Es un mercado que el análisis de Perplexity nunca vería, porque no está buscando "adultos mayores mexicanos" — está buscando "diáspora mexicana con ansiedad de cuidado a distancia," que es una categoría demográfica que ningún reporte de salud mexicano clasifica, pero que en la práctica es uno de los flujos de dinero más grandes y más emocionalmente cargados del país.

**Mi decisión:** me quedé con dos hallazgos: el problema oculto del **"testigo diario"** y el **hijo que vive lejos** como el verdadero comprador. Los usé como base para el siguiente prompt.

---

### Prompt 3 — Síntesis en insights y selección de oportunidad

**IA utilizada:** Claude — rol de estratega de innovación

??? question "Mi prompt (clic para desplegar)"
    Actúa como un estratega de innovación con experiencia en traducir hallazgos de mercado en insights de negocio accionables para emprendedores que construyen productos digitales-físicos. Tu especialidad es encontrar la formulación exacta que revela por qué un problema persiste y dónde está el espacio real de negocio — no el espacio teórico.

    Somos un equipo de emprendedores en México desarrollando un negocio con tres componentes articulados: una aplicación con IA, un artefacto físico inteligente y una página web de venta. Nuestras capacidades abarcan desarrollo de software e IA, hardware conectado (ESP32, Raspberry Pi, sensores, PCB) y manufactura de producto físico. Tenemos seis meses para llegar a un MVP comercializable. Estamos en la etapa de selección de oportunidad — aún no hemos elegido en qué problema trabajar.

    Estos son los hallazgos de nuestra búsqueda de mercado:

    *[Aquí pegué las oportunidades 1 (Prevención de caídas) y 2 (Sarcopenia) de la respuesta del Prompt 1, y la sección "El problema oculto" de la respuesta del Prompt 2.]*

    Necesito que hagas lo siguiente:

    1. **SINTETIZA EN INSIGHTS:** Convierte cada oportunidad en un insight estructurado con este formato exacto:
        - Quién específico tiene el problema (segmento concreto, no "los usuarios" ni "las empresas")
        - Qué les cuesta no resolverlo (tiempo, dinero, calidad, riesgo — con cifra o estimado)
        - Por qué las soluciones actuales no bastan (no "son caras" en abstracto — cuál es la razón específica por la que fallan para este usuario)
        - Dónde está exactamente el espacio: la brecha entre lo que existe y lo que se necesita
    2. **ELIGE Y JUSTIFICA:** De los insights generados, ¿cuál tiene el espacio de negocio más claro para una solución que combine app con IA + artefacto físico + canal de venta digital? Justifica en función del usuario, el costo del problema y la viabilidad de los tres componentes juntos.
    3. **FORMULA EL INSIGHT GANADOR:** Redacta el insight elegido en 3–4 oraciones que cualquier persona pudiera leer y entender por qué es una oportunidad real. Sin jerga. Sin abstracciones.

??? example "Respuesta de Claude (clic para desplegar)"
    #### 1. Insights estructurados

    **Insight 1 — Prevención de caídas**

    - **Quién:** Adultos mayores de 65+ que viven solos o con acompañamiento parcial (hijos que trabajan fuera de casa gran parte del día), en vivienda propia con baño no adaptado.
    - **Qué les cuesta no resolverlo:** ~$250,000 MXN en gastos hospitalarios por una fractura, más el costo no monetario de perder autonomía permanentemente después de una caída grave — la mayoría no vuelve a caminar igual.
    - **Por qué las soluciones actuales no bastan:** las barras y sillas de apoyo son pasivas — no reducen el riesgo, solo amortiguan el golpe cuando ya ocurrió. Los programas presenciales de equilibrio duran semanas y luego terminan; el riesgo de caída es acumulativo y silencioso, así que en el momento en que el programa termina, el usuario no tiene forma de saber si su riesgo subió o bajó.
    - **Dónde está el espacio:** entre el equipamiento que reacciona a la caída y el programa que se acaba, no existe nada que mida el riesgo de forma continua y lo comunique antes de que se convierta en evento. Ese es el hueco: monitoreo diario de la variable que precede al accidente, no del accidente mismo.

    **Insight 2 — Sarcopenia**

    - **Quién:** Adultos de 45–65 años, típicamente mujeres (la prevalencia y el abandono de actividad física es mayor en mujeres de 53+ según el propio hallazgo), que ya perciben que "se sienten más débiles" pero aún no tienen un diagnóstico ni una fractura que las alarme.
    - **Qué les cuesta no resolverlo:** 6% de masa muscular perdida por década desde los 45 — una pérdida invisible hasta que ya es funcionalmente limitante (no pueden cargar las bolsas del súper, les cuesta levantarse de una silla baja).
    - **Por qué las soluciones actuales no bastan:** el gimnasio vende acceso, no resultado — no mide si la fuerza de esa persona específica está mejorando, no ajusta la carga a su progreso real, y no tiene ninguna razón estructural para retenerla más allá del cobro mensual. La usuaria paga por un espacio, no por una progresión.
    - **Dónde está el espacio:** entre "ir al gimnasio" (acceso sin progresión medida) y "tener un entrenador personal" (progresión medida pero cara e inaccesible), hay un espacio para progresión medida y dosificada por IA a una fracción del costo de un entrenador humano.

    **Insight 3 — Osteoartrosis de rodilla**

    - **Quién:** Adultos de 60–80 años con dolor articular diagnosticado o autodiagnosticado, que ya evitan actividades (subir escaleras, caminar largo) por miedo al dolor, y que ven la cirugía de rodilla como un último recurso que quieren posponer indefinidamente.
    - **Qué les cuesta no resolverlo:** $1,000–$4,720 MXN por paquete de fisioterapia que se repite cada vez que el dolor regresa, sin que nadie les dé continuidad entre paquetes — un gasto recurrente sin acumulación de mejora.
    - **Por qué las soluciones actuales no bastan:** la fisioterapia presencial exige trasladarse con dolor hasta una clínica, varias veces por semana, y termina cuando se acaba el paquete pagado — no porque el paciente esté curado, sino porque dejó de pagar. El ejercicio en casa, sin supervisión, se abandona porque el paciente no sabe si un movimiento le hace bien o le hace daño, y el miedo al daño gana.
    - **Dónde está el espacio:** entre la sesión presencial cara y episódica, y el ejercicio en casa sin guía ni retroalimentación, hay espacio para un sistema que dosifique el movimiento según el dolor reportado del día, con la confianza de que alguien (una IA entrenada para esto) le está diciendo qué es seguro hacer hoy.

    **Insight 4 — Crónicas (diabetes / hipertensión)**

    - **Quién:** Adultos de 50+ con diagnóstico ya confirmado de diabetes o hipertensión, a quienes el médico les dio la indicación genérica de "hacer ejercicio" en una consulta de 10 minutos, sin plan ni seguimiento.
    - **Qué les cuesta no resolverlo:** descontrol glucémico progresivo y complicaciones (amputaciones, insuficiencia renal, eventos cardiovasculares) cuyo costo médico acumulado supera fácilmente cualquier programa de prevención, además del costo diario de vivir con menos energía y más miedo a un evento agudo.
    - **Por qué las soluciones actuales no bastan:** la indicación médica no viene con un mecanismo de ejecución — no dice cuánto, cuándo, ni cómo ajustar el ejercicio si la glucosa está alta o baja ese día. El paciente queda solo con una instrucción abstracta y sin manera de saber si lo que hace es seguro para su condición del momento.
    - **Dónde está el espacio:** entre "el médico me dijo que hiciera ejercicio" y "el paciente lo hace de forma segura y regular", hay un vacío total de traducción — nadie convierte la indicación clínica en una rutina diaria ajustada al estado real de esa persona ese día.

    **Insight 5 (el que atraviesa a los cuatro) — El testigo diario**

    - **Quién:** Cualquiera de los cuatro segmentos anteriores, en el momento exacto en que su programa de ejercicio (fisioterapia, gimnasio, indicación médica) deja de tener a alguien que los espere.
    - **Qué les cuesta no resolverlo:** el abandono no es un riesgo — es la norma. Las cuatro condiciones citan la misma cifra de fondo: menos de la mitad de este segmento hace actividad física regular, no por falta de motivación sino porque nadie nota si la hicieron o no.
    - **Por qué las soluciones actuales no bastan:** todas las soluciones actuales (gimnasio, fisioterapia, indicación médica) resuelven la instrucción, no la constancia. Ninguna genera una consecuencia social inmediata a hacer o no hacer el ejercicio hoy.
    - **Dónde está el espacio:** un sistema que no vende "el ejercicio correcto para tu condición" (eso ya lo sabe todo el mundo, más o menos) sino "que alguien se entere si lo hiciste hoy" — convirtiendo la responsabilidad individual en responsabilidad social diaria.

    #### 2. Elección y justificación

    El insight con el espacio de negocio más claro para los tres componentes juntos es el **Insight 5 — el testigo diario**, pero materializado a través de la puerta de entrada del **Insight 1 (prevención de caídas)**.

    Por qué no elijo directamente uno de los cuatro verticales:

    - **Usuario:** los cuatro segmentos (caídas, sarcopenia, artrosis, crónicas) son en la práctica la misma persona en distintos momentos — un adulto mayor mexicano rara vez tiene solo una de estas cuatro condiciones; para cuando tiene artrosis, probablemente también tiene sarcopenia y riesgo de caída. Construir cuatro productos verticales significa competir contigo mismo por el mismo bolsillo y fragmentar tu ingeniería en seis meses que no alcanzan para cuatro MVPs.
    - **Costo del problema:** el insight 5 es el único que explica por qué fallan los otros tres al mismo tiempo — no es una hipótesis adicional, es la causa raíz común. Resolverlo no es "una quinta oportunidad", es la arquitectura que hace que las otras cuatro funcionen.
    - **Viabilidad de los tres componentes:** aquí es donde el insight 1 (caídas) entra como la puerta de entrada correcta, no como el producto final:
        - Es el que tiene el gancho de venta más fuerte y menos abstracto ("evita un gasto de $250,000") — más fácil de vender en un MVP de 6 meses que "mejora tu adherencia al ejercicio".
        - Es el que justifica más naturalmente un artefacto físico con sensores simples y baratos (acelerómetro, presión, giroscopio en un bastón o tapete) — hardware con ESP32/sensores que su equipo ya sabe construir, sin necesidad de sensores médicos complejos.
        - Es el que tiene el comprador más claro y dispuesto a pagar por adelantado: el hijo o hija que vive lejos o que trabaja todo el día, que paga con gusto por tranquilidad — el mismo patrón de las remesas de cuidado.
        - Y es el que naturalmente abre la puerta a los otros tres: una vez que el artefacto y la app ya están instalados en la vida diaria del usuario para prevenir caídas, agregar programas de fuerza (sarcopenia), movilidad (artrosis) o ejercicio dosificado (crónicas) es expansión de producto, no un nuevo MVP.

    En seis meses no se construye una plataforma de bienestar geriátrico completa. Se construye un artefacto simple que resuelve un miedo concreto y caro (caer), articulado con una app que hace visible el progreso a un familiar, vendido a ese familiar como tranquilidad diaria — y esa misma arquitectura de "testigo diario" es la que después escala a los otros tres problemas sin rediseñar el negocio.

    #### 3. El insight ganador

    > Millones de adultos mayores mexicanos hacen ejercicio solos en su casa — o dejan de hacerlo — sin que nadie se entere, y eso, no la falta de fuerza o equilibrio, es lo que los lleva a la caída que cuesta $250,000 en el hospital. No necesitan otro programa de ejercicios ni otro sensor que detecte la caída cuando ya pasó: necesitan que alguien, todos los días, sepa si se movieron o no — típicamente un hijo que vive lejos y que ya paga, en tiempo y dinero, por la ansiedad de no poder verlo. Un artefacto que registre su movimiento diario en un objeto que ya usan (un bastón, un tapete, un sillón), conectado a una app que le muestra a ese hijo "hoy sí se movió" o "hoy no", convierte el ejercicio prescrito en un ritual social diario en vez de una tarea que se abandona sola. Eso es lo que nadie está vendiendo todavía: no prevención de caídas, sino tranquilidad diaria comprobable a distancia.

**Mi decisión:** antes de seguir, quise comprobar con datos reales si las afirmaciones del insight ganador eran ciertas, así que lo llevé a Perplexity.

---

### Prompt 4 — Verificación del insight con datos

**IA utilizada:** Perplexity — rol de analista de inteligencia de mercado en LATAM

??? question "Mi prompt (clic para desplegar)"
    Actúa como un analista de inteligencia de mercado especializado en validación de oportunidades de negocio en América Latina, con acceso a fuentes primarias y secundarias confiables: INEGI, BID, CEPAL, reportes sectoriales, bases de datos de startups y registros de comportamiento de mercado. Tu trabajo es separar los supuestos de los hechos verificables — no para destruir ideas, sino para que los emprendedores sepan exactamente en qué parte de su oportunidad están parados sobre roca y en qué parte están parados sobre arena.

    Somos emprendedores en México construyendo un negocio con tres componentes: una aplicación con IA, un artefacto físico inteligente y una página web de venta. Identificamos una oportunidad de negocio a través de análisis de mercado y necesitamos verificar si sus afirmaciones clave tienen respaldo en datos reales antes de comprometer seis meses de desarrollo.

    Este es el insight que necesitamos verificar:

    [*El insight ganador* — Millones de adultos mayores mexicanos hacen ejercicio solos en su casa — o dejan de hacerlo — sin que nadie se entere, y eso, no la falta de fuerza o equilibrio, es lo que los lleva a la caída que cuesta $250,000 en el hospital. No necesitan otro programa de ejercicios ni otro sensor que detecte la caída cuando ya pasó: necesitan que alguien, todos los días, sepa si se movieron o no — típicamente un hijo que vive lejos y que ya paga, en tiempo y dinero, por la ansiedad de no poder verlo. Un artefacto que registre su movimiento diario en un objeto que ya usan (un bastón, un tapete, un sillón), conectado a una app que le muestra a ese hijo "hoy sí se movió" o "hoy no", convierte el ejercicio prescrito en un ritual social diario en vez de una tarea que se abandona sola. Eso es lo que nadie está vendiendo todavía: no prevención de caídas, sino tranquilidad diaria comprobable a distancia.]

    Verifica cada una de estas afirmaciones con fuentes citables:

    - **SEGMENTO:** ¿El usuario descrito existe con ese perfil y ese problema en México o LATAM? ¿Cuántos son aproximadamente? Busca en INEGI, reportes de organismos multilaterales (BID, CEPAL, FAO, OPS según el sector), o estudios sectoriales recientes. Si el dato exacto no existe, dame el proxy más cercano con su fuente.
    - **COSTO DEL PROBLEMA:** ¿La cifra de pérdida o costo que menciona el insight tiene respaldo en datos reales? Si no hay dato exacto, ¿cuál es el rango documentado más cercano? ¿Hay comportamiento observable que lo confirme — pagos actuales a soluciones imperfectas, pérdidas documentadas, seguros contratados, workarounds que tienen costo?
    - **SOLUCIONES ACTUALES:** ¿Las alternativas que el insight describe como insuficientes existen realmente y tienen las características y precios que se mencionan? Dame al menos 2 ejemplos concretos con precio real y limitación verificable.
    - **DISPOSICIÓN A PAGAR:** ¿Hay evidencia de que este mercado en LATAM está dispuesto a pagar por una solución mejor? Busca señales de comportamiento: ¿ya pagan por algo similar aunque sea peor? ¿hay búsquedas activas documentadas? ¿comunidades online donde buscan soluciones? ¿intentos de crowdfunding o mercados informales activos?

    Al terminar, dame un veredicto por afirmación:

    - ✅ Verificada con fuente
    - ⚠️ Plausible pero sin dato directo — proxy usado
    - ❌ No encontré respaldo — el equipo necesita validar esto con usuarios reales antes de continuar

    Sé directo. Un insight mal fundamentado descubierto hoy vale más que uno descubierto en seis meses.

??? example "Respuesta de Perplexity (clic para desplegar)"
    He verificado las cuatro afirmaciones del insight contra fuentes primarias y secundarias. Aquí está el resultado, separando lo que está sobre roca de lo que está sobre arena.

    **Segmento: el usuario existe ✅ (con un matiz ⚠️)**

    La base del insight está bien sustentada:

    - **"Millones de adultos mayores mexicanos"**: sí. Son **17.1 millones de personas de 60+** (CONAPO 2025).
    - **"Sin que nadie se entere" (viven solos o lejos)**: sí. **1.8 millones de personas de 60+ viven solas** (INAPAM/Bienestar), y el **16.5% de los hogares con personas mayores son unipersonales** (CONAPO, Censo 2020).
    - **"Hacen ejercicio solos en casa o dejan de hacerlo"**: ⚠️ parcial. Lo documentado es que la **mayoría no cumple** la actividad física: solo el **42.7% de hombres y 22.2% de mujeres de 53+** hace ejercicio 3 veces por semana (ENASEM). Pero el comportamiento específico de "hacer ejercicio en solitario en casa" **no está medido directamente** en ninguna encuesta — es un proxy razonable, no un dato.
    - **"Un hijo que vive lejos"**: ✅ existe y es un perfil reconocible. Hay apps mexicanas y chilenas construidas explícitamente para este usuario: *kuidales* ("Cuidados a Distancia para Adultos Mayores", App Store México) y *Pulsus* ("Eres hijo/a de un adulto mayor y necesitas saber que está bien, aunque vivas lejos").

    **Veredicto: ✅ el segmento existe y es masivo; ⚠️ la micro-afirmación de "hacer ejercicio solo en casa" es un proxy, no un dato medido.**

    **Costo del problema: la cifra de $250,000 es plausible pero está en el extremo alto ⚠️**

    La cifra ancla del insight tiene respaldo documentado, pero como **rango**, no como dato único:

    - Reemplazo total de cadera en hospital privado medio: **$150,000–$260,000** (y $280,000–$420,000 en premium).
    - Otras fuentes sitúan la atención de una fractura de cadera en **>$200,000 por caso**, con ~$160,000 en el sector público.
    - La tarifa referencial del IMSS para reducción quirúrgica de fractura de cadera es de **$105,746**, y el rango documentado de una fractura sin seguro va de **$50,000 a $150,000**.

    **Conclusión:** los **$250,000 son verosímiles solo en el escenario de hospital privado** (extremo alto del rango). En IMSS/ISSSTE el costo es mucho menor o nulo para el paciente. El insight debería decir "una fractura de cadera puede costar de $50,000 a más de $400,000 según el sector" en lugar de fijar $250,000 como cifra universal. El costo de la "ansiedad del hijo" no tiene precio directo, pero sí está evidenciado por la existencia de servicios de monitoreo por suscripción (ver abajo).

    **Veredicto: ⚠️ plausible y dentro de un rango documentado, pero la cifra puntual de $250,000 sobreestima el caso promedio.**

    **Soluciones actuales: existen, tienen precio y son reactivas ✅**

    El insight afirma que lo que se vende es "detectar la caída cuando ya pasó", y eso se confirma con productos reales en LATAM:

    - **Mistatas (Chile):** sistemas de alerta con detección automática de caídas, **desde $14,900 a $39,900 pesos mensuales**.
    - **Monitor con cámara y recordatorio médico (Sanborns):** **$3,914–$5,088 MXN**.
    - **AltumView:** sensor de detección de caídas y actividad, **US$159.99–$699.99**.
    - **GCare Silver (Chile):** reloj GPS con detector de caídas, **$250,388 CLP**.

    Todas comparten la misma naturaleza: **reactivas** (alertan cuando el evento ocurre o vigilan en tiempo real), no convierten el ejercicio prescrito en un ritual social diario. El hueco que describe el insight — **rendición de cuentas diaria de movimiento, no detección de caídas** — es real y no está cubierto por ninguno de estos productos.

    **Veredicto: ✅ las alternativas existen con precios verificables y son, efectivamente, reactivas.**

    **Disposición a pagar: la evidencia más fuerte del insight ✅**

    Este es el punto donde el insight está más firme:

    - El **mercado de cuidado de adultos mayores en LATAM valía USD 3,130 millones en 2024** y proyecta **USD 6,880 millones para 2033 (CAGR 9.16%)**, con el segmento más grande en cuidado en el hogar.
    - **Ya hay competidores cobrando por "tranquilidad a distancia"**: *kuidales* (México), *Pulsus* (Chile), *Elder-Care*, y modelos de suscripción activos como Mistatas y Durcal (~€19.92/mes).
    - El hecho de que existan apps construidas específicamente para "el hijo que vive lejos" es la señal de comportamiento más clara: **el mercado ya paga por este dolor, aunque con soluciones reactivas**.

    **Veredicto: ✅ hay disposición a pagar demostrada por un mercado existente, en crecimiento y con suscripciones activas.**

    **Veredicto final: dónde estás sobre roca y dónde sobre arena**

    | Afirmación | Veredicto | Qué hacer |
    |---|---|---|
    | Existen millones de adultos mayores solos/lejos | ✅ | Confirma con INEGI/CONAPO |
    | "Hacen ejercicio solos en casa" | ⚠️ | Proxy; validar con usuarios |
    | Caída cuesta $250,000 | ⚠️ | Reformular como rango $50k–$400k |
    | Soluciones actuales son reactivas | ✅ | Diferénciate de ellas |
    | El hijo paga por tranquilidad a distancia | ✅ | Mercado existente y creciente |

    **Lo que está sobre roca:** el segmento (millones de adultos mayores, muchos solos), la disposición a pagar (mercado de USD 3,130M en crecimiento con competidores cobrando por suscripción), y el hueco de producto (nadie vende rendición de cuentas diaria de movimiento, todos venden detección reactiva).

    **Lo que está sobre arena:** (1) la cifra de $250,000, que debe presentarse como rango; y (2) — lo más crítico — **la suposición central de que el hijo pagará específicamente por verificar el movimiento diario** (no por monitoreo general) y que **el adulto mayor aceptará el artefacto en su rutina**. Eso no está en ninguna fuente pública: es la hipótesis que tu equipo debe probar con entrevistas y un prototipo de humo antes de comprometer los seis meses de desarrollo. No hay dato secundario que lo confirme ni que lo desmienta — y esa es exactamente la parte que vale la pena validar primero.

**Mi decisión:** a partir de aquí cambié la cifra de "$250,000" por un rango, y armé mi Pain-Gain Map centrado en el hijo que vive lejos (ver la versión inicial en la sección 5).

---

### Prompt 5 — Pain-Gain Map (ampliación y cuestionamiento)

**IA utilizada:** Claude — rol de investigador UX especializado en LATAM

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como un investigador de experiencia de usuario... Amplía y cuestiona nuestro Pain-Gain Map (no lo valides). *[Adjunté mi Pain-Gain Map inicial.]*

    1. DOLORES QUE NO VIMOS (mínimo 2 adicionales, normalizados o emocionales, en contexto LATAM)
    2. GANANCIAS QUE SUBESTIMAMOS (mínimo 2 de segundo orden)
    3. EL CRUCE MÁS PODEROSO entre el mapa ampliado

??? example "Respuesta de Claude (clic para desplegar)"
    **PAIN-GAIN MAP COMPLETO**

    **Usuario / segmento:** Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a)

    **DOLORES (ordenados de mayor a menor intensidad):**

    - ⭐ **D1:** El miedo a "la llamada" — vivir con la certeza latente de que un día el teléfono va a sonar con la noticia de que algo pasó, y no saber si esa llamada llegará hoy, en un mes o en cinco años.
    - **D2:** No existe un sistema económico y no invasivo que avise si hubo una caída.
    - **D3:** No saber si mi papá o mamá está bien durante el día genera ansiedad constante.
    - **D4:** La culpa silenciosa de haber normalizado "ya casi no le hablo" o "ya no le pregunto cómo se siente" porque cada llamada de chequeo se siente como una carga para ambos — y admitirlo en voz alta se siente como confesar que no soy buen hijo/a.
    - **D5:** Depender de un vecino, un hermano que sí se quedó en el pueblo/ciudad, o una empleada doméstica para "checar" — y la incomodidad de pedir ese favor recurrente, con la sospecha de que la otra persona ya se cansó de hacerlo pero no lo dice.

    **GANANCIAS (ordenadas de mayor a menor deseo):**

    - ⭐ **G1:** Confirmación diaria de que su familiar mayor está bien y activo.
    - **G2:** Dejar de sentir culpa y ansiedad por no poder estar presentes físicamente.
    - **G3:** Reducir el tiempo de respuesta ante una caída, de horas a minutos.
    - **G4:** Poder estar plenamente presente en su propia vida (trabajo, hijos, pareja) sin el ruido de fondo constante de la preocupación — recuperar atención mental, no solo tranquilidad emocional.
    - **G5:** Tener evidencia objetiva y compartible con hermanos u otros familiares de que "sí estamos cuidando a mamá/papá", lo cual reduce conflictos familiares sobre quién hace más o quién está más pendiente.

    **EL CRUCE MÁS PODEROSO:**

    Dolor ⭐ El miedo a "la llamada" × Ganancia ⭐ Confirmación diaria de que está bien y activo

    Este cruce es el más poderoso porque D1 no es un dolor puntual como una caída — es un estado de fondo permanente que acompaña al hijo/a todos los días, y por eso la solución no puede ser reactiva (avisar cuando algo malo pasa), sino un hábito diario que reemplace la incertidumbre con una señal positiva recurrente. La app y el artefacto no venden "detección de emergencias" (eso ataca D2, un dolor menor y episódico); venden la desaparición diaria y acumulativa del miedo de fondo, que es lo que este usuario paga con gusto porque ya lo paga hoy en ansiedad, llamadas y culpa.

    **LA OPORTUNIDAD EN UNA ORACIÓN:**

    > "Existe una oportunidad para el hijo o hija que vive lejos de un padre mayor que vive solo, que necesita una señal diaria y confiable de que su papá o mamá está bien y activo, sin tener que preguntar, llamar ni sentirse culpable por no estar presente, porque hoy la única forma de saberlo es interrumpir su día para llamar, pedirle el favor a alguien más, o simplemente vivir con la incertidumbre hasta que algo sale mal."

---

### Prompt 6 — SCAMPER explorado

**IA utilizada:** Claude — rol de facilitador senior de innovación disruptiva

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como un facilitador senior de innovación disruptiva... Aplica cada letra de SCAMPER al cruce dolor ⭐ + ganancia ⭐ y genera 2 ideas exploración por letra (Sustituir, Combinar, Adaptar, Modificar al extremo, Poner en otro uso, Eliminar, Reordenar).

??? example "Respuesta de Claude: 14 ideas (clic para desplegar)"
    **SCAMPER EXPLORADO**

    **Usuario:** Hijos/as adultos (35–55) que viven lejos de un padre o madre mayor de 65+ que vive solo(a) · **Dolor ⭐:** El miedo de fondo a "la llamada" que nunca sabe cuándo llegará

    **S — Sustituir**

    - **Idea S1:** En vez de que el artefacto reporte datos ("se movió", "no se movió"), sustituimos el reporte cuantitativo por un mensaje de voz corto grabado por el propio adulto mayor cada mañana — el bastón o el sillón tiene un botón simple que, al activarse por movimiento, invita a grabar 5 segundos de audio. El hijo no recibe una métrica, recibe la voz de su papá diciendo "buenos días, ya me tomé el café" — sustituimos el dato por la evidencia humana, que es lo que realmente calma el miedo.
        *Componente que cambia:* app (deja de mostrar estados/gráficas y se convierte en un feed de audio diario) y artefacto (incorpora micrófono simple, no solo sensor de movimiento).
    - **Idea S2:** Sustituimos la "detección de movimiento" como prueba de bienestar por la "detección de rutina rota" — no medimos si se movió, medimos si hizo lo que siempre hace a la hora que siempre lo hace (levantarse, sentarse a desayunar, salir al patio). Cualquier desviación del patrón —no solo la ausencia total de movimiento— dispara la señal, capturando problemas mucho antes de que se conviertan en una caída.
        *Componente que cambia:* app con IA (el modelo deja de contar pasos/eventos y empieza a aprender y vigilar el patrón de rutina personal de cada usuario).

    **C — Combinar**

    - **Idea C1:** Combinamos el artefacto con el objeto religioso o simbólico que el adulto mayor ya toca diario por costumbre — un altar, una imagen religiosa, un rosario en su buró — en vez de un bastón o tapete "de salud" que puede sentirse como un recordatorio de fragilidad. El sensor se integra a un objeto con carga emocional positiva que la persona ya visita todos los días sin que se lo pidan, eliminando fricción de adopción y el estigma de "ya me pusieron un aparato de viejito".
        *Componente que cambia:* artefacto físico (se rediseña como objeto de significado personal/cultural, no como dispositivo médico).
    - **Idea C2:** Combinamos el negocio con la infraestructura de remesas que ya existe — permitimos que el envío mensual de dinero (vía la app de remesas o transferencia bancaria que el hijo ya usa) active y renueve automáticamente el servicio, y que el recibo de "confirmación de bienestar" llegue empaquetado junto con la confirmación de la remesa. El hijo no gestiona una suscripción nueva; el cuidado se combina con un flujo de dinero que ya es un hábito mensual establecido.
        *Componente que cambia:* canal de venta (se integra como add-on dentro de apps de remesas existentes, no como producto standalone).

    **A — Adaptar**

    - **Idea A1:** Adaptamos la lógica del "Are You OK" check-in de Japón (sistemas comunitarios donde vecinos y comercios locales tienen un protocolo diario de saludo a adultos mayores que viven solos, usado en pueblos con alto envejecimiento) — en vez de que solo la tecnología detecte bienestar, la app coordina un micro-favor diario con un vecino real (la tiendita, la señora de al lado) que confirma con un toque en su celular "sí lo vi hoy", combinando tecnología con la red social que ya existe en el barrio mexicano.
        *Origen de la adaptación:* sistemas comunitarios de "kodokushi prevention" en Japón (prevención de muerte en soledad mediante redes vecinales).
    - **Idea A2:** Adaptamos el modelo de "proof of life" usado en pensiones y seguros de vida internacionales (donde el beneficiario debe demostrar periódicamente que sigue vivo para seguir cobrando) pero invertido a favor emocional en vez de burocrático — convertimos la confirmación diaria en algo gamificado con pequeñas recompensas simbólicas (mensajes de nietos, fotos familiares que se desbloquean) cuando el padre "confirma" su día, dando al adulto mayor una razón propia para participar, no solo ser vigilado.
        *Origen de la adaptación:* procesos de "proof of life" de fondos de pensiones y seguros, rediseñados con mecánicas de gamificación tipo app de fitness.

    **M — Modificar al extremo**

    - **Idea M1:** Llevamos la frecuencia de la señal al extremo opuesto — de "una confirmación al día" a "silencio total, solo alerta por excepción". El hijo no recibe nada mientras todo esté normal; el sistema desaparece completamente de su atención consciente, y solo interrumpe si algo cambia. Llevado al extremo, la app deja de ser algo que se "revisa" y se convierte en un seguro invisible que solo se hace notar cuando importa — cambiando la relación del producto de "otra app que checar" a "tranquilidad que no pide atención".
        *Atributo llevado al límite:* frecuencia de notificación → de diaria a cero (solo excepción).
    - **Idea M2:** Llevamos la confirmación de bienestar al extremo de la presencia física simulada — en vez de una notificación en el celular, el artefacto en casa del hijo (un pequeño objeto en su propio escritorio: una luz, una figura) cambia de estado en tiempo real reflejando el estado del padre, como una lámpara que se enciende suave cada mañana cuando el papá se levantó. Llevado al extremo, el vínculo deja de ser información en una pantalla y se convierte en un segundo artefacto físico —un "objeto espejo"— en la casa del hijo.
        *Atributo llevado al límite:* soporte de la señal → de notificación digital a objeto físico presente en ambos hogares.

    **P — Poner en otro uso**

    - **Idea P1:** Usamos el grupo de WhatsApp familiar que casi todas las familias mexicanas ya tienen y ya usan a diario — la app no reemplaza ese canal, lo alimenta: cada mañana envía automáticamente al grupo familiar (no solo al hijo principal) un mensaje simple de estado, aprovechando un hábito de comunicación que ya existe y donde ya participan hermanos, nueras, nietos, sin pedirle a nadie que instale ni abra una app nueva.
        *Recurso existente del usuario:* el grupo de WhatsApp familiar ya activo y el hábito diario de revisarlo.
    - **Idea P2:** Usamos la rutina religiosa o de misa diaria que gran parte de este segmento de adultos mayores mexicanos ya tiene — muchos salen a misa, al mercado o a un rezo comunitario a una hora fija. En vez de exigir que el adulto mayor "active" algo dentro de casa, el artefacto puede vivir en su llavero o bolsa (ya sale de casa a diario por una razón social propia) y confirma bienestar simplemente por el hecho de salir, aprovechando un hábito de salida que ya existe en vez de crear uno nuevo de "ejercicio".
        *Recurso existente del usuario:* la salida diaria habitual a misa, mandado o actividad comunitaria.

    **E — Eliminar**

    - **Idea E1:** Eliminamos por completo la necesidad de que el adulto mayor haga cualquier acción intencional — sin botones que presionar, sin apps que abrir, sin nada que "recordar hacer". El artefacto solo detecta pasivamente desde un objeto que ya toca por inercia (su taza de café de siempre, su control remoto). El valor mejora porque elimina el mayor punto de fallo de estos productos: que el usuario de edad avanzada se olvide, se resista o abandone el paso manual.
        *Qué se elimina y por qué el valor mejora:* se elimina la acción intencional del adulto mayor → sube la adherencia real porque no depende de memoria ni disposición de una persona de 70+ años.
    - **Idea E2:** Eliminamos la dependencia de conectividad WiFi/smartphone en casa del padre — muchos hogares de adultos mayores en México, sobre todo fuera de zonas urbanas, no tienen WiFi estable ni nadie que lo configure. Usamos conectividad celular/LoRa de bajo consumo integrada directo en el artefacto, eliminando el paso de "instalar y mantener internet en casa de mamá", que hoy es una barrera de adopción silenciosa que nadie menciona en las entrevistas pero mata la instalación real.
        *Qué se elimina y por qué el valor mejora:* se elimina la dependencia de WiFi doméstico → se elimina la barrera de instalación/soporte técnico que hoy frena la adopción en el segmento con menor alfabetización digital.

    **R — Reordenar**

    - **Idea R1:** Invertimos quién paga y quién configura: hoy asumimos que el hijo compra, configura remotamente y el padre solo usa; reordenamos para que sea el padre quien regale el producto al hijo como forma de "ya no te preocupes por mí" — cambiando el marco de "te vigilo" (que genera resistencia y sensación de pérdida de autonomía en el adulto mayor) a "te doy tranquilidad" (un regalo de independencia y cuidado que el padre ofrece con orgullo, no que recibe con resignación).
        *Qué se invierte:* quién inicia y regala el producto — de hijo-comprando-para-vigilar a padre-regalando-para-tranquilizar.
    - **Idea R2:** Invertimos cuándo ocurre la intervención principal: en vez de que el sistema opere en tiempo real todo el día, concentramos toda la inteligencia en generar un solo resumen de cierre de día (a las 8pm, por ejemplo) que el hijo recibe una sola vez, como un "parte de guerra" diario en vez de un flujo constante. Esto reordena el momento de valor de "disponibilidad continua" a "ritual de cierre", reduciendo ansiedad de estar pendiente todo el día y convirtiendo el chequeo en un hábito nocturno predecible, como leer las noticias antes de dormir.
        *Qué se invierte:* momento de entrega del valor — de notificación en tiempo real dispersa a un único ritual diario a hora fija.

**Mi decisión:** de las 14 ideas elegí **E1, S2, M1 y E2** para el remix, porque las cuatro atacan las razones por las que estos productos se abandonan: que el adulto mayor tenga que hacer algo, que se mida lo que no importa, que el hijo tenga que estar revisando y que no haya WiFi.

---

### Prompt 7 — Remix de ideas

**IA utilizada:** Claude — rol de sintetizador de conceptos de negocio

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como un sintetizador de conceptos de negocio... Genera 3 conceptos remix cruzando las ideas SCAMPER elegidas (E1, S2, M1, E2). Cada remix debe cruzar al menos 2 ideas y generar un concepto que no existía en ninguna por separado.

??? example "Respuesta de Claude (clic para desplegar)"
    **REMIX DE IDEAS**

    **Base:** Existe una oportunidad para el hijo o hija que vive lejos de un padre mayor que vive solo, que necesita una señal diaria y confiable de que está bien y activo, sin tener que preguntar, llamar ni sentirse culpable — porque hoy la única forma de saberlo es interrumpir su día, pedir el favor a alguien más, o vivir con la incertidumbre hasta que algo sale mal.

    **REMIX 1 — El Gemelo de Rutina**

    *Ideas cruzadas:* E1 + S2

    *Concepto:* Un artefacto que vive en un objeto que el adulto mayor ya toca por inercia (su taza, su sillón, su control remoto) no reporta eventos aislados — construye, sin que nadie configure nada, un "gemelo de rutina": el patrón único de esa persona (a qué hora se levanta, cuánto tiempo pasa en la cocina, cuándo sale al patio). El negocio no vende "confirmación de movimiento", vende un perfil de normalidad cada vez más preciso, tan personal que solo esa familia lo entendería como significativo. La app con IA no muestra datos crudos al hijo; le muestra una sola pregunta respondida todos los días con la certeza de un patrón aprendido: "¿hoy fue un día como cualquier otro?" — y el canal de venta ya no promete un sensor, promete que el sistema "conoce a mamá" mejor que una app genérica de salud.

    *Lo que el cruce genera que ninguna idea sola tenía:* E1 por sí sola resuelve adopción pasiva, y S2 por sí sola resuelve qué medir — juntas generan un producto cuyo valor crece con el tiempo de uso (entre más días pasan, más fino es el conocimiento del patrón), convirtiendo el artefacto en algo insustituible por la competencia porque un producto nuevo empezaría de cero sin ese historial.

    **REMIX 2 — El Seguro que se Olvida que Existe**

    *Ideas cruzadas:* M1 + E2

    *Concepto:* Un artefacto con conectividad celular/LoRa propia, que no depende de que nadie en casa de mamá sepa configurar WiFi, combinado con una app que guarda absoluto silencio salvo por excepción. El resultado es un producto que se instala una sola vez, en cualquier casa de México sin importar qué tan rural o desconectada esté, y que después desaparece completamente de la vida digital del hijo — ni notificación diaria, ni pantalla que revisar, ni mantenimiento técnico que pedirle a nadie. El canal de venta deja de vender "una app de monitoreo" y empieza a vender "instala una vez, olvídate para siempre" — el argumento de venta es la ausencia total de fricción técnica y de atención continua, algo que ningún competidor con dependencia de WiFi/smartphone puede prometer honestamente.

    *Lo que el cruce genera que ninguna idea sola tenía:* M1 resuelve la fricción de atención y E2 resuelve la fricción de instalación — juntas eliminan las dos únicas razones reales por las que este tipo de producto se abandona en los primeros tres meses (cansancio de revisar la app + falla técnica de conectividad), algo que ninguna de las dos ideas lograba por separado.

    **REMIX 3 — El Seguro que Paga Otro**

    *Ideas cruzadas:* S2 + M1 + E2

    *Concepto:* El sistema completo —detección pasiva de rotura de rutina, silencio salvo por excepción, conectividad independiente de WiFi— deja de venderse únicamente al hijo como suscripción mensual y se convierte en un producto que instituciones pagan para reducir su propio costo: aseguradoras de gastos médicos mayores, fondos de pensiones o incluso hospitales privados, que hoy absorben los ~$250,000 de una fractura por caída no prevenida. El adulto mayor lo recibe gratis o subsidiado como parte de su póliza o pensión, el hijo lo usa sin pagar directamente (solo recibe la alerta por excepción), y quien paga es la institución que se ahorra el costo catastrófico río abajo. El canal de venta deja de ser una landing page dirigida a hijos individuales y se convierte en un canal B2B2C: se vende una vez a la aseguradora, y esta lo distribuye a miles de asegurados mayores de 65 años.

    *Lo que el cruce genera que ninguna idea sola tenía:* Ninguna de las tres ideas por separado tocaba el modelo de pago — juntas hacen evidente que el verdadero interesado económico en prevenir la caída no es solo el hijo con culpa, sino la institución que paga la factura hospitalaria, lo cual cambia radicalmente quién compra, a qué escala y con qué ciclo de venta (uno institucional en vez de miles de decisiones individuales).

---

### Prompt 8 — Filtro DVN (Deseable / Novedoso / Viable)

**IA utilizada:** Claude — rol de evaluador crítico de conceptos de negocio

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como un evaluador crítico... Evalúa cada concepto (A, B, C) bajo el filtro DVN: 🔴 Deseable / 🟣 Novedoso / 🟢 Viable, con justificación específica y una pregunta clave por lente. Recomienda un concepto para el Paso 5.

??? example "Respuesta de Claude (clic para desplegar)"
    **FILTRO DVN**

    **CONCEPTO A — El Gemelo de Rutina**

    - 🔴 **Deseable: ✅**
        *Justificación:* Ataca directamente el dolor ⭐ mejor que cualquier alternativa actual — no vende un dato aislado ("se movió/no se movió"), sino una respuesta a la pregunta emocional real del hijo ("¿fue un día normal?"). Es plausible que pague porque el precio percibido no es por un sensor, es por la sensación de conocer a su padre a distancia, algo que hoy no existe ni con llamadas diarias.
        *Pregunta que el equipo debe responder:* ¿Cuántos días de datos se necesitan para que el "gemelo de rutina" sea confiable, y qué le mostramos al hijo mientras tanto sin generar falsas alarmas o falsa calma?
    - 🟣 **Novedoso: ⚠️**
        *Justificación:* La detección de patrones de actividad en el hogar para adultos mayores existe (sensores de presencia tipo Essence SmartCare, CarePredict en EU, algunos pilotos con IMSS/ISSSTE) — el enfoque de "aprendizaje de rutina sin configuración" no es inédito a nivel mundial, aunque sí lo es en México con este nivel de accesibilidad y sin marco institucional/clínico.
        *Pregunta que el equipo debe responder:* ¿Cuál es la barrera de entrada real contra un jugador internacional (CarePredict, Essence) que decida entrar a México, y qué defensibilidad tenemos más allá de ser primeros?
    - 🟢 **Viable: ⚠️**
        *Justificación:* El hardware (sensor de movimiento/presencia en un objeto cotidiano) es construible en 6 meses con las capacidades descritas; lo arriesgado es la IA de "aprendizaje de patrón personal sin configuración" — requiere semanas de datos reales por hogar antes de ser confiable, lo cual complica un MVP demostrable rápido y una demo de venta convincente en el corto plazo.
        *Pregunta que el equipo debe responder:* ¿Podemos lanzar un MVP con reglas simples (umbrales, horarios básicos) que simule "aprendizaje" de forma creíble mientras la IA real de patrón madura con los primeros usuarios?

    **Puntaje DVN:** ✅✅ de 3 (1 ⚠️⚠️)
    **Veredicto:** refinar antes — el concepto es fuerte pero necesita simplificarse en el MVP para no depender de semanas de datos antes de mostrar valor.

    ---

    **CONCEPTO B — El Seguro que se Olvida que Existe**

    - 🔴 **Deseable: ⚠️**
        *Justificación:* El silencio total y la instalación sin fricción son atractivos, pero hay un riesgo real de deseabilidad: parte del dolor ⭐ no es solo "saber que está bien" sino el ritual mismo de sentirse conectado — un sistema que "desaparece por completo" podría generar ansiedad de "¿sigue funcionando?" en vez de tranquilidad, especialmente los primeros meses sin confianza establecida en el producto.
        *Pregunta que el equipo debe responder:* ¿Cómo confirmamos al hijo, sin romper el "silencio", que el sistema sigue activo y no simplemente dejó de funcionar (batería, señal, artefacto movido)?
    - 🟣 **Novedoso: ✅**
        *Justificación:* La combinación específica de conectividad celular/LoRa independiente + silencio por excepción para este segmento y este dolor emocional (no solo alerta de emergencia, sino ausencia de necesidad de checar) no tiene un competidor directo identificable en México — los productos de teleasistencia existentes (botones de pánico, pulseras SOS) son reactivos y requieren configuración de WiFi o app activa.
        *Pregunta que el equipo debe responder:* ¿Qué tan defendible es esta ventaja de "cero fricción de instalación" una vez que un competidor la copie — es una ventaja de producto o solo de time-to-market?
    - 🟢 **Viable: ✅**
        *Justificación:* Es el concepto más directamente construible en 6 meses — LoRa/celular de bajo consumo y detección de excepción son problemas técnicos bien acotados y dentro de las capacidades declaradas (ESP32, PCB, hardware conectado), sin depender de un modelo de IA que necesite madurar con datos.
        *Pregunta que el equipo debe responder:* ¿Qué costo real tiene la conectividad celular por dispositivo por mes en México, y ese costo es sostenible dentro del precio que el hijo está dispuesto a pagar?

    **Puntaje DVN:** ✅✅ de 3 (1 ⚠️)
    **Veredicto:** llevar al Paso 5 — es el más ejecutable, con un riesgo de deseabilidad claro y acotado que se puede resolver con diseño (ej. un "heartbeat" visual mínimo sin romper el silencio).

    ---

    **CONCEPTO C — El Seguro que Paga Otro**

    - 🔴 **Deseable: ⚠️**
        *Justificación:* Es muy deseable para la institución pagadora (ahorro de $250,000 por fractura evitada es un caso de negocio claro), pero es incierto si es deseable para el hijo — si el producto llega "gratis" vía la aseguradora del padre, el hijo pierde la sensación de agencia y regalo personal que hace tan fuerte al insight original ("yo cuido a mi papá"), y podría sentirse como un trámite de la aseguradora más que como un acto de cuidado propio.
        *Pregunta que el equipo debe responder:* ¿El hijo valora igual una señal de tranquilidad que vino de la aseguradora del padre vs. una que él mismo eligió y pagó?
    - 🟣 **Novedoso: ✅**
        *Justificación:* Modelos B2B2C de dispositivos de monitoreo pagados por aseguradoras existen en mercados desarrollados (EU, algunos programas de Medicare Advantage), pero en México, con aseguradoras de gastos médicos mayores o AFOREs subsidiando prevención de caídas vía hardware conectado, no hay un jugador establecido — es genuinamente poco explorado en este mercado.
        *Pregunta que el equipo debe responder:* ¿Existe ya alguna aseguradora o AFORE mexicana con apetito y presupuesto para pilotos de prevención, o habría que crear esa categoría desde cero con ellas?
    - 🟢 **Viable: ❌**
        *Justificación:* Un ciclo de venta B2B2C con aseguradoras o instituciones de salud en México toma típicamente 12–24 meses (comités de compra, pilotos, cumplimiento regulatorio, integración con sus sistemas) — es estructuralmente incompatible con un MVP comercializable en 6 meses, sin importar qué tan bien construidos estén los otros dos componentes.
        *Pregunta que el equipo debe responder:* ¿Podemos validar la hipótesis de pago institucional con una aseguradora de forma informal (carta de intención, piloto no vinculante) sin depender de cerrar venta real en los 6 meses?

    **Puntaje DVN:** ✅ de 3 (2 ⚠️/❌)
    **Veredicto:** descartar (para el MVP de 6 meses) — guardar como visión de escalamiento una vez que B o A tengan tracción con usuarios reales que sirvan de evidencia ante una aseguradora.

    ---

    **CONCEPTO RECOMENDADO PARA EL PASO 5**

    **Nombre:** El Seguro que se Olvida que Existe (Concepto B)

    **Por qué este:** Es el único con viabilidad clara en la ventana de 6 meses sin depender de meses de datos para entrenar un modelo (a diferencia de A) ni de un ciclo de venta institucional imposible en ese plazo (a diferencia de C), y su propuesta de "instala una vez, olvídate para siempre" es genuinamente novedosa frente a la teleasistencia reactiva que existe hoy en México.

    **Riesgo principal a vigilar:** el lente más débil es deseable — el riesgo de que el silencio total se perciba como "no sé si sigue funcionando" en vez de tranquilidad; el Paso 5 debería probar con usuarios reales una señal mínima de "estoy vivo y funcionando" (ej. un check semanal silencioso) que no rompa la promesa central de cero fricción.

**Mi decisión:** llevé el concepto B al siguiente paso y descarté C, aunque era atractivo, porque no cabe en los 6 meses del MVP.

---

### Prompt 9 — Verificación de deseabilidad

**IA utilizada:** Perplexity — rol de investigador de mercado que valida deseabilidad con evidencia observable

??? question "Mi prompt (clic para desplegar)"
    Actúa como un investigador de mercado especializado en validar la deseabilidad de oportunidades de negocio en América Latina usando evidencia de comportamiento observable — no proyecciones ni opiniones de expertos. Tu metodología consiste en buscar señales concretas de que un problema existe y duele lo suficiente como para que alguien pague por resolverlo: pagos actuales a soluciones imperfectas, comunidades activas, frecuencia documentada, costo cuantificable y workarounds en uso. Si la evidencia no existe o es débil, lo dices directamente.

    Somos emprendedores en México construyendo un negocio con tres componentes: una aplicación con IA, un artefacto físico inteligente y una página web de venta. Desarrollamos el siguiente concepto a partir de un proceso de investigación de oportunidades y necesitamos verificar si tiene deseabilidad real antes de comprometer seis meses de desarrollo.

    **NUESTRO CONCEPTO:**

    **Nombre:** [El Seguro que se Olvida que Existe]

    **Descripción:** [*Aquí pegué la evaluación DVN completa del Concepto B: Deseable ⚠️, Novedoso ✅, Viable ✅, con sus justificaciones y preguntas.*]

    **Usuario / segmento:** [Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a)]

    **Dolor que resuelve:** [la incertidumbre de no saber si su padre o madre sufrió una caída y no poder actuar rápido para ayudarle, sin tener que llamarlo o visitarlo constantemente.]

    **Ganancia que entrega:** [tranquilidad diaria verificable, saber en tiempo real que su familiar está bien, sin invadir su privacidad ni interrumpir su día a día.]

    Verifica cada una de las 5 señales de deseabilidad con evidencia real y observable. Para cada señal busca en fuentes primarias: comunidades online, grupos de Facebook, foros especializados, canales de YouTube, reseñas de productos similares, reportes de industria, datos del INEGI, BID, CEPAL u organismos sectoriales relevantes.

    - **SEÑAL 1 — PAGO ACTUAL POR SOLUCIONES IMPERFECTAS:** ¿Hay evidencia de que este segmento ya paga por algo que resuelve parcialmente este problema, aunque sea caro, incómodo o insuficiente? Busca: productos o servicios que el usuario contrata hoy, precios reales, frecuencia de contratación.
    - **SEÑAL 2 — COMUNIDADES ACTIVAS:** ¿Existen comunidades online donde este segmento hable de este problema, busque soluciones o se queje de las alternativas actuales? Busca: grupos de Facebook, subreddits, foros, canales de YouTube, hashtags, con ejemplos concretos de publicaciones o conversaciones relacionadas.
    - **SEÑAL 3 — FRECUENCIA DEL PROBLEMA:** ¿Con qué regularidad experimenta este usuario este problema específico? ¿Hay datos documentados de frecuencia? Busca: reportes operativos, estudios sectoriales, testimonios o cualquier fuente que indique periodicidad.
    - **SEÑAL 4 — COSTO OBSERVABLE:** ¿Cuánto le cuesta al usuario NO resolver este problema? Busca: pérdidas documentadas, costos de workarounds actuales, seguros contratados por este riesgo, tiempo invertido con costo calculable.
    - **SEÑAL 5 — WORKAROUNDS EN USO:** ¿Hay evidencia de que el usuario ya inventó soluciones caseras, adaptaciones o procesos manuales para lidiar con este problema? Busca: descripciones de procesos no estándar, productos adaptados de otras industrias, soluciones "artesanales" documentadas en comunidades o reportes.

    **FORMATO DE SALIDA** — *(plantilla con un bloque por señal: evidencia encontrada, ejemplo o fuente, y veredicto ✅ confirmada / ⚠️ parcial / ❌ no encontrada; al final un resumen con el número de señales confirmadas, parciales y ausentes)*

??? example "Respuesta de Perplexity (clic para desplegar)"
    **VERIFICACIÓN DE DESEABILIDAD**

    **Concepto:** El Seguro que se Olvida que Existe · **Segmento:** Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a)

    **SEÑAL 1 — Pago por soluciones imperfectas**

    *Evidencia encontrada:* Existen múltiples servicios de teleasistencia y monitoreo remoto para adultos mayores con suscripciones mensuales activas en México y LATAM. En México, "Estoy Bien" ofrece monitoreo telefónico diario con planes de $299–$399 mensuales. Care 60+ vende membresías de salud para adultos mayores desde $850 mensuales. En Chile, Quida cobra $15,990–$29,990 CLP mensuales (~$17–$32 USD) por monitoreo inteligente. A nivel global, los sistemas de monitoreo para adultos mayores tienen suscripciones de $20–$50 mensuales para alertas básicas, $50–$100 para monitoreo intermedio, y $100–$300+ para sistemas avanzados con IA.

    *Ejemplo específico:* Estoy Bien (México) — app de monitoreo telefónico diario con plan mensual de $299 MXN (~$17 USD), ofrece prueba gratuita de 14 días y renovaciones automáticas.

    *Veredicto:* ✅ confirmada

    **SEÑAL 2 — Comunidades activas**

    *Evidencia encontrada:* Existen comunidades online activas de cuidadores de adultos mayores en Facebook y Reddit. En Facebook, grupos como "Cuidemos al cuidador" (México) publican regularmente sobre el agotamiento y la necesidad de apoyo. Grupos como "CUIDADORES DE ADULTO MAYOR CDMX" y "Alzheimer Monterrey" organizan sesiones de apoyo cada 15 días por Zoom. En Reddit, los subreddits r/AgingParents, r/CaregiverSupport y r/GenX tienen hilos activos de hijos que cuidan a distancia, con publicaciones específicas sobre "Long distance only child of aging parents" y "Remote Care for Elderly Parents". AARP Family Caregivers Discussion Group en Facebook tiene más de 19,000 miembros y discusiones activas sobre cuidado a distancia.

    *Tamaño aproximado de la comunidad:* AARP Family Caregivers (Facebook) — 19,000+ miembros. Grupos mexicanos de Alzheimer y cuidadores — decenas a cientos de miembros por grupo local.

    *Veredicto:* ✅ confirmada

    **SEÑAL 3 — Frecuencia del problema**

    *Evidencia encontrada:* La frecuencia del problema está documentada en múltiples dimensiones. Caídas: el IMSS atiende más de 250,000 lesiones por caídas en adultos mayores anualmente en traumatología y ortopedia, lo que equivale a ~700 casos diarios. Monitoreo: los servicios de verificación familiar recomiendan check-ins diarios como estándar — "agree on a brief daily touchpoint" (mañana o noche). El artículo "How to Check On an Aging Parent Every Day Without Calling Them" describe explícitamente la necesidad de verificación diaria. Guías para cuidadores a distancia recomiendan 2 micro check-ins semanales + 1 llamada profunda semanal + 1 ritual compartido.

    *Periodicidad:* diaria (check-ins de seguridad) / semanal (llamadas profundas)

    *Veredicto:* ✅ confirmada

    **SEÑAL 4 — Costo observable**

    *Evidencia encontrada:* El costo de no resolver el problema se manifiesta en tres dimensiones documentadas. (1) Costo directo de emergencias: una fractura de cadera en hospital privado medio cuesta $150,000–$260,000 MXN, y hasta $280,000–$420,000 en hospitales premium. El IMSS reporta ~10,000 pacientes anuales con fractura de cadera por caídas. (2) Costo de workarounds actuales: sistemas de monitoreo con sensores cuestan $200–$500 de setup + $20/mes = $440–$740 primer año; GPS tracking $30/mes = $360/año. Teleasistencia privada en España/LATAM: 18–35 euros mensuales + cuota de alta. (3) Costo emocional: artículos como "The Guilt of Not Checking on Your Aging Parent Daily" documentan el costo psicológico del cuidador a distancia.

    *Tipo de costo:* dinero ($150k–$420k por fractura; $200–$500 setup + $20–$50/mes monitoreo) / tiempo (llamadas diarias/semanales) / riesgo (caídas no detectadas) / calidad (culpa, ansiedad del cuidador)

    *Veredicto:* ✅ confirmada

    **SEÑAL 5 — Workarounds en uso**

    *Evidencia encontrada:* Las familias ya inventaron soluciones caseras y procesos manuales para monitorear a distancia. Los workarounds más comunes documentados son: (1) "Establish a Simple Daily Routine" — acordar un mensaje/texto/call diario en hora fija ("I'm OK" message). (2) "Daily check-in app" — apps donde el padre toca un botón una vez al día y el hijo recibe confirmación o alerta automática. (3) "Coordinate with Neighbors or Local Contacts" — red de vecinos/amigos que verifican físicamente. (4) "The Reassurance Ladder" — protocolo familiar escrito con pasos de escalación: quién se llama primero, quién tiene llave, quién puede ir a tocar la puerta. (5) Cámaras de seguridad domésticas (Eufy, etc.) instaladas por hijos para monitoreo visual remoto.

    *Dónde se documentó:* Guías de cuidado a distancia (imalive.co, tapokie.com, snugsafe.com), artículos de configuración de cámaras para padres mayores.

    *Veredicto:* ✅ confirmada

    **RESUMEN**

    - Señales confirmadas ✅: 5
    - Señales parciales ⚠️: 0
    - Señales ausentes ❌: 0

    **INTERPRETACIÓN PARA EL EQUIPO**

    Las 5 señales de deseabilidad están confirmadas con evidencia observable. Esto no significa que el concepto vaya a funcionar — significa que el dolor existe, duele lo suficiente para que alguien pague, y ya hay workarounds activos que tu producto podría reemplazar.

    *Lo que esto valida:*

    - El segmento paga hoy por teleasistencia reactiva ($20–$50/mes global, $299–$850 MXN/mes en México)
    - Hay comunidades activas donde este dolor se discute diariamente (Facebook, Reddit, grupos de Alzheimer)
    - La frecuencia es diaria (check-ins) y el costo de la emergencia es catastrófico ($150k–$420k MXN)
    - Las familias ya inventaron protocolos manuales (llamadas diarias, vecinos, cámaras, apps de check-in)

    *Lo que esto NO valida (y necesitas probar con usuarios):*

    - Que el hijo pague específicamente por un sistema que "desaparece" (silencio por excepción) vs. uno que notifica diariamente
    - Que el padre acepte un artefacto físico que no requiere interacción
    - Que la ventaja de "cero fricción de instalación" sea defendible o solo temporal

    Tu siguiente paso no es más investigación secundaria — es poner el concepto frente a 10–15 hijos que ya pagan por teleasistencia o hacen llamadas diarias, y preguntar: "¿Esto resolvería tu problema mejor que lo que ya haces?"

    *(Perplexity consultó 44 fuentes.)*

---

### Prompt 10 — Diagnóstico de deseabilidad

**IA utilizada:** Claude — rol de mentor de emprendimiento

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como un mentor de emprendimiento... Interpreta la verificación de deseabilidad (5 señales confirmadas con evidencia): 1) diagnóstico de deseabilidad, 2) riesgo de suicidio creativo, 3) mapa de 3 hipótesis falseables para probar con usuarios en la semana siguiente. *[Adjunté la respuesta de Perplexity del Prompt 9.]*

??? example "Respuesta de Claude (clic para desplegar)"
    **DIAGNÓSTICO DE DESEABILIDAD**

    **Concepto:** El Seguro que se Olvida que Existe

    **NIVEL DE DESEABILIDAD ACTUAL:**

    Medio — evidencia sólida en las 5 señales genéricas del problema, pero cero evidencia específica sobre el elemento que hace único a este concepto (el silencio por excepción). Es zona de riesgo controlable, no descarte, pero tampoco luz verde para construir.

    **FORTALEZA PRINCIPAL:**

    Señal 4 (costo observable) es la mejor fundamentada, con cifras cruzadas de múltiples fuentes ($150k–$420k MXN por fractura vs. $200–$740/año en soluciones actuales) — esto confirma que el margen entre lo que cuesta prevenir y lo que cuesta no prevenir es enorme, lo cual sostiene un precio de suscripción con espacio de sobra para ser rentable sin que se sienta caro frente al riesgo evitado.

    **RIESGO PRINCIPAL:**

    La señal 5 (workarounds) es, en la letra chica, la más peligrosa para este concepto específico: los cinco workarounds documentados (mensaje diario, apps de botón, red de vecinos, escalera de reaseguro, cámaras) son todos de confirmación activa y frecuente — nadie en la evidencia describe un workaround de "silencio, avísame solo si algo cambia". Eso no invalida el concepto, pero sí significa que la hipótesis central del negocio — que el hijo prefiere el silencio sobre la confirmación diaria — no tiene ni un solo dato de respaldo en la investigación secundaria; es una apuesta de diseño, no un hallazgo.

    **PATRÓN DE LAS SEÑALES:**

    El problema existe, duele y ya se paga por él — eso está fuera de duda. Pero el patrón muestra que el comportamiento ya validado del mercado es exactamente el opuesto al que tu concepto apuesta: la gente que ya paga, paga por check-ins diarios activos (Estoy Bien, apps de botón), no por sistemas silenciosos. Esto no significa que el silencio sea mala idea — puede ser precisamente el ángulo no obvio que nadie ha probado — pero significa que estás pidiéndole al mercado un cambio de comportamiento respecto a lo que ya demostró que prefiere, y eso es una hipótesis de mayor riesgo que "vender lo mismo que ya compran, mejor".

    ---

    **RIESGO DE SUICIDIO CREATIVO**

    *Tipo más probable:* [X] Producto sin dolor real — el usuario lo aprobaría pero no cambiaría su comportamiento para tenerlo

    *Nivel de riesgo:* Medio

    *Por qué:* El dolor es real y confirmado (señales 1–5), así que no es un producto inventado sobre un problema inexistente. Pero el riesgo específico es que el hijo, en la práctica, diga que quiere silencio y tranquilidad ("no quiero otra app que revisar") y sin embargo, en el momento de instalar el producto real, revise obsesivamente la app los primeros meses porque no confía todavía en el silencio — convirtiendo la ventaja de diseño (M1: silencio) en un dolor nuevo de ansiedad no resuelta, tal como ya señaló el propio filtro DVN.

    *Cómo reducirlo:* Antes de la próxima entrevista, revisa las reseñas y quejas públicas (Google Play, App Store, grupos de Facebook) de "Estoy Bien" y de apps similares de check-in diario en México — busca específicamente comentarios de usuarios que digan "ya no quiero revisar esto todos los días" o "quisiera que solo me avisara si pasa algo". Si ese sentimiento aparece espontáneamente en reseñas reales, la hipótesis del silencio gana peso sin haber construido nada; si no aparece ninguna queja de ese tipo, es una señal de alerta temprana antes de las entrevistas.

    ---

    **MAPA DE HIPÓTESIS**

    **HIPÓTESIS 1 — sobre el dolor**

    "Creemos que un hijo/a de 35–55 años con un padre/madre de 65+ que vive solo revisa mentalmente o físicamente '¿estará bien?' varias veces por semana (no solo en la llamada programada), y que ese ruido de fondo le cuesta atención y tranquilidad — no solo dinero — porque no tiene ninguna señal objetiva entre llamadas. Si esto es falso, nuestro concepto necesita dejar de venderse como alivio de ansiedad diaria y replantearse como una herramienta puramente reactiva de emergencia."

    *Cómo probarla:* Preguntar directamente: "¿Cuántas veces en una semana normal piensas o te preocupas por cómo está tu papá/mamá, aparte de cuando lo llamas?" — y observar si la respuesta es espontánea y frecuente (varias veces al día/semana) o si solo lo piensan en el momento de la llamada programada.

    **HIPÓTESIS 2 — sobre la solución**

    "Creemos que este hijo/a preferiría un sistema que se mantiene en silencio y solo avisa por excepción, sobre un check-in diario activo tipo 'Estoy Bien', porque no quiere agregar una tarea más a su rutina diaria de revisión. Si esto es falso, nuestro concepto necesita incorporar una confirmación positiva mínima y periódica (no solo alertas negativas) para no generar la ansiedad de '¿sigue funcionando?' que el propio filtro DVN identificó como riesgo."

    *Cómo probarla:* Presentar dos escenarios cortos en la entrevista — "Imagina que no recibes nada de la app salvo si algo sale mal" vs. "Imagina que cada mañana recibes un mensaje de que todo está bien" — y preguntar cuál elegiría y por qué, dejando que explique la razón sin sugerirla.

    **HIPÓTESIS 3 — sobre el pago**

    "Creemos que este hijo/a estaría dispuesto a pagar entre $300–$600 MXN mensuales por este sistema (en línea con lo que ya pagan por Estoy Bien o Care 60+), porque ya demuestra disposición real a pagar por soluciones de monitoreo imperfectas hoy. Si esto es falso —si esperan pagarlo una sola vez o esperan que sea gratis vía el padre—, nuestro concepto necesita replantear el modelo de precio hacia un pago único de hardware más una cuota simbólica, o buscar el pago institucional explorado en el Concepto C."

    *Cómo probarla:* Preguntar: "¿Cuánto pagas hoy, o pagarías, por algo que te confirme diariamente que tu papá/mamá está bien sin que tengas que llamarle?" — y comparar la cifra espontánea contra el rango de $299–$850 MXN ya validado en el mercado, antes de mencionar cualquier precio propio.

    ---

    **VEREDICTO FINAL**

    El concepto necesita ajuste antes de entrevistar: la evidencia confirma que el dolor y el mercado son reales, pero el elemento diferenciador del concepto (el silencio por excepción) no tiene ningún respaldo en la investigación secundaria y contradice el comportamiento ya validado de los workarounds existentes, así que debe entrar a las entrevistas explícitamente como hipótesis a refutar, no como característica ya decidida.

**Mi decisión:** el concepto entra a la semana 3 como hipótesis a probar, no como algo decidido. Las 3 hipótesis pasaron al Reporte de Oportunidad (sección 8).

---

## 3. Oportunidades encontradas

| # | Oportunidad | Problema identificado | Comentarios |
|---|---|---|---|
| 1 | Prevención de caídas | 47.8% de mayores de 65 cayó en los últimos 6 meses; fractura hasta $250,000 MXN | Elegida como puerta de entrada del concepto final |
| 2 | Sarcopenia | 13–46% de prevalencia; pérdida de ~6% de masa muscular por década desde los 45 | Baja adherencia al gimnasio tradicional en este segmento |
| 3 | Osteoartrosis de rodilla | 10–20% de prevalencia en 65–74 años; hasta 80% en mayores de 80 | Fisioterapia presencial cara y episódica |
| 4 | Ejercicio en enfermedades crónicas | Diabetes 18.3%, hipertensión 43.3% en 50+; indicación médica sin plan ejecutable | Mayor volumen de mercado, requiere más educación |

---

## 4. Insight de oportunidad

**¿Quién tiene el problema?**
Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a) en México.

**¿Cuál es el problema?**
El miedo constante a "la llamada": no saber si su padre/madre está bien durante el día, sin ninguna señal objetiva entre llamadas o visitas.

**¿Qué les cuesta no resolverlo?**
Ansiedad y culpa diaria; en el peor caso, una fractura de cadera por caída no prevenida cuesta entre $150,000 y $420,000 MXN en atención hospitalaria en México.

**¿Por qué las soluciones actuales no bastan?**
Los workarounds actuales (llamadas diarias, favores a vecinos, cámaras domésticas) exigen esfuerzo activo y constante del hijo, generan fatiga y no dan certeza objetiva. Los servicios de teleasistencia existentes (ej. "Estoy Bien") son reactivos y dependen de que el adulto mayor recuerde participar.

**¿Dónde está la oportunidad?**
Entre "llamar todos los días para checar" (esfuerzo activo, sin certeza) y "esperar hasta que algo salga mal" (certeza tardía y catastrófica), hay espacio para un sistema pasivo que detecta la rutina diaria del adulto mayor sin que él tenga que hacer nada, y que solo interrumpe al hijo cuando algo realmente cambia.

---

## 5. Pain-Gain Map

**Usuario:** Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a).

### Versión inicial (antes de pasarla por la IA)

Este fue el mapa que hice primero, con 3 dolores y 3 ganancias:

| Dolores | Ganancias |
|---|---|
| **D1.** No saber si mi papá o mamá está bien durante el día genera ansiedad constante. | **G1.** Confirmación diaria de que su familiar mayor está bien y activo. |
| **D2.** No existe un sistema económico y no invasivo que avise si hubo una caída. | **G2.** Reducir el tiempo de respuesta ante una caída, de horas a minutos. |
| **D3.** Llamar o visitar seguido para "checar" es lento y no da certeza inmediata; a veces piden a un vecino que revise. | **G3.** Dejar de sentir culpa y ansiedad por no poder estar presentes físicamente. |

**El espacio sin cubrir:**

- **El dolor más intenso es** la incertidumbre de no saber si su padre o madre sufrió una caída, y no poder actuar rápido para ayudarle, sin tener que llamarlo o visitarlo constantemente.
- **La ganancia más deseada es** tranquilidad diaria verificable: saber en tiempo real que su familiar está bien, sin invadir su privacidad ni interrumpir su día a día.

> Existe una oportunidad para hijos adultos que viven lejos de sus padres mayores, que necesitan una forma de verificar diariamente y en tiempo real que su padre o madre está bien y a salvo de caídas, porque hoy no cuentan con un sistema no invasivo, económico y confiable para monitorear su bienestar a distancia.

### Versión final (ampliada con el Prompt 4)

Después de que la IA cuestionó el mapa, agregué 2 dolores y 2 ganancias, y el dolor principal cambió: ya no es "la caída" sino el miedo constante a "la llamada".

#### Dolores (Pains)

| # | Dolor | Intensidad |
|---|---|---|
| ⭐ D1 | El miedo a "la llamada": la incertidumbre de fondo permanente sobre cuándo llegará la mala noticia | Alta |
| D2 | No existe un sistema económico y no invasivo que avise si hubo una caída | Alta |
| D3 | No saber si el padre/madre está bien durante el día genera ansiedad constante | Alta |
| D4 | La culpa silenciosa de haber normalizado el distanciamiento en la comunicación diaria | Media |
| D5 | Depender de un vecino o familiar para "checar", con la incomodidad de pedir el favor recurrente | Media |

#### Ganancias (Gains)

| # | Ganancia | Importancia |
|---|---|---|
| ⭐ G1 | Confirmación diaria de que el familiar mayor está bien y activo | Alta |
| G2 | Dejar de sentir culpa y ansiedad por no poder estar presente físicamente | Alta |
| G3 | Reducir el tiempo de respuesta ante una caída, de horas a minutos | Media |
| G4 | Recuperar atención mental: estar presente en la propia vida sin el ruido de la preocupación | Media |
| G5 | Tener evidencia compartible con hermanos u otros familiares, reduciendo conflictos de "quién cuida más" | Baja / Media |

#### Cruce más poderoso

**Dolor ⭐ D1** (miedo a "la llamada") **× Ganancia ⭐ G1** (confirmación diaria de que está bien y activo)

Este dolor no es puntual como una caída: es un estado permanente que acompaña al hijo/a todos los días. Por eso la solución no puede ser reactiva (avisar solo cuando algo malo pasa), sino un hábito diario que reemplace la incertidumbre con una señal recurrente. Es lo que este usuario ya paga hoy en ansiedad, llamadas y culpa.

**Oportunidad en una oración:**

> Existe una oportunidad para **el hijo o hija que vive lejos de un padre mayor que vive solo**, que necesita **una señal diaria y confiable de que su papá o mamá está bien y activo, sin tener que preguntar, llamar ni sentirse culpable**, porque actualmente **la única forma de saberlo es interrumpir su día para llamar, pedirle el favor a alguien más, o vivir con la incertidumbre hasta que algo sale mal.**

---

## 6. Matriz de selección

**Equipo:** Jesús León Hernández Martínez y Andrea Solano López

| Criterio | Concepto A: El Seguro que se Olvida que Existe | Concepto B: Vigía mejorada |
|---|---|---|
| **1. Pasión** — ¿El equipo seguiría si no hubiera calificación? | **Sí.** La razón personal de ambos tiene que ver con nuestros abuelos y cómo, a medida que han ido envejeciendo, han ido perdiendo la movilidad o van teniendo diferentes enfermedades, por lo cual queremos intentar proporcionar algo que les pueda funcionar. | Sí <!-- PENDIENTE: razón personal --> |
| **2. Habilidad** — ¿Pueden nombrar el sensor, el modelo de IA y el protocolo que usarían hoy? | **Parcial.** Componente más arriesgado: conectividad celular/LoRa de bajo consumo (costo mensual real por dispositivo en México, aún sin validar). | <!-- PENDIENTE: Sí / Parcial / No y componente más arriesgado --> |
| **3. Mercado** — Señales de deseabilidad confirmadas (Paso 5) y tamaño del segmento | **5 de 5.** Tamaño estimado: cientos de miles a 1M+ de hijos/as (35–55) en México y la diáspora con padres 65+ que viven solos; disposición a pagar ya validada en el rango de $299–$850 MXN/mes. **Pasa: Sí** | <!-- PENDIENTE: señales, tamaño y si pasa --> |
| **Resultado** | **3/3 → llevar al paso 7** | |

*Escala: 3/3 → llevar al paso 7 · 2/3 → ajustar · 1/3 → cambiar*

**Concepto elegido para el paso 7: El Seguro que se Olvida que Existe.** Es el único con viabilidad clara en la ventana de 6 meses sin depender de meses de datos para entrenar un modelo, y su propuesta es novedosa frente a la teleasistencia reactiva que existe hoy en México.

---

## 7. Resultado final: concepto elegido

### El Seguro que se Olvida que Existe

Un artefacto con conectividad celular/LoRa propia (sin depender de WiFi doméstico) detecta pasivamente la rutina diaria del adulto mayor desde un objeto que ya usa por costumbre. La app guarda silencio total mientras todo esté normal y solo interrumpe al hijo por excepción, cuando algo cambia. El canal de venta no promete "otra app de monitoreo", promete **"instala una vez, olvídate para siempre"**.

| Aspecto | Detalle |
|---|---|
| **Origen SCAMPER** | M1 (notificación de diaria a cero, solo excepción) + E2 (sin dependencia de WiFi doméstico) |
| **DVN** | ✅ Novedoso · ✅ Viable · ⚠️ Deseable |
| **Riesgo principal** | El silencio total podría generar ansiedad de "¿sigue funcionando?" |
| **Siguiente paso** | Validar las 3 hipótesis en entrevistas de la semana 3 |

### Propuesta de valor

> Para el hijo o hija que vive lejos de su papá o mamá, **El Seguro que se Olvida que Existe** le da tranquilidad sin tener que llamar para checar: se instala una vez, no le pide nada al adulto mayor y solo avisa cuando algo de verdad cambió.

---

## 8. Reporte de oportunidad — Semana 2

**Equipo:** Andrea Solano López y Jesús León Hernández Martínez
**Concepto elegido:** "El Seguro que se Olvida que Existe"

### 8.1 El problema

Hijos/as adultos (35–55 años) que viven lejos de un padre o madre mayor de 65 años que vive solo(a) en México. Su dolor más intenso no es un evento puntual sino un estado de fondo permanente: el miedo a "la llamada", la certeza latente de que un día el teléfono va a sonar con la noticia de que algo pasó, sin saber si será hoy, en un mes o en cinco años.

Hoy este dolor se resuelve con workarounds manuales y desgastantes: llamadas o mensajes diarios programados ("I'm OK message"), pedirle el favor a un vecino o familiar para "checar", cámaras de seguridad domésticas instaladas por cuenta propia, o protocolos familiares de escalación no formalizados.

El costo observable de no resolverlo tiene dos caras: el emocional (ansiedad y culpa documentadas en artículos como "The Guilt of Not Checking on Your Aging Parent Daily") y el económico-catastrófico si el evento temido ocurre: una fractura de cadera por caída cuesta entre $150,000 y $420,000 MXN en atención hospitalaria en México.

### 8.2 Evidencia de deseabilidad

- **Pago por soluciones imperfectas:** en México ya existen suscripciones activas de monitoreo. "Estoy Bien" cobra $299–$399 MXN/mes por check-ins telefónicos diarios y Care 60+ cobra desde $850 MXN/mes; a nivel global, las suscripciones de monitoreo con IA van de $100–$300+ USD/mes.
- **Frecuencia del problema:** el IMSS atiende más de 250,000 lesiones por caídas en adultos mayores al año (~700 casos diarios), y las guías de cuidado a distancia recomiendan explícitamente check-ins diarios como estándar de práctica.
- **Workarounds ya en uso:** familias mexicanas ya improvisan mensajes diarios de "estoy bien", redes de vecinos que verifican físicamente, "escaleras de reaseguro" familiares con protocolos de quién llama primero y quién tiene llave, y cámaras de seguridad domésticas (documentado en guías como imalive.co y snugsafe.com).
- **Comunidades activas:** el grupo de Facebook "AARP Family Caregivers" tiene más de 19,000 miembros activos discutiendo cuidado a distancia; subreddits como r/AgingParents y r/CaregiverSupport tienen hilos recurrentes sobre este dolor específico.

### 8.3 Pain-Gain Map (versión final)

Ver la [versión final del Pain-Gain Map](#version-final-ampliada-con-el-prompt-4) en la sección 5.

### 8.4 Concepto recomendado

**Nombre:** El Seguro que se Olvida que Existe

**Descripción:** Un artefacto con conectividad celular/LoRa propia (sin depender de que alguien configure WiFi en casa del padre) detecta pasivamente su rutina diaria desde un objeto que ya usa por costumbre. La app guarda silencio absoluto mientras todo esté normal y solo interrumpe al hijo por excepción, cuando algo cambia, desapareciendo de su vida digital en vez de sumarle otra pantalla que revisar. El canal de venta no promete "una app de monitoreo más", promete "instala una vez, olvídate para siempre": la ausencia total de fricción técnica y de atención continua es el argumento central, algo que ningún competidor con dependencia de WiFi/smartphone puede ofrecer honestamente hoy en México.

**Letras SCAMPER que lo originaron:** M1 (frecuencia de notificación llevada al extremo: de diaria a cero, solo excepción) + E2 (eliminación de la dependencia de WiFi doméstico mediante conectividad celular/LoRa integrada).

**Puntaje DVN:** Deseable ⚠️ · Novedoso ✅ · Viable ✅. El riesgo principal es de deseabilidad: el silencio total podría generar ansiedad de "¿sigue funcionando?" en los primeros meses, por lo que el Paso 5 recomendó validar con usuarios reales un mecanismo mínimo de confirmación de actividad que no rompa la promesa central de silencio.

### 8.5 La oportunidad en una oración

> "Existe una oportunidad para el hijo o hija que vive lejos de un padre mayor que vive solo, que necesita una señal diaria y confiable de que su papá o mamá está bien y activo, sin tener que preguntar, llamar ni sentirse culpable por no estar presente, porque hoy la única forma de saberlo es interrumpir su día para llamar, pedirle el favor a alguien más, o simplemente vivir con la incertidumbre hasta que algo sale mal."

### 8.6 Por qué este equipo

- **Pasión (razón personal):** la razón personal de ambos tiene que ver con nuestros abuelos y cómo, a medida que han ido envejeciendo, han ido perdiendo la movilidad o van teniendo diferentes enfermedades, por lo cual queremos intentar proporcionar algo que les pueda funcionar.
- **Habilidad (elemento técnico concreto):** el componente más arriesgado es la conectividad celular/LoRa de bajo consumo (validar costo mensual real por dispositivo en México), mientras que el sensor de detección de rutina y el hardware sobre ESP32/PCB están dentro de las capacidades ya declaradas del equipo.

### 8.7 Hipótesis para la semana 3

**Sobre el dolor:** Creemos que un hijo/a de 35–55 años con un padre/madre de 65+ que vive solo revisa mental o físicamente "¿estará bien?" varias veces por semana, y que ese ruido de fondo le cuesta atención y tranquilidad, no solo dinero, porque no tiene ninguna señal objetiva entre llamadas.
*Cómo probarla:* "¿Cuántas veces en una semana normal piensas o te preocupas por cómo está tu papá/mamá, aparte de cuando lo llamas?"

**Sobre la solución:** Creemos que este hijo/a preferiría un sistema que se mantiene en silencio y solo avisa por excepción, sobre un check-in diario activo tipo "Estoy Bien", porque no quiere agregar una tarea más a su rutina diaria de revisión.
*Cómo probarla:* presentar dos escenarios: "Imagina que no recibes nada de la app salvo si algo sale mal" vs. "Imagina que cada mañana recibes un mensaje de que todo está bien", y preguntar cuál elegiría y por qué, sin sugerir la respuesta.

**Sobre el pago:** Creemos que este hijo/a estaría dispuesto a pagar entre $300–$600 MXN mensuales por este sistema (en línea con lo que ya pagan por Estoy Bien o Care 60+), porque ya demuestra disposición real a pagar por soluciones de monitoreo imperfectas.
*Cómo probarla:* "¿Cuánto pagas hoy, o pagarías, por algo que te confirme diariamente que tu papá/mamá está bien sin que tengas que llamarle?", y comparar la cifra espontánea contra el rango de $299–$850 MXN antes de mencionar cualquier precio propio.

---

## 9. Defensa de mi oportunidad (Paso 7)

Presentación de 3 minutos, dividida en 4 bloques.

!!! abstract "El Seguro que se Olvida que Existe"
    *Tranquilidad diaria, comprobable a distancia, para quien cuida sin poder estar presente.*

    **Segmento:** hijos/as adultos (35–55) que viven lejos de un padre o madre mayor de 65+ que vive solo(a).

### 01 · El problema y el workaround actual (00:00 – 00:45)

| | |
|---|---|
| **Segmento** | Hijos/as adultos de 35 a 55 años que viven lejos de un padre o madre mayor de 65+ que vive solo(a). |
| **Dolor** | El miedo constante a "la llamada": no saber si su papá o mamá está bien durante el día, sin ninguna señal objetiva entre una llamada y otra. |
| **Hoy lo resuelven así** | Llamadas o mensajes diarios de "chequeo" · Pedirle a un vecino que vaya a verificar · Cámaras de seguridad instaladas por su cuenta |
| **Si el evento temido ocurre** | Una fractura de cadera cuesta **$150k–$420k MXN** en atención hospitalaria, vs. prevenir una caída en el baño: solo **~$3,500 MXN** |

### 02 · La evidencia de deseabilidad (00:45 – 01:30)

Sabemos que el problema es real porque:

| 1. Ya se paga por esto | 2. Es frecuente y grave | 3. Ya inventaron workarounds |
|---|---|---|
| **$299–$850 MXN/mes** | **~700 caídas/día** | **3+ estrategias caseras** |
| Servicios activos en México como Estoy Bien y Care 60+ ya cobran por monitoreo diario imperfecto. | El IMSS atiende más de 250,000 lesiones por caídas de adultos mayores al año. | Mensajes diarios, redes de vecinos y cámaras domésticas: ya invierten tiempo en resolverlo solos. |

### 03 · Por qué nosotros y hacia dónde vamos (01:30 – 02:15)

**Pasión:** la razón personal de ambos tiene que ver con nuestros abuelos y cómo, a medida que han ido envejeciendo, han ido perdiendo la movilidad o van teniendo diferentes enfermedades, por lo cual queremos intentar proporcionar algo que les pueda funcionar.

**Habilidad:**

- Sensor de movimiento/presencia en un objeto cotidiano
- Conectividad celular / LoRa de bajo consumo (sin WiFi)
- Modelo de IA que aprende el patrón de rutina diaria

**Dirección de solución:** un artefacto detecta pasivamente la rutina diaria del adulto mayor, sin que él haga nada. La app guarda silencio total mientras todo esté normal y solo avisa al hijo/a por excepción, cuando algo cambia.

### 04 · La oportunidad en una oración (02:15 – 03:00)

> "Existe una oportunidad para el hijo o hija que vive lejos de un padre mayor que vive solo, que necesita una señal diaria y confiable de que está bien y activo, sin preguntar, llamar ni sentirse culpable, porque hoy la única forma de saberlo es interrumpir su día, pedirle el favor a alguien más, o vivir con la incertidumbre hasta que algo sale mal."

---

## 10. Ideas y conclusiones importantes

- El problema real detrás de las 4 oportunidades no era "cómo hacer ejercicio", sino la falta de un "testigo" diario que sostenga la adherencia. El mismo cuello de botella explica caídas, sarcopenia, artrosis y enfermedades crónicas.
- El comprador real no siempre es el usuario final: el hijo/a que vive lejos tiene tanto la ansiedad como el poder adquisitivo para pagar por tranquilidad.
- La evidencia de Perplexity confirmó que el dolor y el pago ya existen, pero no respaldó automáticamente el diseño elegido (silencio por excepción). La investigación secundaria valida el problema, no las decisiones de diseño.
- El filtro DVN fue clave para descartar a tiempo un concepto atractivo en el papel (pago vía aseguradoras) que era inviable en el plazo de 6 meses del MVP.

---

## 11. ¿Qué aprendí?

- **Primero el problema, después la solución.** Y ese problema casi nunca es el más obvio en los datos.
- **Romper el consenso cambia el producto.** Empecé con "prevención de caídas", pero al cuestionarlo encontré que el cuello de botella era la adherencia, y detrás de ella, la falta de un testigo diario. El enfoque pasó de un sensor de emergencias a un sistema de tranquilidad para el hijo/a que vive lejos.
- **Cada herramienta tiene su rol.** Perplexity me sirvió para conseguir datos y fuentes; Claude, para cuestionar, idear y evaluar. Darle a la IA un rol distinto en cada prompt cambió mucho el tipo de respuesta.
- **La IA no sustituye el análisis.** Sirve para generar perspectivas (romper consenso, SCAMPER, remix) y para poner a prueba mis ideas con un filtro crítico (DVN), pero las decisiones fueron mías y del equipo.
- **Validar el problema no es validar la solución.** La evidencia puede confirmar que el dolor existe sin confirmar que mi diseño es el correcto.

---

## 12. Reflexión personal

Lo que más me llamó la atención fue darme cuenta de que el problema que "se ve" en los datos de mercado (caídas, fracturas, costos hospitalarios) no siempre es el que realmente hay que resolver. Romper el consenso y buscar el problema oculto me obligó a pensar más allá de la primera solución obvia, y a entender que a veces el usuario que paga no es el mismo que el que usa el producto: en este caso, el hijo que vive lejos y no el adulto mayor.

También me quedó claro que la evidencia de mercado puede confirmar que un problema existe sin confirmar que mi solución específica sea la correcta. El propio diagnóstico de la IA me advirtió que los workarounds actuales apuntan a lo contrario de mi apuesta (la gente manda mensajes diarios, no busca silencio). Por eso el siguiente paso real es probarlo con personas de verdad, no solo con más investigación.

---

## Estado de la actividad

**Actividad completada**

**Evidencias en esta página:** prompts y respuestas completas de IA (Claude y Perplexity) · Pain-Gain Map · SCAMPER · Remix · Filtro DVN · Verificación de deseabilidad · Matriz de selección · Reporte de oportunidad · Defensa
