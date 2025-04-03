/* Como guardar 10 idades de pessoas?*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

int main(void){
	// Definindo as variáveis sem vetor - int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10
	//int n[10];
	int n[TAMANHO], soma = 0;
	float media;

/*	Definindo os valores do vetor manualmente
	n[0]=25;
	n[1]=25;
	n[2]=25;
	n[3]=25;
	n[4]=25;
	n[5]=25;
	n[6]=25;
	n[7]=25;
	n[8]=25;
	n[9]=25;
*/	
	//entrada de dados

	for(int i=0;i<TAMANHO;i++){
		printf("Digite a %i idade: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	//processamento
	for(int i=0;i<TAMANHO;i++) soma+=n[1];
	media = (float)soma/TAMANHO;
	
	//saída
	printf("A media e %f\n",media);
	printf("As idades sao: \n");
	for(int i=0;i<=TAMANHO-1;i++){
		printf("%i idade = %i\n",i+1,n[i]);
	}
	
	return 0;
}