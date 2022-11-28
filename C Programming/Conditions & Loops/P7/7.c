/*
Write C code to read 10 numbers from the user and find their summation and average.
*/

#include <stdio.h>

int main()
{
	float number , sum = 0 , average;
	
	for(int i = 0; i < 10; i++)
	{
		printf("Enter the %d number : ",i+1);
		scanf("%f",&number);
		sum += number;
	}
	
	average = sum / 10 ;
	
	printf("Sum = %0.3f\n",sum);
	printf("Average = %0.3f\n",average);
	
	return 0;
}