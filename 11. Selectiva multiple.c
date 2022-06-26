#include<stdio.h>
#include<conio.h>
main ()
{
     char opc;
     int a,b,c,d,e,cent,n,cuad,t;
     float pr,f;
     
     printf("Programa de Control Selectiva Multiple");
     printf("\n\nSeleccione una opcion");
     printf("\nA) Promedio de 5 numeros \nB) Convertir Grados C a F \nC) Cuadrado de un numero \nD) Salir \n");
     scanf("%c",&opc);
     
     switch (opc)
     {
            case 'A': printf("\nHa seleccionado Promedio de 5 numeros");
                      printf("\nIngresa primer numero ");
                      scanf("%i",&a);
                      printf("\nIngresa segundo numero ");
                      scanf("%i",&b);
                      printf("\nIngresa tercer numero ");
                      scanf("%i",&c);
                      printf("\nIngresa cuarto numero ");
                      scanf("%i",&d);
                      printf("\nIngresa quinto numero ");
                      scanf("%i",&e);
                      pr=(a+b+c+d+e)/5;
                      printf("El Promedio es:%f",pr);
                      break;
            
            case 'B': printf("\nHa seleccionado convertir grados");
                      printf("\nIngrese grados centigrados ");
                      scanf("%i",&t);
                      f=(t*9)/5+32;
                      printf("Grados Farenheit:%f",f);
                      break;
                      
            case 'C': printf("\nHa seleccionado Cuadrado de un  numero");
                      printf("\nIngrese numero ");
                      scanf("%i",&n);
                      cuad=n*n;
                      printf("\nEl Cuadrado es:%i",cuad);
                      break;
                      
            case 'D': printf("\nHa seleccionado Salir");
                      printf("\nGracias por usar el programa");
                      break;
                      
            default: printf("\nError");
     }
     getch();
}
