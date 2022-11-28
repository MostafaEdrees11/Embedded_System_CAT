/*
Write a C code to display the multiplication table of a given integer by the userl.
*/

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= 12; i++)
	{
		printf("%d * %d = %d\n",num ,i ,num*i);
	}
	
	
	return 0;
}