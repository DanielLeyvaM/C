#include <stdio.h>
#define MAX 3

void imprimir_matriz(int a[][MAX],int);  //Es necesario poner num de columnas
void imprimir_matriz_punteros(int **matriz,int);  //Se debe enviar el tamaño como parametro int

int main(){
    int filas=2,matriz[filas][MAX],tam;
    int* m[filas];

    for(int i=0;i<filas;i++){
        for(int j=0;j<MAX;j++){
            scanf("%i",&matriz[i][j]);
        }
        //Guardar direcciones de memoria de filas en arreglo de punteros
        m[i]=&matriz[i][0];
    }

    tam=sizeof(matriz)/sizeof(matriz[0][0]);
    printf("\nSize: %i\n",tam);
    printf("%p\n\n",&matriz[0][0]);

    //imprimir_matriz(m,filas);
    imprimir_matriz_punteros(m,filas);  //matriz==&matriz[0][0]

    //Acceder a elementos de matrices
    for(int i=0;i<filas;i++){
        for(int j=0;j<MAX;j++){
            printf("\nElemento: %i" ,matriz[i][j]);        //[i]==Posicion de la matriz
            printf("\nDireccion: %p",&matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //Acceder a elementos de matrices con punteros
    for(int i=0;i<filas;i++){
        for(int j=0;j<MAX;j++){
            printf("\nElemento: %i" ,*(matriz[0]+i*MAX+j));        //[i]==Posicion de la matriz
            printf("\nDireccion: %p",matriz[0]+i*MAX+j);
        }
        printf("\n");
    }
    return 0;
}

void imprimir_matriz(int matriz[][MAX],int filas){
    for(int i=0;i<filas;i++){
            for(int j=0;j<MAX;j++){
                printf("%i ",matriz[i][j]);
            }
            printf("\n");
    }
}

void imprimir_matriz_punteros(int **matriz,int filas){
    for(int i=0;i<filas;i++){
            //printf("%p\n",matriz[i]);     //Direcciones de memoria de filas
            for(int j=0;j<MAX;j++){
                printf("%i ",*(matriz[0]+i*MAX+j));     //Formula de direccionamiento matriz[0][0]+filas*MAX_COLUMNAS+columna
                //printf("%i ",matriz[i][j]);
            }
            printf("\n");
    }
}
