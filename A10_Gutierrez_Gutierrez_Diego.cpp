#include <stdio.h>
#include <math.h>

int main(void){
	
	int c;
	float a, b;
	float res;
	
	printf("Dame el primer valor: \n");
	scanf("%f", &a);
	printf("Dame el segundo valor: \n");
	scanf("%f", &b);
	
	printf("Indica la operacion que quieres realizar\n 1)suma\n 2)resta\n 3)multiplicacion\n 4)division\n");
	scanf("%d", &c);
	
	res=0;
	switch(c){
		case 1:
			res=a+b;
		break;
		
		case 2: 
			res=a-b;
		break;
		
		case 3:
			res=a*b;
		break;
		
		case 4: 
			res=a/b;
		break;
		
		default:
			printf("Error, usa un numero correcto");
		
	}
	
	printf("El resultado de tu operacion es: %.2f", res);
	return 0;
}
