/**
 **********************************************************************************
 * @file           : main.c >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : main.c that consists test for the implementation level with queue 
 * @date           : 7/7/2023
 **********************************************************************************
**/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "queue.h"

void Display(int e)
{
	printf("%d ",e);
}

int main()
{
	int element;
	
	Queue q;
	CreatQueue(&q);
	
	do
	{
		printf("\n-----------------------------------------------\n");
		printf("1. Clear the queue.\n");
		printf("2. Read an element then Append it.\n");
		printf("3. Serve an element then display it.\n");
		printf("4. What is the queue size?\n");
		printf("5. Display the queue Top.\n");
		printf("6. Print all elements in the queue.\n");
		printf("7. Exit.\n");
		printf("-----------------------------------------------\n");
		
		int choose;
		printf("\nEnter Your Order: ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
			ClearQueue(&q);
			break;
			
			case 2:
			if(!QueueFull(&q))
			{
				printf("Enter the value of element: ");
				scanf("%d",&element);
				if(!Append(element,&q))
						printf("The Element is not appended.\n");
			}
			else
				printf("The Queue is Full !!\n");
			break;
			
			case 3:
			if(!QueueEmpty(&q))
			{
				Serve(&element,&q);
				printf("the served element: %d\n",element);				
			}
			else
				printf("The Queue is Empty !!\n");
			break;
			
			case 4:
			printf("Queue Size = %d\n",QueueSize(&q));
			break;
			
			case 5:
			if(!QueueEmpty(&q))
			{
				Retrieve(&element,&q);
				printf("Queue Top: %d\n",element);	
			}
			else
				printf("The Queue is Empty !!\n");
			break;
			
			case 6:
			TraverseQueue(&q,&Display);
			break;
			
			case 7:
			exit(1);
			break;
		}
		
		printf("\nEnter y to continue.... \n");
	}while(getch() == 'y');
	
	return 0;
}