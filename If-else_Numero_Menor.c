/*
	Find the smallest number of 3 numbers
*/

#include<stdio.h>

int main()
{
      int a,b,c;
      printf("\nPrograma encontrar el menor de 3 numeros \n");
      printf("\nIngresa el primer valor: ");
      scanf("%i",&a);
      printf("\nIngresa el segundo valor: ");
      scanf("%i",&b);
      printf("\nIngresa el tercer valor: ");
      scanf("%i",&c);

      if (a<b && a<c)
         printf("\nEl numero menor es: %i\n",a);
      else
          if (b<a && b<c)
          printf("\nEl numero menor es: %i\n",b);
      else
          printf("\nEl numero menor es: %i\n",c);

    return 0;
}
