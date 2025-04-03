#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// variáveis globais
char nome[30][10];
int quantidade[10], indice=0;
 
// prototipo das funções
void inserir(void);
void listar(void);
void consultar(void);
void remover(void);
 
int main(void){
	// variáveis locais
	char opcao;
	do{
		system("cls");
		printf("1 - inserir\n");
		printf("2 - listar\n");
		printf("3 - consultar\n");
		printf("4 - remover\n");
		printf("5 - sair\n");
		printf("Digite uma opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);
		switch(opcao){
			case '1':
				inserir();
				break;
			case '2':
				listar();
				break;
			case '3':
				consultar();
				break;
			case '4':
				remover();
				break;
			case '5':
				break;
			default:
				printf("Erro! Opcao invalida\n");
				system("pause");
		}
	}while(opcao!='5');
	return 0;
}
 
// funções
void inserir(void){
	system("cls");
	printf("Digite o nome do produto: ");
	gets(nome[indice]);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%i",&quantidade[indice]);
	fflush(stdin);
	indice++;
	printf("Foi adicionado o produto\n");
	system("pause");
}
 
void listar(void){
	system("cls");
	printf("Nome \tQuantidade\n\n");
	for(int i=0;i<indice;i++){
		printf("%s \t%i\n",nome[i],quantidade[i]);
	}
	system("pause");
}
 
void consultar(void){
	system("cls");
	char nome_consulta[10];
	int encontrado = 0;
	printf("Digite o nome do produto para consulta: ");
	gets(nome_consulta);
	fflush(stdin);

 
	for(int i=0; i<indice; i++){
		if(strcmp(nome[i], nome_consulta) == 0){
			encontrado = 1;
			printf("Produto encontrado:\n");
			printf("Nome \tQuantidade \n");
			printf("%s\t%d\n", nome[i], quantidade[i]);
		}
	}
	if(encontrado == 0){
		printf("Produto nao encontrado!\n");
	}
	system("pause");
}
 
void remover(void){
	system("cls");
	
	listar();
	char nome_consulta[10];
	int encontrado = 0;
	int remover;
	int aux;
	printf("Digite o nome do produto para consulta: ");
	gets(nome_consulta);
	fflush(stdin);
 
	for(int i=0; i<indice; i++){
		if(strcmp(nome[i], nome_consulta) == 0){
			encontrado = 1;
			printf("Qual a quantidade a ser removida: ");
			scanf("%i",&remover);
			fflush(stdin);
			aux = quantidade[i]- remover;
			if(aux < 0){
				printf("Erro! Quantidade insuficiente em estoque. \n");
			}else{
				quantidade[i] = aux;
			}
		}
	}
	if(encontrado == 0){
		printf("Produto nao encontrado!\n");
	}
	system("pause");
}
