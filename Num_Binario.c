#include <stdio.h>

int main(){
    int n,bits;
    printf("INGRESE NUM: ");
    scanf("%d",&n);

    bits=sizeof(n)*8;   //sizeof(n)==4 Bytes -> 4*8=32 bits
    //printf("%d",n&1);  //n&1 solo se ejecuta sobre el bit msb

    //for(int i=0;i<n;i++){
        //printf("%d",(n>>i)&1);  //Recorrimiento de bits a la derecha se imprimen inversamente
    //}

    for(int i=0;i<bits;i++){
        printf("%d",(n>>bits-i-1)&1);
    }

    return 0;
}
