#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	char letra;
	
	//Entrada de dados
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	//Saida de dados
	switch (letra){
		
		case 'a': case 'A' : printf("Vogal");break;
		case 'i': case 'I' : printf("Vogal");break;
		case 'o': case 'O' : printf("Vogal");break;
		case 'u': case 'U' : printf("Vogal");break;
		case 'e': case 'E' : printf("Vogal");break;
		default : printf("Consoante");break;
	}
	
}