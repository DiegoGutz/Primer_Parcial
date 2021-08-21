#include <stdio.h>
#include <math.h>

int main(void){
	
	float area, altura, radio;
	printf("Dame el radio del circulo: \n");
	scanf("%f", &radio);
	printf("Dame la altura del circulo: \n");
	scanf("%f", &altura);
	
	area=(radio*3.1416)*altura;
	printf("El volumen del cilindro es: %f", area);
	return 0;
}
