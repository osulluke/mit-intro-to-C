#include <stdio.h>
#include <string.h>
#include "stud.h"

void main(void){

	struct student joe = {12,"Joesph G Levitt"};
	struct student sally = {15, "Sally Field"};

	struct student luke;
	strcpy(luke.name,"Luke O'Sullivan");
	luke.age = 35;

	print_student(joe);
	print_student(sally);
	print_student(luke);

	return;
}