#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,n;
	printf("\nPrograma de numeros positivos");
	
	while (x<=10)
	{
		printf("\n\nIngresa numero%d: ",x);
		scanf("%i",&n);
		if (n>0)
		printf("\n%i Es positivo",n);
		x=x+1;
	}
	
	printf("\nPresione enter para salir");
	getch();
}
