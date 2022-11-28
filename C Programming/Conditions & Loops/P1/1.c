/*
Write a C code to calculate employee salary in a week based on his working hours, hour
rate is 50.
The program will ask the user to enter the working hours, then it will print his salary.
But if the working hours are less than 40 hours, a 10% deduction will be applied.
*/
#include <stdio.h>

int main()
{
	int num_of_hours;
	float salary;
	
	printf("Enter number of working hours : ");
	scanf("%d",&num_of_hours);
	
	salary = num_of_hours * 50 ;
	
	if(num_of_hours < 40)
	{
		salary -= (0.1 * salary);
	}
	
	printf("Salary = %0.3f", salary);
	
	
	return 0;
}