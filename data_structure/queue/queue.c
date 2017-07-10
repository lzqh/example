#include "queue.h"

QUEUE* create_queue(int maxelent)
{
	QUEUE *queue_t;
	//if(!is_empty(queue))
		//return queue;
	queue_t = malloc(sizeof(QUEUE));
	if(!queue_t)
		exit(-1);
	queue_t->front =0;
	queue_t->rear = 0;
	queue_t->size = maxelent;
	queue_t->array[maxelent] = 0;
	return queue_t;
}
int  in_queue(int elent,QUEUE* queue)
{
	queue->front = queue->front+1;
	queue->array[front] =elent;
}
int   out_queue();
bool is_empty(QUEUE *queue);
