#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	int i1, i2, i3, i4, media;
	
	printf("Digite a idade de quatro alunos: \n");
	scanf("%i",&i1);
	fflush(stdin);
	scanf("%i",&i2);
	fflush(stdin);
	scanf("%i",&i3);
	fflush(stdin);
	scanf("%i",&i4);
	fflush(stdin);
	
	//Processamento de dados
	media = (i1 + i2 + i3 + i4) / 4;
	
	//Saida de dados
	if(media < 25){
		printf("Turma jovem");
	} else if(media < 40){
		printf("Turma adulta");
	} else{
		printf("Turma idosa");
	}
	
}