/**
 **********************************************************************************
 * @file           : stack.c >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : stack.c that consists of the implementation of the functions 
 * @date           : 15/6/2023
 **********************************************************************************
**/

#include "stack.h"
#include <stdlib.h>

//initialize the stack.
void CreatStack(Stack *ps)
{
	ps->top = NULL;
	ps->size = 0;
}

//push an element to the stack.
int Push(StackEntry e, Stack *ps)
{
	StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
	
	if(!pn)
		return 0;
	else
	{
		pn->entry = e;
		pn->next = ps->top;
		ps->top = pn;
		ps->size++;
		return 1;
	}
}

//pop an element from the stack.
void Pop(StackEntry *pe, Stack *ps)
{
	StackNode *pn = ps->top;
	*pe = pn->entry;
	ps->top = pn->next;
	free(pn);
	ps->size--;
}

//check if the stack is empty or not.
int StackEmpty(Stack *ps)
{
	if(ps->top == NULL)
		return 1;
	else
		return 0;
	
	// return !(ps->top);
}

//check if the stack is full or not.
//in linked implementation stack won't be full
int	StackFull(Stack *ps)
{
	return 0;
}

//clear stack and destory all elements in it.
void ClearStack(Stack *ps)
{
	StackNode *pn = ps->top;
	while(pn)
	{
		ps->top = pn->next;
		free(pn);
		pn = ps->top;
	}
	ps->size = 0;
}

//calculate the number of elements in the stack
int	StackSize(Stack *ps)
{
	return ps->size;
}

//get the value of the top element in the stack without change it.
void StackTop(StackEntry *pe, Stack *ps)
{
	*pe = ps->top->entry;
}

//travese stack to do specific job like display all elements in it.
void TraverseStack(Stack *ps, void (*pf)(StackEntry))
{
	StackNode *pn = ps->top;
	while(pn)
	{
		(*pf)(pn->entry);
		pn = pn->next;
	}
}