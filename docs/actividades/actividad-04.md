# Actividad 4 — Mercado, Valor y Propuesta de Valor

**Tema:** DistanciaCero — Segmento accionable, dimensionamiento de mercado, análisis competitivo y propuesta de valor
**Fecha:** 17/09/2026 · Actualizado 18/09/2026 con validación real (Semana 3)
**Blueprint:** Creación de valor → Captura de valor
**DVF:** 🟢 Deseable (validado con entrevistas) · 🟡 Viable (precio validado, riesgo de adopción nuevo)

---

## Objetivo de la actividad

Esta semana conecta dos preguntas que se confunden fácilmente: **¿qué valor crea mi producto?** y **¿por qué alguien me lo compra a mí y no a otro?** La primera es la propuesta de valor. La segunda es la diferenciación. Sin las dos claras, el pitch no funciona y el modelo de negocio no sostiene.

La actividad avanza en cuatro frentes articulados: **segmento accionable en 4 capas** (con marcado explícito VERIFICADO/HIPÓTESIS), **dimensionamiento TAM/SAM/SOM** con lógica de reducción explícita, **mapa competitivo y lienzo estratégico Blue Ocean**, y **propuesta de valor** con validación IDEO y Pirámide de Bain.

Documento aquí todo el proceso que seguí con el equipo para el proyecto **DistanciaCero** — el sistema digital-físico de tranquilidad a distancia para hijos con un padre o madre mayor que vive solo(a).

> **🔄 Actualización (18/09/2026):** esta semana se realizaron las tres entrevistas de validación que estaban pendientes (Mariana, Lupita, Ricardo). Los resultados están integrados en cada bloque de abajo, marcados explícitamente como ✅ CONFIRMADO, ⚠️ CONFIRMADO CON MATIZ o 🔧 AJUSTE DE DISEÑO. El detalle completo de metodología, citas y veredicto está en la sección **"Validación con usuarios — Semana 3"**.

---

## Contexto del producto

- **Problema:** hijos e hijas de 35–55 años en México con un padre/madre de 65+ que vive solo y lejos, viviendo con ansiedad y culpa constante — el miedo a "la llamada".
- **Mecanismo:** artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con conectividad celular/LoRa propia, que detecta pasivamente la rutina diaria del adulto mayor sin que él haga nada ni dependa de WiFi doméstico.
- **IA:** modelo en la nube que aprende el patrón individual de rutina de cada usuario y notifica al hijo/a solo por excepción, cuando la rutina se rompe.
- **Punto de partida (actualizado):** el análisis de mercado documentado abajo partió originalmente de investigación secundaria (fuentes públicas, estadísticas oficiales) y del Pain-Gain Map de semana 2 — sin conversaciones directas con el segmento. En semana 3 se realizaron tres entrevistas a profundidad (Mariana, Lupita, Ricardo) que confirman, matizan o ajustan cada hipótesis crítica identificada entonces. El análisis original se conserva íntegro abajo; lo que la evidencia directa confirmó o cambió está marcado explícitamente en cada bloque.

---

## Investigación con IA

Encadené distintos "roles" de IA para cada bloque del análisis: uno para el perfil de segmento, otro para el dimensionamiento de mercado, otro para el mapa competitivo + Blue Ocean, y uno más para la propuesta de valor final.

### Prompt 1 — Perfil de segmento accionable (4 capas)

#### IA utilizada

**IA:** Claude (Anthropic) — rol de investigador de mercado especializado en segmentación de clientes para negocios digital-físicos en mercados emergentes latinoamericanos

#### Prompt

```text
Actúa como un investigador de mercado con especialización en
segmentación de clientes para negocios de producto digital-físico
en mercados emergentes latinoamericanos. Tu metodología combina
datos demográficos verificables con análisis conductual y
psicográfico basado en comportamiento observable — nunca en
suposiciones sobre actitudes o valores generales. Cuando el
equipo no tiene evidencia de una capa, lo señalas directamente
en lugar de rellenar con hipótesis no marcadas.

[Se incluyó la evidencia de mercado secundaria: INEGI (adultos
60+ que viven solos), mercado de botones de pánico en
Amazon/Mercado Libre, workarounds documentados por la startup
Kinnect, comunidad "Club de Cuidadores" en Facebook, y el
piloto académico de tele-asistencia en CDMX de 2013. Se pidió
marcar cada dato como VERIFICADO o HIPÓTESIS, siendo
especialmente estricto con las capas conductual y psicográfica,
que no pueden marcarse como "confirmadas por el usuario" sin
entrevistas reales.]
```

