#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void){
	
	int n;
	
	n = 5;
		if(n == 0){
			n = n+1;
		} else if(n%2 == 0){
			n = n+2;
		} else if(n%4 != 0){
			n = n + 4;
		} else {
			n = 0;
		}
	
	printf("%i\n",n);
}