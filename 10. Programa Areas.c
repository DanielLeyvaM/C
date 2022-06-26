#include<stdio.h>
#include<conio.h>
main ()
{
	char opc; 
	float h,b,l,r,area;
	
	printf("\nPrograma para calcular Areas de Figuras");
	printf("\nEliga una opcion");
	printf("\nA) Triangulo \nB) Cuadrado \nC) Rectangulo \nD) Circulo \nE) Ninguna \n");
	scanf("%c",&opc);
		switch (opc)
	{
		case 'A': printf("\nHa escogido Area de Triangulo");
				  printf("\nIngrese Altura ");
					scanf("%f",&h);
				  printf("\nIngrese Medida de la base ");
				  	scanf("%f",&b);
				  area=(b*h)/2;
				  printf("\nEl Area es:%.2f",area);
				  break;
		
		case 'B': printf("\nHa escogido Area de Cuadrado");
				  printf("\nIngrese medida del lado ");
					scanf("%f",&l);
				   area=l*l;
				   printf("\nEl Area es:%.2f",area);
				   break;
		
		case 'C': printf("\nHa escogido Area de Rectangulo");
				  printf("\nIngrese Altura ");
					scanf("%f",&h);
				  printf("\nIngrese Medida de la base ");
				  	scanf("%f",&b);
				  area=b*h;
				  printf("\nEl Area es:%.2f",area);
				  break;
		
		case 'D': printf("\nHa escogido Area de Circulo");		
				  printf("\nIngrese medida del radio ");
				  	scanf("%f",&r);
				  area=(3.1416)*(r*r);
				  printf("\nEl Area es:%.2f",area);
				  break;
				
		case 'E': printf("\nHa elegido ninguna opcion");
					printf("\nGracias por usar el programa");
					break;
		
		default: printf("Opcion Inexistente");
	}
getch();	
}
