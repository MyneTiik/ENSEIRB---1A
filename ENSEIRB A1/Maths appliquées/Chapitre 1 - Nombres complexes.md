# Nombres complexes & Applications

## 1. Introduction du plan complexe
- Axe horizontal : réels ($\mathbb{R}$).
- Axe vertical : imaginaires ($i = j$). En physique et télécom/élec, on utilise la notation $j$ :
  $$j^2 = -1$$

## 2. Notations cartésiennes
Forme algébrique / cartésienne :
$$z = a + jb$$
- $a = \text{Re}(z)$ (partie réelle)
- $b = \text{Im}(z)$ (partie imaginaire)

## 3. Notation polaire
$$z = \rho e^{j\theta}$$
- $\rho = |z| = \sqrt{a^2 + b^2}$ (module)
- $\theta = \arg(z) = \arctan\left(\frac{b}{a}\right)$ (argument)

## 4. Cercle trigonométrique

![[Pasted image 20260908131834.png|291]]
Sur le cercle unité ($R = 1$) :
$$e^{j\theta} = \cos(\theta) + j\sin(\theta)$$
- Projection sur l'axe réel : $\cos(\theta)$
- Projection sur l'axe imaginaire : $j\sin(\theta)$

---

## 5. Opérations sur les nombres complexes

### a) Addition de deux nombres complexes
Soient $z_1 = a_1 + jb_1$ et $z_2 = a_2 + jb_2$ :
$$z_3 = z_1 + z_2 = (a_1 + a_2) + j(b_1 + b_2)$$
- $a_3 = a_1 + a_2$
- $b_3 = b_1 + b_2$

### b) Produit de deux nombres complexes
Soient $z_1 = a_1 + jb_1 = \rho_1 e^{j\theta_1}$ et $z_2 = a_2 + jb_2 = \rho_2 e^{j\theta_2}$ :

- **Forme cartésienne :**
  $$z_3 = z_1 \times z_2 = a_1 a_2 + j a_1 b_2 + j b_1 a_2 + j^2 b_1 b_2$$
  $$z_3 = (a_1 a_2 - b_1 b_2) + j(a_1 b_2 + a_2 b_1)$$

- **Forme polaire :**
  $$z_3 = \rho_1 \times \rho_2 \times e^{j(\theta_1 + \theta_2)}$$
  - $\rho_3 = \rho_1 \times \rho_2$
  - $\theta_3 = \theta_1 + \theta_2$

---

## 6. Valeurs trigonométriques remarquables

| $\theta$ | $\cos(\theta)$ | $\sin(\theta)$ |
| :---: | :---: | :---: |
| $\frac{\pi}{6}$ | $\frac{\sqrt{3}}{2}$ | $\frac{1}{2}$ |
| $\frac{\pi}{4}$ | $\frac{\sqrt{2}}{2}$ | $\frac{\sqrt{2}}{2}$ |
| $\frac{\pi}{3}$ | $\frac{1}{2}$ | $\frac{\sqrt{3}}{2}$ |

---

## 7. Exercices d'application

### Exercice 1
Soient :
- $z_1 = \sqrt{2} + j\sqrt{2}$
- $z_2 = \frac{\sqrt{3}}{2} + j\frac{1}{2}$

1. **Forme polaire de $z_1$ :**
   - $\rho_1 = \sqrt{(\sqrt{2})^2 + (\sqrt{2})^2} = \sqrt{2 + 2} = 2$
   - $\theta_1 = \arctan\left(\frac{\sqrt{2}}{\sqrt{2}}\right) = \arctan(1) = \frac{\pi}{4}$
   $$\Rightarrow z_1 = 2 e^{j\frac{\pi}{4}}$$

2. **Forme polaire de $z_2$ :**
   - $\rho_2 = \sqrt{\left(\frac{\sqrt{3}}{2}\right)^2 + \left(\frac{1}{2}\right)^2} = \sqrt{\frac{3}{4} + \frac{1}{4}} = 1$
   - $\theta_2 = \arctan\left(\frac{1/2}{\sqrt{3}/2}\right) = \arctan\left(\frac{1}{\sqrt{3}}\right) = \frac{\pi}{6}$
   $$\Rightarrow z_2 = e^{j\frac{\pi}{6}}$$

3. **Addition $z_1 + z_2$ :**
   $$z_1 + z_2 = \left(\sqrt{2} + \frac{\sqrt{3}}{2}\right) + j\left(\sqrt{2} + \frac{1}{2}\right)$$

