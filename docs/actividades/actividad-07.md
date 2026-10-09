# Actividad 7 — Viabilidad Técnica y Económica

**Tema:** DistanciaCero — Benchmarking de modelos de ingresos, BOM real, costo de la IA, costos de desarrollo, clasificación D/F/S, modelo financiero y ejercicios de VPN/TIR
**Fecha:** 08/10/2026
**Blueprint:** Captura de valor
**DVF:** 🟡 Viable (marginal a 24 meses, negativo a 12) · 🟢 Factible

---

## Objetivo de la actividad

Las semanas anteriores respondieron si el producto es pertinente (semanas 2-4) y si es factible de construir (semanas 5-6). Esta semana responde la pregunta que más equipos evitan: **¿el negocio cierra?** Si el costo de fabricar el producto supera lo que el usuario está dispuesto a pagar, no hay captura de valor posible, sin importar cuán elegante sea el diseño o cuán sólida sea la arquitectura.

La actividad avanza en cinco frentes: **benchmarking de modelos de ingresos** (cómo cobran otras empresas con ofertas similares), **BOM real** con precios cotizados en fuentes reales, **costo de la IA** medido con la fórmula del curso, y **costos de desarrollo** por ciclos de aprendizaje con clasificación D/F/S de cada costo, y un **modelo económico** con precio, punto de equilibrio, flujo de caja, VPN y los ejercicios 1-9 de matemáticas financieras.

---

## Contexto del producto

- **Punto de partida:** en la semana 5 el BOM se estimó en ~$800-1,100 MXN por unidad, y en la semana 4 el mercado mostró tolerancia a un precio de hardware de ~$2,000-4,000 MXN y a una suscripción de $300-600 MXN/mes.
- **Modelo de ingresos propuesto:** hardware (venta única) + suscripción mensual en dos niveles, el modelo de dos capas que recomienda el curso para productos con IA corriendo en la nube.
- **Lo que cambió esta semana:** al cotizar precios reales del componente más caro (el módulo celular), el BOM resultó casi tres veces mayor al estimado. Todo el análisis de abajo está construido con el número corregido.

---

## Trabajo con IA

### Prompt 1 — Benchmarking de modelos de ingresos

#### IA utilizada

**IA:** Claude (Anthropic) con búsqueda web — rol de analista de inteligencia competitiva especializado en modelos de negocio para productos de hardware + software

#### Prompt

```text
Actúa como analista de inteligencia competitiva especializado
en modelos de negocio para productos de hardware + software
en mercados latinoamericanos y globales. Tu metodología consiste
en identificar cómo empresas con ofertas similares están
capturando valor — no solo su precio de lista, sino el modelo
completo: quién paga, cuándo, bajo qué condición, y qué
fricción existe en ese proceso de pago.

Somos emprendedores en México con el siguiente producto:
DistanciaCero — sistema digital-físico (artefacto en un objeto
cotidiano + app con IA) que detecta pasivamente la rutina diaria
de un adulto mayor que vive solo y notifica al hijo/a solo por
excepción.
Propuesta de valor: "Para hijos que viven lejos de su padre o
madre mayor, DistanciaCero reemplaza el miedo a 'la llamada'
por la certeza diaria de que todo está bien — sin preguntar,
sin culpa."
Segmento objetivo: hijos/as 35-55 en México con padre/madre 65+
que vive solo(a).

Investiga 3 empresas o productos con oferta similar a la nuestra
— pueden ser competidores directos, indirectos, o productos
que resuelven el mismo tipo de problema en otro sector o mercado.

Para cada empresa entrega: qué ofrece, modelo de ingresos (quién
paga, cuándo, bajo qué condición), rango de precio con fuente,
momentos de fricción, y otros stakeholders que pagan o podrían
pagar además del usuario final.

Al terminar, responde: ¿qué modelo predomina y por qué? ¿hay algún
stakeholder que nadie esté cobrando y que sea oportunidad?
```

#### Resultado de la IA

> La IA investigó tres empresas: **Medical Guardian** (alerta médica con monitoreo humano, EE. UU.), **Ring** (cámaras con suscripción, global) y **CarePredict** (wearable con IA que aprende la rutina del adulto mayor, EE. UU.). Se eligieron porque cubren tres ángulos: el competidor directo más parecido en categoría de precio (Medical Guardian), el modelo de suscripción con modo gratis limitado (Ring), y el competidor más parecido conceptualmente a DistanciaCero (CarePredict).

**Tabla de benchmarking:**

