#include<stdio.h>
#include<conio.h>
#include <windows.h>  
#include<stdlib.h>

void marco();
void gotoxy(int x, int y);
void examen();
int cont=0;
int i=0,x=1,y=1;


struct boleta
{
	char materia[25], nombre[50], grupo[10], fecha[30];
	int cal, lista, codigo;
} bol[5];

void capturar ()
{
	system("cls");
	marco();
	gotoxy(12,5); printf("Ingresa Codigo: ");
	scanf("%i",&bol[cont].codigo);
	if (bol[cont].codigo>10000000)
	{
		if (cont<5)
		{
		fflush(stdin);
		gotoxy(12,7); printf("Ingrese la Materia: ");
		gets(bol[cont].materia);
		gotoxy(12,9); printf("Ingrese su Nombre: ");
		gets(bol[cont].nombre);
		gotoxy(12,11); printf("Ingrese su Semestre/Grupo: ");
		gets(bol[cont].grupo);
		gotoxy(12,13); printf("Ingrese la Fecha: ");
		gets(bol[cont].fecha);
		gotoxy(12,15); printf("Ingrese su Numero de Lista: ");
		scanf("%i",&bol[cont].lista);
		cont++;
		}
		else
		{
			gotoxy(12,15); printf("Capacidad Maxima alcanzada...");
			getch();
		}
	}
	else
		{
			gotoxy(12,17); printf("Codigo Erroneo");
			getch();
		}
}

void mostrar()
{
	if (cont!=0)
	for (i=0; i<cont; i++)
	{
		system("cls");
		marco();
		gotoxy(26,5); printf("Boleta Examen Teorico Global:");
		gotoxy(12,7); printf("Materia: %s",bol[i].materia);
		gotoxy(12,9); printf("Nombre del Alumno: %s",bol[i].nombre);
		gotoxy(12,11); printf("Codigo: %i",bol[i].codigo);
		gotoxy(12,13); printf("Grupo: %s",bol[i].grupo);
		gotoxy(12,15); printf("Fecha del Examen: %s",bol[i].fecha);
		gotoxy(12,17); printf("No.Lista: %i",bol[i].lista);
		gotoxy(12,19); printf("Calificacion: %i",bol[i].cal);
		if (bol[i].cal>=60)
		{
			gotoxy(12,21); printf("Aprobado");
		}
		else
		{
			gotoxy(12,21); printf("Reprobado");
		}
		getch();
	}
	else
		{
			gotoxy(12,17); printf("Ningun Alumno ha Realizado el examen");
		}
		getch();
}

void buscar()
{
	if(cont!=0)
	{
		int band=0;
		int n;
		
		gotoxy(12,15); printf("Ingresa el Numero de Lista a Buscar: ");
		scanf("%i",&n);
		for (i=0; i<cont; i++)
			if (n==bol[i].lista)
			{
				system("cls");
				marco();
				gotoxy(12,5); printf("Nombre: %s",bol[i].nombre);
				gotoxy(12,9); printf("Codigo: %i",bol[i].codigo);
				gotoxy(12,11); printf("Grupo: %s",bol[i].grupo);
				gotoxy(12,13); printf("Fecha del Examen: %s",bol[i].fecha);
				gotoxy(12,15); printf("Calificacion: %i",bol[i].cal);
				if (bol[i].cal>=60)
				{
					gotoxy(12,17); printf("Aprobado");
				}
				else
				{
					gotoxy(12,17); printf("Reprobado");
				}
				band=1;
				getch();
			} 
			else
				if (band=0)
			{
				gotoxy(12,17); printf("No se Encontro al Alumno...");
			}
	}
	else
		{
			gotoxy(12,17); printf("No hay datos Almacenados...");
			getch();
		}
}

void salir()
{
	gotoxy(12,17); printf("Presione enter para salir");
	getch();
}

main()
{
	int menu_principal;
	
	do{
  	system("cls");
	marco();
  	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");
  	gotoxy(12,8); printf("Elige una opcion: ");
  	gotoxy(12,10); printf("1) Comenzar a Hacer el Examen"); 
	gotoxy(12,11); printf("2) Mostrar Datos Almacenados");
	gotoxy(12,12); printf("3) Buscar Resultados");
	gotoxy (12,13); printf("4) Salir	");
  	gotoxy(12,15); scanf("%i",&menu_principal);
  	
  	switch (menu_principal)
  	{
  		case 1: 
		{
			if (cont<5)
			{
				capturar();
				if(bol[cont-1].codigo>10000000)
				{
					examen();
				}
			}
			else
			{
				gotoxy(12,17); printf("Registro Lleno...");
				getch();
			}
			
		}
			break;
		case 2: mostrar();
			break;
		case 3: buscar();
			break;
		case 4: salir();
	}
	} while (menu_principal!=4);
	return 0;
}

