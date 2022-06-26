#include<stdio.h>
#include <conio.h>

struct boleta
{
	char fecha[35];
	float calificacion;
	
	struct alumno
	{
		char nombre[35], carrera[25];
	} alu;
	
	struct profesor
	{
		char nombre[35];
	} profe;
	
	struct materia
	{
		char nombre[30];
		int creditos;
	} mat;
} bol;

void capturar ()
{
	printf("\nDame la fecha: ");
	scanf("%s",&bol.fecha);
	
	printf("\nDame el nombre del alumno: ");
	scanf("%s",&bol.alu.nombre);
	
	printf("\nDame la Carrera: ");
	scanf("%s",&bol.alu.carrera);
	
	printf("\nCual es el nombre del profesor: ");
	scanf("%s",&bol.profe.nombre);
	
	printf("\nCual es la materia: ");
	scanf("%s",&bol.mat.nombre);
	
	printf("\nCuantos creditos tiene: ");
	scanf("%d",&bol.mat.creditos);
	
	printf("\nCual es la calificacion: ");
	scanf("%f",&bol.calificacion);
	
	printf("\nCalificacion capturada... \nIMPRIMIENDO BOLETA...");
	getch();
}

main()
{
	printf("\nPrograma Estructuras Anidadas\n");
	capturar();
	return 0;
}
