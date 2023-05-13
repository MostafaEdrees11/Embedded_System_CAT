/**
 ******************************************************************************
 * @file           : 2.c
 * @author         : Mostafa Edrees
 * @brief          : Write C program to check Leap Year or not
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

void Leap_Year(int year);

int main()
{
	int year, leap_year;
	
	printf("Enter Year: ");
	scanf("%d",&year);
	
	Leap_Year(year);
	
	return 0;
}

void Leap_Year(int year)
{
	if( !(year % 400) || ((year % 100) && !(year % 4)) )
		printf("LEAP YEAR\n");
	else
		printf("NOT LEAP YEAR\n");
}