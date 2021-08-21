#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b, sum, dif, mul, div;
	
	printf("Dame el valor del primer numero: \n");
	scanf("%f", &a);
	printf("Dame el valor del segundo numero: \n");
	scanf("%f", &b);
	sum=a+b;
	printf("La suma de los dos numeros es: %f\n", sum);
	dif=a-b;
	printf("La diferencia de los dos numeros es: %f\n", dif);
	mul=a*b;
	printf("La multiplicacion de los dos numeros es: %f\n", mul);
	div=a/b;
	printf("La division de ambos numeros es: %f\n", div);
	return 0;
}
