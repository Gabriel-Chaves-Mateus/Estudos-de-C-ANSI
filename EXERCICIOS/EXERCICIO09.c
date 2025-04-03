#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	float n1, n2, n3, media;
	
	//Entrada de dados
	printf("Informe a primeira nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Informe a segunda nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Informe a terceira nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	//Processamento de dados
	media = (n1 + n2 + n3)/3;
	
	//Saida de dados
	printf("Sua media e %.2f\n",media);
	
	if((media >= 7) && (media < 10)){
		printf("Aprovado");
	} else if (media == 10){
		printf("Aprovado com Distincao");
	} else {
		printf("Reprovado");
	}
}