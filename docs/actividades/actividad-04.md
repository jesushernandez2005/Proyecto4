# Actividad 4 — Mercado, Valor y Propuesta de Valor

**Tema:** DistanciaCero — Segmento accionable, dimensionamiento de mercado, análisis competitivo y propuesta de valor
**Fecha:** 17/09/2026 · Actualizado 18/09/2026 con validación real (Semana 3)
**Blueprint:** Creación de valor → Captura de valor
**DVF:** 🟢 Deseable (validado con entrevistas) · 🟡 Viable (precio validado, riesgo de adopción nuevo)

---

## 1. Objetivo de la actividad

Esta semana conecta dos preguntas que se confunden fácilmente: **¿qué valor crea mi producto?** y **¿por qué alguien me lo compra a mí y no a otro?** La primera es la propuesta de valor. La segunda es la diferenciación. Sin las dos claras, el pitch no funciona y el modelo de negocio no se sostiene.

La actividad avanzó en cuatro frentes:

1. **Segmento accionable en 4 capas**, marcando cada dato como VERIFICADO o HIPÓTESIS.
2. **Dimensionamiento TAM / SAM / SOM**, con la lógica de reducción explícita.
3. **Mapa competitivo y lienzo estratégico Blue Ocean.**
4. **Propuesta de valor**, evaluada con IDEO y la Pirámide de Valor de Bain.

!!! info "Actualización (18/09/2026)"
    Esta semana hicimos las tres entrevistas de validación que estaban pendientes (Mariana, Lupita, Ricardo). Sus resultados están integrados en cada bloque, marcados como ✅ CONFIRMADO, ⚠️ CONFIRMADO CON MATIZ o 🔧 AJUSTE DE DISEÑO. El detalle completo está en la sección **5. Validación con usuarios — Semana 3**.

---

## 2. Contexto del producto

- **Problema:** hijos e hijas de 35–55 años en México con un padre/madre de 65+ que vive solo y lejos, viviendo con ansiedad y culpa constante: el miedo a "la llamada".
- **Mecanismo:** artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con conectividad celular/LoRa propia, que detecta pasivamente la rutina diaria del adulto mayor sin que él haga nada ni dependa de WiFi doméstico.
- **IA:** modelo en la nube que aprende el patrón individual de rutina de cada usuario y notifica al hijo/a solo por excepción, cuando la rutina se rompe.
- **Punto de partida:** el análisis de mercado partió de investigación secundaria (fuentes públicas, estadísticas oficiales) y del Pain-Gain Map de la semana 2, sin conversaciones directas con el segmento. En la semana 3 hicimos tres entrevistas a profundidad que confirman, matizan o ajustan cada hipótesis crítica. El análisis original se conserva completo; lo que la evidencia directa confirmó o cambió está marcado en cada bloque.

---

## 3. Desarrollo: mis prompts y las respuestas de la IA

Encadené distintos "roles" de IA: Claude para el perfil de segmento, el lienzo Blue Ocean y la propuesta de valor; Perplexity para el dimensionamiento de mercado y el mapa competitivo, porque esos dos bloques necesitaban fuentes y precios reales. Abajo está cada prompt tal como lo escribí y la respuesta completa. Las respuestas se despliegan con un clic.

!!! note "Nota sobre los prompts 5 y 6"
    Esos dos prompts los envié a Claude como **archivo adjunto** (las plantillas del taller ya llenas), y los archivos no se conservan en el historial del chat. Por eso el recuadro del prompt muestra lo que le pedí; las respuestas sí están completas.

---

### Prompt 1 — Perfil de segmento accionable (4 capas)

**IA utilizada:** Claude — rol de investigador de mercado especializado en segmentación para negocios digital-físicos en mercados emergentes latinoamericanos

En mi primer intento pegué el prompt incompleto (terminaba en "[... resto del prompt igual ...]"). Claude no inventó el formato: me pidió la parte que faltaba antes de responder. Este es el prompt completo que le mandé después:

??? question "Mi prompt (clic para desplegar)"
    Actúa como un investigador de mercado con especialización en segmentación de clientes para negocios de producto digital-físico en mercados emergentes latinoamericanos. Tu metodología combina datos demográficos verificables con análisis conductual y psicográfico basado en comportamiento observable — nunca en suposiciones sobre actitudes o valores generales. Cuando el equipo no tiene evidencia de una capa, lo señalas directamente en lugar de rellenar con hipótesis no marcadas. Un perfil honesto con huecos es más útil que uno completo con datos inventados.

    Somos emprendedores en México desarrollando un negocio que combina una aplicación con IA, un artefacto físico inteligente y una página web de venta. Aún no hemos hecho entrevistas de validación con usuarios reales — lo que tenemos hasta ahora es investigación de mercado secundaria (fuentes públicas, estadísticas oficiales) y un Pain-Gain Map construido a partir de esa investigación, no de conversaciones directas con el segmento.

    **EVIDENCIA DE MERCADO SECUNDARIA (sin entrevistas — fuentes públicas):**

    - **Frecuencia del problema:** 1.7 millones de adultos mayores de 60+ viven solos en México —uno de cada diez—, y 69.4% de ellos presenta alguna discapacidad o limitación. Fuente: INEGI, Comunicado de Prensa Núm. 475/19 (30 sept. 2019), con base en ENADID 2018.
    - **Pago por soluciones imperfectas:** existe un mercado activo de botones de pánico/alerta para adultos mayores en México, vendidos en Amazon.com.mx y Mercado Libre, con precios de compra única entre ~$250 y $1,000+ MXN y volumen de compra reciente documentado (ej. "50+ comprados el mes pasado" en un listado). Fuente: Amazon.com.mx y Mercado Libre México, listados "botón de pánico para ancianos".
    - **Workarounds documentados:** existe al menos una startup (Kinnect) dedicada específicamente a coordinar cuidado familiar a distancia entre México y EE. UU., cuyo blog documenta que las familias ya usan grupos de WhatsApp/Facebook como mecanismo informal para esto — y señala sus limitaciones. Fuente: kinnect.club, blog "Cuidado a Distancia: Guía para Hermanos (México y EE. UU.)".
    - **Comunidades activas:** existe una comunidad pública en Facebook para cuidadores de personas dependientes en México ("Club de Cuidadores"), con 22,762 seguidores y actividad reciente. Fuente: Facebook, página "Club de Cuidadores".
    - **Costo/atención institucional observable:** hubo un programa piloto de tele-asistencia y tele-alarma para adultos mayores en la Ciudad de México, evaluado académicamente en 2010 con 378 adultos mayores, 294 cuidadores/familiares y 53 profesionales de salud entrevistados. Fuente: Giraldo-Rodríguez et al., Revista de Saúde Pública, 2013, DOI 10.1590/s0034-8910.2013047004574.

    **SEGMENTO HIPÓTESIS DEL PAIN-GAIN MAP (semana 2):** Hijos e hijas adultos de 35 a 55 años en México, con un padre o madre de 65+ años que vive solo(a) y lejos de ellos.

    **OPORTUNIDAD EN UNA ORACIÓN:** Dar tranquilidad diaria comprobable a distancia, sin necesidad de preguntar, llamar ni sentir culpa.

    Construye el perfil de segmento accionable en cuatro capas. Para cada dato indica si es VERIFICADO (respaldado por una fuente secundaria real, con cifra o cita) o HIPÓTESIS (razonado pero sin confirmar). Como todavía no existen entrevistas, ningún dato puede marcarse como "confirmado por el usuario" — sé especialmente estricto con las Capas 2 y 3, que dependen más de observar comportamiento y emoción reales: si la evidencia secundaria no las cubre, márcalas como HIPÓTESIS sin excepción, aunque eso deje la capa casi vacía. Si una capa no tiene evidencia suficiente ni siquiera de fuente secundaria, indícalo — no la inventes.

    **FORMATO DE SALIDA:**

    ```text
    PERFIL DE SEGMENTO ACCIONABLE

    CAPA 1 — DEMOGRÁFICA
    ¿Quién es con suficiente detalle para encontrarlo?
    · [dato] → VERIFICADO / HIPÓTESIS

    CAPA 2 — CONDUCTUAL
    ¿Qué hace hoy para resolver el problema — proceso exacto, frecuencia, herramientas, workarounds?
    · [dato] → VERIFICADO / HIPÓTESIS

    CAPA 3 — PSICOGRÁFICA
    ¿Qué le preocupa en sus propias palabras? ¿Qué lo motivaría a cambiar de solución?
    · [dato o cita textual] → VERIFICADO / HIPÓTESIS

    CAPA 4 — ECONÓMICA
    ¿Cuánto le cuesta el problema hoy? ¿Cuánto podría pagar? ¿Quién decide la compra?
    · [dato] → VERIFICADO / HIPÓTESIS

    NIVEL DE CONOCIMIENTO DEL SEGMENTO:
    Capas con mayoría VERIFICADA: [cuáles]
    Capas con mayoría de HIPÓTESIS: [cuáles — agenda de investigación]

    HIPÓTESIS CRÍTICAS SIN VERIFICAR:
    [Las 2–3 suposiciones sin confirmar que más impactan la viabilidad del negocio — priorizando las que solo unas entrevistas reales podrían resolver]

    PERFIL EN UNA ORACIÓN:
    [El segmento completo en una oración específica y concreta — si no puede escribirse con datos verificados, señalarlo]

    PRÓXIMO PASO:
    [Qué debería preguntarse específicamente en las próximas entrevistas de validación para convertir las HIPÓTESIS de mayor impacto en datos VERIFICADOS]
    ```

