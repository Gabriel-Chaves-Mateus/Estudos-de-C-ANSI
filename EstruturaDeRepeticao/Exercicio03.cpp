#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, cont, maior, menor;
	cont = 0;
	
	printf("Informe dez numeros inteiros: ");
	scanf("%i",&n);
	maior = n;
	menor = n;

	while(cont<10-1){
		
		if(n>maior){
			maior = n;
		}
		
		if(n<menor){
			menor = n;
		}
		
		scanf("%i",&n);
			
		cont++;
	}
	printf("A diferença e = %i", maior - menor);
}

/*

	for(int = 1; i<=10; i++){
		scanf("%i",n);
		
		if(i==1){
			maior = n;
			menor = n;
		} else{
			if(n>maior){
				maior =n;
			}
			if(n<menor){
				menor = n;
			}
		}
	}
		
*/