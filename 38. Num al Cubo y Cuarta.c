#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,n,cubo,cuarta;
	printf("\nPrograma para calcular cubo y cuarta");
	
	while (x<=10)
	{
		printf("\nIngresa numero %d: ",x);
		scanf("%d",&n);
		
		cubo=n*n*n;
		cuarta=n*n*n*n;	
		
		printf("\nNumero Ingresado:%i",n);
		printf("\nEl cubo del numero es:%i",cubo);
		printf("\nLa cuarta del numero es:%i",cuarta);
		x=x+1;
	}
	printf("\nPresione enter para salir");
	getch();	
}
