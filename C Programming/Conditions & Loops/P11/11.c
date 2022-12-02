/*
Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)
*/

#include <stdio.h>

int main()
{
	int height;
	
	printf("Enter the height : ");
	scanf("%d",&height);
	
	int i , j;
	
	
	for(i = 1; i <= height; i++)
	{
		for(j = 1; j <= 2*height-1; j++)
		{
			if(j >= height - (i-1) && j <= height + (i-1))
			{
				printf("#");
			}
			else
			{
				printf(" ");				
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}