| Producto o servicio similar | Modelo de ingresos (quién paga, cuándo) | Rango de precio | Notas: fricción y otros stakeholders |
|---|---|---|---|
| **Medical Guardian** (EE. UU.) — dispositivos de alerta médica con monitoreo 24/7 | Pago único de equipo + suscripción mensual obligatoria desde el día 1. Paga la familia o el adulto mayor. Sin modo gratis | Equipo desde $149.95 USD; monitoreo desde $31.95 USD/mes pagado mes a mes ($27.95 si es anual); detección de caídas +$10 USD/mes | **Fricción:** equipo caro de entrada y suscripción obligatoria sin versión de prueba real. **Otros stakeholders:** ninguno visible, 100% pagado por la familia |
| **Ring** (Amazon, global) — cámaras y timbres con grabación en la nube | Hardware de venta directa + suscripción en capas. El producto funciona en modo limitado (alertas y video en vivo) sin suscripción | Hardware ~$99-$239 USD; suscripción Solo $4.99, Multi $9.99, AI Pro $19.99 USD/mes | **Fricción:** el modo gratis reduce la conversión a suscripción, y Ring ha reestructurado sus planes más de una vez. **Otros stakeholders:** ninguno, B2C puro |
| **CarePredict** (EE. UU.) — wearable con IA que aprende rutinas y alerta por desviación | Kit de hardware + suscripción mensual requerida para que el kit funcione | **No publica precio**: requiere cotización directa (dato ausente, no se estimó) | **Fricción:** sin precio público, el comprador no puede autoevaluarse sin hablar con ventas. **Otros stakeholders:** alianza con una agencia estatal de envejecimiento en EE. UU. (Middle Alabama Area Agency on Aging) para monitoreo remoto; su evidencia de menos hospitalizaciones abre la puerta a aseguradoras |

**¿Qué modelo predomina y por qué?** Los tres usan hardware más suscripción en dos capas; ninguno regala el hardware y ninguno se sostiene solo de venta única. La razón coincide con la del curso: el monitoreo continuo y las alertas tienen un costo operativo recurrente que una venta única no cubre. La diferencia está en qué tan obligatoria es la suscripción: Medical Guardian y CarePredict la exigen desde el día 1, y Ring la deja opcional porque su hardware tiene un modo básico útil.

**¿Qué stakeholder nadie está cobrando?** El hallazgo viene de CarePredict: programas gubernamentales de envejecimiento y, potencialmente, aseguradoras. En México son **hipótesis de investigación, no ingresos confirmados**: INAPAM, aseguradoras de gastos médicos mayores y residencias o estancias de día que podrían ofrecer el producto como valor agregado.

---

### Prompt 2 — BOM real

#### IA utilizada

**IA:** Claude (Anthropic) con búsqueda web — rol de ingeniero de producto verificando precios de componentes contra fuentes reales

#### Prompt

```text
Actúa como ingeniero de producto especializado en costeo de
hardware para startups. Convierte la arquitectura de la semana 5
de DistanciaCero en un BOM con precios cotizados en fuentes
reales, no estimaciones.

Arquitectura: ESP32-S3, acelerómetro MPU6050, sensor PIR
HC-SR501, módulo celular SIM7600E-H, batería 18650 con módulo
de carga TP4056, PCB de 2 capas ensamblada en JLCPCB, carcasa
ABS con sobremoldeo de silicona. Volumen objetivo: 8-10 unidades.

Para cada componente entrega: especificación, precio unitario
a ese volumen, y proveedor. Marca explícitamente qué precios
fueron verificados en una fuente y cuáles siguen siendo
estimaciones, y señala cualquier componente cuyo precio real
difiera mucho de lo estimado antes.
```

#### Resultado de la IA

> La IA cotizó el módulo celular en fuentes reales y encontró una diferencia grande con la estimación de la semana 5. El chip SMD puro (SIM7600E) cuesta ~$27-29 USD a bajo volumen en LCSC, pero exige diseño de acoplamiento de antena RF, algo que el equipo no ha hecho. La alternativa viable para un equipo sin experiencia en RF es el breakout con antena y circuitería ya resueltas (SIM7600E-H), con precio especial de $129 USD (regular $149 USD) en 4gltemall.com. Esto sube el costo del componente de ~$350-450 MXN (estimado en la semana 5) a ~$2,100 MXN (cotizado, a un tipo de cambio de referencia de ~$16-17 MXN/USD que debe verificarse al comprar).

**BOM corregido por unidad (volumen 8-10):**

