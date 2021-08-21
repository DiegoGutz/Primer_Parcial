#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b, sum, dif, mul;
	
	printf("Dame el valor del primer numero: \n");
	scanf("%f", &a);
	printf("Dame el valor del segundo numero: \n");
	scanf("%f", &b);
	sum=a+b;
	printf("La suma de los dos numeros es: %f\n", sum);
	dif=a-b;
	printf("La diferencia de los dos numeros es: %f\n", dif);
	mul=a*b;
	return 0;
}
