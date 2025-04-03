#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	int dia;
	
	//Entrada de dados
	printf("Digite o numero do dia da semana: ");
	scanf("%i",&dia);
	fflush(stdin);
	
	//Saida de dados
	switch(dia){
		case 1 : printf("Domingo"); break;
		case 2 : printf("Segunda-feira");break;
		case 3 : printf("Terca-feira");break;
		case 4 : printf("Quarta-feira");break;
		case 5 : printf("Quinta-feira");break;
		case 6 : printf("Sexta-feira");break;
		case 7 : printf("Sabado");break;
		default : ("Valor invalido");		
	}
	
}