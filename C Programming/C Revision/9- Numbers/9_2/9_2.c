/**
 ******************************************************************************
 * @file           : 9_1.c
 * @author         : Mostafa Edrees
 * @brief          : Write a C program to input any number from user and 
 *					 check whether nth bit of the given number is 
 *					 set (1) or not (0)
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

void Check_Nth_Bit(int num, int bit_no);

int main()
{
	int number, bit_number;
	
	printf("Enter any number: ");
	scanf("%d",&number);
	
	printf("Enter ntn bit to check (0-31): ");
	scanf("%d",&bit_number);
	
	Check_Nth_Bit(number,bit_number);
	
	return 0;
}

void Check_Nth_Bit(int num, int bit_no)
{
	int bit_value;
	
	bit_value = ((num & (1 << bit_no)) >> bit_no);
	
	printf("The bit %d is set to %d\n",bit_no ,bit_value);
}