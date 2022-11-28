/*
Write a C code that asks the user to enter a number and check if it is an Even or Odd.
*/
#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}
	
	
	return 0;
}