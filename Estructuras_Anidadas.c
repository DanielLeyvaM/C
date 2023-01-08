#include<stdio.h>

int i=0;
struct Agencia
{
	char marca[20];
		
	struct Modelo1
	{
		char modelo[20];
		float precio;
	}m1;
	
	struct Modelo2
	{
		char modelo[20];
		float precio;	
	}m2;

	struct Modelo3
	{
		char modelo[20];
		float precio;
	}m3;

	struct Modelo4
	{
		char modelo[20];
		float precio;
	} m4;

	struct Modelo5
	{
		char modelo [20];
		float precio;
	} m5;
} autos;

void capturar ()
{
	if(i==0)
	{
	system("cls");
	printf("\nIngrese Marca de los autos: ");
	scanf("%s",&autos.marca);
	
	printf("\nIngrese Modelo de Auto 1: ");
	scanf("%s",&autos.m1.modelo);
	printf("\nIngrese Precio de Modelo 1: ");
	scanf("%f",&autos.m1.precio);
	
	printf("\nIngrese Modelo de Auto 2: ");
	scanf("%s",&autos.m2.modelo);
	printf("\nIngrese Precio de Modelo 2: ");
	scanf("%f",&autos.m2.precio);
	
	printf("\nIngrese Modelo de Auto 3: ");
	scanf("%s",&autos.m3.modelo);
	printf("\nIngrese Precio de Modelo 3: ");
	scanf("%f",&autos.m3.precio);
	
	printf("\nIngrese Modelo de Auto 4: ");
	scanf("%s",&autos.m4.modelo);
	printf("\nIngrese Precio de Modelo 4: ");
	scanf("%f",&autos.m4.precio);
	
	printf("\nIngrese Modelo de Auto 5: ");
	scanf("%s",&autos.m5.modelo);
	printf("\nIngrese Precio de Modelo 5: ");
	scanf("%f",&autos.m5.precio);
	}
	else 
	printf("Registro Lleno...");
	getch();
}

void mostrar()
{
	if (i==1)
	{
	printf("\nLa Marca de los Modelos es: %s\n\n" ,autos.marca);
	
	printf("\n\nModelo Auto 1: %s" ,autos.m1.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m1.precio);
	
	printf("\n\nModelo Auto 2: %s" ,autos.m2.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m2.precio);
	
	printf("\n\nModelo Auto 3: %s" ,autos.m3.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m3.precio);
	
	printf("\n\nModelo Auto 4: %s" ,autos.m4.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m4.precio);
	
	printf("\n\nModelo Auto 5 es: %s" ,autos.m5.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m5.precio);
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
	printf("\nPrograma Estructuras Anidadas en Autos\n");
	printf("\nSeleccione una opcion: ");
	printf("\n1) Capturar 2) Mostrar 3) Salir\n\n");
	scanf("%i",&opc);
	
	switch(opc)
	{
		case 1: capturar();
			i=1;
			break;
		case 2: mostrar ();
			break;
		case 3: salir();
			break;
		default: printf("\nError");
	}
	}
	while (opc!=3);
	
	return 0;
}
