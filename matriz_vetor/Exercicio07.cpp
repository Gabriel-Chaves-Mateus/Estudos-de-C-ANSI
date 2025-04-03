#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){
	
	int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];

	//entrada
	printf("Digite os dados da matriz A: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite a[%i][%i] =",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite os dados da matriz B: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite a[%i][%i] =",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	//processamento
	for(int linha=0;linha<TAM;linha++){
		for(int coluna=0;coluna<TAM;coluna++){
			c[linha][coluna] = a[linha][coluna] - b[linha][coluna];
		}
	}
	
	//saída
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("%i\t",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}