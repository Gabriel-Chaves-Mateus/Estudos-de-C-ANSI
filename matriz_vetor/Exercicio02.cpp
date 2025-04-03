//Construa um algoritmo de um vetor de 5 numeros reais, e mostre a soma, multiplicação e os numeros

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float n[5], soma =0, multiplicacao = 1;
	
	for(int i=0;i<5;i++){
		printf("Digite os numeros: ");
		scanf("%f",&n[i]);
		fflush(stdin);
	}
	
	for(int i=0;i<5;i++){
		soma = soma + n[i];
	}
	
	for(int i=0;i<5;i++){
		multiplicacao = multiplicacao * n[i];
	}
	
	printf("\nsoma = %.2f",soma);
	printf("\nmultiplicacao = %.2f",multiplicacao);
	
	printf("\nNumeros digitados :");
	for(int i=0;i<5;i++){
		printf("\n%.2f",n[i]);
	}
	
	return 0;
}