| Componente | Especificación | Precio unitario | Fuente | Estado del dato |
|---|---|---|---|---|
| **SIM7600E-H (breakout)** | LTE Cat4 4G, antena incluida | **~$2,100 MXN** | 4gltemall.com, $129 USD | ✅ Cotizado (verificar tipo de cambio al comprar) |
| ESP32-S3 | Módulo, 8MB Flash | ~$120 MXN | — | ⚠️ Estimado, falta cotización directa |
| MPU6050 + PIR HC-SR501 | Acelerómetro + sensor de movimiento | ~$125 MXN | — | ⚠️ Estimado |
| Batería 18650 + TP4056 | ~3,000 mAh + carga | ~$175 MXN | — | ⚠️ Estimado |
| PCB + ensamble JLCPCB | 2 capas, volumen 8-10 | ~$250 MXN | — | ⚠️ Estimado |
| Carcasa 3D + consumibles | ABS + silicona | ~$200 MXN | — | ⚠️ Estimado |
| **BOM total por unidad** | | **~$2,970 MXN** | | |

| Métrica | Valor |
|---|---|
| BOM estimado en la semana 5 | ~$800-1,100 MXN |
| **BOM corregido hoy** | **~$2,970 MXN** |
| Precio mínimo viable (BOM ÷ 30%, regla del curso) | ~$9,900 MXN |
| Rango de precio que el mercado toleró (semana 4) | $2,000-4,000 MXN |
| Margen si se vende a $2,800 MXN (precio sugerido antes de esta corrección) | **−$170 MXN por unidad** |

> **Conclusión de la IA:** el precio de hardware de $2,800 MXN recomendado antes de cotizar el módulo celular **ya no es válido**. Con el BOM real, cada unidad se vendería con margen negativo antes de contar el costo de adquisición de cliente.

**Opciones identificadas (ninguna resuelta todavía):**

| Opción | Efecto | Riesgo |
|---|---|---|
| 1. Chip SMD puro con antena propia | Baja el BOM ~$1,600 MXN | Añade un ciclo de aprendizaje de RF que el equipo no ha hecho (riesgo técnico) |
| 2. Módulo NB-IoT/LTE-M (SIM7000, ~$79-89 USD de catálogo) | Más barato que el breakout SIM7600 | Repite el riesgo de cobertura NB-IoT sin confirmar que ya había quedado pendiente en la semana 5 |
| 3. Subsidiar el hardware y cargar la suscripción | Baja la barrera de entrada | La suscripción ya está cerca del techo que el mercado validó ($300-600 MXN/mes) |

---

### Prompt 3 — Costo de la IA

#### IA utilizada

**IA:** Claude (Anthropic) con búsqueda web — rol de analista de costos de inferencia para productos con IA

#### Prompt

```text
Actúa como analista de costos de inferencia para productos de
hardware + IA. Aplica la fórmula del curso:

Costo mensual por usuario = llamadas por día
  × (tokens input + tokens output) por llamada
  × precio por token × 30 días

DistanciaCero detecta anomalías con un modelo estadístico en una
Cloud Function (no con un LLM). El único uso posible de un LLM
sería una función premium futura: el hijo/a le pregunta a la IA
sobre la actividad de su familiar. Cuenta los tokens de un prompt
real de esa función (instrucciones + 7 días de datos agregados +
pregunta del usuario), estima los tokens de una respuesta típica
de máximo 100 palabras, y calcula el costo mensual con el precio
oficial vigente de Claude Haiku. Verifica el precio en una
fuente actual.
```

#### Resultado de la IA

> Precio verificado para Claude Haiku 4.5: **$1.00 USD por millón de tokens de entrada y $5.00 USD por millón de tokens de salida** (fuente: documentación oficial de Anthropic, según un agregador con última verificación el 15/05/2026; confirmar en anthropic.com/pricing antes de presentar).

| Variable | Valor | Origen |
|---|---|---|
| Tokens de input por consulta | ~250 | Estimación hecha por Claude en el chat (el método que acepta el curso para el ejercicio); en producción se usa `count_tokens` |
| Tokens de output por consulta | ~150 | Estimación para una respuesta de máximo 100 palabras |
| Costo por consulta | ≈ $0.001 USD (~$0.018 MXN) | (250 × $1 + 150 × $5) ÷ 1,000,000 |
| Consultas por usuario al mes (uso a demanda) | 8 | Supuesto conservador |
| **Costo mensual por usuario** | **~$0.14 MXN** | |

> **Hallazgo de la IA:** el costo de la IA que esta semana advierte que puede destruir el margen **no aplica a DistanciaCero en su forma actual**, porque la arquitectura de la semana 5 decidió que la detección central sea un modelo estadístico y no un LLM. La decisión técnica resultó ser también una decisión económica acertada. El costo operativo real del servicio vendrá de la SIM celular y de Firebase, no de tokens.

---

## Tabla de costos D / F / S

**CREAR la oferta**

