#include <stdio.h>
#include <string.h>

/*
Author: Mostafa Edrees
Date: 8/3/2023
Required: Write a C code defines a structure for employees that contains his salary, bonus and
		  deductions. The program shall ask the user to enter this information for three employees
		  (Mohsen, Maged and Mariam). Then the program will print the total values supplied by
		  the finance team.
*/

struct SEmployees
{
	char m_name[10];
	int m_salary;
	int m_bonus;
	int m_deduction;
};


int main()
{
	int total = 0;
	struct SEmployees employee[3];
	
	strcpy(employee[0].m_name,"Mohsen");
	strcpy(employee[1].m_name,"Maged");
	strcpy(employee[2].m_name,"Mariam");
	
	for(int i = 0; i < 3; i++)
	{
		printf("\nEnter the detalis of %s: \n",employee[i].m_name);
		
		printf("Enter the Salary: ");
		scanf("%d",&employee[i].m_salary);
		
		printf("Enter the Bonus: ");
		scanf("%d",&employee[i].m_bonus);
		
		printf("Enter the Deduction: ");
		scanf("%d",&employee[i].m_deduction);
	}
	
	for(int i = 0; i < 3; i++)
		total = total + employee[i].m_salary + employee[i].m_bonus - employee[i].m_deduction;
	
	printf("\nTotal = %d\n",total);
	
	
	return 0;
}