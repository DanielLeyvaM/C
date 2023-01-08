#include<stdio.h>
#include<conio.h>
main()
{
	int x,n;
	printf("\nPrograma para Mostrar Numero Factorial");
	printf("\nIngresa un numero\n");
	scanf("%i",&n);
	
	for (x=1; x<=n; x=x+1)
	{
		printf("\n%i",x);
	}
getch();
}
