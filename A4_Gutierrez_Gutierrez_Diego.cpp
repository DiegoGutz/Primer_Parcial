#include <stdio.h>

int main(void){
	float mex, dollar;
	
	printf("Escribe el numero de pesos que quieres transformar en dolare: ");
	scanf("%f", &mex);
	
	dollar=mex*20.37;
	
	printf("El valor es: %f", dollar);
	return 0;
}
