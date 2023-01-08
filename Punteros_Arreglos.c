#include <stdio.h>
#define MAX 3

void imprimir_arreglo(int a[],int);  //No es necesario poner tamaño en corchetes
                      //int *arr == int a[]
void imprimir_arreglo_punteros(int *arr,int);  //Se debe enviar el tamaño como parametro (segundo int)


int main(){
    int tam,arr[MAX];

    //int arr[]={1,2,3,4,5,6,7,8,9,10};   //No es necesario poner tamaño cuando se declara explicitamente
    for(int i=0;i<MAX;i++){
        scanf("%i",&arr[i]);
    }
    tam=sizeof(arr)/sizeof(arr[0]);
    printf("\nSize: %i\n",tam);

    //imprimir_arreglo(arr,tam);  //arr==&arr[0]
    imprimir_arreglo_punteros(arr,tam);

    //Acceder a elementos
    for(int i=0;i<MAX;i++){
        printf("\nElemento: %i" ,arr[i]);        //[i]==Posicion del arreglo
        printf("\nDireccion: %p",&arr[i]);      //&==Direccion memoria del puntero
    }
    printf("\n");

    //Acceder a elementos con punteros
    for(int i=0;i<MAX;i++){
        printf("\nElemento: %i",*(arr+i));      //*==Valor del puntero
        printf("\nDireccion: %p" ,arr+i);        //&==Direccion del puntero
    }
    return 0;
}

void imprimir_arreglo(int arr[],int tam){
    for(int i=0;i<tam;i++){
        printf("%i ",arr[i]);
    }
}

void imprimir_arreglo_punteros(int* arr,int tam){
    for(int i=0;i<tam;i++){
        printf("%i ",*(arr+i));
        //printf("%i ",arr[i]);
    }
}