??? example "Respuesta de Claude (clic para desplegar)"
    **PERFIL DE SEGMENTO ACCIONABLE**

    **CAPA 1 — DEMOGRÁFICA**
    *¿Quién es con suficiente detalle para encontrarlo?*

    - Existen 1.7 millones de adultos de 60+ años que viven solos en México (uno de cada diez) → **VERIFICADO** (INEGI, Comunicado 475/19, ENADID 2018)
    - 69.4% de esos adultos mayores que viven solos presenta alguna discapacidad o limitación → **VERIFICADO** (misma fuente)
    - El hijo/hija adulto(a) del segmento tiene entre 35 y 55 años → **HIPÓTESIS** (definido en el Pain-Gain Map del equipo; ninguna de las fuentes secundarias caracteriza edad, ingreso o ubicación de los hijos, solo de los padres)
    - Ese hijo/hija vive lejos (geográficamente distante) del padre/madre → **HIPÓTESIS** (supuesto del equipo, sin fuente que mida distancia hijo-padre en México)
    - Nivel socioeconómico, ciudad de residencia, si vive en México o en el extranjero (ej. migración a EE. UU. como en el caso Kinnect) → **HIPÓTESIS** — sin datos

    **CAPA 2 — CONDUCTUAL**
    *¿Qué hace hoy para resolver el problema — proceso exacto, frecuencia, herramientas, workarounds?*

    - Existe un mercado de compra activa de botones de pánico/alerta para adultos mayores en México, con precios de $250 a $1,000+ MXN y volumen documentado (ej. "50+ comprados el mes pasado") → **VERIFICADO** (Amazon.com.mx, Mercado Libre)
    - Que el comprador de esos botones sea específicamente el hijo/hija adulto(a) (y no el propio adulto mayor u otro familiar) → **HIPÓTESIS** — los listados no identifican quién compra
    - Las familias usan grupos de WhatsApp/Facebook como mecanismo informal de coordinación de cuidado a distancia → **VERIFICADO** (blog Kinnect, documentado explícitamente, aunque en contexto México-EE. UU., no necesariamente México-México)
    - Existe una comunidad activa en Facebook de cuidadores en México ("Club de Cuidadores", 22,762 seguidores) → **VERIFICADO** (existencia y tamaño de la comunidad)
    - Que los miembros de esa comunidad sean mayoritariamente hijos adultos 35-55 (y no cuidadores profesionales, cónyuges u otros) → **HIPÓTESIS** — no hay dato de composición demográfica del grupo
    - Frecuencia exacta con la que el hijo/hija llama, pregunta o visita al padre/madre hoy → **HIPÓTESIS** — sin evidencia, ni primaria ni secundaria
    - Proceso paso a paso de qué hace el hijo/hija cuando algo "se siente mal" (llamar, viajar, pedir a un vecino que revise, etc.) → **HIPÓTESIS** — sin evidencia

    **CAPA 3 — PSICOGRÁFICA**
    *¿Qué le preocupa en sus propias palabras? ¿Qué lo motivaría a cambiar de solución?*

    - Ninguna de las fuentes secundarias citadas contiene una cita textual, encuesta de actitudes o testimonio directo de hijos adultos sobre esta preocupación → **capa sin evidencia secundaria**
    - "Tranquilidad diaria comprobable a distancia, sin necesidad de preguntar, llamar ni sentir culpa" (la oportunidad en una oración) → **HIPÓTESIS** — es una síntesis razonada del equipo a partir de la Capa 2 (workarounds observados), no una cita ni un hallazgo de fuente
    - Culpa, ansiedad, o carga emocional como motor emocional del comportamiento → **HIPÓTESIS** — plausible dado el contexto, pero no hay ninguna fuente (ni el blog de Kinnect, ni el estudio académico, tal como fueron citados aquí) que documente emociones en palabras de hijos adultos

    Esta capa queda casi vacía por diseño: la evidencia secundaria que aportaron describe mercado y comportamiento observable (compras, comunidades), no lenguaje ni emoción de primera persona. Marcar cualquier cosa aquí como VERIFICADO sería inventar dato.

    **CAPA 4 — ECONÓMICA**
    *¿Cuánto le cuesta el problema hoy? ¿Cuánto podría pagar? ¿Quién decide la compra?*

    - El mercado actual de soluciones parciales (botones de pánico) tiene un rango de precio de $250–$1,000+ MXN por compra única → **VERIFICADO** (Amazon.com.mx, Mercado Libre)
    - Existió un programa piloto de tele-asistencia/tele-alarma evaluado académicamente en CDMX en 2010, con 378 adultos mayores y 294 cuidadores/familiares entrevistados → **VERIFICADO** (Giraldo-Rodríguez et al., Rev. Saúde Pública, 2013) — pero la evidencia aportada no incluye cifras de costo del programa ni disposición a pagar de los familiares
    - Cuánto estaría dispuesto a pagar el hijo/hija por una solución superior (suscripción mensual, precio del artefacto) → **HIPÓTESIS** — sin dato
    - Quién decide y paga la compra (el hijo/hija, varios hermanos dividiendo costo, el propio adulto mayor) → **HIPÓTESIS** — sin dato
    - Costo actual del problema para el hijo/hija (tiempo, viajes, ansiedad convertida en costo indirecto) → **HIPÓTESIS** — sin dato

    ---

    **NIVEL DE CONOCIMIENTO DEL SEGMENTO:**

    - **Capas con mayoría VERIFICADA:** Capa 1 (solo en lo referente al adulto mayor, no al hijo/hija) y Capa 2 (existencia de mercado y comunidades, no su composición ni el proceso exacto del hijo/hija)
    - **Capas con mayoría de HIPÓTESIS — agenda de investigación:** Capa 3 (prácticamente en su totalidad) y Capa 4 (disposición a pagar y decisor de compra)

    **HIPÓTESIS CRÍTICAS SIN VERIFICAR:**

    1. Que el segmento correcto sea el hijo/hija adulto(a) de 35-55 años — y no el propio adulto mayor, un cuidador contratado, o un hermano específico dentro de la familia — como comprador y usuario de la app. Toda la evidencia secundaria sobre compra y comunidad no distingue quién es el actor.
    2. Que la emoción central sea "culpa" y el disparador de compra sea "tranquilidad verificable sin preguntar" — esto es la base entera de la propuesta de valor y no tiene ni una fuente secundaria que la respalde; es 100% razonamiento del equipo.
    3. Disposición a pagar por una suscripción recurrente (vs. la compra única de $250–$1,000 MXN observada en botones de pánico) — el modelo de negocio probablemente depende de ingreso recurrente, y no hay ningún dato, ni siquiera indirecto, sobre esto.

    **PERFIL EN UNA ORACIÓN:**

    No puede escribirse todavía con datos verificados: la única oración que la evidencia secundaria sostiene es sobre el adulto mayor ("adultos de 60+ que viven solos en México, 1 de cada 10, con alta prevalencia de discapacidad"), no sobre el hijo/hija que sería el comprador real. Cualquier oración que describa edad, ubicación, motivación o disposición a pagar del hijo/hija sería, con la evidencia actual, una hipótesis redactada como si fuera un hecho.

    **PRÓXIMO PASO:**

    Las entrevistas de validación deberían priorizar, en este orden:

    1. Confirmar quién es realmente el actor con dolor y poder de compra (¿el hijo/hija mayor de los hermanos? ¿el que vive más cerca? ¿todos dividiendo costo?) — resuelve la Hipótesis Crítica #1.
    2. Pedir que describan, con sus propias palabras y sin inducir, el último momento en que sintieron preocupación por su padre/madre: qué hicieron, qué sintieron, qué hubieran querido tener — resuelve directamente la Capa 3 y la Hipótesis Crítica #2.
    3. Preguntar qué pagan hoy (tiempo, dinero, llamadas, viajes) por manejar esta preocupación, y presentar un rango de precio de suscripción para medir reacción real — resuelve la Capa 4 y la Hipótesis Crítica #3.

**Las 3 hipótesis críticas, con su estado después de las entrevistas de la semana 3:**

| # | Hipótesis | Estado |
|---|---|---|
| 1 | El comprador y usuario real es el hijo/hija de 35–55 años | ⚠️ **Confirmado con matiz:** sí es el hijo/a, pero no siempre busca su propia tranquilidad. Ricardo compra "para aliviarle la vida a mi hermana" (Sonia), no para sí mismo. |
| 2 | La emoción central es la culpa y el disparador es "tranquilidad sin preguntar" | ⚠️ **Confirmado con matiz:** depende del perfil. Para Lupita (sin red local) es ansiedad constante ("un estado de alerta constante"); para Mariana es un pico puntual ("se me acelera el corazón"); para Ricardo (con red local fuerte) casi no aparece. |
| 3 | Disposición a pagar una suscripción recurrente | ✅ **Confirmada:** las tres cotizaciones espontáneas caen dentro o por encima del rango $300–600 MXN/mes. |

!!! success "Actualización con entrevistas (semana 3)"
    La Capa 3 dejó de estar vacía: las tres entrevistas contienen citas textuales de la emoción central. La hipótesis del "miedo a la llamada" queda **confirmada con matiz**: la preocupación es real, pero su frecuencia **no depende de la distancia en kilómetros sino de si el adulto mayor ya tiene una red humana de apoyo cerca**. Ricardo, con red local fuerte (su hermana Sonia), se preocupa fuera de las llamadas solo ~1 vez por semana. Por eso "hijo/a que vive lejos" ya **no** basta para definir el segmento: la variable que más mueve el dolor es si existe o no un cuidador local de confianza.

**Mi decisión:** con este perfil supe exactamente qué preguntar en las entrevistas. Mientras tanto, seguí con el tamaño de mercado usando el segmento hipótesis.

---

### Prompt 2 — Dimensionamiento de mercado (TAM / SAM / SOM)

**IA utilizada:** Perplexity — rol de analista de mercado especializado en dimensionamiento para startups de hardware y software en América Latina

??? question "Mi prompt (clic para desplegar)"
    Actúa como analista de mercado con especialización en dimensionamiento para startups de hardware y software en América Latina. Tu metodología es el enfoque top-down con triangulación de fuentes verificables: INEGI, CEPAL, BID, reportes de industria con autor y año identificables. No inventes cifras — si no existe fuente verificable para un número, lo señalas y explicas cómo estimarlo con lógica de primer principio.

    Somos emprendedores en México:

    - **Concepto:** DistanciaCero — un sistema digital-físico (app con IA + artefacto conectado) que detecta pasivamente la rutina diaria de un adulto mayor que vive solo, sin que él haga ninguna acción ni dependa de WiFi doméstico. La app guarda silencio total mientras todo esté normal y solo avisa al hijo/a que vive lejos por excepción, cuando algo se sale de la rutina esperada.
    - **Segmento objetivo:** Hijos/as adultos de 35 a 55 años en México que viven lejos de un padre o madre mayor de 65+ años que vive solo(a). (Nota: este es el segmento hipótesis validado con evidencia de mercado secundaria — señales de pago, frecuencia del problema, costo observable y workarounds documentados — pero aún no con entrevistas directas; el perfil de 4 capas con marcado VERIFICADO/HIPÓTESIS está en proceso mediante un ejercicio separado.)
    - **Precio estimado del producto/servicio:** $300–$600 MXN al mes (rango basado en comparables ya activos en México: Estoy Bien $299 MXN/mes, Care 60+ desde $850 MXN/mes)
    - **Modelo de ingresos:** Suscripción mensual (con posible costo inicial del hardware/artefacto como pago único adicional, a definir)
    - **Mercado inicial:** México
    - **Expansión potencial:** LATAM en año 3+

    Construye TAM, SAM y SOM con este razonamiento explícito:

    - **TAM:** Universo total con el problema Y disposición de pago. No solo "cuántos tienen el problema" — cuántos pagarían. Mostrar la reducción paso a paso con fuente de cada número.
    - **SAM:** El subconjunto alcanzable con el modelo actual. Especificar exactamente qué lo reduce: geografía, canal, precio, idioma, tamaño mínimo de cliente.
    - **SOM:** La porción realista en los primeros 2 años. Justificar el porcentaje con lógica de go-to-market concreta: cuántos vendedores, qué canal, qué geografía piloto. El número sin lógica no sirve.

    **FORMATO DE SALIDA:** *(plantilla con TAM — universo de partida, filtros con fuente, universo final y valor anual; SAM — filtros aplicados, universo y valor anual; SOM — meta, % del SAM, lógica de go-to-market y valor anual; Señal de viabilidad — ¿cubre costos de una startup de 4 personas? Sí / No / Marginal; Fuentes utilizadas)*