#### Resultado de la IA

> El perfil salió deliberadamente **incompleto por diseño**. La Capa 1 (demográfica) y la Capa 2 (conductual) tuvieron datos VERIFICADOS pero **solo sobre el adulto mayor y sobre la existencia del mercado/comunidades** — ninguna fuente secundaria caracteriza directamente al hijo/hija comprador. La Capa 3 (psicográfica) quedó **casi vacía**: ninguna fuente contiene una cita textual de un hijo/hija adulto sobre su ansiedad o culpa; la emoción central del Pain-Gain Map ("miedo a la llamada") se marcó como HIPÓTESIS, no como hallazgo.

**Hipótesis críticas identificadas (estado actualizado con entrevistas semana 3):**

1. Que el segmento correcto sea el hijo/hija 35-55 (y no otro familiar) como comprador y usuario real. → ⚠️ **Confirmado con matiz** — el comprador sí es el hijo/a 35-55, pero no siempre busca su propia tranquilidad: Ricardo compra "para aliviarle la vida a mi hermana" (Sonia), no para sí mismo.
2. Que la emoción central sea "culpa" y el disparador de compra sea "tranquilidad sin preguntar" — sin ninguna fuente secundaria que lo respalde. → ⚠️ **Confirmado con matiz** — el disparador depende del perfil: para Lupita (sin red local) es ansiedad activa y constante ("un estado de alerta constante"); para Mariana es un pico de ansiedad puntual ("se me acelera el corazón"); para Ricardo (con red local fuerte) casi no aparece como emoción propia.
3. Disposición a pagar por una **suscripción recurrente**, frente al modelo de compra única observado en los botones de pánico del mercado actual. → ✅ **Confirmada** — las tres cotizaciones espontáneas caen dentro o por encima del rango $300–600 MXN/mes.

> **✅ Actualización con entrevistas (semana 3):** la Capa 3 dejó de estar vacía. Las tres entrevistas contienen cita textual de la emoción central. La hipótesis del "miedo a la llamada" queda **confirmada con matiz**: la preocupación es real y descrita en primera persona ("si tarda mucho en contestar ya se me acelera el corazón", "vivir en otro país te pone en un estado de alerta constante"), pero su frecuencia **no depende de la distancia en kilómetros sino de si el adulto mayor ya tiene una red humana de apoyo cerca**. Ricardo, con red local fuerte (su hermana Sonia), se preocupa fuera de las llamadas solo ~1 vez por semana — muy por debajo de lo que el perfil "vive lejos" hacía suponer. Esto implica que "hijo/a que vive lejos" ya **no** es suficiente para definir el segmento accionable: la variable que más mueve el dolor es la presencia o ausencia de un cuidador local de confianza, no la distancia geográfica. (Ver tabla de 3 perfiles en la sección de validación, abajo.)

**Próximo paso (actualizado):** con el patrón "el dolor depende de la red local, no de la distancia" identificado en solo tres entrevistas, el siguiente paso es entrevistar a más personas distinguiendo explícitamente si ya tienen o no una red humana local, para confirmar el patrón con una muestra mayor — y no seguir usando "vive lejos" como único criterio de segmentación.

---

### Prompt 2 — Dimensionamiento de mercado (TAM / SAM / SOM)

#### IA utilizada

**IA:** Claude (Anthropic) — rol de analista de mercado especializado en dimensionamiento para startups de hardware y software en América Latina, con metodología top-down y triangulación de fuentes verificables (INEGI, CEPAL, BID)

#### Prompt

