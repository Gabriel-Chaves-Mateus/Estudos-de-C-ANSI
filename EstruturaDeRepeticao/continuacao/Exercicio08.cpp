#include <stdio.h>
#include <stdlib.h>

int main(void){

	int paisA, paisB, i;
	float taxaA, taxaB;	
	paisA = 80000;
	paisB = 200000;
	taxaB = 0.015;
	taxaA = 0.03;
	
	i = 0;
	
	/*
	for(paisA = 80000;paisA<paisB;paisA+=paisA * taxaA){
		paisB +=paisB*taxaB;
		printf("Habitantes do pais A: %i \n",paisA);
		printf("Habitantes do pais B: %i \n",paisB);
		i++;
	}
	*/
	
	while(paisA<paisB){
		
		printf("Habitantes do pais A: %i \n",paisA);
		printf("Habitantes do pais B: %i \n",paisB);
		paisA += paisA * taxaA;
		paisB += paisB * taxaB;
		i++;
	}

	printf("A quantidade de anos e %i", i);
}