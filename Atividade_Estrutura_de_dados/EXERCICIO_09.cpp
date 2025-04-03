#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int fibonacci[11], soma[11];
	
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	 for(int i = 1; i<=10; i++){
	 	fibonacci[i+1] = fibonacci[i] + fibonacci[i-1];
		printf("%i + %i = %i \n",fibonacci[i-1],fibonacci[i], fibonacci[i+1]); 
	 }
	 
	 
}