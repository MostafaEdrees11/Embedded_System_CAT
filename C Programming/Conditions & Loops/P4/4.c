/*
Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system
*/

#include <stdio.h>


int main()
{
	float grade;
	
	printf("Enter your grade : ");
	scanf("%f",&grade);
	
	if(grade >= 85)
		printf("Excellent\n");
	else if(grade >= 75 && grade < 85)
		printf("very good\n");
	else if(grade >= 65 && grade < 75)
		printf("Good\n");
	else if(grade >= 50 && grade < 65)
		printf("D");
	else
		printf("Fail\n");
	
	
	return 0;
}