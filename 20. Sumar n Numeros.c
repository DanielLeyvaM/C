#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,n,cant,suma=0;
	printf("\nPrograma para sumar n cantidad de numeros");
	
	printf("\n \nIngrese cantidad de numeros a sumar ");
	scanf("%i",&cant);
	
	while (x<=cant)
	{
		printf("\nIngresa numero %d ",x);
		scanf("%i",&n);
		suma=suma+n;
		x=x+1;	
	}
	printf("\nEl resultado de la suma es:%i",suma);
getch();
}
