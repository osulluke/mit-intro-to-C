#include <stdio.h>

int main(int argc, char ** argv){

#ifdef orig
	for (int i = 1; i < argc; i++) {         
		printf("%s\n", argv[i]);
	}
#endif

#ifdef rewrite
	int i = 0;
	start:
	if (i < argc){
		printf("%s ", argv[i]);
		i++;
		goto start;
	}
	printf("\n");
#endif

	return 0; 
}