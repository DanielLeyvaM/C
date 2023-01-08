#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
    char cadena[MAX];
    //scanf("%s",&cadena); //Guarda cadenas sin espacios
    gets(cadena);

    if(strcmp(cadena,"HOLA")==0){   //Devuelve 0 al ser igual
        printf("EQUAL");
    }
    else{
        printf("NO EQUAL");
    }
    return 0;
}
