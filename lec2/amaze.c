#include <stdio.h>
#include <stdlib.h>

void amaze1(void){
	for(int i = 1; i<10; i+=2){
		printf("%d ", i);
	}
	printf("\n");
}

void amaze2(void){
	int i=0;
	start:
	while (i<10){
		i++;
		if (i % 2 == 0){
			goto start;
		}
		else {printf("%d ", i);}
	}
	printf("\n");
}

void amaze3(void){
	int i = 0;

	start:
	if (i<10){
		if(i % 2) goto odd;
		i++;
		goto start;
		odd:
		printf("%d ", i++);
		goto start;
	}
	printf("\n");
}

void amaze4(void){
	int i = 0;
	int num_type = 0;

	start:
	if (i >= 10){
		goto end;
	}
	if (i % 2 == 0){
		num_type = 0;
	}
	else
	{
		num_type = 1;
	}
	switch(num_type){
		case 0:
			i++;
			goto start;
			break;
		case 1:
			printf("%d ",i++);
			goto start;
			break;
	}
	end : printf("\n");
	return;
}

void amaze5(void){
	void even(int a){
		if (a % 2 == 0) {
			printf("%s"," ");
		}
	}

	void odd (int a){
		if (a % 2 == 1){
			printf("%d",a);
		}
	}

	for(int n = 1; n<10; n++){
		even(n);
		odd(n);
	}
	printf("\n");
	return;
}

void amaze6(void){
	int i = 1;

	do {
		if (i%2==0) printf("%s"," ");
		else printf("%d",i);
	} while (++i < 10);
	printf("\n");
	return;
}

void amaze7(void){
	int i = 0;

	void even(void){
		printf("%s"," ");
		return;
	}

	void odd(int a){
		printf("%d", a);
		return;
	}

	start:
	++i;
	if (i==1) odd(i);
	else if(i==2) even();
	else if(i==3) odd(i);
	else if(i==4) even();
	else if(i==5) odd(i);
	else if(i==6) even();
	else if(i==7) odd(i);
	else if(i==8) even();
	else if(i==9) odd(i);
	else if(i>=10) goto end;
	goto start;
	end: printf("\n");
	return;
}

int main(void){
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	amaze7();

	return 0;
}