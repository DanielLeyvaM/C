#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int vect1[10], vect2[10], i;
	printf("\nPrograma para elevar al cuadrado numeros en vectores");
	
	for (i=0; i<10; i++)
	{
		printf("\nIngresa numero %d ",i+1);
		scanf("%i",&vect1[i]);
		vect2[i]= vect1[i]*vect1[i];
	}
	
			printf("\n\nVector Original: \n");
		for (i=0; i<10; i++)
			{
				Sleep(400);
				printf("\nNumero %d: %i",i+1 ,vect1[i]);
			}
			
			printf("\n\nVector Resultante: \n");
				for (i=0; i<10; i++)
			{
				Sleep(400);
				printf("\nCuadrado numero %d: %i",i+1, vect2[i]);
			}
			printf("\n\nPresione enter para salir");
			getch();
}
