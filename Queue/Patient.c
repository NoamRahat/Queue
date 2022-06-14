#include "Patient.h"



int getNumber() {
	static int counter;
	return counter++;
}

void relesePatient(Patient* pPatient) {
	free(pPatient->name);
}

void initPatient(Patient* pPatient, const char* name) {
	pPatient->uniqeNumber = getNumber();
	pPatient->name = (char*)malloc(strlen(name) + 1);
	strcpy(pPatient->name, name);
}

void printPatient(const Patient* pPatient) {
	printf("The current Patient is:  %d ) %s  \n", pPatient->uniqeNumber, pPatient->name);
}

