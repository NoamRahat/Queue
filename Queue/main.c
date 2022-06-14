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
	relesePatient(current);

	enqueue(&Danna, &KupatCholim);
	printQueue(&KupatCholim);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);
	relesePatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);
	relesePatient(current);

	initPatient(&Yosef, "Yosef Cohav");
	enqueue(&Yosef, &KupatCholim);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);
	relesePatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);
	relesePatient(current);

	enqueue(&Ruth, &KupatCholim);
	enqueue(&Haim, &KupatCholim);
	printQueue(&KupatCholim);

	dequeue(&KupatCholim, &current);
	printPatient(current);
	relesePatient(current);
	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	printPatient(current);
	relesePatient(current);

	dequeue(&KupatCholim, &current);
	printQueue(&KupatCholim);
	
	
	return 0;
}