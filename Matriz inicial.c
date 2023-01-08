#include<stdio.h>
#include<conio.h>
main()
{
      int f, c, mat[3][3];
      
      printf("\nPrograma que captura matriz de 3*3\n");
      for(f=0; f<3; f++)
      {
               for(c=0; c<3; c++)
               {
                        printf("\nIngrese numero: ");
                        scanf("%i",&mat[f][c]);
               }
      }
      
      printf("\nTabla Resultante:\n\n");
      for (f=0; f<3; f++)
      {
          printf("\n");
          for(c=0; c<3; c++)
          {
                   printf("\t%i",mat[f][c]);
          }
      }
      getch();
}
                        
