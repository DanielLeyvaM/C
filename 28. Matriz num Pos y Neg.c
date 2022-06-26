#include<stdio.h>
#include<conio.h>
main()
{
	int f, c, mat[5][2], neg=0, pos=0, neut=0;
	
	printf("\nPrograma de numero Positivos, Negativos y Neutros");
	for (f=0; f<5; f++)
	{
		for (c=0; c<2; c++)
		{
			printf("\nIngresa numero:  ");
			scanf("%i",&mat[f][c]);
			
			if (mat[f][c]<0)
				neg=neg+1;
			else
				if (mat[f][c]>0)
					pos=pos+1;
				else
					neut=neut+1;					
		}
	}
	
	printf("\n\nLa Cantidad de numeros positivos es:%i",pos);
	printf("\nLa Cantidad de numeros negativos es:%i",neg);
	printf("\nLa Cantidad de numeros neutros es:%i",neut);
	
	printf("\n\nPresione enter para salir");
	getch();
}
