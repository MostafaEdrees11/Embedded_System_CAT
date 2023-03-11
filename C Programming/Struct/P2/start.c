#include <stdio.h>
#include <conio.h>
#include "file.h"

void start(void)
{
	
	fill_students_degrees(1,48,45,50,43);
	fill_students_degrees(2,49,47,50,46);
	fill_students_degrees(3,50,48,50,49);
	fill_students_degrees(4,40,41,44,35);
	fill_students_degrees(5,42,39,45,36);
	fill_students_degrees(6,35,30,40,33);
	fill_students_degrees(7,37,40,45,42);
	fill_students_degrees(8,46,42,50,41);
	fill_students_degrees(9,48,47,49,40);
	fill_students_degrees(10,30,25,40,30);
	
	
	
	
	int mode_choose;
	
	do
	{
		printf("\t\t\t****Welcome****\n");
		printf("-----------------\n");
		printf("Choose The Mode: \n");
		printf("1 for admin      \n");
		printf("2 for user       \n");
		printf("-----------------\n");
		scanf("%d",&mode_choose);
		
		switch(mode_choose)
		{
			case 1:
			admin();
			break;
			
			case 2:
			user();
			break;
		}
		
		printf("\nEnter y if you want to continue...\n");
	}while(getch() == 'y');
}

void fill_students_degrees(int id, int programming, int data, int discrete, int algorthim)
{
	ptr = student;
	static int i = 0;
	if(i < 10)
	{
		(ptr+i)->m_ID = id;
		(ptr+i)->m_grade_Programming = programming;
		(ptr+i)->m_grade_Data_Structure = data;
		(ptr+i)->m_grade_Discrete_Math = discrete;
		(ptr+i)->m_grade_Algorithm = algorthim;
	}
	i++;
}