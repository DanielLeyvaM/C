#include<stdio.h>
#include<conio.h>
main()
{
	int f,c, mat[2][3];
	printf("\nImprimir una tabla de 2x3\n\n");
	
	for(f=0; f<2; f=f+1)
	{
		for (c=0; c<3; c=c+1)
		{
			printf("\nIngrese un numero entero: ");
			scanf("%d",&mat[f][c]);
		}
	}
	
	printf("\nLa tabla es: \n");
	for(f=0; f<2; f=f+1)
		{
			printf("\n");
			
			for (c=0; c<3; c=c+1)
			{
				printf("\t%d",mat[f][c]);
			}
		}
	
	printf("\nPresione enter para salir");
getch();
}
