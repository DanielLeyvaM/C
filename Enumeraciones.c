#include <stdio.h>

enum opciones{
    SUMA=1,         //Tiene un valor de 1 al asignarse o 0 si no se asigna
    RESTA,          //Tiene un valor de 2 (num sucesivo)
    MULTIPLICACION  //El ultimo elemento no lleva , ni ;
};

enum booleano{
    FALSO,  	//0
    VERDADERO   //1
};

int main(){
    int a,b,opcion;
    printf("Ingrese dos numeros: ");
    scanf("%i %i",&a,&b);

    printf("Seleccione una opcion: ");
    printf("\n1. SUMA \n2. RESTA \n3.MULTIPLICACION \n");
    scanf("%i",&opcion);

    switch(opcion){
        //La enumeracion sustituye el uso de case 0:, case: 1
        case SUMA:{
            printf("El resultado es: %i",a+b);
            break;
        }
        case RESTA:{
            printf("El resultado es: %i",a-b);
            break;
        }
        case MULTIPLICACION:{
            printf("El resultado es: %i",a*b);
            break;
        }
    }
    return 0;
}
