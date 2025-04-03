#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1, n2;
	
	printf("Informe dois numeros inteiros: \n");
	scanf("%i",&n1);
	fflush(stdin);	
	scanf("%i",&n2);
	fflush(stdin);
	
	if((n1 - n2 == 1) || (n2 - n1 == 1)){
		printf("Nenhum numero entre eles");
	}else{
		if(n1>n2){
			for(int i = n2 +1; i<n1;i++){
				if(i % 2 == 0){
					printf("%i ",i);
				}
			}
		} else if(n2>n1){
			
			for(int i = n1 +1; i<n2;i++){
				if(i % 2 == 0){
					printf("%i ",i);
				}
			}
			
		} else{
			printf("Numeros iguais");
		}
	}
}