??? example "Respuesta de Perplexity (clic para desplegar)"
    Con base en la evidencia recabada de fuentes verificables (INEGI, CONAPO, ENIGH 2024, reportes de industria con autor/año), construyo el dimensionamiento con lógica explícita y sin inventar cifras. Donde no existe dato directo, aplico principio de primer principio y lo señalo.

    **DIMENSIONAMIENTO DE MERCADO — Concepto: DistanciaCero**

    #### TAM — Mercado Total Direccionable

    **Universo de partida:** 38.8 millones de hogares en México (2024) · Fuente: ENIGH 2024

    **Paso 1 — Hogares con al menos un adulto mayor 65+**

    - En 2024, 10.9% de los hogares mexicanos tienen al menos un integrante de 65 años o más · Fuente: ENIGH 2024
    - Cálculo: 38.8M × 10.9% = **4.23 millones de hogares**

    **Paso 2 — Hogares unipersonales dentro de ese grupo (adulto mayor vive solo)**

    - De los hogares con 65+, 17.5% son unipersonales (solo habita el adulto mayor) · Fuente: Coneval 2020, citado en análisis 2024
    - Nota: INEGI reporta ~1 millón de hogares unipersonales de adultos mayores 60+, pero ese dato incluye 60-64. Para 65+ aplicamos el % de estructura unipersonal sobre el universo 65+
    - Cálculo: 4.23M × 17.5% = **740,000 hogares unipersonales 65+**

    **Paso 3 — Hijos adultos 35-55 años con padre/madre en ese hogar**

    - Población 35-55 años en México: ~46.5 millones (suma de cohortes 35-39, 40-44, 45-49, 50-54, 55-59) · Fuente: proyecciones demográficas 2025
    - Supuesto de primer principio: 85% de adultos mayores 65+ tienen al menos un hijo vivo (evidencia indirecta: 67% de 60+ son no económicamente activos y dependen de red familiar; 31% de hogares tienen 60+ y 8 de 10 viven en familia)
    - Cálculo: 740,000 × 85% = **629,000 hogares con hijo potencial**

    **Paso 4 — Hijos que viven lejos (migración interna/externa)**

    - Evidencia contextual: 52% de hogares unipersonales de adultos mayores están en ámbito urbano; migración laboral de hijos a ciudades grandes o EE.UU. es fenómeno documentado
    - Supuesto conservador basado en literatura de migración y envejecimiento: 60% de hijos adultos de padres que viven solos residen en otra ciudad o país
    - Cálculo: 629,000 × 60% = **377,400 hijos viviendo lejos**

    **Paso 5 — Disposición de pago (filtro crítico)**

    - Contexto de mercado: servicios comparables activos en México (Estoy Bien $299/mes, Care 60+ desde $850/mes) demuestran disposición de pago en segmento
    - Ingreso promedio hogar México 2024: $25,955 MXN/mes; gasto corriente: $15,891 MXN/mes · Fuente: ENIGH 2024
    - Margen disponible promedio: ~$10,000 MXN/mes. Un servicio de $300-600/mes representa 3-6% del margen, comparable a gasto en telecomunicaciones o entretenimiento
    - Evidencia de adopción: mercado de telesalud en México alcanzó USD 406.9M en 2025, con CAGR 18-22%; healthtech LATAM creció 36.6% en inversión 2024
    - Supuesto basado en adopción de servicios digitales de salud en hogares urbanos con ingreso medio-alto: 25% de los 377,400 tendrían disposición y capacidad de pago
    - Cálculo: 377,400 × 25% = **94,350 personas (TAM pagador)**

    **Universo final TAM:** 94,350 hijos adultos dispuestos a pagar
    **Valor anual TAM:** 94,350 × $5,400 MXN/año (promedio $450/mes) = **$509.5 millones MXN/año**

    #### SAM — Mercado Alcanzable

    **Filtros aplicados al TAM:**

    1. **Geografía (cobertura inicial):** Startups de hardware+software en México típicamente inician en zonas metropolitanas con mayor densidad y logística (CDMX, GDL, MTY, Puebla). Estas 4 áreas concentran ~45% de población urbana y mayor ingreso disponible · Fuente: ENIGH 2024 desglose urbano-rural muestra ingreso urbano 79% mayor que rural
        - Reduce a: 94,350 × 45% = **42,458**
    2. **Canal digital (adquisición vía app stores, redes sociales, marketplace):** Penetración de smartphones en adultos 35-55 es alta (~80%), pero no todos compran servicios de salud digital online. ENIF 2024 muestra que 42% de población usa servicios financieros digitales; salud digital tiene adopción menor pero creciente
        - Supuesto: 60% del segmento geográfico está alcanzable vía canal digital directo
        - Reduce a: 42,458 × 60% = **25,475**
    3. **Precio (rango $300-600/mes):** Hogares en deciles 7-10 de ingreso (top 40%) concentran mayor gasto discrecional. ENIGH 2024: decil 10 tiene ingreso trimestral 236,095 MXN vs. promedio nacional 77,865 MXN
        - Supuesto: 70% del segmento alcanzable está en deciles 6-10 con capacidad para suscripción recurrente
        - Reduce a: 25,475 × 70% = **17,832**
    4. **Idioma y alfabetización digital:** 42% de adultos mayores 60+ no usa internet, pero el comprador es el hijo 35-55, no el adulto mayor. Este filtro no reduce SAM porque el usuario pagador es digitalmente nativo
        - Sin reducción adicional

    **Universo SAM:** 17,832 personas
    **Valor anual SAM:** 17,832 × $5,400 = **$96.3 millones MXN/año**

    #### SOM — Mercado Obtenible (años 1–2)

    **Meta:** 850 clientes pagantes en 24 meses
    **Porcentaje del SAM:** 850 / 17,832 = **4.8%**

    **Lógica de go-to-market:**

    - **Canal específico:** Venta directa B2C vía Meta Ads + Google Ads segmentando a hijos 35-55 en CDMX, GDL, MTY, Puebla con intereses en "cuidado de padres", "adultos mayores", "telemedicina". Costo de adquisición estimado: $800-1,200 MXN por cliente (basado en benchmarks healthtech LATAM: CAC para suscripciones $20-50 USD en salud digital). Presupuesto marketing años 1-2: $1.2M MXN → ~1,000 clientes potenciales convertidos a 85% = 850
    - **Geografía piloto:** CDMX y Área Metropolitana (35% de SAM), Puebla (15% por cercanía y costo logístico menor), GDL (20%), MTY (30%). Inicio en CDMX+Puebla en meses 1-6, expansión a GDL+MTY en meses 7-12
    - **Capacidad del equipo:** Startup de 4 personas (2 founders técnicos, 1 ventas/marketing, 1 ops/customer success). Capacidad de onboarding: 50-70 clientes/mes con proceso automatizado (envío de artefacto + activación app). En 24 meses: 60 × 24 = 1,440 clientes teóricos; aplicando tasa de conversión realista de 60% (abandono en funnel, logística, soporte) = 864 clientes ≈ 850 meta

    **Valor anual SOM:** 850 × $5,400 = **$4.59 millones MXN/año**

    #### Señal de viabilidad

    **SOM × precio anual = $4.59 millones MXN/año**

    **¿Cubre costos operativos básicos de una startup de 4 personas? Marginal** — Con $4.59M MXN/año (~$382k MXN/mes), una startup de 4 personas en México puede cubrir nómina básica ($80-120k/mes para equipo técnico+ventas), infraestructura cloud ($15-25k/mes), logística de hardware ($40-60k/mes), y marketing ($80-100k/mes), dejando margen operativo estrecho de 10-20% antes de escalar. Para ser comfortably viable, se requiere alcanzar 1,500-2,000 clientes en año 3 o introducir hardware como pago único ($2,000-4,000 MXN) para mejorar unit economics.

    #### Fuentes utilizadas

    - ENIGH 2024 — Encuesta Nacional de Ingresos y Gastos de los Hogares, INEGI (julio 2025)
    - CONAPO 2025 — Proyecciones de población y envejecimiento demográfico en México
    - INEGI — Adultos mayores en México: perfil sociodemográfico y hogares unipersonales (2023-2026)
    - IMARC Group — Mexico Telehealth Market Size 2025-2034 (abril 2025)
    - HealthTech in Mexico 2025 — Valor de mercado healthtech (marzo 2026)
    - Ecosistema Startup — Healthtech en LATAM: inversión 2024 (abril 2026)
    - Coneval 2020 — Estructura de hogares con adultos mayores 65+ (citado en análisis 2024)
    - PopulationPyramids.org — México 2025: distribución por cohortes de edad

    #### Notas metodológicas importantes

    1. **No se inventó ninguna cifra:** Todos los números base provienen de fuentes citadas. Los supuestos (85% con hijos vivos, 60% viviendo lejos, 25% disposición de pago, 45% geografía inicial, etc.) se derivan de evidencia indirecta en las mismas fuentes (ej. % de hogares unipersonales, migración documentada), benchmarks de industria healthtech LATAM y principio de primer principio aplicado a datos demográficos oficiales.
    2. **Sensibilidad del modelo:** El número más incierto es la disposición de pago (25%). Si este supuesto se reduce a 15%, el TAM cae a 56,610 y el SOM a 510 clientes. Si sube a 35% (por validación directa con entrevistas), el TAM crece a 132,090 y el SOM a 1,190 clientes.
    3. **Recomendación para validación:** Ejecutar 15-20 entrevistas con hijos 35-55 en CDMX/Puebla que tengan padre/madre 65+ viviendo solo para confirmar % que ya paga o pagaría por servicio similar, validar precio óptimo ($300 vs $450 vs $600) y refinar el SOM con datos reales de conversión en campañas piloto.

