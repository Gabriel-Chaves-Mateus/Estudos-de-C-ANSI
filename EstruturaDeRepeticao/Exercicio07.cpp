#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero, produto;
	
	printf("Informe o numero que queres a tabuada: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	for(int i =1; i<=10;i++){
		
		produto = numero * i;
		printf("%i X %i = %i\n",numero, i, produto);
	}
	
}