/*
	USE OF IF- ELSE TO TAKE DECISIONS
*/

#include<stdio.h>

int main()
{
    int a;
    printf("\nIndicar par o impar");
    printf("\nIngresa el numero entero");
    scanf("%i",&a);
    if(a%2==0)
        printf("El numero es par");
    else
        printf("El numero es impar");
    return 0;
}
