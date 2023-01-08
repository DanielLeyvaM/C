#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int i;
void buscar();
struct Tienda
{
	char marca[25], modelo[30], color[25];
	float precio;
}bolsas[5];

int cont=0;

void capturar()
{
	if (cont<5)
	{
		printf("\nMarca: ");
		scanf("%s",&bolsas[cont].marca);
		
		printf("\nModelo: ");
		scanf("%s",&bolsas[cont].modelo);
		
		printf("\nColor: ");
		scanf("%s",&bolsas[cont].color);
		
		printf("\nPrecio: ");
		scanf("%f",&bolsas[cont].precio);
		cont++;
	}
	else
		printf("\nNo hay espacio disponible");
		getch();
}

void mostrar()
{
	if(cont!=0)
	for (i=0; i<cont; i++)
	{
		printf("\n\nMarca: %s",bolsas[i].marca);
		printf("\nModelo: %s",bolsas[i].modelo);
		printf("\nColor: %s",bolsas[i].color);
		printf("\nPrecio: %.2f",bolsas[i].precio);
	}
	else
	printf("\nEl arreglo esta vacio");
getch();
}

void salir()
{
	printf("\nPresione enter para salir");
	getch();
}
main()
{
	int opc;
	do
	{
		system("cls");
		printf("\nPrograma Tienda de Bolsas\n\n");
		printf("\nSeleccione una opcion: \n");
		printf("\n1. Capturar \n2. Mostrar \n3. Buscar \n4. Salir\n");
		scanf("%d",&opc);
		if (opc==1)
			capturar();
		else
		if (opc==2)
			mostrar();
		else
		if (opc==3)
			buscar();
		else
		if (opc==4)
			salir();
	}
	while (opc!=4);
	return 0;
}

void buscar()
{
	if(cont!=0)
	{
		int band=0;
		char m[30];
		printf("\nDame el modelo a buscar: ");
		scanf("%s",&m);
		
		for(i=0; i<cont; i++)
		if (strcmp(m,bolsas[i].modelo)==0)
			{
				printf("\n\nMarca: %s",bolsas[i].marca);
				printf("\nColor: %s",bolsas[i].color);
				printf("\nPrecio: %.2f",bolsas[i].precio);
				band=1;
			}
		if (band==0)
			printf("\nNo existe dato");
	}
	else
		printf("\nNo hay elementos en el arreglo");
	getch();
}
