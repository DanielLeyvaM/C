#include<stdio.h>
#include <conio.h>
#include<stdlib.h>

int i=0;
struct Agencia
{
	char lugar[20];
		
	struct Playa1
	{
		char destino [20];
		float precio;
	}p1;
	
	struct Playa2
	{
		char destino[20];
		float precio;	
	}p2;

	struct Playa3
	{
		char destino[20];
		float precio;
	}p3;
} playas;

void capturar ()
{
	if(i==0)
	{
	system("cls");
	printf("\nIngrese Lugar de Destino: ");
	scanf("%s",&playas.lugar);
	
	printf("\nIngrese Destino 1: ");
	scanf("%s",&playas.p1.destino);
	printf("\nIngrese Precio: ");
	scanf("%f",&playas.p1.precio);
	
	printf("\nIngrese Destino 2: ");
	scanf("%s",&playas.p2.destino);
	printf("\nIngrese Precio: ");
	scanf("%f",&playas.p2.precio);
	
	printf("\nIngrese Destino 3: ");
	scanf("%s",&playas.p3.destino);
	printf("\nIngrese Precio: ");
	scanf("%f",&playas.p3.precio);
	}
	else 
	printf("Registro Lleno...");
	getch();
}

void mostrar()
{
	if (i==1)
	{
	printf("\nEl Lugar de Destino es: %s\n\n" ,playas.lugar);
	
	printf("\n\nDestino 1: %s" ,playas.p1.destino);
	printf("\nEl precio es: %.2f" ,playas.p1.precio);
	
	printf("\n\nDestino 2: %s" ,playas.p2.destino);
	printf("\nEl precio es: %.2f" ,playas.p2.precio);
	
	printf("\n\nDestino 3: %s" ,playas.p3.destino);
	printf("\nEl precio es: %.2f" ,playas.p3.precio);
	}
	else 
		printf("\nNo hay datos ingresados...");
	getch();
}

void salir()
{
	printf("\nPresione enter para salir...");
}

main()
{
	int opc;
	do {
	system("cls");
	printf("\nPrograma Estructuras Anidadas Agencia de Viajes\n");
	printf("\nSeleccione una opcion: ");
	printf("\n1) Capturar 2) Mostrar 3) Salir\n\n");
	scanf("%i",&opc);
	
	if (opc==1)
	{
		capturar();
		i=1;
	}
	else 
		if (opc==2)
			mostrar ();
		else
			if (opc==3)
				salir();
	}
	while (opc!=3);
	
	return 0;
}
