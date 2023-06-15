/**
 **********************************************************************************
 * @file           : stack.c >> Array-Based Implementation
 * @author         : Mostafa Edrees
 * @brief          : stack.c that consists of the implementation of the functions 
 * @date           : 14/6/2023
 **********************************************************************************
**/

#include "stack.h"

//initialize the stack.
void CreatStack(Stack *ps)
{
	ps->top = 0;
}

//push an element to the stack.
void Push(StackEntry e, Stack *ps)
{
	ps->entry[ps->top] = e;
	ps->top++;
	
	//ps->entry[(ps->top)++] = e; 	in one line
}

//pop an element from the stack.
void Pop(StackEntry *pe, Stack *ps)
{
	ps->top--;
	*pe = ps->entry[ps->top];
	
	//*pe = ps->entry[--(ps->top)]	in one line
}

//check if the stack is empty or not.
int StackEmpty(Stack *ps)
{
	if(ps->top == 0)
		return 1;
	else
		return 0;
	
	//return !(ps->top);	in one line
}

//check if the stack is full or not.
int	StackFull(Stack *ps)
{
	if(ps->top == MaxStack)
		return 1;
	else
		return 0;
	
	//return (ps->top == MaxStack);	in one line
}

//clear stack and destory all elements in it.
void ClearStack(Stack *ps)
{
	ps->top = 0;
}

//calculate the number of elements in the stack
int	StackSize(Stack *ps)
{
	return ps->top;
}

//get the value of the top element in the stack without change it.
void StackTop(StackEntry *pe, Stack *ps)
{
	*pe = ps->entry[(ps->top)-1];
}

//travese stack to do specific job like display all elements in it.
void TraverseStack(Stack *ps, void (*pf)(StackEntry))
{
	for(int i = ps->top; i > 0; i--)
	{
		(*pf)(ps->entry[i-1]);
	}
}