```text
Actúa como analista de mercado con especialización en
dimensionamiento para startups de hardware y software en
América Latina. Tu metodología es el enfoque top-down con
triangulación de fuentes verificables. No inventes cifras —
si no existe fuente verificable para un número, lo señalas y
explicas cómo estimarlo con lógica de primer principio.

Concepto: DistanciaCero (app + artefacto conectado + IA de
detección de rutina).
Segmento objetivo: hijos/as 35-55 en México con padre/madre 65+
que vive solo y lejos.
Precio estimado: $300–$600 MXN/mes.
Modelo: suscripción mensual.
Mercado inicial: México. Expansión: LATAM año 3+.

Construye TAM, SAM y SOM con reducción paso a paso, cada
filtro con su fuente o supuesto de primer principio explícito.
```

#### Resultado de la IA

> El TAM se construyó en 5 pasos de reducción a partir de los 38.8 millones de hogares en México (ENIGH 2024): hogares con adulto 65+ (10.9%) → hogares unipersonales dentro de ese grupo (17.5%) → hogares con hijo vivo (85%, supuesto de primer principio) → hijos que viven lejos (60%, supuesto conservador basado en literatura de migración) → disposición y capacidad de pago (25%, basado en adopción de telesalud en México). Resultado: **94,350 hijos adultos** con disposición estimada de pago, TAM de **$509.5M MXN/año**.

| Nivel | Universo | Valor anual |
|---|---|---|
| TAM | 94,350 personas | $509.5M MXN |
| SAM (geografía CDMX/GDL/MTY/Puebla + canal digital + deciles de ingreso 6-10) | 17,832 personas | $96.3M MXN |
| SOM (años 1-2, meta de 850 clientes vía Meta/Google Ads) | 850 personas | $4.59M MXN |

**Señal de viabilidad:** Marginal — el SOM cubre nómina básica e infraestructura de una startup de 4 personas con margen operativo estrecho (10-20%); se necesitarían 1,500-2,000 clientes en año 3, o introducir el hardware como pago único, para ser cómodamente viable.

**Nota metodológica de la IA:** el supuesto más incierto de todo el modelo es la disposición de pago (25%). Si baja a 15%, el TAM cae a 56,610 personas; si sube a 35% (validado con entrevistas reales), sube a 132,090. Recomendó explícitamente 15-20 entrevistas para refinar este número antes de comprometer presupuesto de marketing con base en él.

> **✅ Actualización con entrevistas (semana 3):** la variable más incierta del modelo — el supuesto de disposición de pago (25%) — queda confirmada como conservadora, no optimista. Las tres cotizaciones espontáneas fueron: Mariana $450 MXN/mes ("sin pensarlo dos veces"), Lupita $30–35 USD/mes (~$550–650 MXN, "techo indoloro, ya arriba del rango") y Ricardo $600–700 MXN/mes ("para aliviar a su hermana, no a sí mismo"). Las tres caen dentro o por encima del rango estimado $300–600 MXN/mes. Esto sostiene el TAM de $509.5M MXN como base razonable, aunque sigue siendo un supuesto validado con **n=3**, no con una muestra representativa — el próximo paso sigue siendo el mismo que señaló la IA: más entrevistas antes de comprometer presupuesto de marketing sobre esta cifra.

---

### Prompt 3 — Mapa competitivo (directos, indirectos, sustitutos)

#### IA utilizada

**IA:** Claude (Anthropic) — rol de analista de inteligencia competitiva especializado en mercados de producto digital-físico en América Latina

#### Prompt

```text
Actúa como analista de inteligencia competitiva especializado
en mercados de producto digital-físico en América Latina. Para
cada competidor buscas su debilidad específica para el segmento
del equipo, no debilidades genéricas.

[Se incluyó el concepto, segmento, dolor ⭐ y precio estimado.
Se pidió mapear mínimo 3 directos, 3 indirectos y 2 sustitutos,
cada uno con dónde opera, precio/modelo, y debilidad específica
para el segmento hijos/as 35-55.]
```

#### Resultado de la IA

> Se mapearon 3 competidores directos (**Estoy Bien** $299 MXN/mes, **Cuida Más** $800-928 MXN/mes con call center, **Care 60+** desde $6,588 MXN/año), 3 indirectos (**Life360**, **Google Family Link**, sensores WiFi DIY tipo Tuya/Aqara/Tapo) y 2 sustitutos (llamadas diarias + red informal, cuidador por horas $9,000-27,000 MXN/mes).

