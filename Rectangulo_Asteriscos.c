#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,a;

	printf("Rectangulo de Asteriscos");
    printf("\nIngrese alto: ");
    scanf("%d",&h);
	printf("Ingrese ancho: ");
	scanf("%d",&a);

	system("cls");
	printf("Rectangulo de Asteriscos\n\n");

    for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=a; j++)
		{
                if(j==1 || j==a || i==1 || i==h)
                    printf("*");
                else
                    printf(" ");
        }
		printf("\n");
	}
return 0;
}
