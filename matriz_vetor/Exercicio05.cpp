#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char palavra[30][15];
	
	for(int i =0;i<15;i++){
		printf("Escreva uma palavra: ");
		gets(palavra[i]);
		fflush(stdin);
	}
	
	for(int i = 14; i>=0;i--){
		printf("%s\n",palavra[i]);
	}
	
	
}