**Competidor más peligroso:** llamadas diarias + red informal — no por ser el más sofisticado, sino por tener costo marginal cero, confianza humana por encima de la tecnología, y una barrera psicológica real: adoptar DistanciaCero implica para el hijo/a reconocer que "las llamadas ya no bastan", lo que activa culpa en lugar de alivio.

---

### Prompt 4 — Lienzo estratégico Blue Ocean

#### IA utilizada

**IA:** Claude (Anthropic) — rol de estratega de innovación especializado en Blue Ocean Strategy para startups de hardware y software en mercados emergentes

#### Prompt

```text
Actúa como estratega de innovación con experiencia en Blue Ocean
Strategy. Aplica el Marco de las Cuatro Acciones (Eliminar /
Reducir / Incrementar / Crear) antes de construir el lienzo.
Cuando el equipo no tiene ventaja en un atributo, puntúalo bajo.

[Se incluyó el mapa competitivo completo del Prompt 3, la
descripción técnica de DistanciaCero, las capacidades
diferenciales del equipo (sistemas embebidos ESP32/RP2350,
diseño y manufactura física CAD/PCB/impresión 3D) y el
segmento accionable.]
```

#### Resultado de la IA

> **Marco de las Cuatro Acciones:**
>
> - **ELIMINAR** — interacción activa del adulto mayor con la tecnología (login, botón, responder notificación).
> - **REDUCIR** — call center humano / respuesta de emergencia en vivo (el modelo de Cuida Más).
> - **INCREMENTAR** — silencio y ausencia de fricción cuando todo está normal.
> - **CREAR** — detección de rutina aprendida integrada en un objeto cotidiano, sin WiFi ni batería gestionada por el usuario — posible específicamente por la capacidad interna del equipo en firmware propio y manufactura física, no por promesa de marketing.

| Atributo | Estoy Bien | Cuida Más | Sensores DIY | Llamadas + red informal | DistanciaCero |
|---|:--:|:--:|:--:|:--:|:--:|
| Precio percibido | 3 | 1 | 4 | 5 | 4 |
| Autonomía requerida del adulto mayor (5=no requiere nada) | 1 | 3 | 2 | 4 | **5** |
| Respuesta en emergencia real | 2 | 5 | 2 | 1 | 2 |
| Silencio / sin fricción diaria | 2 | 2 | 2 | 3 | **5** |
| Detección de anomalía de rutina | 2 | 1 | 1 | 0 | **5** |
| Independencia de infraestructura doméstica | 4 | 4 | 1 | 5 | **5** |
| Integración física invisible | 0 | 2 | 1 | 0 | **5** |
| Resuelve la culpa de "reemplazar" el vínculo | 1 | 2 | 1 | 3 | 3 |

**Océano azul en una oración:** DistanciaCero no compite por dar más visibilidad, más rapidez de respuesta o más contacto humano — compite por necesitar cero esfuerzo del adulto mayor y cero atención activa del hijo/a mientras todo está bien.

**Advertencia de océano rojo señalada por la IA:** el atributo "resuelve la culpa de reemplazar el vínculo humano" puntúa igual (3/5) que el sustituto más peligroso — si el mercado percibe el producto como un simple "automatizador de la llamada", la discusión se vuelve emocional y ninguna ventaja de hardware ayuda ahí.

> **🔧 Actualización con entrevistas (semana 3) — ajuste de diseño necesario:** la advertencia de océano rojo se confirma y se vuelve más específica y más grave de lo previsto. No es solo que el atributo "resuelve la culpa de reemplazar el vínculo humano" empate con el sustituto informal — la entrevista con Ricardo revela un **actor de decisión que no estaba en el lienzo**: cuando ya existe un cuidador humano local (como su hermana Sonia), **el consentimiento de esa persona puede pesar más que el del propio adulto mayor**. Ricardo dijo explícitamente que no instalaría el producto si Sonia lo sintiera como un "voto de desconfianza" hacia su forma de cuidar, y que ella tendría que estar de acuerdo antes que su papá. Esto convierte al cuidador local en un segundo comprador/veto que el análisis de mercado original no contemplaba, y confirma con evidencia directa que el riesgo más grande de este producto puede ser humano, no técnico.

