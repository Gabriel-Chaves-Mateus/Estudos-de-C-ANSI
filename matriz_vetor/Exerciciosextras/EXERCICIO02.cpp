#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int M,N, mat[M][N],vetor[M];
	
	printf("Qual a quantidade de linhas da matriz: ");
	scanf("%i",&M);
	fflush(stdin);
	printf("Qual a quantidade de colunas da matriz: ");
	scanf("%i",&N);
	fflush(stdin);
	
	for(int i=0;i<M;i++){
		printf("Digite os elementos da %ia linha: \n",i+1);
		for(int j=0; j<N; j++){
			scanf("%i",&mat[i][j]);
		}
	}	
	
	printf("\nVetor Gerado: \n");
	for(int i=0;i<M;i++){
		int soma = 0;
		for(int j=0;j<N;j++){
			soma += mat[i][j];	
		}
		vetor[i] = soma;
		printf("%i\n",vetor[i]);     
	}
}