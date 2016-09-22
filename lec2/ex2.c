#include <stdio.h>
#include <stdlib.h>

int factorial (int n) { 	
	int i = 1; 	

	while (n > 1) { 		
		i = i * n; 		
		n = n - 1; 	
	} 	
	return i; 
}  

int main (int argc, char *argv[]) { 	
	int fac4 = factorial(4); 	
	int fac5 = factorial(5);

	printf("4! = %d, 5! = %d\n", fac4, fac5); 

	if (argc == 2){
		printf("%d\n", factorial(atoi(argv[1])));
	}

	return 0;
}