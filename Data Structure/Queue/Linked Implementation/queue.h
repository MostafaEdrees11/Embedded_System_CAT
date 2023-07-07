/**
 **********************************************************************************
 * @file           : queue.h >> Linked Implementation
 * @author         : Mostafa Edrees
 * @brief          : queue.h that consists of the prototypes of the functions 
 *					 with the definition of the queue element type QueueEntry 
 * @date           : 7/7/2023
 **********************************************************************************
**/

#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry 	int

//define Queue Node
typedef struct queuenode
{
	QueueEntry entry;
	struct queuenode *next;
}QueueNode;

//define Queue
typedef struct queue
{
	QueueNode *front;
	QueueNode *rear;
	int size;
}Queue;

//prototypes
void CreatQueue(Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);
int Append(QueueEntry,Queue *);
void Serve(QueueEntry *,Queue *);
void Retrieve(QueueEntry *,Queue *);
void TraverseQueue(Queue *,void (*)(QueueEntry));


#endif