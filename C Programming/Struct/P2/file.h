#ifndef __File_H__
#define __File_H__

//function prototypes
void start(void);
void admin(void);
void user(void);
void Edit_degrees(void);
void print_students_degrees(void);
void print_degree(void);
void fill_students_degrees(int id, int programming, int data, int discrete, int algorthim);


//struct definition
struct SStudents
{
	int m_ID;
	int m_grade_Programming;
	int m_grade_Data_Structure;
	int m_grade_Discrete_Math;
	int m_grade_Algorithm;
};


struct SStudents student[10];
struct SStudents *ptr;


#endif