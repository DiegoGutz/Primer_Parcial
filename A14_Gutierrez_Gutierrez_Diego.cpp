#include <stdio.h>

int main(void){
	
	int i=0, j=0, final=40;
	
	while(i<final){
		i=j*10;
		printf("%d\n", i);
		j++;
	}
	j=100; 
	return 0;
}
