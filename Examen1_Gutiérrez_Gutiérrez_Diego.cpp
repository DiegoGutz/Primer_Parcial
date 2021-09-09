#include <stdio.h>
#include <math.h>

int main(void){
	
	int a, res;
	
	printf("Calculo de volumen de cubo");
	printf("\nDame la medida de uno de los lados del cubo: ");
	scanf("%d", &a);
	
	res=pow(a,3);
	
	printf("El resultado es %d m3", res);
	return 0;
	
}
