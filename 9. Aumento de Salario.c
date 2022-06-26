#include<stdio.h>
#include<conio.h>
main ()
{
	char (opc);
	float s,aum,total;
	printf("\nSeleccione su tipo de salario");
	printf("\nA) De 1,000 a 9,000 \nB) De 9,001 a 15,000 \nC) De 15,001 a 20,000 \nD) Mas de 20,001 \nE) Salir \n");
	scanf("%c",&opc);

	switch (opc)
	{
		case 'A': printf("\nHa escogido de 1,000 a 9,000");
		printf("\nIngrese Salario Actual ");
		scanf("%f",&s);
			if (s>=1000 && s<9000)
				{
					aum=s*0.2;
					total=s+aum;
					printf("\nEl aumento es de 20%%");
					printf("\nSu Nuevo Salario es:%.2f",total);
				}
			else 
				printf("\nSueldo no en el Rango");
			break;
			
		case 'B': printf("\nHa escogido de 9,001 a 15,000");
		printf("\nIngrese Salario Actual ");
		scanf("%f",&s);
			if (s>=9001&&s<15000)
			{
				aum=s*0.10;
				total=s+aum;
				printf("\nEl aumento es de 10%%");
				printf("\nSu Nuevo Salario es:%.2f",total);
			}
			else 
				printf("\nSueldo no en el Rango");
			break;
			
		case 'C': printf("\nHa Escogido de 15,001 a 20,000");
		printf("\nIngrese Salario Actual ");
		scanf("%f",&s);
			if (s>=15001&&s<20000)
			{
				aum=s*0.05;
				total=s+aum;
				printf("\nEl aumento es de 5%%");
				printf("\nSu Nuevo Salario es:%.2f",total);
			}
			else
				printf("\nSueldo no en el Rango");	
			break;
			
		case 'D': printf("\nHa escogido Mas de 20,001");
		printf("\nIngrese Salario Actual ");
		scanf("%f",&s);
		if (s>20001)
		{
			aum=s*0.03;
			total=s+aum;
			printf("\nEl aumento es de 3%%");
			printf("\nSu Nuevo Salario es:%.2f",total);
		}
			else 
				printf("\nSueldo no en el Rango");
			break;
		
		case 'E': printf("\nGracias, vuelva pronto");
			break;
			
		default:
			printf("\nError");
}
	getch();
}

