/*
	Tabla multiplicar de numero del 1 - 10
*/

#include<stdio.h>

int main()
{
	int n,x=1,mult;
	printf("\nPrograma de Tablas de Multiplicar");
	printf("\nIngresa numero a multiplicar\n");
	scanf("%i",&n);
	
	while (x<=10) {
		mult=n*x;
		printf("\n %d * %d es: %i",n ,x ,mult);
		x++;
	}
	return 0;	
}
