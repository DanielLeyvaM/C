#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c;
      printf("\nPrograma encontrar el menor numero\n");
      printf("\nIngresa el primer valor ");
      scanf("%i",&a);
      printf("\nIngresa el segundo valor ");
      scanf("%i",&b);
      printf("\nIngresa el tercer valor ");
      scanf("%i",&c);
      if (a<b&&a<c)
         printf("\nEl numero menor es: %i",a);
      else
          if (b<a&&b<c)
          printf("\nEl numero menor es: %i",b);
      else
          printf("\nEl numero menor es: %i",c);
          getch();
}     
