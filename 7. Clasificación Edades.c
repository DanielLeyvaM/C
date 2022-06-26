#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("\nPrograma clasificacion de edades");
	printf("\nIngresa edad ");
	scanf("%i",&a);
		if (a>=0 && a<=1)
			printf("Bebe");
		else
			if (a>1 && a<=11)
				printf("Niño");
			else
				if (a>11 && a<=18)
					printf("Puberto");
				else
					if (a>18 && a<=30)
						printf("Jovenes");
					else
						if (a>30 && a<=60)
							printf("Adulto");
						else
							if (a>60 && a<=120)
								printf("Adulto Mayor");
							else
								printf("Error");
	getch();
}
