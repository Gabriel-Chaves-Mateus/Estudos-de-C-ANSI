#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int matriz[4][4], K;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Digite um numero: ");
			scanf("%i",&matriz[i][j]);
			fflush(stdin);
		}
	}
	
	printf("Digite o numero que multiplicara a diagonal: ");
	scanf("%i",&K);
	fflush(stdin);
	
	
	for(int i=0;i<4;i++){
		matriz[i][i] *= K;
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%i\t",matriz[i][j]);
		}
		printf("\n");
	}
}