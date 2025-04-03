#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n[10];
	
	printf("Escreva dez numeros: \n");
	
	for(int i=0;i<10;i++){
		printf("Escreva um numero: \n");
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	printf("Numeros escritos em ordem decrescente: \n");
	for(int i=9;i>=0;i--){
		printf("%i\n",n[i]);
	}
	return 0;
}