#include "Queue.h"

void Init(Queue* queue) {
	queue->head = NULL;
	queue->tail = NULL;
	queue->size = 0;
}

bool enqueue(void* data, Queue* pQueue) {
	if (pQueue->size == 10) {
		return false;
	}
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (pQueue->tail != NULL) {
		pQueue->tail->next = node;
	}
	else {
		pQueue->head = node;
	}
	pQueue->tail = node;
	pQueue->size++;
	return true;
}

bool dequeue(Queue* pQueue, void** ppData) {
	Node* oldHead;
	oldHead = pQueue->head;

	if (pQueue->head == NULL) {
		return false;
	}
	else {
		pQueue->head = pQueue->head->next;
	}
	if (pQueue->head == NULL) {
		pQueue->tail = NULL;
	}

	void* data = oldHead->data;
	free(oldHead);
	pQueue->size--;
	*ppData = data;
	return true;
}

bool isEmpty(const Queue* pQueue) {
	if (pQueue->head == NULL) {
		return true;
	}
	return false;
}

bool isFull(const Queue* pQueue) {
	if (pQueue->size == 10) {
		return true;
	}
	return false;
}

void printQueue(const Queue* pQueue) {
	Node* current = pQueue->head;
	if (pQueue->head == NULL) {
		printf("The Queue is Empty \n");
		return;
	}
	while (current != NULL) {
		printNode(current);
		current = current->next;
	}
	printf("|| END \n");
}