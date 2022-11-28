/*
Write a C to calculate the factorial of an integer entered by the user using a while loop.
*/

#include <stdio.h>

int main()
{
	int num , factorial = 1;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num == 1 || num == 0)
	{
		printf("Factorial = 1\n");
	}
	else if(num < 0)
	{
		printf("There is not factorial for negative numbers\n");
	}
	else
	{
		while(num > 1)
		{
			factorial *= num;
			num--;
		}
		printf("Factorial = %d\n",factorial);
	}
	
	
	return 0;
}