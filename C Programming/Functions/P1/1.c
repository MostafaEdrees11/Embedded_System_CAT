#include <stdio.h>

/*Task : get max of two numbers by using a function
*/

float Get_Max(float a, float b);

int main()
{
	float num1 , num2 , max;
	
	printf("Enter Two numbers : ");
	scanf("%f %f",&num1 ,&num2);
	
	max = Get_Max(num1,num2);
	
	printf("Max = %0.3f",max);
	
	
	return 0;
}


float Get_Max(float a, float b)
{
	float max;
	max = (a>b? a : b);
	
	return max;
}