**Resumen:**

| Nivel | Universo | Valor anual |
|---|---|---|
| TAM | 94,350 personas | $509.5M MXN |
| SAM (CDMX/GDL/MTY/Puebla + canal digital + deciles 6–10) | 17,832 personas | $96.3M MXN |
| SOM (años 1–2, Meta/Google Ads) | 850 personas | $4.59M MXN |

!!! success "Actualización con entrevistas (semana 3)"
    El supuesto más incierto del modelo, la disposición de pago (25%), queda confirmado como **conservador, no optimista**. Las tres cotizaciones espontáneas fueron: Mariana $450 MXN/mes ("sin pensarlo dos veces"), Lupita $30–35 USD/mes (~$550–650 MXN) y Ricardo $600–700 MXN/mes. Las tres caen dentro o por encima del rango $300–600 MXN/mes. Esto sostiene el TAM de $509.5M MXN como base razonable, aunque validado con **n=3**: el siguiente paso sigue siendo el que señaló la IA, más entrevistas antes de comprometer presupuesto de marketing.

---

### Prompt 3 — Mapa competitivo (directos, indirectos, sustitutos)

**IA utilizada:** Perplexity — rol de analista de inteligencia competitiva para mercados de producto digital-físico en América Latina

??? question "Mi prompt (clic para desplegar)"
    Actúa como analista de inteligencia competitiva especializado en mercados de producto digital-físico en América Latina. Tu metodología identifica tres capas de competidores con énfasis en actores reales y con tracción observable — no en listados genéricos de industria ni en productos que no han lanzado. Para cada competidor buscas su debilidad específica para el segmento del equipo, no sus debilidades generales.

    Somos emprendedores en México con un negocio que combina una aplicación con IA, un artefacto físico inteligente y una página web de venta.

    - **Concepto:** DistanciaCero — un sistema digital-físico (app con IA + artefacto conectado) que detecta pasivamente la rutina diaria de un adulto mayor que vive solo, sin que él haga ninguna acción ni dependa de WiFi doméstico. La app guarda silencio total mientras todo esté normal y solo avisa al hijo/a que vive lejos por excepción, cuando algo se sale de la rutina esperada.
    - **Segmento objetivo:** Hijos/as adultos de 35 a 55 años en México que viven lejos de un padre o madre mayor de 65+ años que vive solo(a). (Segmento hipótesis validado con evidencia de mercado secundaria; el perfil de 4 capas VERIFICADO/HIPÓTESIS está en proceso mediante un ejercicio separado, aún sin entrevistas directas.)
    - **Dolor ⭐ que resolvemos:** El miedo constante a "la llamada" — no saber si su papá o mamá está bien durante el día, sin ninguna señal objetiva entre una llamada y otra.
    - **Precio estimado:** $300–$600 MXN al mes (rango basado en comparables activos en México: Estoy Bien $299 MXN/mes, Care 60+ desde $850 MXN/mes)

    Mapea los tres tipos con evidencia real y observable:

    - **DIRECTOS (mínimo 3):** misma solución, mismo usuario
    - **INDIRECTOS (mínimo 3):** diferente solución, mismo problema
    - **SUSTITUTOS (mínimo 2):** cómo resuelve el usuario sin ningún producto similar al nuestro

    Para cada competidor: nombre y descripción en 1 oración; dónde opera (México / LATAM / global); precio o modelo de ingresos si está documentado; su debilidad específica para nuestro segmento (no debilidades genéricas — específicas para este usuario).

    **FORMATO DE SALIDA:** *(plantilla con DIRECTOS, INDIRECTOS y SUSTITUTOS en una línea cada uno, y al final "EL COMPETIDOR MÁS PELIGROSO": el indirecto o sustituto más arraigado en el comportamiento actual del usuario, por qué es difícil de desplazar, y qué tendría que ofrecer una solución nueva para que el usuario cambie de comportamiento)*

??? example "Respuesta de Perplexity (clic para desplegar)"
    **MAPA COMPETITIVO — Segmento: Hijos/as adultos (35–55) que viven lejos de un padre o madre mayor de 65+ que vive solo(a)**

    #### Directos

    | Competidor | Qué es | Opera en | Precio | Debilidad específica para nuestro segmento |
    |---|---|---|---|---|
    | **Estoy Bien** | App de monitoreo diario automatizado vía notificaciones push/llamadas que confirma el estado del adulto mayor y alerta al círculo de cuidado si no responde | México (nacional) | $299 MXN/mes o $2,990 MXN/año | Requiere que el adulto mayor interactúe activamente (responder notificación o llamada) y tenga smartphone con datos; para hijos de padres con deterioro cognitivo leve o resistencia tecnológica, la tasa de abandono es alta porque el padre "se cansa de contestar" o ignora las notificaciones, dejando al hijo sin señal objetiva entre llamadas. |
    | **Cuida Más** | Servicio de teleasistencia 24/7 con terminal fija NEO + brazalete SOS + call center humano que atiende emergencias, recordatorios y acompañamiento | México (cobertura nacional vía call center en León, Gto.) | $1,800 MXN inicial + $800-928 MXN/mes (12 meses) o $10,208 MXN pago anual | El modelo está diseñado para reacción post-emergencia (botón SOS) y acompañamiento humano, no para detección pasiva de anomalías en rutina; el hijo que vive lejos sigue sin saber si su padre estuvo bien durante el día si no hubo botón presionado, y el costo 3x superior al rango de DistanciaCero limita adopción en clase media. |
    | **Care 60+** (Membresía de Salud + servicios domiciliarios) | Membresía de salud para adultos mayores 55-84 años con red de 6,000+ proveedores, telemedicina, descuentos y servicios opcionales de enfermería/cuidado a domicilio | México (CDMX y áreas metropolitanas principales) | Membresía desde $6,588 MXN/año; cuidado a domicilio desde $12,000-18,000 MXN/mes | Es un seguro/gestión de salud reactivo, no un sistema de monitoreo continuo; el hijo que vive lejos contrata cuidador por horas solo cuando hay crisis evidente, pero no tiene visibilidad diaria pasiva del estado del padre entre visitas, y el costo mensual de cuidado básico ($12k-18k) está 20-30x por encima del rango de DistanciaCero, haciéndolo inaccesible para prevención temprana. |

    #### Indirectos

    | Competidor | Qué es | Opera en | Precio | Debilidad específica para nuestro segmento |
    |---|---|---|---|---|
    | **Life360** | App de localización familiar con GPS en tiempo real, geocercas, historial de ubicación y detección de choques | Global (disponible en México vía App Store/Google Play) | Gratis (2 días historial, 2 alertas); Silver $9.99 USD/mes (~$180 MXN), Gold $16.99 USD/mes (~$300 MXN), Platinum $24.99 USD/mes (~$450 MXN) | Solo rastrea ubicación, no detecta si el adulto mayor se movió dentro de casa, comió, tomó medicamentos o tuvo una caída; para el hijo que vive lejos, saber que "papá está en casa" no resuelve el miedo a que esté tirado en el baño o haya tenido un evento médico sin poder pedir ayuda, y la interfaz de "círculo familiar" puede sentirse invasiva para padres que valoran autonomía. |
    | **Google Maps (Compartir ubicación) + Google Family Link** | Función nativa de Google Maps para compartir ubicación en tiempo real + app de control parental adaptada informalmente para adultos mayores | Global (México incluido) | Gratis | Family Link trata al adulto mayor como menor de edad (interfaz dice "supervisado", "restricciones de contenido"), lo que genera resistencia psicológica y abandono; Maps solo comparte ubicación GPS, no detecta presencia dentro del hogar ni anomalías de rutina, y ambos dependen de que el padre tenga smartphone con datos activos y batería cargada, algo que falla en adultos mayores con olvidos frecuentes de carga. |
    | **Sensores de movimiento WiFi + cámaras de vigilancia (DIY)** | Kits de sensores PIR/mmWave WiFi (Tuya, Aqara, TP-Link Tapo) + cámaras IP con app móvil para monitoreo remoto del hogar | México (venta vía Amazon, MercadoLibre, Home Depot, Steren) | Sensores $239-1,526 MXN c/u; kits 4-6 piezas $769-1,499 MXN; cámaras WiFi $738-1,200 MXN c/u; sin suscripción obligatoria pero almacenamiento en nube $50-150 MXN/mes | Requiere WiFi doméstico activo y configuración técnica (hub, app, geocercas, automatizaciones) que el adulto mayor no puede hacer solo; el hijo que vive lejos tiene que viajar para instalar, y si el padre se muda o cambia de router, el sistema se rompe; además, las alertas son genéricas ("movimiento detectado") sin IA que distinga rutina normal de anomalía, generando fatiga de notificaciones y abandono. |

    #### Sustitutos

    - **Llamadas diarias programadas + red informal (vecinos, portero, familiares cercanos)** — El hijo llama a la misma hora todos los días (mañana/tarde) y coordina con vecinos o familiares que viven cerca para que "echen un ojo" si no contesta. *Costo para el usuario:* 10-15 minutos diarios de tiempo del hijo + costo de llamadas ($0-50 MXN/mes si es WhatsApp/Google Voice); red informal depende de reciprocidad social y no tiene costo monetario directo, pero tiene costo de oportunidad (tiempo de vecinos/familiares) y riesgo de falla humana (vecino de viaje, familiar ocupado).
    - **Cuidador por horas (4-8 hrs/día, 3-5 días/semana)** — Contratación de cuidador independiente o vía agencia para acompañamiento básico, preparación de alimentos, recordatorio de medicamentos y supervisión visual. *Costo para el usuario:* $9,000-15,000 MXN/mes (4 hrs/día) o $18,000-27,000 MXN/mes (12 hrs/día) según ciudad y experiencia. *Costo implícito:* además del costo monetario, el hijo tiene que gestionar nómina informal, verificar confianza del cuidador, y coordinar horarios; para hijos que viven en otra ciudad o país, la logística de contratación y supervisión del cuidador es una barrera operativa significativa.

    #### El competidor más peligroso

    **Llamadas diarias + red informal (vecinos/familiares cercanos)** es el competidor más arraigado y difícil de desplazar.

    *Por qué es difícil de desplazar:*

    1. **Costo marginal cero:** No requiere suscripción, hardware ni configuración; el hijo ya llama a sus padres por afecto, y "aprovecha" para chequear que estén bien.
    2. **Confianza humana > tecnología:** Para la generación de hijos 35-55, la palabra de un vecino de confianza ("sí, vi luces encendidas ayer") o del portero ("bajó a por el periódico") tiene más peso que una alerta de app, especialmente en cultura mexicana donde la red social informal es fuerte.
    3. **Barrera psicológica:** Adoptar DistanciaCero implica reconocer que "las llamadas ya no son suficientes", lo cual activa culpa ("¿estoy descuidando a mi padre?") y resistencia emocional; muchos hijos posponen la decisión hasta que hay un evento grave (caída, hospitalización).
    4. **Inercia de comportamiento:** La rutina de llamada diaria está ya establecida; cambiar a un sistema pasivo requiere un acto consciente de adopción (investigar, comprar, instalar, configurar), mientras que seguir llamando es el default.

    *Qué tendría que ofrecer DistanciaCero para que el usuario cambie:*

    - **Prueba de valor en 14 días sin fricción:** Enviar el artefacto pre-configurado (sin WiFi, plug-and-play) + onboarding por WhatsApp/video llamada de 10 minutos con el hijo; si en 14 días el sistema detecta y alerta una anomalía real (ej. padre no salió a la hora usual, no abrió la refri), el hijo percibe valor inmediato y justifica el gasto.
    - **Narrativa de "tranquilidad entre llamadas", no "reemplazo de llamadas":** Posicionar como complemento ("te avisa si algo raro pasa entre tu llamada de las 9am y la de las 8pm"), no como sustituto, para reducir resistencia emocional.
    - **Precio ancla vs. cuidador:** Comunicar explícitamente "$300-600/mes vs. $12,000-18,000/mes de cuidador por horas"; el contraste hace que la suscripción se sienta como prevención de bajo costo, no como gasto discrecional.
    - **Garantía de "silencio = tranquilidad":** Promesa clara de "si no te avisamos, es porque todo está normal"; esto reduce la ansiedad de "¿y si la app falló?" y diferencia de Life360/sensores DIY que generan fatiga de notificaciones falsas positivas.

