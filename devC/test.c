#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX_PASCAL_SIZE 100

// --- Utilitaires de chaînes ---

int my_strlen(const char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

void mirror(char *s) {
    int l = my_strlen(s);
    char x;
    for (int i = 0; i < l / 2; i++) {
        x = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = x;
    }
}

void is_pal(const char *s) {
    int len = my_strlen(s);
    int is_palindrome = 1; // On part du principe que c'est vrai
    
    // On ne vérifie que la première moitié
    for (int i = 0; i < len / 2; i++) { 
        if (s[i] != s[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("\"%s\" est un palindrome\n", s);
    } else {
        printf("\"%s\" n'est pas un palindrome\n", s);
    }
}

int my_itoa(int n, char *s, int l) {
    int i = 0;
    if (n == 0) {
        s[i++] = '0';
        s[i] = '\0';
        return 1;
    }
    while (n != 0) {
        if (i == (l - 1)) return 0; // Sécurité de taille
        s[i] = (n % 10) + '0';
        i += 1;
        n = n / 10;
    }
    s[i] = '\0';
    mirror(s);
    return 1;
}

// --- Utilitaires de tableaux ---

void print_array(const int *t, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = %d \n", i, t[i]);
    }
}

// Version spécifique pour formater le triangle de Pascal
void print_array_line(int l, const int t[]) {
    for (int i = 0; i < l; i++) {
        printf("%3d ", t[i]);
    }
    printf("\n");
}

int sum_array(const int *t, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += t[i];
    }
    return s;
}

int array_pair(const int *t, int n) {
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 == 0) {
            p += 1;
        }
    }
    return p;
}

int count_array(const int *t, int n, int v) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == v) {
            s += 1;
        }
    }
    return s;
}

// --- Triangle de Pascal ---

void pascal_line(int n, int tab[]) {
    tab[0] = 1; // Toujours 1 au début
    tab[n - 1] = 1; // Toujours 1 à la fin
    
    // On remplit le milieu en partant de la fin pour ne pas écraser les données
    for (int i = n - 2; i > 0; i--) {
        tab[i] = tab[i - 1] + tab[i];
    }
}

void pascal_triangle(int n) {
    if (n <= 0 || n > MAX_PASCAL_SIZE) {
        printf("Taille invalide\n");
        return;
    }
    
    // Allocation statique sécurisée
    int tab[MAX_PASCAL_SIZE]; 
    
    for (int i = 1; i <= n; i++) {
        pascal_line(i, tab);
        print_array_line(i, tab);
    }
}

//Année bisextile

int bis_years(int annee){
    if (annee%4==0 && annee%100!=0){
        printf("%d est une année bisextile\n", annee);
        return 0;
    }
    if (annee%400==0){
        printf("%d est une année bisextile\n", annee);
        return 0;
    }
    else
    {
        printf("%d n'est une année bisextile\n", annee);
    }
    return 0;
    
}

// Comparaison deux deux tableaux triés et croissant


int compare_tabs(int *tab, int t, int *tab2, int t2){
    int doublons[5];
    int k=0;
    for (int i=0;i<t;i++){
        for (int j=0;(tab2[j]!=tab[i]) || (j<t2);j++){
            if (tab[i]==tab2[j]){
                doublons[k]=tab[i];
                k+=1;
                printf("doublon %d : %d\n",i, tab[i]);
                break;
            }   
            //printf("%d, %d",i,j);
            //printf("tab[i] : %d, tab2[j] : %d\n", tab[i], tab2[j]);
        }
    }
    print_array(doublons, 5);
    return 0;
}


// Tri a bulle (merci marie)

int croissant(int tab[], int n){
    for(int i=1; i< n; i++){
        if (tab[i]<tab[i-1]){
            return 0;
        }
    }
    return 1;    
}


int sort_bubble(int *tab, int t){
    int temp;
    int echange=1;
    while (echange){
        echange=0;
        for(int i=1; i<t; i++){
            if (tab[i]<tab[i-1]){
                temp = tab[i-1];
                tab[i-1]=tab[i];
                tab[i]=temp;
                echange=1;
            } 
        }
    }
    print_array(tab,t);
    return 0;
}

// Swap deux variables grâce aux emplaceents de var (pointers)

void faux_swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;

    
}

void ascii(){
    unsigned char i;
    for(i=0; i<255; i++){
        printf("%c \t %d \t 0x%x \t 0%o\n",i,i,i,i);
    }
}

// Resistance
enum color {Noir,Marron,Rouge,Orange,Jaune,Vert,Bleu,Violet,Gris,Blanc};

int times_pow10(int n, int p){
    int x=1;
    while (p>0) {x*=10; p-=1;}
    return n*x;

}

int resistance(enum color c1, enum color c2, enum color c3){
    return times_pow10(c1*10+c2, c3);
}

//Poiteurs

void min_max(int l, int t[], int *min, int *max){
    int i;
    *max=t[0];
    *min=t[0];
    for(i=0;i<l;i++){
        if (t[i]>*max){ *max=t[i];}
        if (t[i]<*min){ *min=t[i];}
    }
    
}



int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    /*
    printf("--- Tests Palindrome et Strings ---\n");
    if (argc > 1) {
        is_pal(argv[1]);
        printf("len %zu vs %d\n", strlen(argv[1]), my_strlen(argv[1]));
        
        // On copie argv[1] dans un buffer car modifier directement argv[] 
        // avec mirror() peut poser des problèmes de mémoire selon l'OS.
        char buffer[256];
        strncpy(buffer, argv[1], sizeof(buffer) - 1);
        buffer[255] = '\0';
        
        mirror(buffer);
        printf("Miroir : %s\n", buffer);
    } else {
        printf("Passe un argument au programme (ex: ./prog kayak) pour tester is_pal !\n");
    }

    printf("\n--- Test my_itoa ---\n");
    char u[10];
    my_itoa(241, u, 10);
    printf("241 converti en string : %s\n", u);

    printf("\n--- Tests Tableaux ---\n");
    int a = 1;
    int t[8] = {3, 4, 1, 1, 9, 8, 1, 12};
    print_array(t, 8);
    printf("Somme : %d \n", sum_array(t, 8));
    printf("Nombres pairs (quantité) : %d \n", array_pair(t, 8));
    printf("Nombre de fois que %d apparait : %d \n", a, count_array(t, 8, a));

    printf("\n--- Triangle de Pascal ---\n");
    pascal_triangle(8);

    printf("\n--- Années Bisextiles ---\n");
    bis_years(2008);
    bis_years(1990);
    

    int tableau1[5]={2,3,1766475,7,9};
    printf("Tab1 : %d, tab2 : %d",croissant(tableau1,5),croissant(tableau2,5));

    int tableauA[7]={8,1,2,10,5,3,9};
    sort_bubble(tableauA,7);

    int tableau1[5]={1,2,5,6,9};
    int tableau2[5]={2,3,5,7,9};
    compare_tabs(tableau1, 5, tableau2, 5);

    int x = 5;
    int y = 10;
    faux_swap(&x, &y);
    printf("x=%d, y=%d\n",x,y);
    faux_swap(&x, &y);
    printf("x=%d, y=%d\n",x,y);
    

    ascii();

    printf("resistance : %d\n",resistance(Noir, Jaune, Rouge));
    */

    int tab[5]={2,6,3,90,1};
    int min;
    int max;
    min_max(5, tab, min, max);
    printf("min : %d, max : %d\n", &min, &max);

    return 0;
}