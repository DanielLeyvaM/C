#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Libreria
{
	char libro[25], autor[20], editorial [15];
	float precio;
}book;

void capturar()
{
	system("cls");
	printf("\nNombre del Libro: ");
	scanf("%s",&book.libro);
	printf("\nAutor: ");
	scanf("%s",&book.autor);
	printf("\nEditorial: ");
	scanf("%s",&book.editorial);
	printf("\nPrecio: ");
	scanf("%f",&book.precio);
	system("cls");
}

void mostrar ()
{
	system("cls");
	printf("\nEl Libro: %s",book.libro);
	printf("\nDel autor: %s  Editorial: %s \nTiene un Precio de: %.2f\n\n",book.autor ,book.editorial ,book.precio);
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
		printf("\nPrograma Biblioteca con Estructuras\n");
		printf("\n 1. Capturar \n 2. Mostrar \n 3. Salir\n\n");
		scanf("%d",&opc);
		if (opc==1)
		capturar();
		if (opc==2)
		mostrar();
		if (opc==3)
		salir();
	} 	while (opc!=3);
	return 0;
}