---

### Prompt 4 — Más competidores

**IA utilizada:** Perplexity (misma conversación)

!!! question "Mi prompt"
    dame mas competidores:

??? example "Respuesta de Perplexity (clic para desplegar)"
    Aquí tienes **competidores adicionales** identificados con evidencia verificable (operación real, precios documentados o distribución observable en 2025-2026):

    #### Directos adicionales

    | Competidor | Qué es | Opera en | Precio | Debilidad específica para nuestro segmento |
    |---|---|---|---|---|
    | **CarePredict Tempo** | Sistema de monitoreo conductual con wearable (reloj) + beacons en el hogar + IA que detecta cambios en patrones de actividad (cocinar menos, caminar menos, pasar más tiempo en cama) y alerta a familiares antes de que ocurra un evento clínico | EE.UU. (Florida) con distribución digital global vía web; no tiene presencia física en México pero es accesible para mexicanos con tarjeta internacional | $449-499 USD hardware kit + $69.99 USD/mes (~$1,200-1,400 MXN/mes) | Precio 2-3x superior al rango de DistanciaCero y requiere compra internacional con envío a México (aduanas, garantía limitada); además, el wearable debe cargarse diariamente y el adulto mayor puede olvidarlo o rechazarlo, rompiendo la continuidad del monitoreo. |
    | **MobileHelp** (Classic / Elite / Solo) | Sistema de alerta médica con botón SOS (pendant o reloj) + base celular o landline + monitoreo 24/7 en call center EE.UU. con opción de detección de caídas y GPS | EE.UU. (nacional) con envío internacional posible; no tiene operación formal en México pero se compra vía web | $19.95-41.95 USD/mes (~$360-750 MXN/mes) según plan; sin hardware upfront en algunos planes | Es reactivo (requiere que el adulto mayor presione botón) y el call center está en inglés/EE.UU., lo que limita utilidad para adultos mayores mexicanos monolingües; además, la alerta se activa solo cuando hay caída o botón presionado, no detecta anomalías silenciosas en rutina diaria (ej. no desayunó, no salió a caminar). |
    | **Mistatas** | Sistema de sensores inalámbricos en el hogar (movimiento, puertas, presencia) + app para familia que alerta sobre salidas inesperadas, inactividad prolongada o patrones anormales; incluye botón SOS opcional | Chile (Santiago) | 10,000-35,000 CLP/mes (~$220-770 MXN/mes) + costo de instalación de sensores | No tiene operación en México (solo Chile), lo que implica barrera de idioma en soporte, envío internacional de hardware y posible incompatibilidad de frecuencias celulares; además, el modelo requiere visita técnica para instalación de sensores, algo inviable para hijos que viven en otra ciudad/país. |

    #### Indirectos adicionales

    | Competidor | Qué es | Opera en | Precio | Debilidad específica para nuestro segmento |
    |---|---|---|---|---|
    | **Philips Lifeline** (AutoAlert / GoSafe) | Sistema de teleasistencia con botón SOS (pendant o reloj) + detección automática de caídas + GPS + call center 24/7; versión AutoAlert detecta caídas sin botón | Global (EE.UU., Europa); en México no tiene operación directa pero se distribuye vía importadores y marketplaces | $29.95-58.95 USD/mes (~$540-1,060 MXN/mes) + $19.95-50 USD activación | Al igual que MobileHelp, es reactivo (espera botón o caída); no monitorea rutina pasiva y el costo mensual duplica-triplica el rango de DistanciaCero; además, el soporte en México es limitado (importadores terceros, no Philips directo). |
    | **Lively** (GreatCall / Best Buy Health) | Wearable (reloj o pendant) con botón SOS, detección de caídas, GPS y app de bienestar familiar; incluye servicios de urgencia 24/7 | EE.UU. (Best Buy); no tiene distribución oficial en México pero se compra en Amazon MX importado | $24.99-49.99 USD/mes (~$450-900 MXN/mes) según plan | Requiere suscripción a red de urgencia EE.UU. (911 no funciona en México), lo que limita utilidad real para adultos mayores en México; además, el wearable depende de carga diaria y conectividad celular (SIM estadounidense), generando fricción operativa para hijos que viven lejos. |
    | **Nobi Smart Lamp** | Lámpara inteligente con sensor mmWave que detecta caídas, presencia y patrones de movimiento sin cámaras ni wearables; alerta a familiares vía app | EE.UU., Europa, Japón; disponible en México vía Amazon importado | $299-399 USD hardware + $15-30 USD/mes suscripción (~$540-1,080 MXN/mes) | Es un dispositivo único (lámpara) que solo monitorea la habitación donde está instalado; si el adulto mayor cae en baño o cocina, no lo detecta; además, el precio de hardware es 3-4x superior al artefacto estimado de DistanciaCero y requiere WiFi doméstico estable. |

    #### Sustitutos adicionales

    - **Grupos de WhatsApp familiares + videollamadas esporádicas** — El hijo crea un grupo con hermanos, tíos o vecinos cercanos y pide que "avisen si ven algo raro"; complementa con videollamadas 2-3 veces por semana para "ver que papá está bien". *Costo para el usuario:* $0-100 MXN/mes en datos móviles + 20-30 minutos semanales de tiempo del hijo y de la red familiar; sin costo monetario directo pero con costo de coordinación (mensajes, recordatorios, gestión de expectativas) y riesgo de falla por "difusión de responsabilidad" (todos asumen que otro ya chequeó).
    - **Visitas de fin de semana + llamadas diarias** — El hijo viaja cada 15 días o mensual para "chequear" físicamente (compras, limpieza, revisión de medicamentos) y llama diariamente entre visitas. *Costo para el usuario:* $800-2,500 MXN por viaje (gasolina/autobús) + 4-8 horas de tiempo del hijo por visita; en promedio $1,600-5,000 MXN/mes dependiendo de la distancia; es el sustituto más común en clase media mexicana, pero deja "puntos ciegos" de 13-29 días entre visitas donde el padre está solo sin monitoreo objetivo.

    #### Actores emergentes (AgeTech LATAM)

    - **Honor / Birdie** — Plataformas de coordinación de cuidado domiciliario que conectan familias con cuidadores, registran visitas en tiempo real y permiten seguimiento de tareas (medicamentos, comidas, higiene); no son monitoreo pasivo pero resuelven parte del dolor de "no saber si papá está bien". *Opera en:* EE.UU. / Europa (Honor), Reino Unido (Birdie); no tienen operación en México aún pero son referentes de industria AgeTech. *Debilidad específica:* Modelo B2B2C (vía agencias de cuidado) con costo de $3,000-8,000 MXN/mes por cuidador parcial; es complementario, no sustituto, y está fuera del rango de precio de DistanciaCero para prevención temprana.
    - **Vayyar Home / SensorSafe** — Sensores de presencia mmWave (radiofrecuencia) que detectan caídas y patrones de movimiento sin wearables ni cámaras; se instalan en techo o pared y envían alertas a app familiar. *Opera en:* EE.UU., Europa, Israel; distribución en México vía marketplaces especializados (TechMedCare, MercadoLibre). *Precio:* $300-600 USD hardware + $20-40 USD/mes (~$360-720 MXN/mes). *Debilidad específica:* Requiere instalación técnica (taladro, configuración WiFi) y el adulto mayor no puede reubicarlo si se muda; además, la detección es binaria (caída / no caída) sin IA que aprenda rutina individual y alerte por excepción (ej. "no abrió la refri hoy").

    #### Actualización: competidor más peligroso (con nuevos datos)

    Con los competidores adicionales, **el sustituto "visitas de fin de semana + llamadas diarias"** se consolida como el competidor más peligroso en México, incluso por encima de las llamadas solas.

    *Por qué es más peligroso que los productos:*

    1. **Cultura del "yo me hago cargo":** En México, el hijo que vive lejos siente obligación moral de viajar periódicamente; adoptar DistanciaCero puede percibirse como "delegar" el cuidado, activando culpa.
    2. **Tangible vs. intangible:** Una visita física (comprar despensa, arreglar algo en casa) da sensación de control y deber cumplido; una app que "guarda silencio" es abstracta y difícil de justificar a otros familiares ("¿para qué pagas eso si yo ya voy cada 15 días?").
    3. **Costo percibido como "inversión familiar":** El gasto de viaje ($1,600-5,000 MXN/mes) se justifica como "apoyo a papá", mientras que $300-600/mes en suscripción se ve como "gasto discrecional" aunque sea 10x más barato.

    *Qué tendría que ofrecer DistanciaCero para desplazar este comportamiento:*

    - **Narrativa de "complemento, no reemplazo":** "DistanciaCero no sustituye tus visitas; te avisa entre visitas si algo cambia en la rutina de papá, para que cuando viajes ya sepas qué ajustar".
    - **Reporte mensual para la familia:** PDF o WhatsApp automático con resumen ("papá salió 28 días del mes, cocinó 25 días, caminó promedio 4,200 pasos/día; única anomalía: día 12 no desayunó") que el hijo pueda compartir con hermanos/tíos para demostrar que "sí está monitoreando" aunque no viaje semanalmente.
    - **Precio ancla vs. viaje:** "$450/mes vs. $2,000 MXN por viaje"; posicionar como "con lo que te gastas en un viaje, tienes 4 meses de tranquilidad diaria".