| Costo | D/F/S | Por qué |
|---|:--:|---|
| Módulo celular (SIM7600E-H) | **D** | Permite la independencia de WiFi, el diferenciador central frente a los sensores DIY |
| MPU6050 + PIR | **D** | Son los sensores que hacen posible la detección de rutina |
| Modelo de detección de anomalía (cloud) | **D** | Es la diferenciación central; sin él es un sensor de presencia genérico |
| ESP32-S3 | F | Sustituible por otro microcontrolador compatible |
| Batería + carga | F | Capacidad y proveedor negociables sin afectar la propuesta de valor |
| Carcasa (ABS + sobremoldeo) | F | El acabado importa, pero el proceso específico es negociable en etapa temprana |
| Mano de obra de ensamble | F | La hace el equipo al inicio; a escala se vuelve costo de maquila |
| PCB + ensamble JLCPCB | S | Precio estándar de mercado a este volumen |
| Infraestructura Firebase | S | Precio estándar por uso |
| Licencias de software (CAD, IDE) | S | Precios estándar |

**DISTRIBUIR la oferta**

| Costo | D/F/S | Por qué |
|---|:--:|---|
| Marketing digital (Meta/Google Ads) | **D** | Es el canal validado en la semana 4 para llegar al segmento específico |
| Costo de adquisición de cliente ($800-1,200 MXN) | **D** | Inversión directa para llegar al segmento validado |
| Empaque | F | Simplificable al inicio |
| Soporte técnico (WhatsApp del equipo) | F | Lo absorbe el equipo al inicio |
| Comisión de pasarela de pago (~3.6%) | S | No negociable con Stripe/Conekta a este volumen |
| Envío y logística | S | Tarifas de paquetería estándar |
| Actualizaciones OTA | S | Infraestructura estándar de almacenamiento y transferencia |

**Lectura:** hay 6 costos D, todos conectados con la propuesta de valor (detección pasiva sin WiFi + llegar al segmento correcto). El costo D más pesado es el módulo celular, y es justamente el que rompe el BOM. Eso no es una señal de que la propuesta esté mal, pero sí de que no se puede recortar ese costo sin reconsiderar qué significa "sin WiFi" para el diseño.

---

## Costos de desarrollo — ciclos de aprendizaje

Costo de un ciclo completo (diseño → construcción → prueba → aprender), con el BOM corregido:

| Concepto | Cálculo | Monto |
|---|---|---|
| Fijos directos | 70 h × $80 MXN/h + $500 licencias | $6,100 MXN |
| Variables directos | BOM corregido $2,970 + PCB laboratorio $200 + carcasa $180 + consumibles $120 | $3,470 MXN |
| Indirectos (15% de los directos) | ($6,100 + $3,470) × 0.15 | $1,436 MXN |
| **Costo base por ciclo** | | **$11,006 MXN** |
| Reserva para contingencias (30%) | $11,006 × 0.30 | $3,302 MXN |
| **Costo total por ciclo** | | **$14,308 MXN** |

| Escenario | Ciclos | Costo total |
|---|:--:|---|
| Mínimo | 3 | $42,924 MXN |
| **Promedio (presupuesto recomendado)** | **5** | **$71,540 MXN** |
| Máximo | 8 | $114,464 MXN |

> Las 70 horas por ciclo y los $80 MXN/h son supuestos de planeación del equipo, no mediciones. Solo el componente de materiales cambió por la corrección del BOM.

---

## Modelo económico y matemáticas financieras

### Prompt 4 — Modelo económico del producto

#### IA utilizada

**IA:** Claude (Anthropic) — rol de analista financiero para startups de hardware + software en México

#### Prompt

```text
Actúa como un analista financiero con especialización en modelos
de negocio para startups de hardware + software en mercados
emergentes latinoamericanos. Tu metodología combina el análisis de
costos reales con proyecciones financieras conservadoras: siempre
que hay incertidumbre, usas el escenario menos favorable. Cuando
los números no cierran, lo dices directamente y propones qué
palancas puede mover el equipo.

NUESTRO PRODUCTO:
Nombre: DistanciaCero
Descripción: Reposabrazos Centinela (90x60x15 mm, ABS + silicona)
con sensor de movimiento, conectividad celular y una app con IA que
detecta pasivamente la rutina de un adulto mayor y alerta al hijo/a
adulto (35-55 años) solo por excepción.
Propuesta de valor: Tranquilidad verificable sin vigilancia: sabes
que tu mamá o papá está bien sin llamarle ni instalar cámaras.

MODELO DE INGRESOS ELEGIDO:
Hardware + suscripción en dos capas (benchmarking: Medical Guardian,
Ring y CarePredict usan el mismo esquema).
Precio de hardware: $3,990 MXN (venta única)
Precio de suscripción: $449 MXN/mes

NUESTRO BOM (por unidad, volumen 8-10):
SIM7600E-H breakout $2,100 (cotizado) · ESP32-S3 $120 (estimado) ·
MPU6050 + PIR $125 (estimado) · 18650 + TP4056 $175 (estimado) ·
PCB + ensamble JLCPCB $250 (estimado) · Carcasa 3D $200 (estimado)
Total: $2,970 MXN

COSTO DE LA IA:
Modelo: Claude Haiku 4.5 (solo función premium opcional)
Consultas: 8/mes · ~250 tokens input + ~150 output
Costo calculado: $0.14 MXN/mes por usuario

INFRAESTRUCTURA CLOUD:
Firebase: $18 MXN/mes por usuario (prorrateado, ejemplo del curso)
SIM de datos IoT: $50 MXN/mes (supuesto, sin cotizar)
Soporte: $12 MXN/mes · Notificaciones: $10 MXN/mes (supuesto)

VOLUMEN OBJETIVO:
Prueba de mercado (año 1): 10 unidades
Año 2: ~100 unidades

Construye el modelo económico completo: costo unitario real a 10 y
a 100 unidades (overhead 15%, contingencia 25%), precio de venta
(cost-plus 40% y value-based), punto de equilibrio, flujo de caja
y VPN con tasa de descuento de 15%. Termina con alertas y palancas.
```

