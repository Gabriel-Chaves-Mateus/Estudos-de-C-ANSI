#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	char sexo;	
	
	//Entrada de dados
	printf("Digite F(feminino) ou M(masculino): ");
	scanf("%c",&sexo);
	fflush(stdin);
	
	//Saida de dados
	switch (sexo){
		case 'F' : case 'f' : printf("Feminino"); break;
		case 'M' : case 'm' : printf("Masculino"); break;
		default : printf("Sexo invalido");
		
	}
	
}