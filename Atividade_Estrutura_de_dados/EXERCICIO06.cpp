#include <stdio.h>
#include <stdlib.h>

int main(void){

	int base = 2, exp = 3, pot;
	
	pot = 1;
	for(int i = 1; i <=exp; i++){
		pot = pot * base;
	}
	printf("Potencia = %i", pot);
	
}