#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menor()
{
	int a,b,c;
	printf ("\nEncontrar el menor de 3 numeros\n");
    printf ("\nIngresa el Primer Valor: ");
    scanf("%i",&a);
    printf ("\nIngresa el Segundo Valor: ");
    scanf ("%i",&b);
    printf ("\nIngresa el Tercer Valor: ");
    scanf ("%i",&c);
    if (a<b && a<c)
     	printf("\nEl numero menor es: %i",a);
	else    
        if  (b<a && b<c)
        	printf("\nEl numero menor es: %i",b);
		else 
           	printf("\nEl numero menor es: %i",c);
	getch();       
}

void promedio()
{
	int arr[5], x, suma=0;
	float prom=0;
    printf ("\nCalcular promedio de Arreglo (5)\n");
    for (x=0; x<5; x++)
    {
        printf("\nIngrese Numero %d: ",x+1);
        scanf("%i",&arr[x]);
        suma=suma+arr[x];
    }
    prom=suma/5;
    printf ("\nEl Promedio es: %.2f",prom);       
    getch();
}

void num_cuadrado()
{
	int n, cuadrado;
	printf("\nCalcular cuadrado de un numero");
	printf("\n\nIngresa Numero: ");
	scanf("%i",&n);
	cuadrado=n*n;
	printf ("\nEl Cuadrado del numero %i es: %i",n ,cuadrado);
	getch ();
	
}

void salir()
{
	printf("Gracias por usar el programa...");
}

main()
{
	int opc;
	printf("\nMenu Usando Funciones\n");
	printf("\nElige una opcion\n");

	printf("\n1) Menor de 3 numeros \n2) Promedio de 5 numeros \n3) Cuadrado de un numero \n4) Salir\n");
	scanf("%i",&opc);
	system("cls");
	
	switch (opc)
	{
	case 1: menor();
		    break;	
	case 2: promedio();
		    break;	
    case 3: num_cuadrado();
		   	break;
	case 4: salir();	
		    break;
	default: printf("\n Opcion Inexistente");	
    } 
    printf ("\n\nPresione enter para salir");
	getch();
}
