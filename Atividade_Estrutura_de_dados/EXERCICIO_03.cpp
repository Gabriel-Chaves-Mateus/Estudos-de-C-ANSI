#include <stdio.h>
#include <stdlib.h>

int main(void){

	char nome[50];
	float salario_fixo, salario_final, comissao, valor;
	
	printf("Digite seu nome: ");
	scanf("%c",&nome);
	fflush(stdin);
	printf("Digite seu salario fixo: ");
	scanf("%f",&salario_fixo);
	printf("Digite o valor das vendas: ");
	scanf("%f",&valor);
	
	comissao = 0.05 * valor;
	salario_final = salario_fixo + comissao;
	
	printf("O salario final eh %.2f",salario_final);
	
	return 0;
	
}