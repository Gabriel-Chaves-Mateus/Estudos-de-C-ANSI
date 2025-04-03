#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	float n;
	
	//Entrada de dados
	printf("Digite um numero: ");
	scanf("%f",&n);
	fflush(stdin);
	
	//Saida de dados
	if (n<0){
		printf("O numero %.2f e negativo",n);
	} else {
		printf("O numero %.2f e positivo",n);
	}
	
}