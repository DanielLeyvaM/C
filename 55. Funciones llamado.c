#include<stdio.h>
#include<conio.h>
#include<windows.h>

void f1(); void f2(); void f3(); void f4(); void f5(); void f6(); void f7(); void f8(); void f9(); void f10();

int main()
{
	printf("\n\nPrograma llamado automatico de funciones anidadas\n");
	printf("\n	Chiste: ");
	f1();
	printf("\n\n\nPresione enter para salir");
	getch();
}

void f1()
{
	f2();
	Sleep(600);
	printf("\n-Ven ese muchacho como es de rapido, viene por mezcla y ladrillos.");
}

void f2()
{
	f3();
	Sleep(600);
	printf("\n\ny el Mexicano responde: ");
}

void f3()
{
	f4();
	Sleep(600);
	printf("\n\nLos otros 2 se quedan pasmados... y de repente se cae un obrero del ultimo piso, \ndandose en toda la torre");
}

void f4()
{
	f5();
	Sleep(600);
	printf("\n-Estos edificios de 30 pisos los hacemos en 3 dias.");
}

void f5()
{
	f6();
	Sleep(600);
	printf("\n\nPor fin el mexicano con ganas de ganar les contesta:");
}

void f6()
{
	f7();
	Sleep(600);
	printf("\n-Estos edificios de 20 pisos los hacemos nosotros en 15 dias.");
}

void f7()
{
	f8();
	Sleep(600);
	printf("\n\nEl Chino le contesta:");
}

void f8()
{
	f9();
	Sleep(600);
	printf("\n-En mi pais estos edificios los hacemos en 30 dias con 10 pisos");
}

void f9()
{
	f10();
	Sleep(600);
	printf("\n\nEl Americano le dice a los demas:");
}

void f10()
{
	Sleep(600);
	printf("\n\nSe encuentran un mexicano, un chino y un americano paseando por mexico \ny se encuentran con unos edificios en construccion");
}