---

### Prompt 5 — Propuesta de valor final

#### IA utilizada

**IA:** Claude (Anthropic) — rol de estratega de marca y comunicación, combinando el framework Insightful/Unique/Targeted de IDEO con la Pirámide de Valor de Bain

#### Prompt

```text
Actúa como estratega de marca y comunicación. Combina el
framework IDEO con la Pirámide de Valor de Bain. Nombra al
usuario específico, nombra el resultado concreto, implica por
qué esta solución y no otra. No uses "plataforma", "solución
integral", "innovador", "ecosistema". No describas el producto
— describe el valor que entrega.

[Se incluyó el perfil de segmento, el dolor/ganancia del
Pain-Gain Map, el competidor más peligroso con su debilidad,
el hueco azul identificado, y el precio estimado. Se pidieron
tres versiones de máximo 25 palabras cada una.]
```

#### Resultado de la IA

> **Nivel en la Pirámide de Bain:** el concepto opera hoy en el nivel **Funcional**, con oportunidad legítima de subir a **Emocional** — porque el dolor real documentado en el Pain-Gain Map es "miedo constante", no falta de información. Subir hasta el nivel Transformador se marcó como prematuro sin evidencia real de cambio de identidad del usuario.
>
> **Evaluación IDEO:** Insightful ✅ (resuelve el vacío exacto que deja el competidor más peligroso), Unique ✅ (firmware propio + manufactura física interna), Targeted ⚠️ (el segmento está bien acotado en el papel, pero "lejos" sigue siendo narrativa, no verificada con entrevistas).

**Versión 3 — la más fuerte:**

> "Para hijos que viven lejos de su padre o madre mayor, DistanciaCero reemplaza el miedo a 'la llamada' por la certeza diaria de que todo está bien — sin preguntar, sin culpa."

**Oferta vs. propuesta de valor — la diferencia señalada por la IA:** la oferta describe qué hace el objeto (detección, conectividad, notificación); la propuesta describe qué deja de sentir el hijo/a (miedo, culpa) — el sujeto pasa del artefacto al usuario, y el nivel sube de funcional a emocional sin mencionar nunca al competidor por nombre.

> **⚠️ Actualización con entrevistas (semana 3):** la evaluación IDEO sube de Targeted ⚠️ a **Targeted ✅ con matiz** — el segmento sí siente el dolor descrito, pero no es un segmento homogéneo: son **tres perfiles distintos** según si ya existe o no una red humana local (ver tabla de "Hallazgo estructural" abajo). La Versión 3 sigue funcionando para Lupita (sin red local, rechaza el silencio), pero **no** es el mensaje correcto para Ricardo (con red local fuerte, prefiere el silencio y no compra para aliviar su propio miedo sino el de su hermana). Se necesitan variantes de propuesta de valor por perfil, no una sola versión universal.

**Propuesta de valor ajustada por perfil (post-entrevistas):**

| Perfil | Propuesta de valor ajustada |
|---|---|
| Sin red local fuerte (tipo Lupita) | "Para quienes viven lejos y no tienen quién revise a su mamá o papá, DistanciaCero avisa apenas algo cambia — sin depender de que alguien más esté cerca para reaccionar." |
| Con red local fuerte (tipo Ricardo) | "Para quienes ya tienen quién cuide de cerca a su padre o madre, DistanciaCero le quita a esa persona la carga de estar siempre pendiente — sin reemplazarla." |
| Local, sin red delegada (tipo Mariana) | "Para quienes viven cerca pero no pueden estar ahí todo el día, DistanciaCero confirma que todo está bien sin pedirle nada a su mamá o papá — ni una app, ni un botón, ni acordarse de nada." |

---

## Validación con usuarios — Semana 3

Tres entrevistas a profundidad, tres hipótesis puestas a prueba, y lo que cambia a partir de aquí.

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

**Implicación de diseño:** el modo de notificación (silencio total vs. confirmación diaria) no puede ser una decisión única de producto — debe ser configurable por familia. Ricardo además pide que la alerta llegue a él y a Sonia al mismo tiempo, no solo al pagador.

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
6. **El riesgo más grande puede ser humano, no técnico.** Ricardo no instalaría el producto si Sonia lo sintiera como un "voto de desconfianza" hacia su forma de cuidar — antes que su papá, ella tendría que estar de acuerdo.

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

