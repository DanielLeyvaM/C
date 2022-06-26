#include<stdio.h>
#include<conio.h>
main()
{
	int f, c, mat[3][4], vec[12], x=0;
	
	printf("\nMatriz de 3*4 y Vector\n");
	for (f=0; f<3; f++)
	{
		for (c=0; c<4; c++)
		{
			printf("\nIngresa numero:  ");
			scanf("%i",&mat[f][c]);
			
			vec[x]=mat[f][c];
			x++;
		}
	}
	
	printf("\nTabla resultante: \n\n");
	for (f=0; f<3; f++)
	{
		printf("\n");
		for (c=0; c<4; c++)
		{
			printf("\t%i",mat[f][c]);
		}
	}
		
	
	printf("\n\nVector Resultante: \n");
		for(x=0; x<12; x++)
		{
			printf("    %i",vec[x]);
		}
	
	printf("\n\nPresione enter para salir");
	getch();
}
