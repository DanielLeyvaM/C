#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	void suma();
	void resta();
	void salir();

int resp;
int main()
{
	suma();
	resta();
	salir();
}

	void suma()
	{
		int a,b;
		system("cls");
		printf("\nPrograma Suma y Resta con Funciones");
		printf("\n\nPrograma Suma");
		printf("\nIngresa un Numero: ");
		scanf("%d",&a);
		
		printf("\nIngresa otro Numero: ");
		scanf("%d",&b);
		resp=a+b;
		
		printf("\n\nEl Resultado es: %d",resp);
		printf("\nPresione enter para continuar");
		getch();
	}
	
	void resta()
	{
		int a,b;
		system("cls");
		printf("\nPrograma Suma y Resta con Funciones");
		printf("\n\nPrograma Resta");
		printf("\nIngresa un Numero: ");
		scanf("%d",&a);
		
		printf("\nIngresa otro Numero: ");
		scanf("%d",&b);
		resp=a-b;
		
		printf("\n\nEl Resultado es: %d",resp);
		printf("\nPresione enter para continuar");
		getch();
	}
	
	void salir()
	{
		system("cls");
		printf("\nPresione enter para salir");
		getch();
	}