4. **Produit $z_1 \times z_2$ :**
   - $\rho_3 = 2 \times 1 = 2$
   - $\theta_3 = \frac{\pi}{4} + \frac{\pi}{6} = \frac{5\pi}{12}$
   $$z_1 \times z_2 = 2 e^{j\frac{5\pi}{12}}$$

---

### Exercice 2
Soient :
- $z_1 = 2 e^{j\frac{\pi}{4}}$
- $z_2 = \sqrt{3} - j$

1. **Forme polaire de $z_2$ :**
   - $\rho_2 = \sqrt{(\sqrt{3})^2 + (-1)^2} = \sqrt{3 + 1} = 2$
   - $\theta_2 = \arctan\left(\frac{-1}{\sqrt{3}}\right) = -\frac{\pi}{6}$
   $$\Rightarrow z_2 = 2 e^{-j\frac{\pi}{6}}$$

2. **Addition $z_1 + z_2$ :**
   Comme $z_1 = \sqrt{2} + j\sqrt{2}$ :
   $$z_1 + z_2 = (\sqrt{2} + \sqrt{3}) + j(\sqrt{2} - 1)$$

3. **Produit $z_1 \times z_2$ :**
   $$z_1 \times z_2 = (2 \times 2) e^{j\left(\frac{\pi}{4} - \frac{\pi}{6}\right)} = 4 e^{j\frac{\pi}{12}}$$

---

## 8. Utilisation des complexes en physique

### a) Lien cause / effet (Loi d'Ohm complexe)
$$\underline{U} = \underline{Z} \cdot \underline{I}$$
- $\underline{U}$ : cause (tension)
- $\underline{I}$ : effet (courant)
- $\underline{Z}$ : impédance complexe

### b) Régime harmonique (Fourier)
- Cause : $u(t) = U_{\max} \cos(\omega t) \longrightarrow \underline{U} = \hat{U} e^{j\omega t}$
- Effet : $i(t) = I_{\max} \cos(\omega t + \varphi) \longrightarrow \underline{I} = \hat{I} e^{j(\omega t + \varphi)}$

Lien avec l'impédance :
$$\underline{Z} = \frac{\underline{U}}{\underline{I}} = \frac{\hat{U}}{\hat{I}} e^{j(\theta_u - \theta_i)}$$

---

### Exercice d'application (Calcul d'impédance)
Données :
- $u(t) = 240\sqrt{2} \cos(100t)$
- $i(t) = 4 \cos\left(100t + \frac{\pi}{3}\right)$

Calcul :
$$240\sqrt{2} \cos(100t) = \underline{Z} \cdot 4 \cos\left(100t + \frac{\pi}{3}\right)$$
$$\underline{Z} = \frac{240\sqrt{2}}{4} e^{j\left(0 - \frac{\pi}{3}\right)} = 60\sqrt{2} e^{-j\frac{\pi}{3}}$$

---

## 9. Formules de Moivre et d'Euler

### a) Formule de Moivre
Pour $z = e^{j\theta} = \cos(\theta) + j\sin(\theta)$ :
$$(e^{j\theta})^n = \cos(n\theta) + j\sin(n\theta)$$
Forme générale :
$$(\rho e^{j\theta})^n = \rho^n e^{j n \theta} = \rho^n \big(\cos(n\theta) + j\sin(n\theta)\big)$$

### b) Formules d'Euler
Rappels : $\cos(-\theta) = \cos(\theta)$ et $\sin(-\theta) = -\sin(\theta)$.
- $e^{j\theta} = \cos(\theta) + j\sin(\theta)$
- $e^{-j\theta} = \cos(\theta) - j\sin(\theta)$

Formules :
- **Cosinus :**
  $$e^{j\theta} + e^{-j\theta} = 2\cos(\theta) \implies \cos(\theta) = \frac{e^{j\theta} + e^{-j\theta}}{2}$$

- **Sinus :**
  $$e^{j\theta} - e^{-j\theta} = 2j\sin(\theta) \implies \sin(\theta) = \frac{e^{j\theta} - e^{-j\theta}}{2j}$$

---

## 10. Fonctions trigonométriques hyperboliques
- **Cosinus hyperbolique :**
  $$\operatorname{ch}(x) = \frac{e^x + e^{-x}}{2}$$

- **Sinus hyperbolique :**
  $$\operatorname{sh}(x) = \frac{e^x - e^{-x}}{2}$$




Chapitre 2 : [[Chapitre 2 - Fonction d'une variable réelle]]