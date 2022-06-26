#include<stdio.h>
#include<conio.h>
int addition(int a, int b) 
{
    return (a + b);
}
int main() 
{
    int x = 10;
    int y = 20;
    int z;

    z = addition(x, y);
    printf("%i",z);
getch();
}
