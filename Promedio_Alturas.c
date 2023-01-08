#include<stdio.h>

float promedio (int valores [], int cantidad){
	int i;
	float suma=0.0;
	
	for (i=0; i<cantidad; ++i)
		suma += valores [i];
		
	return suma/ (float) cantidad;
	}

int main() {
	
	int notas [10];
	char opcion [3];
	int n, i;
	
	do {
		printf("\nIngrese cantidad de alturas");
		scanf("%d", &n);
		
		for (i=0; i<n; ++i){
			printf("Altura en cm %d:", i+1);
			scanf("%d",&notas[i]);
		}
		printf("\nEl promedio de alturas es: %.2f", promedio (notas,n));
		
		printf("\nDesea calcular mas promedios (si/no)?");
		scanf("%s",opcion);
		}while (opcion[0]== 's'|| opcion[0]== 'S');
		return 0; 
	} 
