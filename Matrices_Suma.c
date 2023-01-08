#include<stdio.h>

int main()
{
	int mat1[2][5], mat2[2][5], mat3[2][5], n;
	
	printf("\nPrograma que Suma 2 Matrices y Almacena el resultado en otra");
	
	printf("\n\nMatriz 1");
	for(int f=0; f<2; f++)
	{
		for (int c=0; c<5; c++)
		{
			printf("\nIngrese un numero ");
			scanf("%i",&mat1[f][c]);
		}
	}
	
	printf("\n\nMatriz 2");
	for(int f=0; f<2; f++)
	{
		for (int c=0; c<5; c++)
		{
			printf("\nIngrese un numero ");
			scanf("%i",&mat2[f][c]);
			mat3[f][c]=mat1[f][c]+mat2[f][c];
		}
	}
	
	printf("\n\nMatriz Resultante:\n ");
	for(int f=0; f<2; f++)
	{
		printf("\n");
		for(int c=0; c<5; c++)
		{
			printf("\t%i",mat3[f][c]);
		}
	}
	return 0;
}
