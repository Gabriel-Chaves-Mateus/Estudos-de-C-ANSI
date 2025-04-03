#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	float n1, n2;
	
	//Entrada de dados
	printf("Digite um numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	fflush(stdin);
	
	//Saida de dados
	if (n1>n2) {
		printf("%.2f",n1);
	} else if (n2>n1){
		printf("%.2f",n2);
	} else {
		printf("Os numeros sao iguais");
	}
	
}