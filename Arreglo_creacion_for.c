/*
	USE OF FOR TO CREATE ARRAYS
*/

#include<stdio.h>
#define MAX 5
	
int main()
{
	int x[MAX];
	
	printf("\nPrograma que captura numeros enteros en un arreglo");
	for (int a=0; a<MAX; a++) {
		printf("\nIngrese numero %i: ",i+1);
		scanf("%i",&x[a]);
	}
	
	printf("\nImpresion lista capturada");
	for (int a=0; a<MAX; a++){
		printf("\t%i",x[a]);
	}
	
	return 0;
}