#### Resultado de la IA

```text
════════════════════════════════════════════════════════
MODELO ECONÓMICO
Producto: DistanciaCero · Modelo de ingresos: Hardware + suscripción
════════════════════════════════════════════════════════

COSTO UNITARIO
A 10 unidades: $4,158 MXN  (BOM $2,970 + overhead 15% $446
                            + contingencia 25% $743)
A 100 unidades: $1,918 MXN solo SI se logra el chip SMD con antena
                propia (BOM ~$1,370). Es una hipótesis: depende de un
                ciclo de aprendizaje de RF que el equipo no ha hecho.
                Con el breakout actual el costo no baja de forma
                documentada (no hay cotización por volumen).
Componente de mayor costo: SIM7600E-H, $2,100 = 71% del BOM
                           y 51% del costo unitario.
El costo de la IA representa: $0.14 de $90.14 de costo operativo
                              mensual (0.2%).

PRECIO DE VENTA
Cost-plus (40%): $5,821 MXN hardware + $126 MXN/mes suscripción
                 (si el hardware se cobra completo), o
                 $0 hardware + $708 MXN/mes si el hardware se
                 recupera vía suscripción en 12 meses (método del curso).
Value-based: NO se puede calcular con honestidad. Requiere el valor
             económico que el segmento reconoce, y las entrevistas
             reales siguen pendientes. Se usa como techo el rango que
             el mercado toleró en la semana 4 (hipótesis): hardware
             $2,000-4,000 y suscripción $300-600/mes.
Precio recomendado: $3,990 + $449/mes — por qué: ambas cifras caben
             dentro del rango tolerado (el cost-plus completo no),
             y la suscripción cubre sus costos operativos con
             $343/mes de contribución por suscriptor.

PUNTO DE EQUILIBRIO
Contribución por unidad vendida a 12 meses de vida del cliente:
  $2,801 MXN  → 25.5 unidades para cubrir los $71,540 de desarrollo
A 24 meses de vida del cliente: $6,913 MXN → 10.3 unidades
¿Alcanzable? ⚠️ — 10 unidades en el año 1 es alcanzable (prueba de
mercado), pero cubrir el desarrollo exige retener a cada cliente
~2 años. Si el cliente cancela antes del mes 12, no cierra.

FLUJO DE CAJA (resumen)
Mes de flujo mensual positivo: mes 8 (y de forma sostenida, mes 16)
Inversión acumulada máxima: -$86,252 MXN (mes 15)
Recuperación acumulada (payback): mes 23

VPN A 12 MESES (tasa 15% anual)
VPN = -$72,414 MXN → inviable a 12 meses
VPN a 24 meses = +$3,158 MXN → marginalmente viable

────────────────────────────────────────────────────────
ALERTAS:
1. El precio anterior ($2,800 + $350/mes) NO cierra: en el mismo
   modelo da flujo acumulado de -$167,398 MXN a 24 meses. La
   corrección del módulo celular invalida esa recomendación.
2. El VPN a 12 meses es negativo porque los $71,540 de desarrollo
   (5 ciclos) se cargan al mes 0 y solo se venden 10 unidades. A
   24 meses el proyecto apenas llega a cero.
3. Casi todo el desarrollo son horas del equipo ($80/h × 70 h por
   ciclo), no efectivo. Sin esas horas, el efectivo que realmente
   hay que adelantar es ~$14,700 MXN (pico de caja negativa).
4. Cinco de seis líneas del BOM siguen siendo estimaciones; la SIM
   de datos ($50/mes) y las notificaciones ($10/mes) también.
5. El modelo no incluye cancelación (churn). Con 3% mensual de
   cancelación, el payback se aleja.

PALANCAS DISPONIBLES:
1. Resolver el módulo celular: pasar al chip SMD con antena propia
   baja el costo unitario de $4,158 a ~$1,918 y, en el mismo modelo,
   el flujo acumulado a 24 meses sube de +$26,100 a +$272,410.
2. Subir suscripción a $549: flujo acumulado a 24 meses de +$94,137
   (en vez de +$26,100). Es el límite alto del rango tolerado.
3. Reducir los ciclos de desarrollo de 5 a 3 ($42,924): baja la
   inversión del mes 0 en $28,616.
════════════════════════════════════════════════════════
```

