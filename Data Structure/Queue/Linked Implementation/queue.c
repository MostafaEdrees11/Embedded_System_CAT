/**
 **********************************************************************************
 * @file           : queue.c >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : queue.c that consists of the implementation of the functions 
 * @date           : 7/7/2023
 **********************************************************************************
**/


#include "queue.h"
#include <stdlib.h>

//initialize the queue.
void CreatQueue(Queue *pq)
{
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}

//check if the queue is empty or not.
int QueueEmpty(Queue *pq)
{
	return !(pq->size);
	//return !(pq->front);
	//return !(pq->rear);
}

//check if the queue is full or not.
int QueueFull(Queue *pq)
{
	return 0;
}

//calculate the number of elements in the queue.
int QueueSize(Queue *pq)
{
	return pq->size;
}

//clear queue and destory all elements in it.
void ClearQueue(Queue *pq)
{
	while(pq->front)
	{
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size = 0;
}

//append an element to the queue. (FIFO)
int Append(QueueEntry e,Queue *pq)
{
	QueueNode *pn = (QueueNode *)malloc(sizeof(QueueNode));
	
	if(!pn)
		return 0;
	else
	{
		pn->next = NULL;
		pn->entry = e;
		
		if(!(pq->rear))
			pq->front = pn;
		else
			pq->rear->next = pn;
		
		pq->rear = pn;
		pq->size++;
	}
}

//serve an element from the queue. (FIFO)
void Serve(QueueEntry *pe,Queue *pq)
{
	QueueNode *pn = pq->front;
	*pe = pn->entry;
	pq->front = pn->next;
	free(pn);
	
	if(!(pq->front))
		pq->rear = NULL;
	
	pq->size--;
}

//get the value of the first element in the queue without change it.
void Retrieve(QueueEntry *pe,Queue *pq)
{
	*pe = pq->front->entry;
}

//travese queue to do specific function like display all elements in it.
void TraverseQueue(Queue *pq,void (*pf)(QueueEntry))
{
	QueueNode *pn = pq->front;
	while(pn)
	{
		(*pf)(pn->entry);
		pn = pn->next;
	}
}