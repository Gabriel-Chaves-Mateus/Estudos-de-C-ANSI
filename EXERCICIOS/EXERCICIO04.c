#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	int n;
	
	//Entrada de dados
	printf("Informe um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	//Saida de dados
	if(n % 2 ==0){
		printf("Impar = %i",n - 1);
	} else {
		printf("Par = %i",n+1);
	}
	
}