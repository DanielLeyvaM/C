#include<stdio.h>
#define MAX 5

int main()
{
	int x=1, cal, suma=0;
	float promedio;
	
	printf("\nPrograma calcular Promedio");
	while (x<=MAX)
	{
		printf("\nDame la calificacion %d;",x);
		scanf("%d",&cal);
		suma=suma+cal;
		x++;
	}
	
	promedio=suma/MAX;
	printf("\nEl promedio es:%.2f",promedio);
	printf("\nPresione enter para salir");
	return 0;
}