**Supuestos del modelo (visibles, modificables en la hoja de cálculo):**

| Supuesto | Valor | Estado |
|---|---|---|
| BOM por unidad | $2,970 MXN | Solo SIM7600E-H cotizado |
| Costo unitario hardware | $4,158 MXN | Fórmula: BOM × (1 + 0.15 + 0.25) |
| Costo operativo por suscriptor | $90.14 MXN/mes | SIM $50 (supuesto) + Firebase $18 + IA $0.14 + soporte $12 + notificaciones $10 (supuesto) |
| Costo de adquisición | $1,000 MXN/unidad | Punto medio de $800-1,200 de la semana 4 |
| Comisión de pasarela | 3.6% de los ingresos | Semana 7, tabla D/F/S |
| Inversión mes 0 | $71,540 MXN | 5 ciclos de aprendizaje |
| Ventas | 10 unidades en meses 4-12; ~8.3/mes en el año 2 | Plan del equipo, hipótesis |
| Tasa de descuento | 15% anual (1.17% mensual) | Guía de la actividad |

**Flujo de caja, año 1 (precio $3,990 + $449/mes):**

| Mes | Unidades | Suscriptores | Ingresos | Egresos | Flujo neto | Acumulado |
|:--:|:--:|:--:|--:|--:|--:|--:|
| 0 | — | — | — | $71,540 | −$71,540 | −$71,540 |
| 1-3 | 0 | 0 | $0 | $0 | $0 | −$71,540 |
| 4 | 1 | 0 | $3,990 | $5,302 | −$1,312 | −$72,852 |
| 5 | 1 | 1 | $4,439 | $5,408 | −$969 | −$73,821 |
| 6 | 1 | 2 | $4,888 | $5,514 | −$626 | −$74,447 |
| 7 | 1 | 3 | $5,337 | $5,621 | −$284 | −$74,730 |
| 8 | 1 | 4 | $5,786 | $5,727 | +$59 | −$74,671 |
| 9 | 1 | 5 | $6,235 | $5,833 | +$402 | −$74,269 |
| 10 | 1 | 6 | $6,684 | $5,939 | +$745 | −$73,525 |
| 11 | 1 | 7 | $7,133 | $6,046 | +$1,087 | −$72,438 |
| 12 | 2 | 8 | $11,572 | $11,454 | +$118 | −$72,319 |

**Flujo de caja, año 2 (resumen):**

| Mes | Flujo neto | Acumulado |
|:--:|--:|--:|
| 13 | −$7,499 | −$79,818 |
| 15 | −$1,790 | −$86,252 |
| 16 | +$1,065 | −$85,187 |
| 20 | +$12,484 | −$52,381 |
| 23 | +$21,048 | +$2,198 |
| 24 | +$23,902 | +$26,100 |

**Comparación de precios en el mismo modelo (24 meses):**

| Hardware | Suscripción | Costo unitario | Flujo acumulado mes 24 | VPN 24 meses |
|--:|--:|--:|--:|--:|
| $2,800 (precio anterior) | $350 | $4,158 | −$167,398 | −$152,487 |
| **$3,990 (recomendado)** | **$449** | $4,158 | **+$26,100** | **+$1,833 a +$3,158** |
| $3,990 | $549 | $4,158 | +$94,137 | +$55,134 |
| $4,990 | $449 | $4,158 | +$132,101 | +$87,169 |
| $3,990 con chip SMD (hipótesis) | $449 | $1,918 | +$272,410 | +$200,125 |

> El VPN a 24 meses del precio recomendado aparece como rango porque el cálculo en Python usa una tasa mensual simple (15%/12) y la hoja de cálculo usa la tasa efectiva mensual ((1.15)^(1/12) − 1). Ambos dan un resultado cercano a cero.

---

### Ejercicios 1 a 9 — resolución paso a paso

**Ejercicio 1 — Valor futuro con capitalización trimestral**
- i = 7.5% ÷ 4 = 0.01875 por trimestre; n = 5.5 años × 4 = 22 trimestres
- VF = 45,000 × (1.01875)^22 = 45,000 × 1.5048
- **VF ≈ $67,717 USD**

