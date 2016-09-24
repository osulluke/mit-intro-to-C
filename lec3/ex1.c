#include <stdio.h>

void square(int *num) { 	
	*num = *num * *num;
}  

int main() { 	
	int x = 5;

	square(&x);
	printf("%d\n", x);

	return 0;
}