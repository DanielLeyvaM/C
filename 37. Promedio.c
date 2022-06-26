#include<stdio.h>
#include<conio.h>
main()
{
	int x=1, cal, suma=0;
	float promedio;
	printf("\nPrograma calcular Promedio");
	while (x<=7)
	{
		printf("\nDame la calificacion %d;",x);
		scanf("%d",&cal);
		suma=suma+cal;
		x=x+1;
	}
	promedio=suma/7;
	printf("\nEl promedio es:%.2f",promedio);
	printf("\nPresione enter para salir");
	getch();
	}

