#include<stdio.h>
#include<conio.h>
main()
{
	int vect1[5], vect2[5], x;
	printf("\nPrograma para elevar al cuadrado 5 numeros\n");
	
	for (x=0; x<5; x++)
	{
		printf("\nIngresa numero %d: ",x+1);
		scanf("%i",&vect1[x]);
		vect2[x]= vect1[x]*vect1[x];
	}
	
	printf("\n\n RESULTADOS\n");
		for (x=0; x<5; x++)
			{
				printf("\nNumero: %i	El Cuadrado es:%i\n",vect1[x] ,vect2[x]);
			}
			
	getch();
}

