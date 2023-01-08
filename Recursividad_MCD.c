#include <stdio.h>
int mcd_metodo1(int, int);
int mcd_recursivo(int, int);

int main(){
	int n1,n2,resultado;
	scanf("%i %i",&n1, &n2);
	
	//printf("%i",mcd_metodo1(n1,n2));
	printf("%i",mcd_recursivo(n1,n2));
	return 0;
}


int mcd_recursivo(int a,int b){
	int r=a%b;
	if(r==0){
		return b;	
	}
	else{
		return mcd_recursivo(b,r);
	}		
}


int mcd_metodo1(int a,int b){
	int res=1,aux;
	if(b>a){
		aux=b;
		b=a;
		a=aux;
	}
	while(res=!0){
		res=a%b;
		if(res==0){
			break;
		}
		a=b;
		b=res;	
	}
	return b;
}
