#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	float altura;
}Pessoa;

int main(void){
	
	Pessoa a;
		
		printf("Digite nome = ");
		gets(a.nome);
		fflush(stdin);
		printf("Digite idade = ");
		scanf("%i",&a.idade);
		printf("Digite altura = ");
		scanf("%f",&a.altura);

		printf("%s, %i, %.2f\n", a.nome, a.idade, a.altura);

	return 0;
	
}