#include <stdio.h>

void triplicar(int *);  //Se usa * para la funcion y prototipo

int main(){
    int a;
    scanf("%i",&a);

    //Se usa & para el llamado de la funcion
    triplicar(&a);  //Se pasa una copia de la direccion "Similar a por referncia"
    printf("%i",a);
    return 0;
}

void triplicar (int* a){
    *a=3*(*a);
}
