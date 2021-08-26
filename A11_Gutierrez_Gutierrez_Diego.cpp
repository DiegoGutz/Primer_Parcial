#include <stdio.h>

int detectar(char c){
	
	if((c='_')||(c>='a'&& c<='z')||(c>='A'&& c<='Z'))
	return 1; else return 0;
}
int main(void){
	
	char c=0;
	printf("Escribe el caracter: \n");
	scanf("%c", &c);
	if(detectar(c)){
		printf("El caracter que tecleaste cumple y si trata de una letra o un guion bajo\n");
	}
	else{
		printf("El caracter que tecleaste NO CUMPLE y NO ES una letra o un guion bajo\n");
	}
	return 0;
}
