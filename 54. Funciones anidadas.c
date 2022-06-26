#include<stdio.h>
#include<conio.h>
#include<windows.h>

void f1(); void f2(); void f3(); void f4(); void f5(); void f6(); void f7(); void f8(); void f9(); void f10();

int main()
{
	printf("\n\nPrograma llamado automatico de funciones anidadas\n");
	f1();
	printf("\nAdios");
	printf("\n\nPresione enter para salir");
	getch();
}

void f1()
{
	f2();
	Sleep(600);
	printf("\n\nVerso 9");
	printf("\nIt's my life \nMy heart is like an open highway \nLike Frankie said, \nI did it my way \nI just want to live while I'm alive \nIt's my life...");
}

void f2()
{
	f3();
	Sleep(600);
	printf("\n\nVerso 8");
	printf("\nIt's my life \nIt's now or never \nBecause I ain't going to live forever \nI just want to live while I'm alive \n");
}

void f3()
{
	f4();
	Sleep(600);
	printf("\n\nVerso 7");
	printf("\n\nYou better stand tall \nWhen they're calling you out \nDon't bend, don't break \nBaby, don't back down\n");
}

void f4()
{
	f5();
	Sleep(600);
	printf("\n\nVerso 6");
	printf("\nIt's my life \nMy heart is like an open highway \nLike Frankie said, I did it my way \nI just want to live while I'm alive \nBecause it's my life");
}

void f5()
{
	f6();
	Sleep(600);
	printf("\n\nVerso 5");
	printf("\nIt's my life \nAnd it's now or never \nI ain't going to live forever \nI just want to live while I'm alive");
}

void f6()
{
	f7();
	Sleep(600);
	printf("\n\nVerso 4");
	printf("\nThis is for the ones who stood their ground \nFor Tommy and Gina who never backed down \nTomorrow's getting harder, make no mistake \nLuck ain't even lucky \nGot to make your own breaks");
	
}

void f7()
{
	f8();
	Sleep(600);
		printf("\n\nVerso 3");
		printf("\nIt's my life \nMy heart is like an open highway \nLike Frankie said, I did it my way \nI just want to live while I'm alive \nBecause it's my life");
	
}

void f8()
{
	f9();
	Sleep(600);
	printf("\n\nVerso 2");
	printf("\nIt's my life \nAnd it's now or never \nI ain't going to live forever \nI just want to live while I'm alive");
	
}

void f9()
{
	f10();
	Sleep(600);
	printf("\n\nVerso 1");
	printf("\nThis ain't a song for the brokenhearted \nNo silent prayer for the faith departed \nAnd I ain't going to be just a face in the crowd \nYou're going to hear my voice when I shout it out loud");

}

void f10()
{
	Sleep(600);
	printf("\nCancion Its my Life\n");
}
