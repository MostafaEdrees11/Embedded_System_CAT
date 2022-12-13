#include <stdio.h>

/*Task : gets the number of the digits in a given number
*/

int num_of_digits(int x);

int main()
{
	
	int number , number_of_digits;
	
	printf("Enter a number : ");
	scanf("%d",&number);
	
	number_of_digits = num_of_digits(number);
	
	printf("Number of digits = %d\n",number_of_digits);
	
	return 0;
}

int num_of_digits(int x)
{
	int counter = 0;
	
	//we make a loop until number = 0
	//123 --> 123 /10 = 12 (1st digit) --> 12 / 10 = 1 (2nd digit) --> 1 / 10 = 0 (3rd digit) (stop)
	// if we need the value of digits we make --> digit = n % 10
	//123 --> d1 = 123 % 10 = 3 --> d2 = 12 % 10 = 2 --> d3 = 1 % 10 = 1
	
	while(x > 0)
	{
		x = x / 10;
		counter++;
	}
	
	return counter;
	
}