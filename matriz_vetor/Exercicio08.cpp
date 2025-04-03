#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int matriz [3][3], K;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite um numero: ");
			scanf("%i",&matriz[i][j]);
			fflush(stdin);
		}
	}
	
	printf("Digite o numero que diminuira a diagonal: ");
	scanf("%i",&K);
	fflush(stdin);
	
//	for(int i=0;i<3;i++){
//		matriz[i][i] -= K;
//	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i == j){
				matriz[i][j] = matriz[i][j] - K;
			}
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i\t",matriz[i][j]);
		}
		printf("\n");
	}
}