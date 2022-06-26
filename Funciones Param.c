#include<stdio.h>
#include<stdlib.h>

int sumarXvalor(int a, int b);
void sumarXreferencia(int a,int b,int *resultado);
 
int main(){
 int a=5;
 int b=2;
 int resultado=0;
 printf("\nValores:n%in%in",a,b);
 
 printf("\nPaso de Parametros por Valorn");
 resultado = sumarXvalor(a,b);
 printf("\nResultado: %in",resultado);
 
 printf("\nPaso de Parametros por ReferencianPasamos el valor de posicion en memoria de la variable resultado: %pn",&resultado);
 sumarXreferencia(a,b,&resultado);
 printf("\nResultado: %in",resultado);
 return 0;
}
 
int sumarXvalor(int a, int b){
 return a+b;
}
 
void sumarXreferencia(int a,int b,int *resultado){
 *resultado = a + b;
}
