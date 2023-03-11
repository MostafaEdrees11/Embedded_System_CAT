#include <stdio.h>
#include "file.h"


void user(void)
{
	int user_choose;
	
	printf("\t\t***Welcome to User Mode***\n");
	printf("\n------------------------------------------\n");
	printf("Choose The Order:                         \n");
	printf("1 for print all students degrees.         \n");
	printf("2 for print the degree of a specfic user. \n");
	printf("------------------------------------------\n");
	scanf("%d",&user_choose);
	
	switch(user_choose)
	{
		case 1:
		print_students_degrees();
		break;
		
		case 2:
		print_degree();
		break;
	}
}

void print_students_degrees()
{
	ptr = student;
	for(int i = 0; i < 10; i++)
	{
		printf("\nStudent %d: \n",i+1);
		printf("ID: %d\n",(ptr+i)->m_ID);
		printf("Programming Degree: %d\n",(ptr+i)->m_grade_Programming);
		printf("Data Structure Degree: %d\n",(ptr+i)->m_grade_Data_Structure);
		printf("Discrete Math Degree: %d\n",(ptr+i)->m_grade_Discrete_Math);
		printf("Algorithm Degree: %d\n",(ptr+i)->m_grade_Algorithm);
	}
}

void print_degree()
{
	ptr = student;
	
	int Entered_id, i;
	
	printf("Enter Student ID: ");
	scanf("%d",&Entered_id);
	
	for(i = 0; i < 10; i++)
	{
		if(Entered_id == (ptr+i)->m_ID)
		{
			printf("\nStudents Data: \n");
			printf("ID: %d\n",(ptr+i)->m_ID);
			printf("Programming Degree: %d\n",(ptr+i)->m_grade_Programming);
			printf("Data Structure Degree: %d\n",(ptr+i)->m_grade_Data_Structure);
			printf("Discrete Math Degree: %d\n",(ptr+i)->m_grade_Discrete_Math);
			printf("Algorithm Degree: %d\n",(ptr+i)->m_grade_Algorithm);
			break;
		}
	}
	
	if(i > 9)
		printf("\nYou Enter Wrong ID !!!\n");
}