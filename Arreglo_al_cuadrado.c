/*
	ELEVAR AL CUADRADO UN ARREGLO Y GUARDARLO EN OTRO
*/

#include<stdio.h>
#define MAX 5

int main(){
	
	int vect1[MAX], vect2[MAX], x;
	printf("\nPrograma para elevar al cuadrado 5 numeros\n");
	
	for (int x=0; x<MAX; x++)
	{
		printf("\nIngresa numero %d: ",x+1);
		scanf("%i",&vect1[x]);
		vect2[x]= vect1[x]*vect1[x];
	}
	
	printf("\n\n RESULTADOS\n");
	for (int x=0; x<MAX; x++)	{
		printf("\nNumero: %i. El Cuadrado es: %i\n",vect1[x] ,vect2[x]);
	}
			
	return 0;
}

