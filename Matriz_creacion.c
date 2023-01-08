#include<stdio.h>

int main()
{
	int f,c;

	printf("Ingrese Columnas: ");
	scanf("%d",&c);
	printf("Ingrese Filas: ");
	scanf("%d",&f);

	int mat[f][c];
	printf("Matriz de %d * %d \n",f,c);

	for (int i=0; i<f; i++)
	{
		for (int j=0; j<c; j++)
		{
			printf("\nIngrese un numero: ");
			scanf("%i",&mat[i][j]);
		}
	}

	printf("\nMatriz Resultante\n");
	for (int i=0; i<f; i++)
	{
		for (int j=0; j<c; j++)
		{
			printf("%i\t",mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
