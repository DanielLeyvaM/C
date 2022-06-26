#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int z[2][3], n1[2][3], n2[2][3]; 
void suma_tablas();
void resta_tablas();
void salir();


main()
{
	int opc, f,c;
	printf("\nPrograma Suma y Resta de tablas de numeros\n");
	
	printf("\nTabla 1:");
	for(f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			printf("\nIngresa un valor: "); 
			scanf("%i",&n1[f][c]);
		}
	}
	
	printf("\nTabla 2:");
	for(f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			printf("\nIngresa un valor: ");
			scanf("%i",&n2[f][c]);
		}
	}
	
	printf("\n\n\nEliga una opcion: \n");
	printf("\n1) Sumar Tablas  2) Restar Tablas  3) Salir\n\n");
	scanf("%i",&opc);
	
	if (opc==1)
		suma_tablas();
	else
		if (opc==2)
			resta_tablas();
		else
			if (opc==3)
				salir();
			else
				printf("\nOpcion Inexistente");
	
	printf("\n\nTabla 1: \n");
	for (f=0; f<2; f++)
	{
		printf("\n");
		for(c=0; c<3; c++)
		{
			printf("\t%i",n1[f][c]);
		}
	}
	
	printf("\n\nTabla 2: \n");
	for (f=0; f<2; f++)
	{
		printf("\n");
		for(c=0; c<3; c++)
		{
			printf("\t%i",n2[f][c]);
		}
	}
	
	printf("\n\nTabla Resultante: \n");
	for (f=0; f<2; f++)
	{
		printf("\n");
		for(c=0; c<3; c++)
		{
			printf("\t%i",z[f][c]);
		}
	}
	opc=3;		
	}
	printf("\n\nPresione enter para salir");
	getch();
}

void suma_tablas ()
{
	int f,c;
	for (f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			z[f][c]=n1[f][c]+n2[f][c];
		}
	}
}

void resta_tablas()
{
	int f,c;
	for (f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			z[f][c]=n1[f][c]-n2[f][c];
		}
	}
}
	
void salir()
{
	printf("\n\nElegiste Salir..\n\n");
}

