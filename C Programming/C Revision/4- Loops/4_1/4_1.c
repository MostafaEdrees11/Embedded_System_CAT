/**
 ******************************************************************************
 * @file           : 4_1.c
 * @author         : Mostafa Edrees
 * @brief          : Write a C program to input a number and calculate sum of digits
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

int Calc_Sum_Of_Digits(int num);

int main()
{
	int number, sum;
	
	printf("Enter any number to find sum of digits: ");
	scanf("%d",&number);
	
	sum = Calc_Sum_Of_Digits(number);
	
	printf("Sum of digits = %d\n",sum);
	
	return 0;
}

int Calc_Sum_Of_Digits(int num)
{
	int d, sum = 0;
	
	while(num)
	{
		d = num % 10;
		sum += d;
		num /= 10;
	}
	
	return sum;
}

