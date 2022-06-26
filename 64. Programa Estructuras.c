#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int i;
void buscar();
struct vehiculo
{
	char marca[25], linea[30], color[25];
	int modelo;
}carros[5];

int cont=0;

void capturar()
{
	if (cont<5)
	{
		printf("\nMarca: ");
		scanf("%s",&carros[cont].marca);
		
		printf("\nLinea: ");
		scanf("%s",&carros[cont].linea);
		
		printf("\nColor: ");
		scanf("%s",&carros[cont].color);
		
		printf("\nModelo: ");
		scanf("%d",&carros[cont].modelo);
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
		printf("\n\nMarca: %s",carros[i].marca);
		printf("\nLinea: %s",carros[i].linea);
		printf("\nColor: %s",carros[i].color);
		printf("\nModelo: %d",carros[i].modelo);
	}
	else
	printf("\nEl arreglo esta vacio");
getch();
}

main()
{
	int opc;
	do
	{
		system("cls");
		printf("\nPrograma Autos con Arreglos\n\n");
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
	}
	while (opc!=4);
	printf("\nPresione enter para salir");
	return 0;
}

void buscar()
{
	if(cont!=0)
	{
		int band=0;
		char l[30];
		printf("\nDame la linea a buscar: ");
		scanf("%s",&l);
		
		for(i=0; i<cont; i++)
		if (strcmp(l,carros[i].linea)==0)
			{
				printf("\n\nMarca: %s",carros[i].marca);
				printf("\nColor: %s",carros[i].color);
				printf("\nModelo: %d",carros[i].modelo);
				band=1;
			}
		if (band==0)
			printf("\nNo existe dato");
	}
	else
		printf("\nNo hay elementos en el arreglo");
	getch();
}
