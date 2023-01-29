#include <stdio.h>

/*
Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00
*/

int main()
{
	
	float money, total;
	
	printf("Enter an amount: ");
	scanf("%f",&money);
	
	total = money + (money * 0.05);
	
	printf("Total with tax added: $ %0.2f\n",total);
	
	return 0;
}