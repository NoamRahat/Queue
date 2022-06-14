#pragma once

typedef struct {
	int uniqeNumber;
	char* name;
}Patient;

int getNumber();
void relesePatient(Patient* pPatient);
void initPatient(Patient* pPatient, const char* name);
void printPatient(const Patient* pPatient);