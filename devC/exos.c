#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>


void print_tab(const int *tab, int l){
    int i=0;
    while(i<l){
        printf("i : %d -> %d\t", i, tab[i]);
        i+=1;
    }
    printf("\n");
}

void delete_space(char text[]){
    int d=0;
    int i=0;
    while(text[i]!='\0'){
        if(text[i]!=' '){
            text[d]=text[i];
            d++;
        }
        i++;
    }
    text[d]='\0';
    printf("char : %s", text);
}

unsigned int str_to_bin(char str[]) {
    unsigned int resultat = 0;
    int i = 0;
    
    while(str[i] != '\0') {
        resultat = resultat << 1; 
        
        if(str[i] == '1') {
            resultat = resultat | 1; 
        }
        
        i++;
    }
    printf("resultat : %u\n", resultat);
    return resultat;
}

int sum_tabs(int tab[], int l){
    int sum=0;
    for(int i=0;i<l;i++){
        sum+=tab[i];
    }
    printf("SOMME : %d", sum);
    return sum;
}


int mux_tabs(int tab1[], int l1, int tab2[], int l2){
    if(l1!=l2){return 2;}
    int mux[100];
    for(int i=0;i<l1;i++)
        mux[i]=(tab1[i]*tab2[i]);
    print_tab(mux, l1);
    return 0;
}

int mux_tabs_v2(int tab1[], int l1, int tab2[], int l2){
    if(l1!=l2){return 2;}
    int mux=0;
    for(int i=0;i<l1;i++){
        mux+=(tab1[i]*tab2[i]);
    }
    return mux;
}

int my_strlen(const char text[]){
    int i=0;
    while(text[i]!='\0'){
        i++;
    }
    return i;
}

void count_vowels(const char text[]){
    int count=0;
    int i=0;
    while(text[i]!='\0'){
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y'){count++;}
    i++;
    }
    printf("Nombre de voyelles : %d\n",count);
}

int palindromic(const char text[]){
    int j=my_strlen(text)-1;
    int i=0;
    while(text[i]!='\0'){
        if(text[j]!=text[i]){
            printf("%s, %c, %c", text, text[j], text[i]);
            return 2;
        }
        i++;
        j--;
    }
    printf("%s est un palindrome.\n",text);
    return 0;
}

int bissextile(int year){
    if((year%4==0 && year%100!=0) || year%400==0){
        return 0;
    }
    return 2;
}

int maximum(int tab[], int l){
    int maxi=tab[0];
    for(int i=0;i<l;i++){
        if(tab[i]>maxi){
            maxi=tab[i];
        }
    }
    return maxi;
}

void invert(int tab[], int l){
    int j=l-1;
    int i=0;
    while(i!=l/2){
        if(tab[j]!=tab[i]){
            int temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
        }
        i++;
        j--;
    }
    print_tab(tab, l);
}

void purge_n(int tab[], int taille){
    int replace=0;
    for(int i=0;i<taille;i++){
        if(tab[i]<0){
            tab[i]=0;
            replace++;
        }
    }
    print_tab(tab, taille);    
}


void main(int argc, char *argv[]){

    //delete_space(argv[1]);

    int tableau[5]={1,2,9,4,4};
    int tableau2[5]={-4,-2,-7,4,1};

    //print_tab(tableau, 5);
    //sum_tabs(tableau, 5);
    //printf("Return : %d\n",mux_tabs(tableau, 5, tableau2, 5));
    //printf("Return : %d\n",mux_tabs_v2(tableau, 5, tableau2, 5));

    //str_to_bin("01001");

    //char text[]="je suis aleandre parnaudeau en R&I 1A";
    //count_vowels(text);

    //char text[]="eibohphobie";
    //palindromic(text);

    //int y=2003;
    //printf("%d",bissextile(2021));

    //printf("Max : %d", maximum(tableau, 5));

    //invert(tableau, 5);

    purge_n(tableau2, 5);

}   

