#include <stdlib.h>
#include <stdio.h>

void fn(){ 	
	int* x = malloc(10 * sizeof(int));
	printf("%d",*x); 	
	x[10] = 0;
	x[31] = 0;
}   

int main(){ 	
	fn();

	char *x = (char*) malloc(100);
	printf("%s", x);

	return 0; 
}