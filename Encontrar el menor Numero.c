#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c;
      printf("\nPrograma encontrar el menor n�mero");
      printf("\nIngresa el primer valor");
      scanf("%i",&a);
      printf("\nIngresa el segundo valor");
      scanf("%i",&b);
      printf("\nIngresa el tercer valor");
      scanf("%i",&c);
      if (a<b&&a<c)
         printf("El numero menor es:%i",a);
      else
          if (b<a&&b<c)
          printf("El n�mero menor es:%i",b);
      else
          printf("El n�mero menor es:%i",c);
          getch();
}     
