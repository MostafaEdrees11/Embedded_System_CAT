/**
 **********************************************************************************
 * @file           : main.c >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : main.c that consists test for the implementation level 
 * @date           : 15/6/2023
 **********************************************************************************
**/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"

void Display(int e)
{
	printf("%d ",e);
}

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
		printf("5. Display the Stack Top.\n");
		printf("6. Print all elements in the stack.\n");
		printf("7. Exit.\n");
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
			if(!StackEmpty(&s))
			{
				StackTop(&element,&s);
				printf("Stack Top: %d\n",element);	
			}
			else
				printf("The Stack is Empty !!\n");
			break;
			
			case 6:
			TraverseStack(&s,&Display);
			break;
			
			case 7:
			exit(1);
			break;
		}
		
		printf("\nEnter y to continue.... \n");
	}while(getch() == 'y');
	
	return 0;
}