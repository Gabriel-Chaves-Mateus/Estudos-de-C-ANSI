#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	int n1, n2, n3;
	
	//Entrada de dados
	printf("Escreva tres valores inteiros:\n");
	scanf("%i",&n1);
	fflush(stdin);
	scanf("%i",&n2);
	fflush(stdin);
	scanf("%i",&n3);
	fflush(stdin);	
	
	//Saida de dados
	if((n1>n2) && (n1>n3)){
		if (n3>n2){
			printf("%i %i %i", n1, n3, n2);
		}else{
			printf("%i %i %i", n1, n2, n3);
		}
	} else if((n2>n1) && (n2>n3)){
		if (n1>n3){
			printf("%i %i %i", n2, n1, n3);
		}else{
			printf("%i %i %i", n2, n3, n1);
		}
	} else if((n3>n2) && (n3>n1)){
		if(n2>n1){
			printf("%i %i %i", n3, n2, n1);
		}else{
			printf("%i %i %i", n3, n1, n2);
		}
	}
}