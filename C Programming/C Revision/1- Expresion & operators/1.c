/**
 ******************************************************************************
 * @file           : 1.c
 * @author         : Mostafa Edrees
 * @brief          : Write a C program to take any number from user and 
 *					 count the total number of zeros (0s) and ones (1s)
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

void Count_number_Zeros_Ones(int num);

int main()
{
	int number;
	
	printf("Enter any number: ");
	scanf("%d",&number);
	
	Count_number_Zeros_Ones(number);
	
	return 0;
}

void Count_number_Zeros_Ones(int num)
{
	int num_ones = 0, num_zeros = 0;
	
	for(int i = 0; i < 32; i++)
	{
		if(num & (1 << i))
			num_ones++;
		else
			num_zeros++;
	}
	
	printf("Total Zero bits is %d\n",num_zeros);
	printf("Total One bits is %d\n",num_ones);
	
}