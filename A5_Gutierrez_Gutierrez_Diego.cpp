#include <stdio.h>

int main(void){
	float m, k;
	
	printf("Dame el nuermo de metros que quieres tranformar en kilometros: ");
	scanf("%f", &m);
	
	k=m*1000;
	
	printf("El numero en kilometros es: %.2f", k);
	return 0;
}
