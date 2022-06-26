#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<math.h>

int factorial();
int raiz();
int potencia();

main()
{
	int opc; 
	
	do{
	system("cls");
	printf("\nPrograma con funciones");
	printf("\n\nSeleccione una Opcion\n");
	printf("\n1) Factorial de numero \n2) Raiz cuadrada de numero \n3) Elevar numero a potencia \n4) Salir\n");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1: factorial();
		break;
		case 2: raiz();
		break;
		case 3: potencia();
		break;
	}
	} while (opc!=4); 
	getch();
}

factorial()
{
 	float x,f=1,n;
 	system("cls");
	 printf("\nPrograma para calcular numero factorial");
	printf("\nIngrese numero ");
 	scanf("%f",&n);
 	
	 for (x=1;x<=n;x=x+1)
 	f=f*x;
 	printf("\nEl resultado es: %.2f",f);
 	getch();
}

raiz ()
{
	float n,x,raiz=0;
	system("cls");
	printf("\nPrograma para calcular raiz cuadrada de un numero");
	printf("\nIngrese Numero: ");
	scanf("%f",&n);
	
	raiz=sqrt(n);
	printf("\nEl resultado es: %.4f",raiz);
	getch();
}

potencia()
{
	int n,exponente,x,resultado=1;
	system("cls");
	printf("\nPrograma para elevar un numero a una potencia");
	printf("\nIngrese Numero: ");
	scanf("%i",&n);
	
	printf("\nIngrese exponente a utilizar: ");
	scanf("%i",&exponente);
	if(n>0)
	{
		for(x=0; x<exponente; x++)
		{
			resultado=resultado*n;
		}
		printf("\nEl resultado es: %i",resultado);
	}
	else printf("\nEl numero no es mayor a 0");
	getch();
}

