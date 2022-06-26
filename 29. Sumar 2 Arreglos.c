#include<stdio.h>
#include<conio.h>
main()
{
      int x, a1[10], a2[10], a3[10];
      
      printf("\nSumar Dos Arreglos y el resultado almacenarlo en un tercero");
      
      printf("\n\nArreglo 1");
      for(x=0; x<10; x=x+1)
      {
               printf("\nIngrese numero %d: ",x+1);
               scanf("%i",&a1[x]);
      }
      printf("\nArreglo 2");
      for(x=0; x<10; x=x+1)
      {
               printf("\nIngrese numero %d: ",x+1);
               scanf("%i",&a2[x]);
               
               a3[x]=a1[x]+a2[x];
      }
      
      printf("\nEl Vector Resultante es:\n\n");
      for(x=0; x<10; x=x+1)
      {
            printf("    %i",a3[x]);   
      }
getch();
}   
