#include <stdio.h>
#include <math.h>

int main(void){
	
	float j[13]={3.3, 4.5, 5.0, 3.4, 4.2, 5.3, 3.2, 4.3, 5.2, 7.1, 3.3, 4.8, 5.2};
	int i;
	
	printf("Segundo problema");
	
	if(3.5>j[i]){
		printf("\nImperceptible");
		if(3.5<j[i]<5.4){
			printf("\nSin problemas");
			if(5.5<j[i]<6.0){
				printf("\nEmitir alerta");
				if(6.1<j[i]<6.9){
					printf("\nEmitir alertas");
					if(7.0<j[i]<7.9){
						printf("\nEmitir alerta");
						if(8<=j[i]){
							printf("\nEmergencia nacional");
						}
						else{
							printf("\nSolicitar apoyo externo");
						}
					}
					else{
						printf("\nEnviar equipos de rescate");
					}
				}
				else{
					printf("\nEnviar equipos de apoyo");
				}
			}
			else{
				printf("\nDesalojar");
			}
		}
		else{
			printf("\nAvisar");
		}
		
	}
	else{
		printf("\nSin problemas");
		
	}
	}	
