#include <stdio.h>

/*
Write a C code that will ask the user to enter a value then print it.
*/


int main()
{

	int num;
	float real_num;
	char ch;
	
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("Enter a real number: ");
	scanf("%f",&real_num);
	
	fflush(stdin); fflush(stdout);
	
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	printf("\nOutput:\n");
	printf("Number = %d\n",num);
	printf("Real Number = %0.3f\n",real_num);
	printf("Character: %c\n",ch);
	
	
	return 0;
}