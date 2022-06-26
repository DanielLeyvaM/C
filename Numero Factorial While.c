#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,n,f;
	printf("\nPrograma para Mostrar Numero Factorial");
	printf("\nIngrese numero \n");
	scanf("%i",&n);
	
		while (x<=n)
	{
		printf("\t%i",x);
		x=x+1;
	}
	getch();
}