**Mi decisión:** para el lienzo Blue Ocean elegí comparar contra los cuatro rivales más representativos de cada tipo: Estoy Bien y Cuida Más (directos), los sensores DIY (indirecto) y las llamadas + red informal (sustituto), porque son los que nuestro usuario realmente tiene a la mano en México.

---

### Prompt 5 — Lienzo estratégico Blue Ocean

**IA utilizada:** Claude — rol de estratega de innovación especializado en Blue Ocean Strategy para startups de hardware y software en mercados emergentes

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como estratega de innovación con experiencia en Blue Ocean Strategy. Aplica el Marco de las Cuatro Acciones (Eliminar / Reducir / Incrementar / Crear) antes de construir el lienzo. Cuando el equipo no tiene ventaja en un atributo, puntúalo bajo.

    *[Adjunté el mapa competitivo completo del Prompt 3, la descripción técnica de DistanciaCero, las capacidades diferenciales del equipo (sistemas embebidos ESP32/RP2350, diseño y manufactura física CAD/PCB/impresión 3D) y el segmento accionable.]*

??? example "Respuesta de Claude (clic para desplegar)"
    **LIENZO ESTRATÉGICO BLUE OCEAN**
    Concepto: DistanciaCero · Segmento: Hijos/as adultos (35–55) que viven lejos de un padre o madre mayor de 65+ que vive solo(a)

    #### Marco de las cuatro acciones

    **ELIMINAR — el concepto no ofrecerá:**
    Interacción activa del adulto mayor con la tecnología (login, presionar botón, responder notificación): Estoy Bien, Life360 y Family Link asumen que el adulto mayor puede y quiere operar una app o dispositivo. El dolor central del segmento es precisamente la ansiedad de no poder confiar en que su padre/madre haga algo activamente — un botón de pánico que hay que presionar en el momento de una caída ya asume la capacidad física que muchas veces falla justo cuando se necesita. Eliminar la dependencia de la acción del adulto mayor no es un "nice to have", es la premisa de diseño del artefacto pasivo.

    **REDUCIR — el concepto ofrecerá muy por debajo del estándar:**
    Call center humano / respuesta de emergencia en vivo (como Cuida Más): ese atributo está optimizado para un perfil de comprador que paga por "alguien que responda ya" en el momento de crisis — un modelo reactivo de teleasistencia tradicional. Para el segmento hijos/as 35-55, el valor no está en la respuesta post-emergencia sino en la prevención de la ansiedad diaria; construir y mantener un call center 24/7 es la razón por la que Cuida Más cuesta 3x más, sin resolver el dolor real (que es la incertidumbre acumulada, no solo el instante de la caída). El concepto reduce esto deliberadamente a alertas automatizadas por excepción, sin call center propio.

    **INCREMENTAR — el concepto ofrecerá muy por encima del estándar:**
    Silencio / ausencia de fricción cuando todo está normal: ningún competidor directo lo hace bien — Estoy Bien depende de que el adulto mayor confirme activamente (generando fricción diaria para ambos lados), Life360 y los sensores DIY generan notificaciones frecuentes o fatiga de alertas. El segmento no quiere "más información", quiere dejar de tener que preguntar — el silencio confiable es en sí mismo el producto. Nadie en el mapa compite en minimizar interrupciones; todos compiten en generar más visibilidad, que no es lo mismo que generar más tranquilidad.

    **CREAR — el concepto introducirá por primera vez:**
    Detección de rutina aprendida integrada en un objeto cotidiano sin WiFi ni batería gestionada por el usuario (bastón/sillón/taza con conectividad celular/LoRa propia): ningún competidor —ni los directos ni los sensores DIY (Tuya, Aqara, Tapo)— ofrece esto: los sensores DIY requieren WiFi doméstico y configuración técnica (barrera para el adulto mayor y para el hijo/a a distancia), y ninguno aprende el patrón individual de esa persona para detectar desviación, solo dan alertas genéricas por regla fija (puerta abierta, movimiento). Esto es posible específicamente por la capacidad declarada del equipo en sistemas embebidos de bajo nivel (ESP32/RP2350, firmware propio) y diseño/manufactura física (CAD, PCB, impresión 3D) — no es una promesa de marketing, es una capacidad técnica interna que los competidores no tienen sin depender de terceros.

    #### Atributos del lienzo

    1. **Precio mensual/anual percibido** — costo recurrente para el hijo/a comparado con el rango de mercado
    2. **Autonomía requerida del adulto mayor** — cuánto debe hacer activamente el adulto mayor para que el sistema funcione (más alto = más se le exige)
    3. **Respuesta en emergencia real (caída, crisis)** — capacidad de reacción ante un evento agudo
    4. **Silencio / ausencia de fricción en el día a día** — qué tan poco interrumpe cuando todo va bien
    5. **Detección de anomalía de rutina (vs. alerta genérica)** — capacidad de aprender el patrón normal de esa persona y detectar desviación, no solo eventos discretos
    6. **Independencia de infraestructura doméstica (WiFi, smartphone, batería gestionada)** — qué tanto depende de que el hogar tenga tecnología ya configurada
    7. **Integración física invisible (objeto cotidiano vs. dispositivo adicional)** — si el sensor se percibe como un objeto nuevo o como algo que ya estaba ahí
    8. **Confianza/costo emocional de "reemplazar" el vínculo humano (llamadas, red informal)** — qué tan bien resuelve la barrera psicológica de culpa frente al sustituto más peligroso

    #### Tabla de puntuación (1 = muy bajo · 5 = muy alto)

    | Atributo | Estoy Bien | Cuida Más | Sensores DIY | Llamadas + red informal | DistanciaCero |
    |---|:--:|:--:|:--:|:--:|:--:|
    | Precio percibido (5 = barato) | 3 | 1 | 4 | 5 | 4 |
    | Autonomía requerida del adulto mayor (5 = no requiere nada) | 1 | 3 | 2 | 4 | **5** |
    | Respuesta en emergencia real | 2 | 5 | 2 | 1 | 2 |
    | Silencio / sin fricción diaria | 2 | 2 | 2 | 3 | **5** |
    | Detección de anomalía de rutina (vs. genérica) | 2 | 1 | 1 | 0 | **5** |
    | Independencia de infraestructura doméstica | 4 | 4 | 1 | 5 | **5** |
    | Integración física invisible | 0 | 2 | 1 | 0 | **5** |
    | Resuelve la culpa de "reemplazar" el vínculo | 1 | 2 | 1 | 3 | 3 |

    *Nota:* "Respuesta en emergencia real" está deliberadamente REDUCIDO (2/5) frente al estándar de Cuida Más (5/5) — es la consecuencia explícita del Paso 1. "Integración física invisible" y "Detección de anomalía de rutina" puntúan 0 para competidores porque son atributos CREADOS que hoy no existen en el mapa competitivo tal como fue descrito.

    #### Lectura del lienzo

    La curva del concepto es diferente a la de los competidores en: autonomía requerida del adulto mayor (invertida frente a todos), detección de anomalía de rutina (categoría nueva, no solo "más" de lo mismo), integración física invisible (categoría nueva) y silencio/ausencia de fricción (nadie más lo prioriza, todos compiten en dar más visibilidad o más contacto).

    **El océano azul en una oración:** DistanciaCero no compite por dar más visibilidad, más rapidez de respuesta o más contacto humano — compite por necesitar cero esfuerzo del adulto mayor y cero atención activa del hijo/a mientras todo está bien, algo que ningún competidor directo, indirecto o sustituto ofrece hoy porque todos están diseñados alrededor de la interacción (push, presionar, llamar, revisar cámara) en lugar de la ausencia de ella.

    **ADVERTENCIA DE OCÉANO ROJO:**
    El atributo "resuelve la culpa de reemplazar el vínculo humano" puntúa 3/5 para el concepto — muy cerca del sustituto más peligroso (llamadas + red informal, 3/5) y sin ventaja clara sobre él. Si el mercado percibe que DistanciaCero simplemente "automatiza" lo que ya hace la llamada diaria, sin resolver la barrera psicológica de fondo (culpa por no llamar/visitar en persona), el concepto corre el riesgo de terminar comparado en términos de "¿esto reemplaza el cariño de llamar?" — una discusión emocional, no técnica, donde ninguna ventaja de hardware ayuda y donde se podría acabar compitiendo en precio o en "tranquilidad de conciencia" percibida, no en producto.

    **PREGUNTA CLAVE PARA EL EQUIPO:**
    Todo el lienzo asume que "silencio total + alerta solo por excepción" se percibe como tranquilidad y no como ausencia de evidencia de que algo funciona — es decir, que el hijo/a confiará en un sistema que no le habla casi nunca. Esta es la hipótesis más importante y la más peligrosa de no verificar: si en entrevistas reales el hijo/a expresa que necesita alguna señal periódica de "todo bien, el sistema está activo" (aunque sea mínima) para confiar en el silencio, el atributo #4 (silencio/sin fricción) —el corazón mismo del océano azul— tendría que rediseñarse antes de construir el MVP.

!!! warning "Actualización con entrevistas (semana 3): ajuste de diseño necesario"
    La advertencia de océano rojo se confirma y se vuelve más grave de lo previsto. La entrevista con Ricardo revela un **actor de decisión que no estaba en el lienzo**: cuando ya existe un cuidador humano local (como su hermana Sonia), **el consentimiento de esa persona puede pesar más que el del propio adulto mayor**. Ricardo no instalaría el producto si Sonia lo sintiera como un "voto de desconfianza" hacia su forma de cuidar. Eso convierte al cuidador local en un segundo comprador con poder de veto, y confirma que el riesgo más grande de este producto puede ser humano, no técnico.

    La "pregunta clave" de la IA también se respondió: Lupita **sí** necesita una señal activa para confiar ("necesito algo activo, algo que confirme"), mientras que Ricardo prefiere el silencio. El atributo de silencio tiene que volverse configurable.

---

### Prompt 6 — Propuesta de valor final

