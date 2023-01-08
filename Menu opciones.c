#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	void suma();
	void resta();
	void salir();
	int resp;

int main()
{
	int opc;
	
	printf("\nPrograma Suma y Resta");
		printf("\nElige una opcion");
		printf("\n 1) Suma 2) Resta 3) Salir\n");
		scanf("%i",&opc);

	if (opc==1)
		suma();
	else
		if (opc==2)	
			resta();
		else
			if (opc==3)
				salir();
			else
				printf("\nOpcion Inexistente");
}

	void suma()
	{
		int a,b;
		system("cls");
		
		printf("\n\nPrograma Suma");
		printf("\nIngresa un Numero: ");
		scanf("%d",&a);
		
		printf("\nIngresa otro Numero: ");
		scanf("%d",&b);
		resp=a+b;
		
		printf("\n\nEl Resultado es: %d",resp);
		
		printf("\nPresione enter para salir");
		getch();
	}

	void resta()
	{
		int a,b;
		system("cls");
		
		printf("\n\nPrograma Resta");
		printf("\nIngresa un Numero: ");
		scanf("%d",&a);
		
		printf("\nIngresa otro Numero: ");
		scanf("%d",&b);
		resp=a-b;
		
		printf("\n\nEl Resultado es: %d",resp);
		printf("\nPresione enter para salir");
		getch();
	}

	void salir()
	{
		system("cls");
		printf("\nPresione enter para salir");
		getch();
	}	
