#include<stdio.h>
#include<conio.h>
main()
{
      int n[10], a, suma=0, mayor=0;
      
      float prom=0;
      
      printf("\nPromedio de Numeros en Arreglo");
      for (a=0; a<10; a=a+1)
      {
          printf("\nIngrese numero %d: ",a+1);
          scanf("%i",&n[a]);
          suma=suma+n[a];
      }
      prom=suma/10;
      
      printf("\n\nNumeros Ingresados:\n\n");
      for(a=0; a<10; a++)
      {
      	printf("%i    ",n[a]);
      }
      printf("\n\nEl promedio es:%.2f",prom);
      
      printf("\n\nLos Numeros Mayores al promedio son:\n\n");
      
      for(a=0; a<10; a++)
      {
               if (n[a]>prom)
               {
                  printf("%i    ",n[a]);
                  mayor=mayor+1;
                  
               } 
      }
      
      printf("\n\nCantidad de Numeros mayores al promedio:%i",mayor);
 
getch();      
}

