#include <stdio.h>
#include "file.h"


void admin(void)
{
	int admin_choose;
	
	printf("\t\t***Welcome to Admin Mode***\n");
	printf("\n------------------------------------------\n");
	printf("Choose The Order:                         \n");
	printf("1 for Edit student degree.                \n");
	printf("------------------------------------------\n");
	scanf("%d",&admin_choose);
	
	switch(admin_choose)
	{
		case 1:
		Edit_degrees();
		break;
	}
}

void Edit_degrees(void)
{
	ptr = student;
	
	int Entered_id, i;
	
	printf("Enter Student ID: ");
	scanf("%d",&Entered_id);
	
	for(i = 0; i < 10; i++)
	{
		if(Entered_id == (ptr+i)->m_ID)
		{
			printf("\nEnter the degree of the student in Programming: ");
			scanf("%d",&(ptr+i)->m_grade_Programming);
			printf("Enter the degree of the student in Data Structure: ");
			scanf("%d",&(ptr+i)->m_grade_Data_Structure);
			printf("Enter the degree of the student in Discrete Math: ");
			scanf("%d",&(ptr+i)->m_grade_Discrete_Math);
			printf("Enter the degree of the student in Algorithm Degree: ");
			scanf("%d",&(ptr+i)->m_grade_Algorithm);
			break;
		}
	}
	
	if(i > 9)
		printf("\nYou Enter Wrong ID !!!\n");
}