**DEBE AJUSTARSE:** el modo "silencio vs. confirmación activa" (H2) no puede ser único: debe ser configurable según si la familia ya tiene una red local fuerte. Aparece un riesgo nuevo y crítico: un cuidador humano existente (como Sonia) puede bloquear la adopción si siente que el producto desconfía de su cuidado — su consentimiento puede pesar más que el del propio adulto mayor. Falta resolver también la alerta-sin-respondiente y el consentimiento explícito del adulto mayor.

**Próximo paso:** entrevistar más personas distinguiendo si ya tienen o no una red humana local, para confirmar el patrón, y diseñar un modo de notificación configurable (silencio vs. confirmación diaria, y multi-destinatario).

---

## Conclusión de esta semana

| Bloque | Resultado (actualizado con entrevistas, semana 3) |
|---|---|
| Segmento accionable | Capa 3 (psicográfica) pasa de HIPÓTESIS a CONFIRMADA CON MATIZ: el dolor es real pero varía según si existe red humana local, no según la distancia en km. El segmento deja de ser homogéneo — son 3 perfiles distintos. |
| TAM / SAM / SOM | Supuesto de disposición de pago (25%) confirmado como conservador — las 3 cotizaciones reales caen dentro o arriba del rango $300–600 MXN/mes. Base del TAM ($509.5M MXN) sostenida, validada con n=3. |
| Mapa competitivo | Advertencia de océano rojo confirmada y ampliada: aparece un nuevo actor de decisión — el cuidador humano local — cuyo consentimiento puede bloquear la venta aunque el pagador esté convencido. |
| Blue Ocean | "Cero acción del adulto mayor" y "sin WiFi" se validan por fracasos reales ya vividos por los entrevistados (botón SOS abandonado, mala experiencia configurando router). |
| Propuesta de valor | Sube de Targeted ⚠️ a ✅ con matiz — pero se necesitan 3 variantes de mensaje, una por perfil, no una propuesta única. |

**Pendiente explícito para la siguiente semana:** con solo tres entrevistas, el patrón "el dolor depende de la red local, no de la distancia" es una hipótesis fuerte, no una ley — el siguiente paso es entrevistar más personas distinguiendo explícitamente si ya tienen o no una red humana local, para confirmar el patrón con una muestra mayor. Quedan además tres preguntas de diseño sin resolver: (1) cómo diseñar la alerta cuando no hay un respondiente cercano disponible (el caso de Lupita), (2) cómo obtener el consentimiento explícito del adulto mayor sin que sienta el producto como vigilancia, y (3) cómo obtener el consentimiento del cuidador humano local (como Sonia) antes de que la familia compre, dado que su rechazo puede bloquear la adopción incluso cuando el pagador está convencido.

---

## ¿Qué aprendí?

Lo que más me quedó de esta semana es que cada bloque expone honestamente dónde termina el dato y empieza el supuesto — y que eso no es una debilidad del análisis, es lo que lo hace útil. El perfil de segmento pudo haberse presentado con las cuatro capas "completas" si hubiera rellenado la psicográfica con lo que *creo* que siente un hijo o hija en esta situación. En cambio, quedó casi vacía, y esa capa vacía es justo el mapa de qué preguntar en las próximas entrevistas. Lo mismo pasó con el TAM: el número final ($509.5M MXN) suena sólido, pero está construido sobre un supuesto de 25% de disposición de pago que la propia IA señaló como el más incierto de todo el modelo — y que puede mover el resultado hasta en 2.3x en cualquier dirección. Ver ese rango de sensibilidad me hizo entender que el TAM/SAM/SOM no es una cifra para impresionar, es un razonamiento que hay que poder defender paso por paso.

En el lienzo Blue Ocean, lo que más me sorprendió fue la "advertencia de océano rojo": el atributo de resolver la culpa de reemplazar el vínculo humano quedó empatado con el competidor más peligroso. Es fácil construir un lienzo donde todo parece ganado — la honestidad de puntuar bajo donde realmente no hay ventaja fue lo que hizo que esa advertencia apareciera, y es probablemente el riesgo más grande de todo el análisis de esta semana.

