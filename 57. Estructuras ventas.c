#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Refrescos
{
	char nombre[15], presentacion[10], color [10], sabor[10];
	char pr_proovedor[8], volumen [10], precio[10];
}soda;

void capturar()
{
	system("cls");
	printf("\nNombre del Refresco: ");
	scanf("%s",&soda.nombre);
	printf("\nPresentacion: ");
	scanf("%s",&soda.presentacion);
	printf("\nVolumen: ");
	scanf("%s",&soda.volumen);
	printf("\nColor: ");
	scanf("%s",&soda.color);
	printf("\nSabor: ");
	scanf("%s",&soda.sabor);
	printf("\nPrecio al Publico: ");
	scanf("%s",&soda.precio);
	printf("\nPrecio Proovedor: ");
	scanf("%s",soda.pr_proovedor);
	system("cls");
}

void mostrar ()
{
	system("cls");
	printf("\nNombre: %s",soda.nombre);
	printf("\nPresentacion: %s",soda.presentacion);
	printf("\nVolumen: %s",soda.volumen);
	printf("\nColor: %s",soda.color);
	printf("\nSabor: %s",soda.sabor);
	printf("\nPrecio al Publico: %s",soda.precio);
	printf("\nPrecio Proovedor: %s\n\n",soda.pr_proovedor);
	getch();
	system("cls");
}

void salir()
{
	printf("\nPresione enter para salir");
}

main()
{
	int opc;
	do
	{
		printf("\nPrograma Refrescos con Estructuras\n");
		printf("\n 1. Capturar \n 2. Mostrar \n 3. Salir\n\n");
		scanf("%d",&opc);
		if (opc==1)
		capturar();
		if (opc==2)
		mostrar();
		if (opc==3)
		salir();
	}
	while (opc!=3);
	return 0;
}
