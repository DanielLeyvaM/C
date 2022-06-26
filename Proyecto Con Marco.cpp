#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int cal=0;
void marco();
void gotoxy(int x, int y);

struct boleta
{
	char nombre[20], fecha[25], grupo[10];
	char materia[20]; 
	int lista, codigo;
}boleta;

main()
{ 
	marco();
	gotoxy (50,5); printf("\nMATERIA PROGRAMACION \n\nExamen Teorico Global");
	printf("\n\nIngrese codigo: ");
	scanf("%i",&boleta.codigo);
		if (boleta.codigo>0)
		{
			printf("\nNombre del Alumno: ");
			gets(boleta.nombre);
			printf("\nFecha: ");
			scanf("%s",&boleta.fecha);
			printf("\nGrupo: ");
			scanf("%s",&boleta.grupo);
			printf("\nNumero de Lista: ");
			scanf("%i",&boleta.lista);
		}
		else 
		{
			printf("Codigo Erroneo");
		}
		
	
	getch();
}



void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}

void marco()
{
int x=5,y=3;

for(int i=1; i<=78; i++)
{
 
  gotoxy(x,1);
  printf("*");
  gotoxy(x,24);
  printf("*"); 
  x++;
}

for(int j=1; j<24; j++)
{
  gotoxy(1,y);
  printf("*");
  gotoxy(78,y);
  printf("*");
  y++;
 }
}
 
