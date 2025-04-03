#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int N, M, cont;
	
	printf("Qual a ordem da matriz?");
	scanf("%i",&N);
	fflush(stdin);
	
	int mat[N][N];
	M = N * N;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Elemento [%i, %i]: ",i,j);
			scanf("%i",&mat[i][j]);
			fflush(stdin);
		}
	}
	
	printf("Diagonal principal: \n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i == j){
				printf("%i ",mat[i][j]);
			}
		}
	}
	
	printf("\n");
	
	cont = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(mat[i][j] < 0){
				cont++;
			}
		}
	}
	
	printf("Quantidade de negativos: %i",cont);
}