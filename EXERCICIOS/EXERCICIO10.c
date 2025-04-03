#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variaveis
	float x, y;
	int operador;
	
	//Entrada de dados
	printf("Informe os operadandos: \n");
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	fflush(stdin);
	
	printf("[1] - Adicao\n");
	printf("[2] - Subtracao\n");
	printf("[3] - Multiplicacao\n");
	printf("[4] - Divisao\n");
	printf("[5] - Fim\n");
	scanf("%i",&operador);
	fflush(stdin);

	//Saide e processamento de dados
	switch(operador){
		case 1 : printf("%.2f + %.2f = %.2f",x,y, x + y); break;
		case 2 : printf("%.2f - %.2f = %.2f",x,y, x - y); break;
		case 3 : printf("%.2f X %.2f = %.2f",x,y, x * y); break;
		case 4 :
			if(y == 0){
				printf("Erro de matematica");
			} else{
				printf("%.2f / %.2f = %.2f",x,y, x / y); 
			}
			break;
		case 5 : printf("Fim do programa"); break;
		default : printf("Operador invalido");		
	}
}