**IA utilizada:** Claude — rol de estratega de marca y comunicación, combinando el framework Insightful/Unique/Targeted de IDEO con la Pirámide de Valor de Bain

!!! question "Mi prompt (enviado como archivo adjunto)"
    Actúa como estratega de marca y comunicación. Combina el framework IDEO con la Pirámide de Valor de Bain. Nombra al usuario específico, nombra el resultado concreto, implica por qué esta solución y no otra. No uses "plataforma", "solución integral", "innovador", "ecosistema". No describas el producto — describe el valor que entrega.

    *[Adjunté el perfil de segmento, el dolor/ganancia del Pain-Gain Map, el competidor más peligroso con su debilidad, el hueco azul identificado y el precio estimado. Pedí tres versiones de máximo 25 palabras cada una.]*

??? example "Respuesta de Claude (clic para desplegar)"
    **PROPUESTA DE VALOR — Concepto: DistanciaCero**

    #### Nivel en la Pirámide de Bain

    **Nivel actual:** Funcional

    **Justificación:** hoy el concepto se articula alrededor de una función verificable (detectar rutina y notificar por excepción), no todavía alrededor de una transformación de identidad o relación ("soy el hijo/a presente aunque viva lejos").

    **Oportunidad de subir:** sí — al nivel Emocional, sin exagerar: el Pain-Gain Map ya identifica que el dolor real no es informativo ("no sé qué pasa") sino emocional ("el miedo constante a la llamada"). El producto puede subir un nivel legítimamente porque la ganancia que promete —confirmación diaria— ataca directamente esa ansiedad de fondo, no solo entrega un dato. Subir al nivel Transformador (ej. "una nueva forma de ser hijo/a a distancia") sí sería prematuro: no hay evidencia todavía de que el producto cambie la identidad o el rol del usuario, solo que reduce su ansiedad diaria.

    #### Evaluación IDEO

    - **Insightful ✅** — resuelve específicamente el vacío que deja el competidor más peligroso (llamadas + red informal): dar una señal objetiva entre una llamada y otra, algo que ningún competidor directo ni indirecto ofrece hoy.
    - **Unique ✅** — la combinación de firmware propio (ESP32/RP2350) + capacidad de manufactura física (CAD, PCB, impresión 3D) permite integrar el sensor en un objeto cotidiano real sin depender de un proveedor externo; los competidores DIY dependen de sensores genéricos de terceros sin esa integración.
    - **Targeted ⚠️** — el segmento (hijos/as 35-55, padre/madre 65+ que vive solo y lejos) está bien acotado en el papel, pero sigue siendo hipótesis sin entrevistas: no se sabe todavía si "lejos" significa otra ciudad, otro país, o simplemente "no puede ir todos los días" — la precisión es narrativa, no verificada.

    #### Versión 1 — Funcional

    > "Para hijos que viven lejos de un padre o madre mayor, DistanciaCero confirma cada día que está bien, sin que ninguno de los dos tenga que hacer nada."

    *Fuerza:* es concreta y verificable — el resultado (confirmación diaria) es medible y no depende de interpretación.
    *Limitación:* describe bien la función pero no toca la emoción real que el Pain-Gain Map identificó como el dolor central (el miedo, no la falta de información).

    #### Versión 2 — Emocional

    > "Para hijos que viven lejos de su padre o madre mayor, DistanciaCero apaga el miedo constante a 'la llamada', sin tener que preguntar todos los días."

    *Fuerza:* nombra la emoción exacta que el equipo documentó como el dolor ⭐ ("la llamada"), lo que la hace sonar específica y no genérica.
    *Riesgo:* "apaga el miedo" puede sonar exagerado si el producto todavía no tiene evidencia (entrevistas, uso real) de que efectivamente reduce la ansiedad y no solo la traslada (ej. ansiedad por si el dispositivo funciona bien).

    #### Versión 3 — La más fuerte

    > "Para hijos que viven lejos de su padre o madre mayor, DistanciaCero reemplaza el miedo a 'la llamada' por la certeza diaria de que todo está bien — sin preguntar, sin culpa."

    *Por qué esta es la más fuerte:* combina el nivel emocional (nombra el miedo real) con una implicación clara de por qué esta solución y no la llamada diaria ni el botón de pánico — "sin preguntar, sin culpa" apunta directamente a la barrera psicológica del competidor más peligroso (la culpa de "reemplazar" las llamadas), algo que ni la Versión 1 ni la Versión 2 abordan explícitamente.

    #### Oferta vs. propuesta de valor

    **Oferta del producto (qué venden):** "Un artefacto conectado (bastón, sillón o taza) con conectividad celular/LoRa propia que detecta pasivamente la rutina diaria de un adulto mayor y una app que solo notifica al hijo/a cuando detecta una desviación significativa del patrón normal, por una suscripción de $300–$600 MXN al mes."

    **Propuesta de valor (por qué lo compran):** "Para hijos que viven lejos de su padre o madre mayor, DistanciaCero reemplaza el miedo a 'la llamada' por la certeza diaria de que todo está bien — sin preguntar, sin culpa."

    **La diferencia en una línea:** La oferta describe qué hace el objeto (detección, conectividad, notificación); la propuesta describe qué deja de sentir el hijo/a (miedo, culpa) — el sujeto pasa del artefacto al usuario, y el nivel sube de funcional a emocional sin mencionar nunca al competidor por nombre.

!!! warning "Actualización con entrevistas (semana 3)"
    La evaluación IDEO sube de Targeted ⚠️ a **Targeted ✅ con matiz**: el segmento sí siente el dolor descrito, pero no es homogéneo, son **tres perfiles distintos** según si existe o no una red humana local. La Versión 3 sigue funcionando para Lupita (sin red local), pero **no** es el mensaje correcto para Ricardo (con red local fuerte, prefiere el silencio y no compra para aliviar su propio miedo sino el de su hermana). Se necesitan variantes por perfil, no una sola versión universal.

**Propuesta de valor ajustada por perfil (post-entrevistas):**

| Perfil | Propuesta de valor ajustada |
|---|---|
| Sin red local fuerte (tipo Lupita) | "Para quienes viven lejos y no tienen quién revise a su mamá o papá, DistanciaCero avisa apenas algo cambia — sin depender de que alguien más esté cerca para reaccionar." |
| Con red local fuerte (tipo Ricardo) | "Para quienes ya tienen quién cuide de cerca a su padre o madre, DistanciaCero le quita a esa persona la carga de estar siempre pendiente — sin reemplazarla." |
| Local, sin red delegada (tipo Mariana) | "Para quienes viven cerca pero no pueden estar ahí todo el día, DistanciaCero confirma que todo está bien sin pedirle nada a su mamá o papá — ni una app, ni un botón, ni acordarse de nada." |

---

## 4. Canvas de Mercado (resumen)

Con todo lo anterior armé un Canvas de Mercado de 9 diapositivas para la exposición. Este es su contenido:

| # | Diapositiva | Mensaje principal |
|---|---|---|
| 1 | Portada | DistanciaCero: segmento, mercado, competencia y propuesta de valor, contrastados con tres entrevistas reales. |
| 2 | Segmento: cuatro capas, un solo comprador | **Demográfica:** hijos/as 35–55 con padre/madre 65+ que vive solo(a), en la misma ciudad, en otra ciudad o en el extranjero. **Conductual:** llamada casi diaria; apoyo delegado a un tercero local cuando existe; 1 de 3 ya abandonó un botón SOS. **Psicográfica:** "Vivir en otro país te pone en un estado de alerta constante" (Lupita). **Económica:** $450–700 MXN/mes de disposición espontánea; quien decide no siempre es quien paga. |
| 3 | No es un segmento: son tres perfiles | Tabla Mariana / Lupita / Ricardo (ver sección 5) y las 4 hipótesis que siguen abiertas: el patrón con n=3, la alerta sin respondiente, el consentimiento del adulto mayor y el del cuidador local. |
| 4 | TAM → SAM → SOM | 94,350 personas ($509.5M) → 17,832 ($96.3M) → 850 ($4.59M). El supuesto de 25% de disposición de pago queda confirmado como conservador. |
| 5 | Directos, indirectos, sustitutos | Estoy Bien, Cuida Más, Care 60+ · Life360, Family Link, sensores DIY · llamadas + red informal, cuidador por horas. El más peligroso: llamadas + red informal, con un cuidador local que puede vetar la compra. |
| 6 | Eliminar, reducir, incrementar, crear | Las cuatro acciones y el hueco azul en una oración. |
| 7 | El lienzo estratégico | La tabla de puntuación, con la advertencia de océano rojo "confirmada y agravada". |
| 8 | De la oferta a la propuesta | Oferta vs. Versión 3; Pirámide de Bain (Funcional → Emocional). El error de la primera versión: describía qué hace el objeto, no qué deja de sentir el hijo/a. |
| 9 | Queda validado, con ajustes | El veredicto de viabilidad de la sección 5. |

---

## 5. Validación con usuarios — Semana 3

Tres entrevistas a profundidad, tres hipótesis puestas a prueba, y lo que cambia a partir de aquí. Este es el contenido de la presentación de resultados que expusimos.

### Metodología — a quién entrevistamos

| | Mariana, 42 | Lupita, 37 | Ricardo, 51 |
|---|---|---|---|
| Ubicación | Puebla capital | Chicago, EE. UU. | CDMX |
| Perfil | Cuidadora local | Cuidadora diáspora | Cuidador con apoyo local |
| Padre/madre | Su mamá vive en la misma ciudad | Su mamá (66) vive sola en Puebla | Su papá (68) vive en Veracruz |
| Contacto habitual | Llama todos los días, 7–7:30 pm | Videollamada diaria, 20–40 min | Llama martes y viernes, no a diario |
| Apoyo local más cercano | Su tía Licha | Prima a 40–60 min | Su hermana Sonia lo ve cada 2–3 días |
| Historial con tecnología | Nunca ha usado apps ni dispositivos | Ya probó y abandonó un botón SOS | Nunca ha buscado ni pagado por monitoreo |

### Hipótesis 1 · Sobre el dolor — ¿se preocupan seguido, fuera de las llamadas?

**✓ CONFIRMADA — CON MATIZ**

> "Todos los días, varias veces (...) vivir en otro país te pone en un estado de alerta constante." — Lupita (diáspora, sin red local cercana)

> "Si tarda mucho en contestar sí ya se me acelera el corazón, aunque luego resulte que nomás estaba regando las plantas." — Mariana

> "Poco, la verdad, tal vez una vez a la semana, y casi siempre es cuando Sonia menciona algo de pasada, no espontáneamente." — Ricardo

