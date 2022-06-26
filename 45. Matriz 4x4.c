#include<stdio.h>
#include<conio.h>
main()
{
	int f, c, mat[4][4], vec[8], x=0;
	int f1=0, f2=0, f3=0, f4=0, c1=0, c2=0, c3=0, c4=0;
	
	printf("\Matriz de 4*4\n");
	for (f=0; f<4; f++)
	{
		for (c=0; c<4; c++)
		{
			printf("\nIngrese un numero: ");
			scanf("%i",&mat[f][c]);
			
			if (f==0)
				f1=f1+mat[f][c];
			else
				if (f==1)
					f2=f2+mat[f][c];
				else 
					if (f==2)
						f3=f3+mat[f][c];
					else 
						f4=f4+mat[f][c];
			
			if (c==0)
				c1=c1+mat[f][c];
			else 
				if (c==1)
					c2=c2+mat[f][c];
				else
					if (c==2)
						c3=c3+mat[f][c];
					else
						c4=c4+mat[f][c];
		}
	}
	
	vec[0]=f1; vec[1]=f2; vec[2]=f3; vec[3]=f4; vec[4]=c1; vec[5]=c2; vec[6]=c3; vec[7]=c4;
	
	printf("\nTabla Resultante: \n");
	for (f=0; f<4; f++)
	{ 
		printf("\n");
			for (c=0; c<4; c++)
			{
				printf("\t%i",mat[f][c]);
			}
	}
	
	printf("\n\nVector Resultante: \n\n");
	for (x=0; x<8; x++)
		{
			if (x==0)
			{
				printf("Suma de Filas:");
			}
			else
			if (x==4)
			{
				printf("\nSuma de Columnas:");
			}
				
		printf("\t%i",vec[x]);
		}
	printf("\n\nPresione enter para salir");
		
getch();
}
