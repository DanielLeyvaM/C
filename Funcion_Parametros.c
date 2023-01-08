/*
	EXAMPLE OF FUNCTION WITH PARAMETERS
*/

#include<stdio.h>

//Prototipo
int addition(int ,int );

int main() 
{
    int x = 10;
    int y = 20;
    int z;

    z = addition(x, y);
    printf("La suma es: %i",z);
	return 0;
}

int addition(int a, int b){
    return (a + b);
}
