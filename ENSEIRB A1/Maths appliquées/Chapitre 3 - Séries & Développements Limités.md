## 6. Développement en séries entières

### 6.1 Définition (Formule de Taylor)

$$f(t) = f(t_0) + f'(t_0)\frac{(t-t_0)}{1!} + f''(t_0)\frac{(t-t_0)^2}{2!} + f'''(t_0)\frac{(t-t_0)^3}{3!} + \dots + f^{(n)}(t_0)\frac{(t-t_0)^n}{n!} + R_n(t)$$

### 6.2 Développement limité (au voisinage de 0 — Maclaurin)

Pour $t \to 0$ :

$$f(t) = f(0) + f'(0)\frac{t}{1!} + f''(0)\frac{t^2}{2!} + \dots$$

### 6.3 Utilisation pour le calcul des limites

**Exemple :** $\lim_{x \to 0} \dfrac{\sin(x)}{x}$

Développement en série de $\sin(x)$ en $0$ :
$$f(x) = \sin(0) + \cos(0)\frac{x}{1!} - \sin(0)\frac{x^2}{2!} - \cos(0)\frac{x^3}{3!} + \dots$$
$$f(x) = x - \frac{x^3}{3!} + \frac{x^5}{5!} + o(x^5)$$

Application à la limite :
$$\lim_{x \to 0} \frac{\sin(x)}{x} = \lim_{x \to 0} \frac{x - \frac{x^3}{6} + \dots}{x} = \lim_{x \to 0} \left(1 - \frac{x^2}{6}\right) = 1$$

---

## Exercices

### Développement en série de $\sin(x)$ au voisinage de $\frac{\pi}{2}$

$$f(x) = \sin\left(\frac{\pi}{2}\right) + \cos\left(\frac{\pi}{2}\right)\frac{(x - \frac{\pi}{2})}{1!} - \sin\left(\frac{\pi}{2}\right)\frac{(x - \frac{\pi}{2})^2}{2!} + \cos\left(\frac{\pi}{2}\right)\frac{(x - \frac{\pi}{2})^3}{3!} + \sin\left(\frac{\pi}{2}\right)\frac{(x - \frac{\pi}{2})^4}{4!} + \dots$$

Comme $\sin(\frac{\pi}{2}) = 1$ et $\cos(\frac{\pi}{2}) = 0$ :

$$f(x) = 1 - \frac{(x - \frac{\pi}{2})^2}{2!} + \frac{(x - \frac{\pi}{2})^4}{4!} + \dots$$

### Calcul de limite associée

$$\lim_{x \to \frac{\pi}{2}} \frac{1 - \sin(x)}{x - \frac{\pi}{2}}$$

En injectant le développement limité de $\sin(x)$ :

$$\lim_{x \to \frac{\pi}{2}} \frac{1 - \left[1 - \frac{(x - \frac{\pi}{2})^2}{2} + \dots\right]}{x - \frac{\pi}{2}} = \lim_{x \to \frac{\pi}{2}} \frac{(x - \frac{\pi}{2})^2}{2\left(x - \frac{\pi}{2}\right)} = \lim_{x \to \frac{\pi}{2}} \frac{x - \frac{\pi}{2}}{2} = 0$$

---

## 7. Tableau de variation

| $x$         | $-\infty$ |            |         $x_1$         |            |   $x_2$   |            | $+\infty$ |
| :---------- | :-------: | :--------: | :-------------------: | :--------: | :-------: | :--------: | :-------: |
| **$f'(x)$** |           |    $+$     |                       |    $+$     |           |    $-$     |           |
| **$f(x)$**  |    $2$    | $\nearrow$ | $+\infty$ / $-\infty$ | $\nearrow$ | $+\infty$ | $\searrow$ |    $4$    |
