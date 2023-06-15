/**
 ******************************************************************************
 * @file           : stack.h >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : stack.h that consists of the prototypes of the functions 
 *					 with the definition of the stack element type StackEntry
 * @date           : 15/6/2023
 ******************************************************************************
**/

#ifndef _STACK_H_
#define _STACK_H_

#define StackEntry 	int

//Stack definition
typedef struct stacknode
{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stack
{
	StackNode *top;
	int size;
}Stack;

//functions prototypes
void 	CreatStack		(Stack *);

/*
pre  conditions: the stack is initialized and not full
post conditions: the element has been stored at the top of the stack
*/
void	Push			(StackEntry, Stack *);

/*
pre  conditions: the stack is initialized and not empty
post conditions: the last element is returned with decrease the stack by one element
*/
void	Pop				(StackEntry *, Stack *);

int		StackEmpty		(Stack *);

int		StackFull		(Stack *);

/*
pre  conditions: stack is initialized
post conditions: destroy all elements stack looks as initialized
*/
void	ClearStack		(Stack *);

/*
pre  conditions: stack is initialized and not empty
post conditions: the last element is returned without change the stack
*/
void	StackTop		(StackEntry *, Stack *);

/*
pre  conditions: stack is initialized
post conditions: return how many elements exist
*/
int		StackSize		(Stack *);

void	TraverseStack	(Stack *, void (*)(StackEntry));

#endif