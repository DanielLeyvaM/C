#include <stdio.h>

void intercambiar(int*,int*);  //Se usa * para la funcion y prototipo

int main(){
    int a,b;
    printf("Ingrese a y b: ");
    scanf("%i %i",&a,&b);
    printf("\nValores Orginales a:%i, b:%i",a,b);

    //Se usa & para el llamado de la funcion
    intercambiar(&a,&b);  //Se pasa una copia de la direccion "Similar a por referencia"
    printf("\nValores Intercambiados a:%i, b:%i",a,b);
    return 0;
}

void intercambiar (int* a,int* b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
