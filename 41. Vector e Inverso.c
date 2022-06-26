#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int vect1[15], vect2[15], i;

	printf("\nPrograma para almacenar 15 numeros en un vector y su orden inverso en otro\n");
	for (i=0; i<15; i++)
	{
		printf("\nIngresa numero %d ",i+1);
		scanf("%i",&vect1[i]);
	}
	for (i=14; i>=0; i=i-1)
		{
			vect2[i]=vect1[i];
		}	
	printf("\n\nVector Original: \n");
		for (i=0; i<15; i++)
			{
				Sleep(400);
				printf("\t%i",vect1[i]);
			}
	printf("\n\nVector Resultante: \n");
		for (i=14; i>=0; i=i-1)
			{
				Sleep(400);
				printf("\t%i",vect2[i]);
			}	
	printf("\nPresione enter para salir");
	getch();	
}
