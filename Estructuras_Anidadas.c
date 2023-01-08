#include<stdio.h>

struct Agencia
{
	char marca[20];

	struct Modelo1
	{
		char modelo[20];
		float precio;
	}m1;
} autos;

int i=0;
void capturar();
void mostrar();
void salir();

int main()
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
		case 1: capturar( );
            i=1;
			break;
		case 2: mostrar ();
			break;
		case 3: salir();
			break;
		default: printf("\nError");
            break;
        }
	}
	while (opc!=3);

	return 0;
}

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
	}
	else
        printf("Registro Lleno...");
	return 0;
}

void mostrar()
{
	if (i==1)
	{
	printf("\nLa Marca de los Modelos es: %s\n\n" ,autos.marca);

	printf("\n\nModelo Auto 1: %s" ,autos.m1.modelo);
	printf("\nEl precio del Modelo es: %.2f" ,autos.m1.precio);
	}
	else
	printf("\nNo hay datos ingresados...");
	getch();

}

void salir()
{
	printf("\nPresione enter para salir...");
}

