
/*
3. Construa um programa que define uma estrutura de peça, que 
poderá ser usado para outros programas, deverá conter atributos 
como: código, nome, cor, peso, preço. Também uma função entrada 
de dados e uma função de saídas de dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include "EXERCICIO03v2.h"

int main(void){

	int indice=0, opcao;
	Peca bd[TAM];
	
	do{
		system("cls");
		printf("1 - Inserir dados\n");
		printf("2 - Lista dados\n");
		printf("3 - Sair\n");
		printf("\nDigite um opcao: ");
		scanf("%i",&opcao);
		fflush(stdin);
		switch(opcao){
			case 1:
				if(indice<TAM){
					bd[indice]=entrada();
					printf("Dados inseridos no bd[%i] com sucesso.\n",indice);
					indice++;
				}else{
					printf("Chegou no limite dos dados\n");
				}
				break;
			case 2:
				saida(bd,indice);
				break;
			case 3:
				break;
			default: 
				printf("Erro! Nao tem esta opcao.\n");
		}
		system("pause");
	}while(opcao!=3);
	
	return 0;
}