**Ejercicio 2 — Valor presente de una obligación**
- i = 12% ÷ 12 = 0.01 mensual; n = 48
- VP = 125,000 ÷ (1.01)^48 = 125,000 ÷ 1.6122
- **VP ≈ $77,533 MXN** (lo que debe invertir hoy)

**Ejercicio 3 — Flujos irregulares**
- Año 1: 10,000 ÷ 1.09 = 9,174
- Año 3: 15,000 ÷ 1.09³ = 15,000 ÷ 1.2950 = 11,583
- Año 5: 8,000 ÷ 1.09⁵ = 8,000 ÷ 1.5386 = 5,200
- **VP total ≈ $25,957**

**Ejercicio 4 — Anualidad (InnovaTech)**
- Factor de anualidad = (1 − 1.11⁻⁶) ÷ 0.11 = 4.2305
- VP de los flujos = 60,000 × 4.2305 = 253,832
- VPN = 253,832 − 250,000 = **+$3,832 USD → viable**, pero con margen muy estrecho (1.5% de la inversión)

**Ejercicio 5 — Flujos variables**

| Año | Flujo | Factor 1.04ᵗ | Valor presente |
|:--:|--:|--:|--:|
| 1 | 7,500 | 1.0400 | 7,212 |
| 2 | 12,000 | 1.0816 | 11,095 |
| 3 | 20,000 | 1.1249 | 17,780 |
| 4 | 25,000 | 1.1699 | 21,370 |
| | | Suma | 57,456 |

VPN = 57,456 − 50,000 = **+$7,456 USD → viable**

**Ejercicio 6 — Con valor de salvamento**

| Año | Flujo | Factor 1.10ᵗ | Valor presente |
|:--:|--:|--:|--:|
| 1 | 300,000 | 1.1000 | 272,727 |
| 2 | 350,000 | 1.2100 | 289,256 |
| 3 | 375,000 | 1.3310 | 281,742 |
| 4 | 450,000 (300K + 150K salvamento) | 1.4641 | 307,357 |
| | | Suma | 1,151,083 |

VPN = 1,151,083 − 1,000,000 = **+$151,083 USD → viable**

**Ejercicio 7 — Comparación de proyectos (tasa 8%)**
- Proyecto X: 25,000 × (1 − 1.08⁻³) ÷ 0.08 = 25,000 × 2.5771 = 64,427 → VPN = **+$14,427**
- Proyecto Y: 10,000 ÷ 1.08 + 20,000 ÷ 1.1664 + 45,000 ÷ 1.2597 = 9,259 + 17,147 + 35,722 = 62,128 → VPN = **+$12,128**
- **Decisión: Proyecto X.** Los dos suman el mismo flujo total ($75,000), pero X lo recibe antes. Con la misma suma, el dinero que llega antes vale más.

**Ejercicio 8 — Sensibilidad del Proyecto X**

| Tasa | VPN | Decisión |
|--:|--:|---|
| 8% | +$14,427 | Aceptar |
| 15% | +$7,081 | Aceptar |
| 20% | +$2,662 | Aceptar con margen estrecho |
| 25% | −$1,200 | **Rechazar** |

Lectura: el proyecto cambia de decisión entre 20% y 25%. Un emprendedor mexicano que se financia al 25% no debería aceptarlo; uno que se financia al 8% sí.

**Ejercicio 9 — TIR por interpolación (Global Solutions)**
- r₁ = 14%: VPN₁ = **+$40,686** (la guía muestra $40,732; la diferencia viene de redondeos intermedios)
- r₂ = 22%: VPN₂ = **−$36,714** (la guía muestra −$36,560)
- TIR = 14% + (22% − 14%) × 40,686 ÷ (40,686 + 36,714) = 14% + 8% × 0.5256 = **18.2%**
- TIR (18.2%) > costo de capital (14%) → **proyecto viable ✅**
- Comprobación: la TIR exacta (por iteración) es 17.95%. La interpolación lineal sobrestima ligeramente porque el VPN es una curva y no una recta.

---

### Respuestas a las cuatro preguntas de salida

| Pregunta | Respuesta |
|---|---|
| ¿Costo unitario real a 10 unidades? | **$4,158 MXN** (BOM $2,970 + overhead $446 + contingencia $743). Solo el módulo celular está cotizado |
| ¿Modelo de ingresos y su desafío de diseño? | Hardware + suscripción. El desafío es hacer visible el valor de la suscripción *antes* de que el usuario deje de pagar. Como la detección es pasiva y solo avisa por excepción, un mes sin alertas puede parecer que el servicio no hace nada. Hay que diseñar un resumen semanal ("todo normal") que muestre que el sensor sigue trabajando |
| ¿Costo mensual de la IA por usuario? | **~$0.14 MXN** (0.2% del costo operativo). La detección central es estadística y no usa LLM |
| ¿VPN a 12 meses positivo con el BOM real? | **No.** VPN12 = −$72,414 MXN. A 24 meses es +$3,158 MXN (marginal) |

