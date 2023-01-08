#include<stdio.h>
#define MAX 5

int main()
{
      int n[MAX], a, suma=0, mayor=0;
      float prom=0;
      
      printf("\nPromedio de Numeros en Arreglo");
      for (int a=0; a<MAX; a++)
      {
          printf("\nIngrese numero %d: ",a+1);
          scanf("%i",&n[a]);
          suma=suma+n[a];
      }
      prom=suma/MAX;
      
      printf("\n\nNumeros Ingresados:\n\n");
      for(int a=0; a<MAX; a++)
      {
      	printf("%i\t",n[a]);
      }
      printf("\n\nEl promedio es:%.2f",prom);
      
      printf("\n\nLos Numeros Mayores al promedio son:\n\n");
      
      for(int a=0; a<MAX; a++)
      {
               if (n[a]>prom)
               {
                  printf("%i\t",n[a]);
                  mayor=mayor+1;
               } 
      }
      
      printf("\n\nCantidad de Numeros mayores al promedio:%i",mayor);
 
	return 0;    
}