void examen()
{
	int opc;
	int puntaje=0;
		
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 1: ");
	gotoxy(12,9); printf("Conjunto ordenado de pasos que tienen un inicio y fin,");
	gotoxy(12,11); printf("los cuales logran una determinada tarea");
	gotoxy(12,13); printf("1) Algoritmo 2) Estrategia 3) Metodos 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Algoritmo");
	}
	getch();
	
	system("cls");
	marco();	
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 2: ");
	gotoxy(12,9); printf("Son los diagramas que utilizan simbolos con un ");
	gotoxy(12,11); printf("significado definido");
	gotoxy(12,13); printf("1) Diagramas de Flujo 2) Diagrama N-S");
	gotoxy(12,15); printf("3) Diagramas de Burbuja 4) Otro ");
	scanf("%i",&opc);
	
	if (opc==1)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Diagramas de Flujo");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 3: ");
	gotoxy(12,9); printf("Son sentencias a utilizar por la computadora escrita");
	gotoxy(12,11); printf("en lenguaje natural que para nosotros es el español");
	gotoxy(12,13); printf("1) Pseudocodigo 2) Algoritmo 3) Estrategias 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Pseudocodigo");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 4: ");
	gotoxy(12,9); printf("Son simbolos mediante los cuales se representan las");
	gotoxy(12,11); printf("operaciones a realizar por la computadora");
	gotoxy(12,13); printf("1) Diagrama Flujo 2) Algoritmos 3) Operadores 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Operadores");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 5: ");
	gotoxy(12,9); printf("Son los operadores que se utilizan normalmente en las");
	gotoxy(12,11); printf("operaciones matematicas para realizar calculos");
	gotoxy(12,13); printf("1) De asignacion 2) Logicos 3) Aritmeticos 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Aritmeticos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 6: ");
	gotoxy(12,9); printf("Operadores que se utilizan para relacionar 2 o mas");
	gotoxy(12,11); printf("valores con otros");
	gotoxy(12,13); printf("1) De Asignacion 2) Relacionales 3) Aritmeticos 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Relacionales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 7: ");
	gotoxy(12,9); printf("Operadores que se utilizan en la logica formal para hacer");
	gotoxy(12,11); printf("uniones entre valores de falso y verdadero obtenidos");
	gotoxy(12,13); printf("en los resultados de las evaluaciones con");
	gotoxy(12,15); printf("operadores racionales");
	gotoxy(12,17); printf("1) Aritmeticos 2) Relacionales 3) Logicos 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,19); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,19); printf("Opcion Incorrecta");
		gotoxy(12,21); printf("La opcion correcta era Logicos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 8: ");
	gotoxy(12,9); printf("La funcion de este operador es la de asignar un valor");
	gotoxy(12,11); printf("resultante a un dato en particular");
	gotoxy(12,13); printf("1) Relacional 2) De asignacion 3) Matematicas 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era De Asignacion");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 9: ");
	gotoxy(12,9); printf("Es una variable en la cual toma un valor inicial de 0");
	gotoxy(12,11); printf("o un valor n y luego va cambiando su valor en una ");
	gotoxy(12,13); printf("unidad consecutiva, asecendente o descendente");
	gotoxy(12,15); printf("1) Acumulador 2) Variable 3) Contador 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Contador");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 10: ");
	gotoxy(12,9); printf("Son variables que toman un valor inicial que puede ser 0,");
	gotoxy(12,11); printf("uno o el de otra variable. Las caracteristicas es que va ");
	gotoxy(12,13); printf("incrementando su valor en cantidades variables, se le");
	gotoxy(12,15); printf("agrega un valor de 10, 3 o el de otra variable");
	gotoxy(12,17); printf("1) Acumulador 2) Variable 3) Contador 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,19); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,19); printf("Opcion Incorrecta");
		gotoxy(12,21); printf("La opcion correcta era Acumulador");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 11: ");
	gotoxy(12,9); printf("Es un espacio de almacenamiento de memoria de la computadora");
	gotoxy(12,11); printf("que toma un valor desde su creacion y lo mantiene durante");
	gotoxy(12,13); printf("toda su existencia dentro del programa");
	gotoxy(12,15); printf("1) Constante 2) Variable 3) Lenguaje 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Constante");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 12: ");
	gotoxy(12,9); printf("Es un espacio de almacenamiento de memoria de la computadora");
	gotoxy(12,11); printf("que puede tomar cualquier valor durante su existencia en");
	gotoxy(12,13); printf("el programa");
	gotoxy(12,15); printf("1) Constante 2) Variable 3) Lenguaje 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Variable");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 13: ");
	gotoxy(12,9); printf("Son estructuras de control que se realizan en orden de una");
	gotoxy(12,11); printf("en una, de un principio hasta un fin, segun se va");
	gotoxy(12,13); printf("encontrando en el algoritmo");
	gotoxy(12,15); printf("1) Secuencial 2) Selectiva Simple 3) Selectiva Doble 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Secuencial");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 14: ");
	gotoxy(12,9); printf("Metodo disciplinado de escribir programas que sean claros,");
	gotoxy(12,11); printf("que se demuestre que son correctos y faciles de modificar");
	gotoxy(12,13); printf("1) Instruccion 2) Programacion Estructurada");
	gotoxy(12,15); printf("3) Acumulador 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Programacion Estructurada");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 15: ");
	gotoxy(12,9); printf("En esta estructura de control la computadora ejecutara auto-");
	gotoxy(12,11); printf("maticamente enunciados uno despues de otro, en el orden en");
	gotoxy(12,13); printf("el cual se ha escrito de inicio a fin");
	gotoxy(12,15); printf("1) Selectiva 2) Secuencial 3) Repetitiva condicional 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Secuencial");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 16: ");
	gotoxy(12,9); printf("Son las estructuras de control que se basan en una condicion");
	gotoxy(12,11); printf("para decidir la parte del programa por la que pasara");
	gotoxy(12,13); printf("1) Selectiva 2) Secuencial 3) Repetitiva  4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Selectiva");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 17: ");
	gotoxy(12,9); printf("Es la estructura de contro selectiva, que evalua una condicion,");
	gotoxy(12,11); printf("si esta es verdadera ejecuta la accion o acciones especificadas");
	gotoxy(12,13); printf("si es falsa no realiza ninguna accion");
	gotoxy(12,15); printf("1) Simple 2) Doble o Compuesta 3) Multiple 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Simple");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 18: ");
	gotoxy(12,9); printf("Es la estructura de contro selectiva, que evalua una condicion,");
	gotoxy(12,11); printf("si esta es verdadera ejecuta la accion o acciones especificadas");
	gotoxy(12,13); printf("si es falsa ejecuta otra accion o acciones");
	gotoxy(12,15); printf("1) Simple 2) Doble o Compuesta 3) Multiple 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Doble o Compuesta");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 19: ");
	gotoxy(12,9); printf("Se refiere a que podemos utilizar una sentencia si dentro ");
	gotoxy(12,11); printf("de otra sentencia si");
	gotoxy(12,13); printf("1) Simple 2) Doble o Compuesta 3) Si Anidados 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Si Anidados");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 20: ");
	gotoxy(12,9); printf("Es la estructura de control selectiva, que puede elegir una");
	gotoxy(12,11); printf("opcion entre muchas posibles y segun sea esta, se ejecuta");
	gotoxy(12,13); printf("la accion o acciones");
	gotoxy(12,15); printf("1) Simple 2) Doble o Compuesta 3) Multiple 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,17); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,17); printf("Opcion Incorrecta");
		gotoxy(12,19); printf("La opcion correcta era Multiple");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 21: ");
	gotoxy(12,9); printf("Estructura de control repetitiva que permite especificar");
	gotoxy(12,11); printf("al programador que se repite una accion o acciones por");
	gotoxy(12,13); printf("un numero de veces establecido");
	gotoxy(12,15); printf("1) Desde(For) 2) Mientras(While)"); 
	gotoxy(12,17); printf("3)Hacer mientras(do_While) 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,19); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,19); printf("Opcion Incorrecta");
		gotoxy(12,21); printf("La opcion correcta era Desde(For)");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 22: ");
	gotoxy(12,9); printf("Es un conjunto de elementos del mismo tipo agrupados en una");
	gotoxy(12,11); printf("sola variable");
	gotoxy(12,13); printf("1) Arreglos 2) Contadores 3) Funciones 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Arreglos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 23: ");
	gotoxy(12,9); printf("En un arreglo unidimensional de (n) numeros cual es el sub-");
	gotoxy(12,11); printf("indice del ultimo dato almacenado");
	gotoxy(12,13); printf("1) Cero 2) n-1 3) Diez 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era n-1");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 24: ");
	gotoxy(12,9); printf("En un arreglo unidimensional de (n) numeros cual es el sub-");
	gotoxy(12,11); printf("indice del primer dato almacenado");
	gotoxy(12,13); printf("1) Cero 2) n-1 3) Diez 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Cero");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 25: ");
	gotoxy(12,9); printf("En un arreglo unidimensional n [10] las casillas de los");
	gotoxy(12,11); printf("datos se enumeran… ");
	gotoxy(12,13); printf("1) Del 1-10 2) Del 0-10 3) Del 0-9 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Del 0-9");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 26: ");
	gotoxy(12,9); printf("A los arreglos unidimensionales tambien se les conoce como:");
	gotoxy(12,11); printf("1) Vectores 2) Tablas 3) Variables 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Vectores");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 27: ");
	gotoxy(12,9); printf("En el Arreglo n[]={1,2,3,4,5,6} como se accede para mostrar");
	gotoxy(12,11); printf("el numero 5");
	gotoxy(12,13); printf("1)Imprimir n[5] 2)Imprimir n[4] 3)Imprimir n[x] 4)Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Imprimir n[4]");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 28: ");
	gotoxy(12,9); printf("Es un Arreglo de arreglos unidimensionales");
	gotoxy(12,11); printf("1)Variables 2)Contadores 3)Arreglos bidimensionales 4)Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Arreglos bidimensionales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 29: ");
	gotoxy(12,9); printf("A los arreglos bidimensionales tambien se les conoce como:");
	gotoxy(12,11); printf("1) Tablas o Matrices 2) Vectores 3) Variables 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Tablas o Matrices");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 30: ");
	gotoxy(12,9); printf("En un arreglo bidimensional n[2][3] cuantos elementos");
	gotoxy(12,11); printf("se pueden almacenar? ");
	gotoxy(12,13); printf("1) Cinco 2) Cero 3) Seis 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Seis");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 31: ");
	gotoxy(12,9); printf("En un arreglo bidimensional el primer par de corchetes o");
	gotoxy(12,11); printf(" primer indice corresponde a:");
	gotoxy(12,13); printf("1) Columnas 2) Filas 3) Argumento 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Filas");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 32: ");
	gotoxy(12,9); printf("En un arreglo bidimensional el segundo par de corchetes o");
	gotoxy(12,11); printf("segundo indice corresponde a:");
	gotoxy(12,13); printf("1) Columnas 2) Filas 3) Argumento 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Columnas");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 33: ");
	gotoxy(12,9); printf("Cuantos indices debe tener un arreglo bidimensional");
	gotoxy(12,11); printf("1) Uno 2) Dos 3) Tres 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Dos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 34: ");
	gotoxy(12,9); printf("Es un conjunto de declaraciones, definiciones, expresiones");
	gotoxy(12,11); printf(" y/o sentencias que realizan una tarea en especifico");
	gotoxy(12,13); printf("1) Estructuras 2) Areglos 3) Funciones 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Funciones");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 35: ");
	gotoxy(12,9); printf("Es otro nombre que reciben las funciones");
	gotoxy(12,11); printf("1) Modulos o Subprogramas 2) Variables 3) Arreglo 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Modulos o Subprogramas");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 36: ");
	gotoxy(12,9); printf("Para construir una funcion que no regrese ningun valor");
	gotoxy(12,11); printf("comunmente se utiliza:");
	gotoxy(12,13); printf("1) Void 2) Int 3) Char 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Void");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 37: ");
	gotoxy(12,9); printf("Se le llama asi a declarar una funcion con la finalidad de");
	gotoxy(12,11); printf("ser reconocida en el trayecto de ejecucion del programa");
	gotoxy(12,13); printf("1) Crear 2) Prototipos 3) Condicionales 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Prototipos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 38: ");
	gotoxy(12,9); printf("En que parte se situan normalmente los prototipos");
	gotoxy(12,11); printf("1) A la mitad 2) Al final 3) Antes del Main() 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Antes del Main()");
	}
	
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 39: ");
	gotoxy(12,9); printf("Son los dos tipos de variables usadas en funciones");
	gotoxy(12,11); printf("1) Locales y Globales 2) Especiales y Normales");
	gotoxy(12,13); printf("3) Internas y Externas 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Locales y Globales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 40: ");
	gotoxy(12,9); printf("Son un tipo de Variables la cuales se debe declarar dentro del");
	gotoxy(12,11); printf("programa principal o funcion");
	gotoxy(12,13); printf("1) Globales 2) Locales 3) Metodos 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Locales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 41: ");
	gotoxy(12,9); printf("Son un tipo de Variables que se pueden utilizar en cualquier");
	gotoxy(12,11); printf("parte del programa");
	gotoxy(12,13); printf("1) Locales 2) Internas 3) Globales 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Globales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 42: ");
	gotoxy(12,9); printf("Las funciones pueden ser...");
	gotoxy(12,11); printf("1) Con y Sin Parametros 2) Normales y Especiales");
	gotoxy(12,13); printf("3) Variables y Estaticas 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Con y Sin Parametros");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 43: ");
	gotoxy(12,9); printf("Si se llama a una funcion a la mitad del programa, una vez");
	gotoxy(12,11); printf("que se ha completado la ejecucion de la funcion");
	gotoxy(12,13); printf("se devuelve el control a: ");
	gotoxy(12,15); printf("1) El inicio del programa 2) El final del programa");
	gotoxy(12,17); printf("3) El punto exacto donde se llamo 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,19); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,19); printf("Opcion Incorrecta");
		gotoxy(12,21); printf("La opcion correcta era El punto exacto donde se llamo");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 44: ");
	gotoxy(12,9); printf("A una funcion dentro de otra se conoce como:");
	gotoxy(12,11); printf("1) Matrices 2) Vectores 3) Funciones Anidadas 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Funciones Anidadas");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 45: ");
	gotoxy(12,9); printf("Es un tipo de dato compuesto que permite almacenar un conjunto");
	gotoxy(12,11); printf("de datos de diferente tipo");
	gotoxy(12,13); printf("1) Estructuras 2) Tablas 3) Variables 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Estructuras");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 46: ");
	gotoxy(12,9); printf("Son los tres tipos de estructuras que existen: ");
	gotoxy(12,11); printf("1) Con y Sin Paramteros 2) Normales y Especiales");
	gotoxy(12,13); printf("3) Simples, Anidadas y con Arreglos 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Simples, Anidadas y con Arreglos");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 47: ");
	gotoxy(12,9); printf("Las estructuras son manipuladas por _______ que se escribe");
	gotoxy(12,11); printf("despues del corchete de final de la estructura");
	gotoxy(12,13); printf("1) Un Alias o nombre 2) Dato 3) Contador 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Un Alias o nombre");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 48: ");
	gotoxy(12,9); printf("Se le conoce asi a la estructura declarada fuera de");
	gotoxy(12,11); printf("toda funcion ");
	gotoxy(12,13); printf("1) Locales 2) Globales 3) Enteras 4) Otro ");
	scanf("%i",&opc);
	if (opc==2)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Globales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 49: ");
	gotoxy(12,9); printf("Se le conoce asi a la estructura declarada dentro de");
	gotoxy(12,11); printf("una funcion ");
	gotoxy(12,13); printf("1) Locales 2) Globales 3) Enteras 4) Otro ");
	scanf("%i",&opc);
	if (opc==1)
	{
		gotoxy(12,15); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,15); printf("Opcion Incorrecta");
		gotoxy(12,17); printf("La opcion correcta era Locales");
	}
	getch();
	
	system("cls");
	marco();
	gotoxy(30,5); printf("EXAMEN TEORICO GLOBAL");	
	gotoxy(12,7); printf("PREGUNTA 50: ");
	gotoxy(12,9); printf("Se le conoce asi a una o varias estructuras dentro de otra");
	gotoxy(12,11); printf("1) Compuestas 2) Simples 3) Anidadas 4) Otro ");
	scanf("%i",&opc);
	if (opc==3)
	{
		gotoxy(12,13); printf("Opcion Correcta");
		puntaje=puntaje+2;
	}
	else
	{
		gotoxy(12,13); printf("Opcion Incorrecta");
		gotoxy(12,15); printf("La opcion correcta era Anidadas");
	}
	
	bol[cont-1].cal=bol[cont-1].cal+puntaje;
	getch();
}

void gotoxy(int x, int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }   
 
void marco()
{
int n,m,x=1,y=1;

for(int i=1; i<=78; i++)
{
 
  gotoxy(x,1);
  printf("*");
  gotoxy(x,24);
  printf("*"); 
  x++;
}

for(int j=1; j<=24; j++)
{
  gotoxy(1,y);
  printf("*");
  gotoxy(78,y);
  printf("*");
  y++;
 }
}
