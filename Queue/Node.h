#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include "Patient.h"

typedef struct _Node {
	struct _Node* next;
	void* data;
}Node;

printNode(const Node* pNode);
