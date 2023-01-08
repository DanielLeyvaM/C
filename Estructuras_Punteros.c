#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct {
    int edad;
    float estatura;
    char nombre[MAX];
}alumnos;

void imprimir_estructura(alumnos a);
void imprimir_estructura_punteros(alumnos* a);

//Cargar estructura con return

int main(){
    alumnos a1={18,1.72,"Daniel Leyva"};    //Declaracion explicita estructura

    a1.edad=19;             //Acceder a elemento
    //a1.nombre="JUAN";     //No se puede asignar a arreglo se necesita strcpy
    strcpy(a1.nombre,"Juan Perez");
    printf("Bytes de estructura: %i",sizeof(a1));

    imprimir_estructura(a1);
    imprimir_estructura_punteros(&a1);

    return 0;
}

void imprimir_estructura(alumnos a){
    printf("\nEdad: %i",a.edad);        //Se accede con el operador .
    printf("\nEstatura: %.2f",a.estatura);
    printf("\nNombre: %s",a.nombre);
    printf("\n\n");
}

void imprimir_estructura_punteros(alumnos* a){
    printf("\nEdad: %i",a->edad);           //Se accede con el operador -> en vez de .
    printf("\nEstatura: %.2f",a->estatura);
    printf("\nNombre: %s",a->nombre);
    printf("\n\n");
}
