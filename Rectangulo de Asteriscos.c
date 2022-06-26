#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int i,j,h,a;

	printf("Rectangulo de Astersicos");
    printf("\nIngrese alto: ");
    scanf("%d",&h);
	printf("\nIngrese ancho ");
	scanf("%d",&a);
	
	system("cls");
	
	printf("Rectangulo de Asteriscos\n\n");
	
    for(i=1; i<=h; i++)
	{
		for(j=1; j<=a; j++)
		{
			if (i==1 || j==1 || i==a || j==a || i==h || i==h)
			{
				printf("*");
			}
			else 
				printf(" ");
		}
		printf("\n");
	}
getch();
}
