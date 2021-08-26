#include <stdio.h>
#include <math.h>

int main(void){
	
	int cont;
	float mex, dolar, euro, quet, libra, sol, yen, conver;
	printf("Conversion de pesos a...");
	printf("\nDame la cantidad de pesos a convertir: ");
	scanf("%f", &mex);
	printf("Depende de en lo que desea convertir presione, 1) dolares, 2)euros; 3)quetzales, 4)libras esterlinas, 5)soles, 6)yenes\n");
	scanf("%d", &cont);
	switch(cont){
		case 1: 
			conver=mex*0.049;
			printf("El resultado de la conversion en dolares es: %.3f", conver);
		break;
		case 2:
			conver=mex*0.042;
			printf("El resultado de la conversion en euros es: %.3f", conver);
		break;
		case 3: 
			conver=mex*0.38;
			printf("El resultado de la conversion en quetzales es: %.3f", conver);
		break;
		case 4: 
			conver=mex*0.036;
			printf("El resultado de la conversion en libras esterlinas es: %.3f", conver);
		break;
		case 5: 
			conver=mex*0.20;
			printf("El resultado de la conversion en soles es: %.3f", conver);
		break;
		case 6: 
			conver=mex*5.41;
			printf("El resultado de la conversion en yenes es: %.3f", conver);
		break;
		default:
			printf("Escribe una opcion valida");
		break;
	}
	return 0;
}
