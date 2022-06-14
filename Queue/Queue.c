#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdbool.h>
#include<string.h>


typedef struct _Node {
	struct _Node* next;
	void* data;
}Node;

typedef struct _Queue {
	Node* head;
	Node* tail;
	int size;
}Queue;

void Init(Queue* queue) {
	queue->head = NULL;
	queue->tail = NULL;
	queue->size = 0;
}

bool enqueue(void* data, Queue* pQueue){
	if (pQueue->size == 10){
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

bool isEmpty(const Queue* pQueue){
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

typedef struct {
	int uniqeNumber;
	char* name;
}Patient;

int getNumber() {
	static int counter;
	return counter++;
}

void printPatient(const Patient* pPatient) {
	printf("The current Patient is:  %d ) %s  \n", pPatient->uniqeNumber, pPatient->name);
}

void initPatient(Patient* pPatient, const char* name) {
	pPatient->uniqeNumber = getNumber();
	pPatient->name = (char*)malloc(strlen(name) + 1);
	strcpy(pPatient->name, name);
}

void relesePatient(Patient* pPatient) {
	free(pPatient->name);
}

printNode(const Node* pNode) {
	printf(" --> | %d ) %s | ", ((Patient*)(pNode->data))->uniqeNumber, ((Patient*)(pNode->data))->name);
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

int main() {
	Patient* current;
	
	Queue KupatCholim;
	Init(&KupatCholim);

	Patient Yosef;
	initPatient(&Yosef, "Yosef Cohav");
	Patient Moshe;
	initPatient(&Moshe, "Moshe Cohen");
	Patient Noam;
	initPatient(&Noam, "Noam Rahat");
	Patient Haim;
	initPatient(&Haim, "Haim Ex");
	Patient Danna;
	initPatient(&Danna, "Danna Lifkin");
	Patient Ruth;
	initPatient(&Ruth, "Ruth Ben David");
	
	
	enqueue(&Yosef, &KupatCholim);
	enqueue(&Moshe, &KupatCholim);
	enqueue(&Noam, &KupatCholim);
	printQueue(&KupatCholim);

	dequeue(&KupatCholim, &current);
	printPatient(current);

	enqueue(&Danna, &KupatCholim);
	printQueue(&KupatCholim);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	enqueue(&Yosef, &KupatCholim);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	enqueue(&Ruth, &KupatCholim);
	enqueue(&Haim, &KupatCholim);
	printQueue(&KupatCholim);

	dequeue(&KupatCholim, &current);
	printPatient(current);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);

	
	return 0;
}