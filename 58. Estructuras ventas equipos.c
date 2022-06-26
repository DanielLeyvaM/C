#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Computadora
{
	char marca[25], modelo [15];
	int existencia;
	float precio, descuento;
}pc;

void capturar()
{
	system("cls");
	printf("\nMarca: ");
	scanf("%s",&pc.marca);
	printf("\nModelo: ");
	scanf("%s",&pc.modelo);
	printf("\nUnidades en existencia: ");
	scanf("%d",&pc.existencia);
	printf("\nPrecio: ");
	scanf("%f",&pc.precio);
	pc.descuento=pc.precio*0.15;
	system("cls");
}

void mostrar ()
{
	system("cls");
	printf("\nEl descuento de la Computadora: %s",pc.marca);
	printf("\nModelo: %s es de %f\n\n",pc.modelo ,pc.descuento);
}

main()
{
	int opc;
	do
	{
		printf("\nPrograma de Computadoras con Estructuras\n");
		printf("\n 1. Capturar \n 2. Mostrar \n 3. Salir\n\n");
		scanf("%d",&opc);
		if (opc==1)
		capturar();
		if (opc==2)
		mostrar();
	}
	while (opc!=3);
	return 0;
}
