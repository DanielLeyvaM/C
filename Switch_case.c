/*
	Use of switch case to make a basic option menu.
*/

#include<stdio.h>

int main()
{
    char opc;
    printf("\nSeleccione una opcion");
    printf("\nA)Espa�ol \nB)Matematicas \nC)Historia \nD)Biologia \n");
    scanf("%c",&opc);
    switch (opc)
    {
        case'A': printf("\nEspa�ol");
            break;
        case 'B': printf("\nMatematicas");
            break;
        case 'C': printf("\nHistoria");
            break;
        case 'D': printf("\nBiologia");
            break;
        default: printf("Asignatura no existe");
			break;
    }
return 0;

}
