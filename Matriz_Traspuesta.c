#include <stdio.h>

main()
{
	int f,c,mat[3][2];
	printf("\nPrograma Matriz Transversa (3)(2)\n");
	for(f=0; f<3; f++)
	{
		for(c=0; c<2; c++)
		{
			printf("\nIngresa numero: ");
			scanf("%i",&mat[f][c]);
		}
	}
	
	printf("\n\nMatriz Original");
	for(f=0; f<3; f++)
	{
		printf("\n");
		for(c=0; c<2; c++)
		{
			printf("\t%i",mat[f][c]);
		}
	}
	
	printf("\n\nMatriz Transversa");
	for(c=0; c<2; c++)
	{
		printf("\n");
		for (f=0; f<3; f++)
		{
			printf("\t%i",mat[f][c]);
		}
	}
	printf("\n\nPresione enter para salir");	
	return 0;
}

