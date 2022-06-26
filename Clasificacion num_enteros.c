#include<stdio.h>
#include<conio.h>
main()
{
	int x=1, n, pos=0, neg=0, neut=0;
	printf("\nPrograma para contar numeros positivos,negativos y neutros");
	
	while (x<=20)
	{
		printf("\nIngresa numero %d ",x);
		scanf("%i",&n);
		
	if (n>0)
			pos=pos+1;
		else 
			if (n<0)
				neg=neg+1;
			else
				neut=neut+1;
	x=x+1;
	}
	
	printf("\nLa cantidad de Numeros Positivos es:%i",pos);
	printf("\nLa cantidad de Numeros Negativos es:%i",neg);
	printf("\nLa cantidad de Numeros Neutros es:%i",neut);
	
	printf("\nPresione enter para salir");
	getch();
}
