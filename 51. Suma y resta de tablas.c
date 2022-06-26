#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void suma_tablas();
void resta_tablas();
void salir();
int tab3[2][3];

main()
{
	int opc;
	
	printf("\nPrograma de Suma y Resta de Tablas de 2*3");
		
	printf("\nSeleccione una opcion\n\n 1) Suma de Tablas 2) Resta de Tablas 3) Salir\n");
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
}

void suma_tablas ()
{
	system("cls");
	int f,c,tab1[2][3],tab2[2][3];
	printf("\nTabla 1 (2)(3): \n");
	for (f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			printf("\nIngrese Numero: ");
			scanf("%i",&tab1[f][c]);
		}
	}
	
	printf("\nTabla 2 (2)(3): \n");
		for (f=0; f<2; f++)
		{
			for(c=0; c<3; c++)
			{
				printf("\nIngrese Numero: ");
				scanf("%i",&tab2[f][c]);
				tab3[f][c]=tab1[f][c]+tab2[f][c];
			}
		}	
	
	
	system("cls");
	printf("\n\nTabla 1: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab1[f][c]);
			}
	}
	
	printf("\n\nTabla 2: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab2[f][c]);
			}
	}
	
	printf("\n\nTabla Resultante: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab3[f][c]);
			}
	}
	printf("\n\nPresione enter para salir");
	getch();
}

void resta_tablas ()
{
	system("cls");
	int f,c,tab1[2][3],tab2[2][3];
	printf("\nTabla 1 (2)(3): \n");
	for (f=0; f<2; f++)
	{
		for(c=0; c<3; c++)
		{
			printf("\nIngrese Numero: ");
			scanf("%i",&tab1[f][c]);
		}
	}
	
	printf("\nTabla 2 (2)(3): \n");
		for (f=0; f<2; f++)
		{
			for(c=0; c<3; c++)
			{
				printf("\nIngrese Numero: ");
				scanf("%i",&tab2[f][c]);
			tab3[f][c]=tab1[f][c]-tab2[f][c];
			}
		}	
	
	
	system("cls");
	printf("\n\nTabla 1: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab1[f][c]);
			}
	}
	
	printf("\n\nTabla 2: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab2[f][c]);
			}
	}
	
	printf("\n\nTabla Resultante: \n");
	for (f=0; f<2; f++)
	{
			printf("\n");
			for(c=0; c<3; c++)
			{
				printf("\t%i",tab3[f][c]);
			}
	}
	printf("\n\nPresione enter para salir");
	getch();
}

void salir()
{
	printf("\nPresione enter para salir");
}

