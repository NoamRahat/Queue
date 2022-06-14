#include "Node.h"

printNode(const Node* pNode) {
	printf(" --> | %d ) %s | ", ((Patient*)(pNode->data))->uniqeNumber, ((Patient*)(pNode->data))->name);
}