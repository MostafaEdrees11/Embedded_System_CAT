#include <stdio.h>

/*
Write a code that takes 2 numbers and print 
the arithmetical, logical and bitwise operations.
*/

int main()
{

	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d",&num1 ,&num2);
	
	printf("\nThe Arithmetical Operations: \n");
	printf("%d + %d = %d\n",num1 ,num2 ,num1+num2);
	printf("%d - %d = %d\n",num1 ,num2 ,num1-num2);
	printf("%d * %d = %d\n",num1 ,num2 ,num1*num2);
	printf("%d / %d = %d\n",num1 ,num2 ,num1/num2);
	printf("%d %% %d = %d\n",num1 ,num2 ,num1%num2);
	
	
	printf("\nThe Logical Operations: \n");
	printf("%d && %d = %d\n",num1 ,num2 ,num1&&num2);
	printf("%d || %d = %d\n",num1 ,num2 ,num1||num2);
	printf("! %d = %d\n",num1 ,!num1);
	printf("! %d = %d\n",num2 ,!num2);
	
	
	printf("\nThe Bitwise Operations: \n");
	printf("%d & %d = %d\n",num1 ,num2 ,num1&num2);
	printf("%d | %d = %d\n",num1 ,num2 ,num1|num2);
	printf("~ %d = %d\n",num1 ,~num1);
	printf("~ %d = %d\n",num2 ,~num2);
	
	return 0;
}