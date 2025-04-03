#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	int n;
	
	//Entrada de dados
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	//Saida de dados
	if (n % 2 == 0){
		printf("O numero %i e par",n);
	} else {
		printf("O numero %i e impar",n);
	}
	
}