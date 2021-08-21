#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void){
	
	float calif[30]={20,19,18,16,19,20,22,21,19,20,22,24,21,26,22,20,19,18,16,19,20,22,21,19,20,22,24,21,26,19};
	float sum, promedio, var, des;
	int i=0, j=0;
	
	printf("calculo de varianza y desviacion estandar...\n");
	
	for(i = 0; i < 30; i++){
		sum=sum+calif[i];
		promedio=sum/30;
	}
	j=i;
	for(j = 0; j < 30; j++){
		var+=pow(calif[j]-promedio, 2);
	}
	
	des=pow(var/30, .5);
	
	printf("La varianza de las calidicaiones es: %.2f\n", var/30);
	printf("La desviacion estandar es: %.2f", des);
	return 0;
}
