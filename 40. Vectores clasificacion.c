#include<stdio.h>
#include<conio.h>
main()
{
	int vect[15], i, neg=0, pos=0, neut=0, sum_neg=0, sum_pos=0;
	
	printf("\nPrograma de numeros positivos, negativos y neutros");
	for (i=0; i<15; i++)
		{
			printf("\nIngresa numero %d ",i+1);
			scanf("%i",&vect[i]);
		
			if (vect[i]>0)
				{
					pos=pos+1;
					sum_pos=sum_pos+vect[i];
				}
			else
				if (vect[i]<0)
					{
						neg=neg+1;
						sum_neg=sum_neg+vect[i];
					}
				else 
					neut=neut+1;
		}
	printf("\nCantidad de numeros positivos: %i",pos);
	printf("\nCantidad de numeros negativos: %i",neg);
	printf("\nCantidad de numeros neutros: %i",neut);
	
	printf("\n\nLa Suma de los numeros positivos es: %i",sum_pos);
	printf("\nLa Suma de los numeros negativos es: %i",sum_neg);
	printf("\n\nPresiona enter para salir");
	getch();
}

