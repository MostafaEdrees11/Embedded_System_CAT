#include <stdio.h>

/*
Write a code that scans 3 numbers from the user and prints them in reversed order.
*/

int main()
{
	
	int num1, num2, num3;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&num1 ,&num2 ,&num3);
	
	printf("The 3 numbers in reversed order: %d %d %d\n",num3 ,num2 ,num1);
	
	return 0;
}