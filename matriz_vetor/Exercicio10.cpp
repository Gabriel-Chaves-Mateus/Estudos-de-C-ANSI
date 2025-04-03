#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(void){
	int n[TAM];
	//variáveis
	
	for(int i=0; i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	
	//processamento
	for(int i=0;i<TAM;i++){
		for(int j=i+1;j<TAM;j++){
			if(n[i]>n[j]){
				int aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}
	}
	printf("Os numeros sao: ");
	for(int i=0;i<TAM;i++){
		printf("%i ",n[i]);
	}
}