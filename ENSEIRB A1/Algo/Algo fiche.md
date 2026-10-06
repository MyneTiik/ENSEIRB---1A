
# Algorithmique : Méthodologie, Fiche de Révision et Entraînement

## 1. Méthodologie de résolution d'un problème algorithmique

Pour aborder sereinement un exercice d'algorithmique ou écrire une fonction, suivez ces étapes :

1.  **Analyser le problème (Entrées / Sorties) :**

    *   Quelles sont les données fournies (arguments de la fonction) ? (ex: un entier, une liste chaînée).
    *   Que doit retourner la fonction ? (ex: un booléen, une nouvelle liste, un entier).
    *   Quels sont les cas particuliers ou cas d'erreur (liste vide, nombre négatif) ?

2.  **Choisir la structure et l'approche :**

    *   Doit-on parcourir les données itérativement (boucles `pour`, `tant que`) ou récursivement ?
    *   S'il s'agit de listes simplement chaînées, rappelez-vous que vous n'avez accès qu'au début de la liste.

3.  **Rédiger le pseudocode au brouillon :**

    *   Initialisez vos variables (compteurs, listes vides pour les résultats).
    *   Écrivez la boucle principale ou les conditions d'arrêt (pour la récursion).
    *   Faites avancer le problème à chaque étape (ex: `l = retirerDebut(l)` ou `i = i + 1`).

