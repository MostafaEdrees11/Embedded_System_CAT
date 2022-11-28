/*
Write a C code that asks the user to enter the result of 3 x 4, In case the user entered the
correct answer the program will print "Thanks", otherwise the program will print "Try
again" until the user enters the correct answer.
*/

#include <stdio.h>

int main()
{
	int entered_value;
	while(1)
	{
		printf("Enter the result of 3 x 4 : ");
		scanf("%d",&entered_value);
		
		if(entered_value == 12)
		{
			printf("Thanks\n");
			break;
		}
		else
			printf("Try again\n");
	}
	
	
	return 0;
}