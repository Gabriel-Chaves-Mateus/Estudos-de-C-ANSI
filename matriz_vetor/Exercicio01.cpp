#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n[10];
	
	for(int i=0;i<10;i++){
		printf("Digite um numero: \n");
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	int soma =0;
	for(int i=0;i<10;i++){
		soma = soma + n[i];
	}
	
	printf("A soma e = %i",soma);
	
	
	return 0;
}