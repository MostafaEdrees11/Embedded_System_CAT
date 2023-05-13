/**
 ******************************************************************************
 * @file           : 3.c
 * @author         : Mostafa Edrees
 * @brief          : write C Program to Make a Simple Calculator Using switch...case
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

int main()
{
	char op;
	float num1, num2, result;
	
	printf("Enter an operator (+,-,*,/): ");
	scanf("%c",&op);
	
	printf("Enter 1st number: ");
	scanf("%f",&num1);
	
	printf("Enter 2nd number: ");
	scanf("%f",&num2);
	
	switch(op)
	{
		case '+':
		result = num1 + num2; 
		break;
		
		case '-':
		result = num1 - num2; 
		break;
		
		case '*':
		result = num1 * num2; 
		break;
		
		case '/':
		result = num1 / num2; 
		break;
	}
	
	printf("%0.2f %c %0.2f = %0.2f\n",num1 ,op ,num2 ,result);
	
	
	return 0;
}