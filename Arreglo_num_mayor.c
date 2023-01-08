/*
	ENCONTRAR EL MAYOR NUM DE ARREGLO
*/

#include<stdio.h>

int main(){
	int n,mayor=0;
	printf("Ingrese tam de arreglo: ");
	scanf("%i",&n);
	
	int x[n];
	
	for(int i=0;i<n;i++){
		scanf("%i",&x[i]);
		if (x[i]>mayor){
			mayor=x[i];
		}
	}
	
	printf("Num mayor: %i",mayor);
	
	return 0;
}     
