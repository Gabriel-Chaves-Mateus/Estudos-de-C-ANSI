#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n; 
	float nota, notaTotal, media;
	
	printf("Quantas notas serao digitadas? ");
	scanf("%i",&n);
	fflush(stdin);
	
	notaTotal = 0;
	for(int i = 1; i<=n; i++){
		printf("Informe a %i nota: ",i);
		scanf("%f",&nota);
		fflush(stdin);
		notaTotal += nota;
	}
	
	media = notaTotal/n;
	printf("A media e = %.2f",media);
}