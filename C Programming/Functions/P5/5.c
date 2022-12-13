#include <stdio.h>

/* Task : function to write fibonacci
*/ 

//functions prototypes
int calc_fibo(int n);
void print_fibonacci_series(int n);

int main()
{
	
	int number , fibonacci;
	
	printf("Enter a number : ");
	scanf("%d",&number);
	
	fibonacci = calc_fibo(number);
	
	printf("fibonacci of %d is equal %d\n",number ,fibonacci);
	
	printf("\nFibbonacci Series : \n");
	print_fibonacci_series(number);
	
	return 0;
}

int calc_fibo(int n)
{
	//fibonacci --> f(n) = f(n-1) + f(n-2)
	//f(0) = 0, f(1) = 1
	//fibonacci series = 0 1 1 2 3 5 8 13 21 34 ........
	
	if(n == 1)
	{
		return 1;
	}
	else if(n == 0)
	{
		return 0;
	}
	else
	{
		//recursive function
		return calc_fibo(n-1) + calc_fibo(n-2);
	}
}

void print_fibonacci_series(int n)
{
	int fibonacci;
	
	//we calculate fibonacci from 0 to n and print them
	for(int i = 0; i <= n; i++)
	{
		printf("%d ",calc_fibo(i));
	}
	printf("\n");
	
}