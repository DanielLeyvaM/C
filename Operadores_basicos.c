/*
    Use of mathematical operators.
*/

#include <stdio.h>

int main(){
    int a,b;
    printf("Ingrese un numero: ");
    scanf("%i",&a);
    printf("Ingrese otro numero: ");
    scanf("%i",&b);

    printf("Resultado de %i + %i: %i\n",a,b,a+b);
    printf("Resultado de %i - %i: %i\n",a,b,a-b);
    printf("Resultado de %i * %i: %i\n",a,b,a*b);
    printf("Resultado de %i / %i: %i\n",a,b,a/b);       //Division con redondeo
    printf("Resultado de %i %% %i: %i\n",a,b,a%b);      //Se usa doble % para que se imprima en pantalla

    return 0;
}
