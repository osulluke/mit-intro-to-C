#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void triangle(int a){
	int n = 0;

	n = (a*(a+1) / 2);
	printf("%d\n", n);
}

int main(int argc, char *argv[]){
#ifdef NORMAL
	int i;
	while (i < argc) {
		triangle(atoi(argv[i]));
		i++;
	}
#endif
#ifdef ONEHUNDRED

	for (int m = 0; m < 100; m++){
		triangle(m);
	}

#endif	
	return 0;
}