#include<stdio.h>
#include<conio.h>
main()
{
	int x[3], a;
	printf("\nPrograma que captura 3 numeros enteros en un arreglo");
	
	for (a=0; a<3; a++)
	{
		printf("\nIngrese numero entero ");
		scanf("%i",&x[a]);
	}
		printf("\nImpresion lista capturada");
			for (a=0; a<3; a++)
				
				printf("\t%i",x[a]);
	getch();
}
