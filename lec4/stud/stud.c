#include <stdio.h>
#include "stud.h"

void print_student(struct student stud){
	printf("Student Name: %s\n", stud.name);
	printf("Student Age: %d\n", stud.age);
	printf("\n");

	return;
}