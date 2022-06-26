#include <stdio.h>
#include <conio.h>
main()
{
 	float x,f=1,n;
 	printf("\nPrograma para calcular numero factorial");
	printf("\nIngrese numero ");
 	scanf("%f",&n);
 	
	 for (x=1;x<=n;x=x+1)
 	f=f*x;
 	printf("\nEl resultado es:%.2f",f);
 	getch();
}

