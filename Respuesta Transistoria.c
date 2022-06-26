#include<stdio.h>
#include<conio.h>
int x;
float z= 2, corriente, voltaje; 

main()
{

for (x=1; x<51; x++)
{
	voltaje= z/2;
	corriente= (10-voltaje)/5;
	z= corriente+z;
	 
	printf("Voltaje en Tiempo %d del Capacitor: %f",x,voltaje);
	printf("\nCorriente: %f\n\n",corriente);
}
getch();
}


