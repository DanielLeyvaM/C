#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
	{
		int n,i;
		printf("Ingrese un numero: ");
		scanf("%i",&n);
		for (i=1; i<=n; i++)
		{
			if(i%2==1)
			{
					printf("\n%i",i);
			} 
		}
	getch();	
	}
