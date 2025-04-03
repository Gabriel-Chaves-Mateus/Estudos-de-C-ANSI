#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main(void){
	int matrizA[TAM][TAM], matrizB[TAM][TAM],opcao;
	
	do{
		printf("1) Inserir dados da matriz A\n");
		printf("2) Inserir dados da matriz B\n");
		printf("3) Somar as: matriz A mais matriz B\n");
		printf("4) Sair\n");
		scanf("%i",&opcao);
		fflush(stdin);
		
			switch(opcao){
				case 1 : 
					printf("Digite os numeros da matriz A: \n");
					for(int i=0; i<TAM;i++){
						for(int j=0;j<TAM;j++){
							scanf("%i",&matrizA[i][j]);
							fflush(stdin);	
						}
					}
					break;
				case 2 :
					printf("Digite os numeros da matriz B: \n");
					for(int i=0; i<TAM;i++){
						for(int j=0;j<TAM;j++){
							scanf("%i",&matrizB[i][j]);
							fflush(stdin);	
						}
					}
					break;
				case 3 : 
					int i=0;
					while(i<TAM){
						
						int j=0;
						while(j<TAM){
							printf("%i\t", matrizA[i][j] + matrizB[i][j]);
							j++;
						}
						printf("\n");
						i++;
					}
					break;
					
					
			}
	} while(opcao != 4);
}