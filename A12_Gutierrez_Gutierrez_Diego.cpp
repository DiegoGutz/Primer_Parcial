#include <stdio.h>

int main(void){
	
	int a, b, total;
	printf("Valor absoluto");
	printf("\nDame el primer numero: ");
	scanf("%d", &a);
	printf("\nDame el segundo numero: ");
	scanf("%d", &b);
	if(a<=b){
		total=b-a;
		printf("El valor absoluto de la operacion es: %d", total);
	}
	else{
		total=a-b;
		printf("El valor absoluto de la operacion es: %d", total);
	}
	return 0;
}
