#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int cantidad=2,i=0;

    int tam=sizeof(arr)/sizeof(arr[0]);

    //RECORRIMIENTO A LA IZQUIERDA
    /*
    while(i<cantidad){
        int aux=arr[0];
        for(int i=0;i<tam;i++){
            arr[i]=arr[i+1];
            if(i==tam-1){
                arr[i]=aux;
            }
        }
        i++;
    }*/

    //RECORRIMIENTO A LA DERECHA
    while(i<cantidad){
        int aux=arr[tam];
        for(int i=tam;i>=0;i--){
            arr[i]=arr[i-1];
            if(i==0){
                arr[i]=aux;
            }
        }
        i++;
    }

    for(int i=0;i<tam;i++){
        printf("%i",arr[i]);
    }
    return 0;
}
