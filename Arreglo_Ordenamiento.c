#include <stdio.h>

int main(){
    //int arr[]={63,2,6,2,1,6};
    char arr[]="DanIel";

    int tam=sizeof(arr)/sizeof(arr[0]);
    printf("Size: %i\n",tam);

    for(int i=0;i<tam;i++){         //arr[i]!='\0'== i<tam
        for(int j=0;j<tam;j++){
            if(arr[i]<arr[j]){
                int aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
    for(int i=0;i<tam;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}
