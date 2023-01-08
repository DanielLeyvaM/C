#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int i;

struct Biblioteca
{
	char nombre[25], autor[15], editorial[10];
	int edicion;	
}libros[5];

int cont=0;

void capturar()
{
	if(cont<5)
	{
		printf("\nNombre del Libro: ");
		scanf("%s",&libros[cont].nombre);
		printf("\nAutor: ");
		scanf("%s",&libros[cont].autor);
		printf("\nEditorial: ");
		scanf("%s",&libros[cont].editorial);
		printf("\nEdicion: ");
		scanf("%d",&libros[cont].edicion);
		cont++;
	}
	else
	{
		printf("\nNo hay espacio disponible");
		getch();
	}
	}

void mostrar()
{
	if(cont!=0)
		for(i=0; i<cont; i++)
		{
			printf("\n\nNombre del Libro: %s",libros[i].nombre);
			printf("\nAutor: %s",libros[i].autor);
			printf("\nEditorial: %s",libros[i].editorial);
			printf("\nEdicion: %d",libros[i].edicion);
		}
	else
		printf("\nEl Arreglo esta vacio");
		getch();
}

void buscar()
{
	if(cont!=0)
	{
		int band=0;
		char a[30];
		printf("\nDame el autor a Buscar: ");
		scanf("%s",&a);
		for ( i=0; i<cont; i++)
		if (strcmp(a,libros[i].autor)==0)
		{
			printf("\nNombre del Libro: %s",libros[i].nombre);
			printf("\nEditorial: %s",libros[i].editorial);
			printf("\nEdicion: %d",libros[i].edicion);
			band=1;
		}
		if (band==0)
			printf("\nNo existe Dato...");
	}
	else
		printf("\nNo hay elementos en el arreglo...");
	getch();
}

void salir()
{
	printf("\nPresione enter para salir");
}
main()
{
	int opc;
	do{
		system("cls");
		printf("\nPrograma Biblioteca con Arreglos de Estructuras\n");
		printf("\n1) Capturar \n2) Mostrar \n3) Buscar \n4) Salir\n\n");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1: capturar();
				break;
			case 2: mostrar();
				break;
			case 3: buscar(); 
				break;
			case 4: salir(); 
				break;
		}
	} while(opc!=4);
	return 0;
}
