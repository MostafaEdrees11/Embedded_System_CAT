/*
Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)
*/

#include <stdio.h>

int main()
{
	int height , n;
	
	/*
	take the height of pyramid from user
	*/
	printf("Enter the height : ");
	scanf("%d",&height);
	
	n = height - 1;
	
	/*
	fisrt for loop is used to print num of lines equal height
	*/	
	for(int i = 0; i < height; i++)
	{
		/*
		second for loop is used to shift # by (h-n) time using spaces
		*/
		for(int j = 0; j < n; j++)
		{
			printf(" ");
		}
		/*
		third for loop is used to print num of # equal (h-n) time
		*/
		for(int i = 0; i < (height-n); i++)
		{
			printf("#");
		}
		/*
		fourth for loop is used to complete the pyramid by # 
		*/
		for(int i = 0; i < (height-n-1); i++)
		{
			printf("#");
		}
		printf("\n");
		n--;
	}
	
	
	return 0;
}