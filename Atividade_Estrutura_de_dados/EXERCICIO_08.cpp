#include <stdio.h>
#include <stdlib.h>

int main(void){

	int N, fatorial;
	
	printf("Digite um numero: ");
	scanf("%i",&N);
	
	fatorial = N;
	for(int i = 1; i < N; i++){
		fatorial = fatorial * (N-i);
	}
	
	printf("Fatorial = %i",fatorial);
	
}