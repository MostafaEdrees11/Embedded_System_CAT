/**
 **********************************************************************************
 * @file           : queue.h >> Array-Based Implementation
 * @author         : Mostafa Edrees
 * @brief          : queue.h that consists of the prototypes of the functions 
 *					 with the definition of the queue element type QueueEntry 
 * @date           : 7/7/2023
 **********************************************************************************
**/

#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry 	int
#define MAXQUEUE 	100

//define Queue
typedef struct queue
{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
}Queue;

//prototypes
void CreatQueue(Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);
void Append(QueueEntry,Queue *);
void Serve(QueueEntry *,Queue *);
void Retrieve(QueueEntry *,Queue *);
void TraverseQueue(Queue *,void (*)(QueueEntry));


#endif