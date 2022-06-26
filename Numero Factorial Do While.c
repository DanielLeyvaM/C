#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,n;
	printf("\nPrograma para Mostrar Numero Factorial");
	printf("\nIngresa un numero \n");
	scanf("%i",&n);
	
	do 
		{
		printf("\n%i",x);
		x=x+1;
		}
	while (x<=n);
getch();
}
