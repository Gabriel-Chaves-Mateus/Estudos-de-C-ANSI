#include <stdio.h>
#include <stdlib.h>

int main(void){

	int cds;
	float valorTotal, valor, media;
	
	printf("Informe a quantidade de CDs: ");
	scanf("%i",&cds);
	fflush(stdin);
	
	valorTotal = 0;
	for(int i = 1; i<=cds;i++){
		printf("Informe o valor: ");
		scanf("%f",&valor);
		fflush(stdin);
		valorTotal = valorTotal + valor;
	}
	
	media = valorTotal/cds;
	printf("O valor medio investido e = %.2f\n",media);
	printf("O valor total investido e = %.2f",valorTotal);
	
}