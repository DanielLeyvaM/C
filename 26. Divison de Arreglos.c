#include<stdio.h>
#include<conio.h>
main()
{
	int x, arr1[5], arr2[5];
	float division, sum1=0, sum2=0;
	
	printf("\nPrograma que Divide la Suma de dos Arreglos");
	
	printf("\n\nArreglo 1\n");
	for (x=0; x<5; x++)
	{
		printf("\nIngresa numero %d: ",x+1);
		scanf("%i",&arr1[x]);
		sum1=sum1+arr1[x];
	}
	
	printf("\n\nArreglo 2:\n\n");
	for (x=0; x<5; x++)
	{
		printf("\nIngresa numero %d: ",x+1);
		scanf("%i",&arr2[x]);
		sum2=sum2+arr2[x];
	}
	
	division=sum1/sum2;
	
	printf("\nSuma Areglo 1: %.1f",sum1);
	printf("\nSuma Arreglo 2: %.1f",sum2);
	
	printf("\n\nEl Resultado de la division es: %.3f",division);
	printf("\nPresione enter para salir");
	getch();
}
