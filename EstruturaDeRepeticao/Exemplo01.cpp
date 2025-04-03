#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//for
	for(int n = 1; n <= 10; n++){
		printf("%i\n", n);
	}
	
	int n = 1;
	
	//while
	while(n <= 10){
		printf("%i \n",n);
		n++;
	}
	
	//do while
	n =1;
	do{
		printf("%i \n",n);
		n++;
	} while(n<=10);
	
	//manual
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
	printf("7\n");
	printf("8\n");
	printf("9\n");
	printf("10\n");
	
	return 0;
}