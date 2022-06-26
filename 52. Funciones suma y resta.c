#include<stdio.h>
#include<conio.h>

void suma(int x, int y);
void resta(int x, int y);
void salir();
int respuesta;

void main()
{
	int n1,n2;
	printf("\nPrograma Suma y Resta de 2 numeros");
	printf("\n\nIngresa un valor: "); 
	scanf("%i",&n1);
	
	printf("\nIngresa otro valor: ");
	scanf("%i",&n2);
	
	suma(n1,n2);
	resta(n1,n2);
	salir();
	getch();
}

void suma (int x, int y)
{
	printf("\n\nPrograma suma\n");
	respuesta=x+y;
	
	printf("\nEl Resultado es: %i",respuesta);
	printf("\nPresione enter para continuar...");
	getch();
}

void resta(int x, int y)
{
	printf("\n\nPrograma resta\n");
	respuesta=x-y;
	
	printf("\nEl Resultado es: %i",respuesta);
	printf("\nPresione enter para continuar...");
	getch();
}

void salir()
{
	printf("\n\nPresione enter para Salir..\n\n");
}
