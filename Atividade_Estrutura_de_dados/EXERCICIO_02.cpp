#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int a = 2,b = 3,c = 4;
	
	if(a < b && a < c){
		printf("Menor = a\n");
	} else if(b < c){
		printf("Menor = b\n");
	} else{
		printf("Menor = c\n");
	}
	
	if(a > b && a > c){
		printf("Maior = a\n");
	} else if(b > c){
		printf("Maior = b\n");
	} else{
		printf("Maior = c\n");
	}
	
}