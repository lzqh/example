#ifndef __QUEUE_H
#define __QUEUE_H

typedef struct{
	int front;
	int rear;
	int size;
	int *array;
}QUEUE;

QUEUE * queue;
QUEUE* create_queue(int maxelent)
int   in_queue(int elent);
int   out_queue();
bool is_empty(QUEUE *queue);


#endif
