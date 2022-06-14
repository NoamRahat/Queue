#include"Queue.h"

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