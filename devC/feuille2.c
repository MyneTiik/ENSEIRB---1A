#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int my_strlength(char text[]){
    int i=0;
    while(text[i]!='\0'){
        i++;
    }
    return i;
}

int lengthcompare(char text1[], char text2[]){
    int ltext1=my_strlength(text1);
    int ltext2=my_strlength(text2);
    if(ltext1>ltext2){return 1;}
    if(ltext1<ltext2){return 2;}
    if(ltext1==ltext2){return 0;}

}


int main(int argc, char *argv[]){

    char *a=argv[1];
    char *b=argv[2];
    printf("%d\n",strlen(a));
    printf("%d\n",my_strlength(a));

    printf("%d\n",lengthcompare(a,b));


    return 0;
}
