#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fn(){ 	
	int* x = (int *) malloc(10 * sizeof(int));
	*x = 3;
	printf("%d",*x); 	
	x[9] = 0;
	free(x);
}   

int main(){ 	
	fn();

	char *x = (char *) malloc(100);
	strcpy(x,"A");
	printf("%s", x);
	free(x);

	return 0; 
}