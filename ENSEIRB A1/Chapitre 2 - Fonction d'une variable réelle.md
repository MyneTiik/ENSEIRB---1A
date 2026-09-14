## 1. Définition
Une fonction d'une variable réelle est une application qui associe à tout nombre réel au plus une valeur réelle.

---

## 2. Domaine de définition
L'ensemble des $x$ qui possèdent une image.

| $f(x)$ | Ensemble de définition |
| :--- | :--- |
| $f(x) = \dfrac{3x - 2}{2x}$ | $\mathbb{R}^* = ]-\infty, 0[\ \cup\ ]0, +\infty[$ |
| $f(x) = \sqrt{1 - x^2}$ | $[-1, 1]$ |
| $f(x) = \dfrac{1}{\sqrt{1 - x^2}}$ | $]-1, 1[$ |
| $f(x) = \dfrac{1}{\sqrt{x^2 - 1}}$ *(ou forme similaire)* | $]-\infty, -1[\ \cup\ ]1, +\infty[$ |

---

## 3. Limites

### 3.1. Limite en un point

* **Limite finie en un point :**  
  $f(x)$ admet une limite finie $l$ en $x_0$ si :
  $$\forall \varepsilon > 0,\ \exists \eta > 0 \text{ tel que } \forall x,\ |x - x_0| < \eta \implies |f(x) - l| < \varepsilon$$

* **Asymptote verticale :**  
  Une fonction possède une asymptote verticale en $x_0$ si la limite de cette fonction tend vers l'infini :
  $$\lim_{x \to x_0} f(x) = \pm\infty$$
  *(Formellement : $\forall M > 0,\ \exists \eta > 0 \text{ tel que } |x - x_0| < \eta \implies f(x) > M$)*

### 3.2. Calcul de limites à l'infini
* $\lim_{x \to +\infty} x^3 = +\infty$
* $\lim_{x \to +\infty} \dfrac{x^3}{x} = \lim_{x \to +\infty} x^2 = +\infty$
* $\lim_{x \to +\infty} x = +\infty$
* $\lim_{x \to +\infty} \sin(x)$ : *n'admet pas de limite finie*

> **Définition avec $\varepsilon$ / $A$ à l'infini :**  
> $\forall \varepsilon > 0,\ \exists A \text{ tel que } x > A \implies |f(x) - l| < \varepsilon$

### 3.3. Croissance comparée
$$\ln(x) \ll \text{polynômes} \ll e^x \quad (\text{en } +\infty)$$

---

## 4. Continuité

Une fonction $f$ est continue en $x_0$ si :
$$\lim_{x \to x_0^-} f(x) = \lim_{x \to x_0^+} f(x) = f(x_0)$$

---

## 5. La Dérivation

### 5.1. La variation
* Variation de la variable : $\Delta x = x_2 - x_1 = (x_0 + h) - x_0 = h$
* Variation de la fonction : $\Delta f = \Delta f(x) = f(x_2) - f(x_1) = f(x_0 + h) - f(x_0)$

### 5.2. Nombre dérivé
La dérivée en $x_0$ correspond à la limite du taux d'accroissement :
$$f'(x_0) = \lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} = \lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h}$$

### 5.3. La différentielle
$$df(x) = f'(x_0) \, dx$$

---

## 6. Calcul des dérivées

### 6.1. Dérivées des fonctions usuelles

| $f(x)$ | $f'(x)$ |
| :--- | :--- |
| $ax$ | $a$ |
| $ax^n$ | $n \cdot a x^{n-1}$ |
| $\ln(x)$ | $\dfrac{1}{x}$ |
| $\cos(x)$ | $-\sin(x)$ |
| $\sin(x)$ | $\cos(x)$ |
| $e^x$ | $e^x$ |
| $\text{sh}(x)$ | $\text{ch}(x)$ |
| $\text{ch}(x)$ | $\text{sh}(x)$ |

---

### 6.2. Dérivée d'une somme
$$(u + v)' = u' + v'$$

### 6.3. Dérivée d'un produit
$$(u \cdot v)' = u'v + uv'$$

### 6.4. Dérivée d'une fonction composée
$$[f(u)]' = u' \cdot f'(u)$$

* Cas particulier des puissances :
  $$(u^n)' = n \cdot u' \cdot u^{n-1}$$

---

### Exercices d'application

1. **Dérivée de $\cos(x^2)$ :**  
   $$(\cos(x^2))' = -2x \sin(x^2)$$

2. **Dérivée de $\cos^2(x)$ :**  
   $$\left(\cos^2(x)\right)' = -2 \sin(x) \cos(x)$$