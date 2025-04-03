#include <stdio.h>
#include <stdlib.h>

int main(void){

	//VARIAVEIS
	float quebrado;
	int inteiro;
	
	//ENTRADA DE DADOS
	printf("Digite um numero: ");
	scanf("%f",&quebrado);
	fflush(stdin);
	
	inteiro = quebrado;
	
	//Saida de dados
	if (quebrado == inteiro){
		printf("O numero e inteiro");	
	} else {
		printf("O numero e quebrado");
	}
	
}