**Actualización tras las entrevistas reales:** lo que más me cambió la cabeza esta semana fue descubrir que "hijo/a que vive lejos" no era la variable correcta. Llevaba semanas construyendo el segmento alrededor de la distancia en kilómetros, y las tres entrevistas mostraron que lo que realmente predice el dolor es si ya existe alguien de confianza cerca del adulto mayor — Ricardo, que vive más lejos que Mariana, se preocupa muchísimo menos porque ya tiene a Sonia. Y la advertencia de océano rojo que la IA había señalado como hipotética resultó ser más concreta y más seria de lo que pensé: no es solo un empate en un lienzo, es que Sonia — una persona que ni siquiera es la que compraría — puede vetar la venta si siente que el producto desconfía de ella. Eso no estaba en ningún mapa competitivo que hice.

---

## Reflexión personal

> Antes de esta actividad, para mí "conocer al mercado" significaba tener muchos datos — cifras de INEGI, precios de competidores, un TAM grande. Después de construir estos cinco bloques en secuencia entendí que conocer al mercado significa poder señalar exactamente dónde termina lo que sé y empieza lo que estoy asumiendo. El perfil de segmento con la Capa 3 casi vacía se sintió, al principio, como un resultado pobre — hasta que entendí que ese vacío es información real: me dice que todavía no puedo escribir la propuesta de valor con la certeza de un hallazgo, solo con la certeza de una hipótesis razonada. Lo mismo con el TAM: la cifra de $509.5M MXN se ve bien en una diapositiva, pero lo que realmente importa es que puedo defender cada filtro que la construye y sé exactamente cuál de esos filtros (la disposición de pago) es el más frágil. Y en el Blue Ocean, ver que un atributo clave de mi propuesta quedó empatado con el competidor más peligroso — en lugar de ganado — fue el momento donde más sentí que el análisis estaba siendo honesto conmigo, y no al revés. Lo que sigue ahora, y lo que más necesito, son las entrevistas reales: son las únicas que pueden mover cualquiera de estas hipótesis a un VERIFICADO de verdad.

> Ya con las tres entrevistas hechas, esa última línea envejeció rápido — y bien. Las entrevistas no solo confirmaron precio y dolor, hicieron algo que no esperaba: partieron el segmento en tres perfiles distintos y me obligaron a aceptar que la variable que puse en el centro del análisis (la distancia) no era la que importaba. Lo más incómodo de aceptar fue el hallazgo de Ricardo y Sonia: había construido todo el Blue Ocean pensando en el adulto mayor y el hijo/a como los dos actores relevantes, y resulta que hay un tercero — el cuidador humano local — cuyo consentimiento puede pesar más que el de los otros dos juntos. Si algo tengo que llevarme de esta semana es que una entrevista bien hecha no solo valida hipótesis, también te enseña qué pregunta se te olvidó hacer.

---

### Enlaces

*  [Claude](https://claude.ai/share/684e6038-b72b-41d0-a2f7-828ab7e78cf3)
*  [Perplexity](https://www.perplexity.ai/search/fe92e9be-d5e6-4745-8569-88a0e2ec682d)
*  [Ver presentación de resultados](resultados_validacion_semana3.pdf)
*  [Canvas de Mercado](https://claude.ai/artifact/NfgEFMUyQQNhebEqt3RA7x)

## Estado de la actividad

🟢 **Actividad validada con matices** — análisis de mercado completo, contrastado con tres entrevistas de validación directa (semana 3). Las hipótesis de dolor y precio quedan confirmadas; el modo de notificación y el riesgo de bloqueo por un cuidador humano local quedan como ajustes de diseño pendientes, y el patrón de los 3 perfiles debe confirmarse con más entrevistas.

**Tema:** Mercado, Valor y Propuesta de Valor
**Evidencias:** Prompts + resultados de IA + perfil de segmento en 4 capas + dimensionamiento TAM/SAM/SOM + mapa competitivo + lienzo Blue Ocean + propuesta de valor en 3 versiones + validación con 3 entrevistas de usuario (semana 3)