#pragma once
#include"Node.h"

typedef struct _Queue {
	Node* head;
	Node* tail;
	int size;
}Queue;

void Init(Queue* queue);
bool enqueue(void* data, Queue* pQueue);
bool dequeue(Queue* pQueue, void** ppData);
bool isEmpty(const Queue* pQueue);
bool isFull(const Queue* pQueue);
void printQueue(const Queue* pQueue);
