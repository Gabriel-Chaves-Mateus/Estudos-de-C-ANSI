#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	char periodo;
	
	//Entrada de dados
	printf("Em que turno voce estuda?\n");
	printf("Digite [M] para matutino, [V] para vespertino e [N] para noturno\n");
	scanf("%c",&periodo);
	
	//Saida de dados
	switch(periodo){
		case 'M' : case 'm' : printf("Bom dia!"); break;
		case 'V' : case 'v' : printf("Boa tarde!"); break;
		case 'N' : case 'n' : printf("Boa noite!"); break;
		default : printf("Valor invalido!");
	}
	
}