**El matiz:** la frecuencia de la preocupación no depende de la distancia en km, sino de si ya existe una persona de confianza cerca del adulto mayor.

### Hipótesis 2 · Sobre la solución — ¿prefieren el silencio o una confirmación diaria?

**⚠ DEPENDE DEL PERFIL** — no hay una respuesta única; depende de si ya existe una red humana de apoyo local.

> "Sin duda el mensaje diario, sin pensarlo (...) necesito algo activo, algo que confirme, no algo pasivo." — Lupita, sin red local fuerte

> "El silencio no me pondría nervioso, al contrario, creo que lo preferiría — ya confío en el sistema humano que tengo con Sonia." — Ricardo, con red local fuerte

**Implicación de diseño:** el modo de notificación (silencio total vs. confirmación diaria) no puede ser una decisión única de producto: debe ser configurable por familia. Ricardo además pide que la alerta llegue a él y a Sonia al mismo tiempo, no solo al pagador.

### Hipótesis 3 · Sobre el pago — ¿cuánto pagarían sin pensarlo?

**✓ CONFIRMADA** — las tres caen dentro o por encima del rango estimado de $300–$600 MXN/mes.

| | Mariana (local) | Lupita (diáspora) | Ricardo (con apoyo local) |
|---|---|---|---|
| Precio sin pensarlo | $450 MXN/mes | $30–35 USD/mes (~$550–650 MXN) | $600–700 MXN/mes |
| Nota | Arriba de esa cifra, compara con "lo que ya hago gratis" | Techo indoloro, ya arriba del rango; de $35 a $50 USD "lo piensa un poco" | Para aliviar a su hermana, no a sí mismo; de $1,000 en adelante lo consulta con Sonia primero |

### Más allá de las 3 hipótesis — lo que no esperábamos encontrar

1. **La autonomía del adulto mayor pesa más que la ansiedad del hijo.** El mayor freno de Mariana no es el precio ni la tecnología: es que su mamá se sienta vigilada o incapaz de vivir sola.
2. **El diseño "sin WiFi" ya está validado por una frustración real.** Mariana describe espontáneamente una mala experiencia configurando el router de su mamá a distancia.
3. **"Cero acción del adulto mayor" se valida por un fracaso ajeno.** Lupita pagó por un botón de emergencia y lo canceló porque su mamá "nunca se acordaba de traerlo puesto".
4. **La alerta sin un respondiente cercano genera más ansiedad, no menos.** Para Lupita, avisar que algo cambió no basta si sigue sin haber nadie que pueda llegar rápido.
5. **A veces el comprador no busca su propia tranquilidad.** Ricardo pagaría "para aliviarle la vida a mi hermana", como forma de compensar que ella carga el trabajo físico y él solo paga.
6. **El riesgo más grande puede ser humano, no técnico.** Ricardo no instalaría el producto si Sonia lo sintiera como un "voto de desconfianza" hacia su forma de cuidar: antes que su papá, ella tendría que estar de acuerdo.

### Hallazgo estructural — no es un segmento, son tres perfiles

| | Mariana | Lupita | Ricardo |
|---|---|---|---|
| Distancia física | Misma ciudad | Otro país | Otra ciudad (Veracruz) |
| Red humana local existente | Tía cercana | Prima a 40–60 min | Hermana ahí, c/2–3 días |
| Respuesta local si algo pasa | Minutos | 40–60+ min | Inmediata (Sonia ya está) |
| Preocupación fuera de llamadas | Puntual | Varias veces al día | ~1 vez por semana |
| Preferencia silencio / activo | Sin explorar a fondo | Rechaza el silencio | Prefiere el silencio |
| Techo de pago sin pensarlo | $450 MXN/mes | $30–35 USD/mes | $600–700 MXN/mes |

### Veredicto de viabilidad

**QUEDA VALIDADO:** el dolor es real (H1), con una causa identificable: depende de si ya hay una red humana local · el precio estimado es correcto e incluso conservador en 2 de 3 perfiles (H3) · el diseño sin WiFi y sin acción del adulto mayor ataca fricciones que los usuarios ya vivieron y abandonaron en otras soluciones.

**DEBE AJUSTARSE:** el modo "silencio vs. confirmación activa" (H2) no puede ser único: debe ser configurable según si la familia ya tiene una red local fuerte. Aparece un riesgo nuevo y crítico: un cuidador humano existente (como Sonia) puede bloquear la adopción si siente que el producto desconfía de su cuidado; su consentimiento puede pesar más que el del propio adulto mayor. Falta resolver también la alerta-sin-respondiente y el consentimiento explícito del adulto mayor.

**Próximo paso:** entrevistar más personas distinguiendo si ya tienen o no una red humana local, para confirmar el patrón, y diseñar un modo de notificación configurable (silencio vs. confirmación diaria, y multi-destinatario).

---

## 6. Conclusión de esta semana

| Bloque | Resultado (actualizado con entrevistas, semana 3) |
|---|---|
| Segmento accionable | La Capa 3 (psicográfica) pasa de HIPÓTESIS a CONFIRMADA CON MATIZ: el dolor es real pero varía según si existe red humana local, no según la distancia en km. El segmento deja de ser homogéneo: son 3 perfiles distintos. |
| TAM / SAM / SOM | Supuesto de disposición de pago (25%) confirmado como conservador: las 3 cotizaciones reales caen dentro o arriba del rango $300–600 MXN/mes. Base del TAM ($509.5M MXN) sostenida, validada con n=3. |
| Mapa competitivo | Advertencia de océano rojo confirmada y ampliada: aparece un nuevo actor de decisión, el cuidador humano local, cuyo consentimiento puede bloquear la venta aunque el pagador esté convencido. |
| Blue Ocean | "Cero acción del adulto mayor" y "sin WiFi" se validan por fracasos reales ya vividos por los entrevistados (botón SOS abandonado, mala experiencia configurando el router). |
| Propuesta de valor | Sube de Targeted ⚠️ a ✅ con matiz, pero se necesitan 3 variantes de mensaje, una por perfil, no una propuesta única. |

**Pendiente para la siguiente semana:** con solo tres entrevistas, el patrón "el dolor depende de la red local, no de la distancia" es una hipótesis fuerte, no una ley. El siguiente paso es entrevistar más personas distinguiendo si ya tienen o no una red humana local. Quedan además tres preguntas de diseño sin resolver:

1. Cómo diseñar la alerta cuando no hay un respondiente cercano disponible (el caso de Lupita).
2. Cómo obtener el consentimiento explícito del adulto mayor sin que sienta el producto como vigilancia.
3. Cómo obtener el consentimiento del cuidador humano local (como Sonia) antes de que la familia compre, dado que su rechazo puede bloquear la adopción.

---

## 7. ¿Qué aprendí?

- **Marcar dónde termina el dato y empieza el supuesto hace útil el análisis.** El perfil de segmento pudo haberse presentado "completo" rellenando la capa psicográfica con lo que *creo* que siente un hijo o hija. En cambio quedó casi vacía, y esa capa vacía fue justo el mapa de qué preguntar en las entrevistas.
- **El TAM es un razonamiento, no una cifra para impresionar.** Los $509.5M MXN suenan sólidos, pero están construidos sobre un 25% de disposición de pago que la propia IA señaló como el supuesto más incierto, y que puede mover el resultado hasta 2.3x en cualquier dirección.
- **Cada herramienta para lo suyo.** Usé Perplexity para el tamaño de mercado y los competidores porque necesitaba fuentes y precios reales, y Claude para el análisis estratégico. También aprendí que pedir "dame más competidores" cambió la conclusión: el sustituto más peligroso pasó de "llamadas" a "visitas + llamadas".
- **Puntuar bajo donde no hay ventaja es lo que hace aparecer los riesgos.** En el lienzo Blue Ocean, el atributo de resolver la culpa de reemplazar el vínculo humano quedó empatado con el competidor más peligroso. Esa honestidad es la que hizo visible el riesgo más grande de la semana.
- **La variable correcta no era la distancia.** Llevaba semanas construyendo el segmento alrededor de los kilómetros, y las entrevistas mostraron que lo que predice el dolor es si ya existe alguien de confianza cerca del adulto mayor. Ricardo, que vive más lejos que Mariana, se preocupa mucho menos porque ya tiene a Sonia.
- **Hay actores que ningún mapa competitivo muestra.** Sonia, que ni siquiera es quien compraría, puede vetar la venta si siente que el producto desconfía de ella.

---

## 8. Reflexión personal

Antes de esta actividad, para mí "conocer al mercado" significaba tener muchos datos: cifras de INEGI, precios de competidores, un TAM grande. Después de construir estos bloques en secuencia entendí que conocer al mercado significa poder señalar exactamente dónde termina lo que sé y empieza lo que estoy asumiendo. El perfil de segmento con la Capa 3 casi vacía se sintió, al principio, como un resultado pobre, hasta que entendí que ese vacío es información real: me decía que todavía no podía escribir la propuesta de valor con la certeza de un hallazgo, solo con la de una hipótesis razonada. Y en el Blue Ocean, ver que un atributo clave de mi propuesta quedó empatado con el competidor más peligroso, en lugar de ganado, fue el momento donde más sentí que el análisis estaba siendo honesto conmigo.

Ya con las tres entrevistas hechas, las entrevistas no solo confirmaron precio y dolor: partieron el segmento en tres perfiles distintos y me obligaron a aceptar que la variable que puse en el centro del análisis (la distancia) no era la que importaba. Lo más incómodo fue el hallazgo de Ricardo y Sonia: había construido todo el Blue Ocean pensando en el adulto mayor y el hijo/a como los dos actores relevantes, y resulta que hay un tercero, el cuidador humano local, cuyo consentimiento puede pesar más que el de los otros dos juntos. Si algo me llevo de esta semana es que una entrevista bien hecha no solo valida hipótesis: también te enseña qué pregunta se te olvidó hacer.

---

## Estado de la actividad

🟢 **Actividad validada con matices** — análisis de mercado completo, contrastado con tres entrevistas de validación directa (semana 3). Las hipótesis de dolor y precio quedan confirmadas; el modo de notificación y el riesgo de bloqueo por un cuidador humano local quedan como ajustes de diseño pendientes, y el patrón de los 3 perfiles debe confirmarse con más entrevistas.

**Evidencias en esta página:** prompts y respuestas completas de IA (Claude y Perplexity) · perfil de segmento en 4 capas · dimensionamiento TAM/SAM/SOM · mapa competitivo (2 rondas) · lienzo Blue Ocean · propuesta de valor en 3 versiones + 3 variantes por perfil · Canvas de Mercado · validación con 3 entrevistas de usuario