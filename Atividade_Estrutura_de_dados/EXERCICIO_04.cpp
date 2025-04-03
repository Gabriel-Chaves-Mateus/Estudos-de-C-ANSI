#include <stdio.h>
#include <stdlib.h>

int main(void){

	char nome[50];
	float salario_fixo, salario_final, comissao, valor, desconto, salario_bruto, taxa;
	
	printf("Digite seu nome: ");
	scanf("%c",&nome);
	fflush(stdin);
	printf("Digite seu salario fixo: ");
	scanf("%f",&salario_fixo);
	printf("Digite o valor das vendas: ");
	scanf("%f",&valor);
	
	comissao = 0.05 * valor;
	salario_final = salario_fixo + comissao;
	
	printf("O salario bruto eh %.2f\n",salario_final);
	
	if(salario_final < 1200){
		taxa = 0.075;
	} else if(salario_final < 2000){
		taxa = 0.09;
	} else{
		taxa = 0.1;
	}
	
	desconto = taxa * salario_final;
	salario_liquido = salario_final - desconto;
	
	printf("Taxa = %f\n",taxa * 100);
	printf("Salario_liquido = %.2f\n",salario_liquido);
	
	return 0;
	
}