# Actividad 4 — Mercado, Valor y Propuesta de Valor

**Tema:** DistanciaCero — Segmento accionable, dimensionamiento de mercado, análisis competitivo y propuesta de valor
**Fecha:** 17/09/2026
**Blueprint:** Creación de valor → Captura de valor
**DVF:** 🔴 Deseable · 🟡 Viable

---

## Objetivo de la actividad

Esta semana conecta dos preguntas que se confunden fácilmente: **¿qué valor crea mi producto?** y **¿por qué alguien me lo compra a mí y no a otro?** La primera es la propuesta de valor. La segunda es la diferenciación. Sin las dos claras, el pitch no funciona y el modelo de negocio no sostiene.

La actividad avanza en cuatro frentes articulados: **segmento accionable en 4 capas** (con marcado explícito VERIFICADO/HIPÓTESIS), **dimensionamiento TAM/SAM/SOM** con lógica de reducción explícita, **mapa competitivo y lienzo estratégico Blue Ocean**, y **propuesta de valor** con validación IDEO y Pirámide de Bain.

Documento aquí todo el proceso que seguí con el equipo para el proyecto **DistanciaCero** — el sistema digital-físico de tranquilidad a distancia para hijos con un padre o madre mayor que vive solo(a).

---

## Contexto del producto

- **Problema:** hijos e hijas de 35–55 años en México con un padre/madre de 65+ que vive solo y lejos, viviendo con ansiedad y culpa constante — el miedo a "la llamada".
- **Mecanismo:** artefacto integrado en un objeto cotidiano (bastón, sillón, taza) con conectividad celular/LoRa propia, que detecta pasivamente la rutina diaria del adulto mayor sin que él haga nada ni dependa de WiFi doméstico.
- **IA:** modelo en la nube que aprende el patrón individual de rutina de cada usuario y notifica al hijo/a solo por excepción, cuando la rutina se rompe.
- **Punto de partida importante:** aún no existen entrevistas de validación con usuarios reales. Todo lo que se documenta abajo parte de investigación de mercado secundaria (fuentes públicas, estadísticas oficiales) y del Pain-Gain Map de semana 2 — no de conversaciones directas con el segmento. Esto se marca explícitamente en cada bloque.

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

**Hipótesis críticas identificadas:**

1. Que el segmento correcto sea el hijo/hija 35-55 (y no otro familiar) como comprador y usuario real.
2. Que la emoción central sea "culpa" y el disparador de compra sea "tranquilidad sin preguntar" — sin ninguna fuente secundaria que lo respalde.
3. Disposición a pagar por una **suscripción recurrente**, frente al modelo de compra única observado en los botones de pánico del mercado actual.

**Próximo paso señalado:** las entrevistas de validación deben confirmar, en orden, (1) quién es el actor real con dolor y poder de compra, (2) el lenguaje emocional real del hijo/hija ante un momento de preocupación reciente, y (3) qué pagan hoy por manejar esa preocupación.

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

---

## Conclusión de esta semana

| Bloque | Resultado |
|---|---|
| Segmento accionable | Construido en 4 capas, con la mayoría de la Capa 3 (psicográfica) marcada explícitamente como HIPÓTESIS por falta de entrevistas |
| TAM / SAM / SOM | $509.5M / $96.3M / $4.59M MXN — viabilidad marginal, sensible al supuesto de disposición de pago (25%) |
| Mapa competitivo | 3 directos, 3 indirectos, 2 sustitutos — el más peligroso es el sustituto informal (llamadas + red social), no un competidor tecnológico |
| Blue Ocean | Eliminar autonomía requerida, reducir respuesta de emergencia en vivo, incrementar silencio/sin fricción, crear detección de rutina en objeto cotidiano sin WiFi |
| Propuesta de valor | Nivel Emocional: "reemplaza el miedo a 'la llamada' por la certeza diaria de que todo está bien — sin preguntar, sin culpa" |

**Pendiente explícito para la siguiente semana:** todo este análisis descansa sobre evidencia de mercado *secundaria*. Ninguna capa psicográfica, ninguna cifra de disposición de pago real, y ninguna validación del atributo "resuelve la culpa" del lienzo Blue Ocean puede confirmarse sin las entrevistas directas con el segmento — que siguen pendientes.

---

## ¿Qué aprendí?

Lo que más me quedó de esta semana es que cada bloque expone honestamente dónde termina el dato y empieza el supuesto — y que eso no es una debilidad del análisis, es lo que lo hace útil. El perfil de segmento pudo haberse presentado con las cuatro capas "completas" si hubiera rellenado la psicográfica con lo que *creo* que siente un hijo o hija en esta situación. En cambio, quedó casi vacía, y esa capa vacía es justo el mapa de qué preguntar en las próximas entrevistas. Lo mismo pasó con el TAM: el número final ($509.5M MXN) suena sólido, pero está construido sobre un supuesto de 25% de disposición de pago que la propia IA señaló como el más incierto de todo el modelo — y que puede mover el resultado hasta en 2.3x en cualquier dirección. Ver ese rango de sensibilidad me hizo entender que el TAM/SAM/SOM no es una cifra para impresionar, es un razonamiento que hay que poder defender paso por paso.

En el lienzo Blue Ocean, lo que más me sorprendió fue la "advertencia de océano rojo": el atributo de resolver la culpa de reemplazar el vínculo humano quedó empatado con el competidor más peligroso. Es fácil construir un lienzo donde todo parece ganado — la honestidad de puntuar bajo donde realmente no hay ventaja fue lo que hizo que esa advertencia apareciera, y es probablemente el riesgo más grande de todo el análisis de esta semana.

---

## Reflexión personal

> Antes de esta actividad, para mí "conocer al mercado" significaba tener muchos datos — cifras de INEGI, precios de competidores, un TAM grande. Después de construir estos cinco bloques en secuencia entendí que conocer al mercado significa poder señalar exactamente dónde termina lo que sé y empieza lo que estoy asumiendo. El perfil de segmento con la Capa 3 casi vacía se sintió, al principio, como un resultado pobre — hasta que entendí que ese vacío es información real: me dice que todavía no puedo escribir la propuesta de valor con la certeza de un hallazgo, solo con la certeza de una hipótesis razonada. Lo mismo con el TAM: la cifra de $509.5M MXN se ve bien en una diapositiva, pero lo que realmente importa es que puedo defender cada filtro que la construye y sé exactamente cuál de esos filtros (la disposición de pago) es el más frágil. Y en el Blue Ocean, ver que un atributo clave de mi propuesta quedó empatado con el competidor más peligroso — en lugar de ganado — fue el momento donde más sentí que el análisis estaba siendo honesto conmigo, y no al revés. Lo que sigue ahora, y lo que más necesito, son las entrevistas reales: son las únicas que pueden mover cualquiera de estas hipótesis a un VERIFICADO de verdad.

---

### Enlaces

*  [Claude](https://claude.ai/share/684e6038-b72b-41d0-a2f7-828ab7e78cf3)
*  [Perplexity](https://www.perplexity.ai/search/fe92e9be-d5e6-4745-8569-88a0e2ec682d)
## Estado de la actividad

🟡 **Actividad en curso** — análisis de mercado completo con evidencia secundaria; pendientes las entrevistas de validación directa con el segmento antes de poder marcar las hipótesis críticas como confirmadas.

**Tema:** Mercado, Valor y Propuesta de Valor
**Evidencias:** Prompts + resultados de IA + perfil de segmento en 4 capas + dimensionamiento TAM/SAM/SOM + mapa competitivo + lienzo Blue Ocean + propuesta de valor en 3 versiones