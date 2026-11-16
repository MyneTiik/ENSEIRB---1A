#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

void ascii(int n){
    for(int i=0;i!=n;i++){
        printf("%c \t %d \t 0x%x \t %o \n",i,i,i,i);
    }
}

enum color {Noir, Marron, Rouge, Orange, Jaune, Vert, Bleu, Violet, Gris, Blanc};

int times_pow10(int n, int p){
    int pow=1;
    while(p>0){
        pow=pow*10;
        p-=1;
    }
    return n*pow;
}

int resistance(enum color a, enum color b, enum color c){
    int m = (a*10)+b;
    return times_pow10(m, c);
}

int calendar(int year, int month, int day){
    /*
    int bis =0;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        bis=1;
    }
    if(month==1 || month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
        return 31;
    }
    if(month==4 ||month==6 ||month==9 ||month==11){
        return 30;
    }
    if(month==2 && bis==1){
        return 29;
    }
    if(month==2 && bis==0){
        return 28;
    }
    else{
        return -1;
    }
    */
    if(month>=3){
        int z=year;
        return (((23*month)/9 + day + 4 + year + (z/4) - (z/100) + (z/400) - 2)%7);
    }
    if(month<3){
        int z=year-1;
        return (((23*month)/9 + day + 4 + year + (z/4) - (z/100) + (z/400))%7);
    }


}

void main(int argc , char *argv[]){
    //ascii(255);

    //printf("%d\n",times_pow10(3, 2));
    //printf("%d\n", resistance(Vert, Marron, Bleu));

    int y=atoi(argv[1]);
    int m=atoi(argv[2]);
    int d=atoi(argv[3]);

    printf("Le %d/%d/%d est un %d.\n",d,m,y,calendar(y,m,d));




}