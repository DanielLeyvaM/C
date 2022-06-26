#include <stdio.h>
#include <conio.h>
main()
{
	float x=0,n,f=1;
	printf("\nPrograma para calcular numero factorial");
	printf("\nIngrese un numero ");
	scanf("%f",&n);
	do 
	{
		x=x+1;
		f=f*x;
	}
	while (x<n);
	printf("\nEl resultado es:%.2f",f);
	getch();
}

