#include <stdio.h>
#include <stdlib.h>

int main(void){
	char caracter[10];
	int consoante = 0;
	
	for(int i=0;i<10;i++){
		printf("Escreva um caracter: ");
		scanf("%c",&caracter[i]);
		fflush(stdin);
	}
	
	printf("Consoantes: \n");
	for(int i=0;i<10;i++){
		switch(caracter[i]){
			case'a': break;
			case'e': break;
			case'i': break;
			case'o': break;
			case'u': break;
		 	default:
				printf("%c\n",caracter[i]);
				consoante += 1;
				break;
	}
	}
	printf("Consoantes digitadas: %i",consoante);
}