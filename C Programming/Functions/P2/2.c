#include <stdio.h>

/*Task : swap two global variables by using a function
*/

int num1 = 5;
int num2 = 10;

void swap_two_numbers(void);

int main()
{
	
	swap_two_numbers();
	
	return 0;
}

//solution by using temb variable
void swap_two_numbers(void)
{
	int t;
	
	printf("Before swapping\n");
	printf("Num1 = %d\n",num1);
	printf("Num2 = %d\n",num2);
	
	t = num1;
	num1 = num2;
	num2 = t;
	
	printf("After swapping\n");
	printf("Num1 = %d\n",num1);
	printf("Num2 = %d\n",num2);
}


//solution without using temb variable
/*void swap_two_numbers(void)
{
	
	printf("Before swapping\n");
	printf("Num1 = %d\n",num1);
	printf("Num2 = %d\n",num2);
	
	
	// 1st number --> x = 5    2nd number --> y =10
	// x = x + y  --> x = 5 + 10 = 15
	// y = x - y  --> y = 15 - 10 = 5
	// x = x - y  --> x = 15 - 5 = 10
	//then the two number is swaped
	//we can replace (+ and -) with (* and /) 
	//we can use XOR (^) too
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("After swapping\n");
	printf("Num1 = %d\n",num1);
	printf("Num2 = %d\n",num2);
}*/