/**
 ******************************************************************************
 * @file           : 9_1.c
 * @author         : Mostafa Edrees
 * @brief          : write C Program to convert binary number to decimal
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

int Convert_binary_to_decimal(long long num);

int main()
{
	long long bin_number;
	int decimal_number;
	
	printf("Enter a binary number: ");
	scanf("%lld",&bin_number);
	
	decimal_number = Convert_binary_to_decimal(bin_number);
	
	printf("Decimal Number: %d\n",decimal_number);
	
	return 0;
}

int Convert_binary_to_decimal(long long num)
{
	int b;
	int dec_num = 0;
	int n = 1;
	while(num)
	{
		b = num % 10;
		dec_num += (b * n);
		num /= 10;
		n *= 2;
	}
	
	return dec_num;
}