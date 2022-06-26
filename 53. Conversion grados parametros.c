#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void FaC (int x);
void CaF (int x);
void CaK (int x);
void KaC (int x);
void salir();
float resp;

void main()
{
	int g, opc;
	printf("\nPrograma de Conversion de Grados");
	printf("\nIngrese grados a convertir: ");
	scanf("%i",&g);
		
	printf("\nSeleccione una opcion\n\n1) Grados Farenheit a Celsius \n2) Grados Celsius a Farenheit \n3) Grados Celsius a Kelvin \n4) Grados Kelvin a Celsius \n5) Salir\n");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1: FaC (g);
		break;
		case 2: CaF (g);
		break;
		case 3: CaK (g);
		break;
		case 4: KaC (g);
		break;
		case 5: salir();
		break;
		default: printf("\nOpcion Inexistente");
	}
	printf("\nPresione enter para salir");
	getch();
}

void FaC (int x)
{
	resp=(x-32)*5/9;
	printf("\nLa Conversion de Farenheit a Centigrados es: %.2f",resp);
}

void CaF (int x)
{
	resp=(x*5/9)+32;
	printf("\nLa Conversion de Centigrados a Farenheit es: %.2f",resp);
}

void CaK (int x)
{
	resp=x+273.15;
	printf("\nLa Conversion de Centigrados a Kelvin es: %.2f",resp);
}

void KaC (int x)
{
	resp=x-273.15;
	printf("\nLa Conversion de Kelvin a Centigrados es: %.2f",resp);
}

void salir()
{
	printf("\nHa escogido Salir...");
}

