#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	int a = 2, b = 3, c = pow(b,2), diferenca = (a % b) - (b % a);
	
	printf("%i + %i = %i \n",a,b,a+b);
	printf("%i * %i^2 = %i \n", a, b, a * c);
	printf("Media = %i", a + b/2);
	printf("Diferenca entre os modulos = %f", diferenca);
	
	return 0;
	
}