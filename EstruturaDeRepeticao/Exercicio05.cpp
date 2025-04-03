#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int turmas, alunos, somaAlunos;
	float media;
	
	printf("Informe a quantidade de turmas: ");
	scanf("%i",&turmas);
	fflush(stdin);
	
	somaAlunos = 0;
	for(int i = 1; i<=turmas;i++){
		printf("Informe a quantidade de alunos: ");
		scanf("%i",&alunos);
		
		if(alunos<=40){
			somaAlunos = somaAlunos + alunos;
		} else{
			printf("Nao pode ter mais de 40 alunos\n");
			i-=1;
		}
	}
	
	media = (float)somaAlunos/turmas;
	printf("A media e = %.2f",media);
	
	return 0;
}