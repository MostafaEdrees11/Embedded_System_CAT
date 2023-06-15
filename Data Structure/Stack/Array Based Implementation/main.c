/**
 **********************************************************************************
 * @file           : main.c >> Array-Based Implementation
 * @author         : Mostafa Edrees
 * @brief          : main.c that consists test for the implementation level 
 * @date           : 14/6/2023
 **********************************************************************************
**/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"

int main()
{
	int element;
	
	Stack s;
	CreatStack(&s);
	
	do
	{
		printf("\n-----------------------------------------------\n");
		printf("1. Clear the stack.\n");
		printf("2. Read an element then Push it.\n");
		printf("3. Pop an element then display it.\n");
		printf("4. What is the stack size?\n");
		printf("5. Exit.\n");
		printf("-----------------------------------------------\n");
		
		int choose;
		printf("\nEnter Your Order: ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
			ClearStack(&s);
			break;
			
			case 2:
			if(!StackFull(&s))
			{
				printf("Enter the value of element: ");
				scanf("%d",&element);
				Push(element,&s);				
			}
			else
				printf("The Stack is Full !!\n");
			break;
			
			case 3:
			if(!StackEmpty(&s))
			{
				Pop(&element,&s);
				printf("the poped element: %d\n",element);				
			}
			else
				printf("The Stack is Empty !!\n");
			break;
			
			case 4:
			printf("Stack Size = %d\n",StackSize(&s));
			break;
			
			case 5:
			exit(1);
			break;
		}
		
		printf("Enter y to continue.... \n");
	}while(getch() == 'y');
	
	return 0;
}