4.  **Vérifier "à la main" (Tracer l'algorithme) :**

    *   Prenez un petit exemple (ex: $l = [1, 2]$, $x = 5$) et déroulez votre code ligne par ligne.

5.  **Analyser la complexité :**

    *   Combien de fois la boucle principale s'exécute-t-elle par rapport à la taille $n$ des données ?
    *   Y a-t-il des appels de fonctions coûteux à l'intérieur de la boucle ?  

---
## 2. Fiche de Révision

### A. Les Listes Simplement Chaînées

Les listes sont des structures séquentielles. Vous ne pouvez pas accéder directement au $i$-ème élément (pas de `l[i]`). Vous devez utiliser les 5 primitives de base :

*   `listeVide()` : Crée une liste vide.
*   `estVide(l)` : Retourne Vrai si la liste est vide.
*   `ajouterDebut(l, valeur)` : Ajoute un élément en tête et retourne la nouvelle liste ($O(1)$).
*   `retirerDebut(l)` : Supprime le premier élément et retourne la suite de la liste ($O(1)$).
*   `premiereValeur(l)` : Lit la valeur du premier élément ($O(1)$).

*Astuce :* Pour créer une liste de la fin vers le début, ajoutez au début itérativement. Pour parcourir une liste sans la perdre complètement, utilisez une copie (`l_copie = l`).
### B. Calcul de Complexité Temporelle

La complexité évalue le temps d'exécution en fonction de la taille $n$ des données.

*   **$O(1)$ (Constante) :** Opérations de base, affectations, primitives de listes.
*   **$O(\log n)$ (Logarithmique) :** La taille du problème est divisée (par 2, 10, etc.) à chaque étape (ex: conversion binaire, recherche dichotomique).
*   **$O(n)$ (Linéaire) :** Une boucle simple parcourant tous les éléments.
*   **$O(n^2)$ (Quadratique) :** Deux boucles imbriquées dépendant de $n$, ou une boucle de taille $n$ appelant une fonction de complexité $O(n)$.
*   **$O(2^n)$ (Exponentielle) :** Appels récursifs multiples non optimisés (ex: Fibonacci naïf).

### C. La Récursivité

Une fonction récursive s'appelle elle-même. Elle doit **toujours** comporter :

1.  **Un (ou plusieurs) cas de base (Condition d'arrêt) :** ex: `si estVide(l) alors retourner 0`.

2.  **Une étape récursive :** L'appel à la fonction elle-même sur un problème *strictement plus petit* (ex: `retirerDebut(l)` ou `n-1`). 

---
## 3. Jeu d'Exercices d'Entraînement
### Exercice 1 : Manipulation de listes (Itératif)

Écrire une fonction `remplacer_tout(l: Liste[Entier], ancien: Entier, nouveau: Entier) -> Liste[Entier]` qui remplace toutes les occurrences de la valeur `ancien` par la valeur `nouveau` dans la liste `l`. Vous ne devez utiliser que les primitives de listes. Attention à conserver l'ordre des éléments !
### Exercice 2 : Récursivité

Écrire une fonction récursive `est_triee(l: Liste[Entier]) -> Booleen` qui retourne Vrai si la liste est triée dans l'ordre croissant, et Faux sinon.

*Indice : Une liste vide ou à un seul élément est triée.*
### Exercice 3 : Analyse de complexité

Analysez la complexité temporelle du code suivant en fonction de $n$ (la taille de la liste `l`). Expliquez votre raisonnement.

```text

fonc fonction_mystere(l: Liste[Entier], n: Entier) -> Entier

    total = 0

    pour i allant de 1 à n faire

        l_temp = l

        tant que non estVide(l_temp) faire

            total = total + premiereValeur(l_temp)

            l_temp = retirerDebut(l_temp)

            l_temp = retirerDebut(l_temp)  ; on retire 2 fois

        fin tant que

    fin pour

    retourner total

fin fonc

```

---
## 4. Corrigés des Exercices
### Corrigé Exercice 1

Pour conserver l'ordre avec une liste simplement chaînée, une technique classique consiste à construire une nouvelle liste, mais comme `ajouterDebut` inverse l'ordre, il faut ensuite inverser le résultat final, ou parcourir une liste de résultats intermédiaires.

```text

fonc remplacer_tout(l: Liste[Entier], ancien: Entier, nouveau: Entier) -> Liste[Entier]

    l_temp = listeVide()

    ; Parcours et remplacement (l_temp sera inversée)

    tant que non estVide(l) faire

        val = premiereValeur(l)

        si val == ancien alors

            l_temp = ajouterDebut(l_temp, nouveau)

        sinon

            l_temp = ajouterDebut(l_temp, val)

        fin si

        l = retirerDebut(l)

    fin tant que

    ; On ré-inverse l_temp pour retrouver l'ordre initial

    l_final = listeVide()

    tant que non estVide(l_temp) faire

        l_final = ajouterDebut(l_final, premiereValeur(l_temp))

        l_temp = retirerDebut(l_temp)

    fin tant que

    retourner l_final

fin fonc

```
### Corrigé Exercice 2

```text

fonc est_triee(l: Liste[Entier]) -> Booleen

    ; Cas de base : liste vide ou à un élément

    si estVide(l) alors retourner Vrai fin si

    si estVide(l.suivant) alors retourner Vrai fin si

    val1 = premiereValeur(l)

    suite = retirerDebut(l)

    val2 = premiereValeur(suite)

    ; Si les deux premiers ne sont pas dans le bon ordre

    si val1 > val2 alors

        retourner Faux

    fin si

    ; Appel récursif sur le reste de la liste

    retourner est_triee(suite)

fin fonc

```

*Note sur la complexité : $O(n)$ car on fait au maximum $n$ appels récursifs exécutant chacun des opérations en $O(1)$.*
### Corrigé Exercice 3

**Complexité : $O(n^2)$ (Quadratique).**

*Raisonnement :*

- La boucle `pour` externe s'exécute exactement $n$ fois.
- À l'intérieur, la boucle `tant que` parcourt la liste `l_temp` en retirant les éléments 2 par 2. La taille de la liste étant $n$, cette boucle s'exécute $n/2$ fois.
- Les opérations à l'intérieur du `tant que` sont des primitives en $O(1)$.
- Le nombre total d'opérations est proportionnel à $n \times (n/2)$, soit $\frac{1}{2}n^2$. En notation de Landau (grand O), on ignore les constantes multiplicatives, ce qui donne bien $O(n^2)$.