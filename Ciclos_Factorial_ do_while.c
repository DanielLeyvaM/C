/*
	USE OF DO WHILE TO CALCULATE FACTORIAL !
*/
	
#include <stdio.h>

int main(){
	int n,x=0;
	float f=1;
	printf("\nPrograma para calcular numero factorial");
	printf("\nIngrese un numero: ");
	scanf("%f",&n);
	
	do 
	{
		x=x+1;
		f=f*x;
	}
	while (x<n);
	
	printf("\nEl resultado es: %.2f",f);
	return 0;
}