---

---

## Veredicto de la semana

**QUEDA RESUELTO:** benchmarking con tres empresas reales y precios verificados · BOM con el componente más caro cotizado en fuente real · costo de la IA con la fórmula del curso y precio vigente (prácticamente cero para la función central) · tabla D/F/S completa · presupuesto de desarrollo por ciclos (~$71,500 MXN, escenario promedio) · **modelo económico con fórmulas visibles: precio, punto de equilibrio, flujo a 24 meses y VPN** · ejercicios 1-9 resueltos.

| Dimensión | Estado | Por qué |
|---|:--:|---|
| Viabilidad económica | 🟡 | Cierra solo a 24 meses y de forma marginal con $3,990 + $449/mes. A 12 meses el VPN es negativo (−$72,414) |
| Factibilidad | 🟢 | Vigente de las semanas 5-6 |
| Costo de la IA | 🟢 | $0.14 MXN/usuario/mes |
| Dato más débil | 🔴 | 5 de 6 líneas del BOM sin cotizar; SIM de datos sin cotizar; churn no modelado; entrevistas reales pendientes |

**QUEDA PENDIENTE:**

1. **Decidir la ruta del módulo celular** (chip SMD con antena propia, NB-IoT o subsidio). Es la palanca que más mueve el resultado.
2. **Cotizar las cinco líneas restantes del BOM** y la SIM de datos en LCSC, DigiKey México y MercadoLibre.
3. **Agregar cancelación (churn)** al flujo de caja.
4. **Validar con entrevistas reales** que el segmento acepta $3,990 + $449/mes. El rango usado viene de la semana 4 (investigación secundaria y entrevistas de práctica), no de ventas reales.

---

## ¿Qué aprendí?

Lo que más me quedó es que un número puede estar bien razonado y aun así estar equivocado por un factor de tres. El BOM de la semana 5 se veía creíble y estaba documentado como estimación, pero al cotizar el componente más caro en una fuente real resultó muy por debajo del precio real. La diferencia entre "estimar" y "cotizar" es justo lo que el curso insiste en separar, y esta semana lo viví con un caso concreto.

También entendí por qué las tres dimensiones de la viabilidad se evalúan en orden. La arquitectura de la semana 5 era sólida y el concepto de la semana 6 era defendible, pero ninguna garantizaba que el negocio cerrara. La viabilidad es la prueba que puede tumbar un proyecto que las demás aprobaron.

El costo de la IA me enseñó lo contrario: una decisión técnica (usar un modelo estadístico y no un LLM para la detección central) también mantiene en casi cero el costo que más equipos subestiman.

Por último, el modelo financiero mostró que el costo unitario no decide por sí solo: lo decide la combinación de precio, retención y desarrollo. Con 10 unidades en el año 1, el desarrollo ($71,540) pesa más que todo el hardware vendido, y el VPN depende del horizonte: el mismo proyecto es −$72,414 a 12 meses y +$3,158 a 24.

---

## Reflexión personal

> Antes de esta semana yo asumía que la viabilidad económica era el último trámite, una cuenta que se hace al final para confirmar que el producto "sí deja". Cotizar el módulo celular me mostró que puede ser lo contrario: un solo componente cambió el BOM de ~$1,000 a ~$3,000 MXN y dejó sin sustento el precio que yo ya había recomendado ($2,800 + $350/mes, que en el modelo da −$167,398 a 24 meses). Lo más incómodo fue ver que mi propia recomendación estaba construida sobre un dato que nunca verifiqué. Prefiero descubrirlo ahora, sin hardware fabricado, que después de pedir ocho unidades. También aprendí que el precio se decide sabiendo cuánto cuesta cada unidad y cuánto tiempo tiene que quedarse el cliente para que sea rentable, no solo comparando con la competencia.

---

## Estado de la actividad

⚠️ **Actividad completada con hallazgos críticos** — benchmarking, BOM, costo de la IA, D/F/S, costos de desarrollo, modelo económico (precio, punto de equilibrio, flujo, VPN) y ejercicios 1-9 terminados. El proyecto es marginalmente viable a 24 meses con el BOM real. **Pendientes:** decisión del módulo celular y cotización del resto del BOM.

**Tema:** Viabilidad Técnica y Económica
**Evidencias:** Benchmarking de 3 empresas con precios verificados + BOM corregido vs. estimación de la semana 5 + costo de la IA con precio vigente + tabla D/F/S (17 costos) + presupuesto por ciclos de aprendizaje + modelo económico con flujo a 24 meses + ejercicios 1-9 resueltos