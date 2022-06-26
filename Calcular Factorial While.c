#include<stdio.h>
#include<conio.h>
main()
{
	float x=0,n,f=1;
	printf("\nPrograma para calcular numero factorial");
	printf("\nIngresa un numero ");
	scanf("%f",&n);
	while(x<n)
	{
		x=x+1;
		f=f*x;
	}
	printf("\nEl resultado es:%.2f",f);
	getch();
}

