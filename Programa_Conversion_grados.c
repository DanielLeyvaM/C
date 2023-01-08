#include<stdio.h>
#include<stdlib.h>

void FaC ();
void CaF ();
void CaK ();
void KaC ();
void salir();
float resp;

int main()
{
	int g, opc;

	printf("\nPrograma de Conversion de Grados");

	printf("\nSeleccione una opcion\n\n1) Grados Farenheit a Celsius \n2) Grados Celsius a Farenheit \n3) Grados Celsius a Kelvin \n4) Grados Kelvin a Celsius \n5) Salir\n");
	scanf("%i",&opc);

	switch (opc)
	{
		case 1: FaC ();
		break;
		case 2: CaF ();
		break;
		case 3: CaK ();
		break;
		case 4: KaC ();
		break;
		case 5: salir();
		break;
	}
	return 0;
}

void FaC ()
{
	//system("cls");
	int g;
	printf("\nIngrese Grados a Convertir: ");
	scanf("%i",&g);
	resp=(g-32)*5/9;
	printf("\nLa Conversion de Farenheit a Centigrados es: %.2f",resp);
	printf("\nPresione enter para salir");
}

void CaF ()
{
	//system("cls");
	int g;
	printf("\nIngrese Grados a Convertir: ");
	scanf("%i",&g);
	resp=(g*5/9)+32;
	printf("\nLa Conversion de Centigrados a Farenheit es: %.2f",resp);
	printf("\nPresione enter para salir");
}

void CaK ()
{
	//system("cls");
	int g;
	printf("\nIngrese Grados a Convertir: ");
	scanf("%i",&g);
	resp=g+273.15;
	printf("\nLa Conversion de Centigrados a Kelvin es: %.2f",resp);
	printf("\nPresione enter para salir");
}

void KaC ()
{
	//system("cls");
	int g;
	printf("\nIngrese Grados a Convertir: ");
	scanf("%i",&g);
	resp=g-273.15;
	printf("\nLa Conversion de Kelvin a Centigrados es: %.2f",resp);
	printf("\nPresione enter para salir");
}

void salir()
{
	printf("\nPresione enter para salir");
}

