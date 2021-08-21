#include <stdio.h>
#include <math.h>

int main(void){
	
	float calificaciones[30]={20,19,18,16,19,20,22,21,19,20,22,24,21,26,22,20,19,18,16,19,20,22,21,19,20,22,24,21,26,19};
	float promedio = 0;
	
	printf("Programa que calcula el promedio de 30 calificaciones...\n");
	
	for(int i = 0; i < 30; i++){
		promedio=promedio+calificaciones[i];
	}
	
	printf("El promedio de las calificaciones es: %.2f\n", promedio / 30);
	return 0;
}
