#include <stdio.h>
#include "CircularLinkedList.h"

void ListInit(CList* plist) {
	plist->before = NULL;
	plist->cur = NULL;
	plist->tail = NULL;
	plist->totalNum = 0;
}

// tail -> newNode -> tail_next
// newNode = tail
void List_Insert_Tail(CList* plist, Type data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}
	(plist->totalNum)++;
}

// tail -> newNode -> tail_next
void List_Insert_Front(CList* plist, Type data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}
	(plist->totalNum)++;
}

int isFirst(CList* plist, Type* pdata) {
	if (plist->tail == NULL) {
		return FALSE;
	}

	plist->before = plist->tail;
	plist->cur = plist->tail->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int isNext(CList* plist, Type* pdata) {
	if (plist->tail == NULL) {
		return FALSE;
	}

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Type Remove(CList* plist) {
	Node* rpos = plist->cur;
	Type rdata = rpos->data;

	if (rpos == plist->tail) {
		if (plist->tail == plist->tail->next) {
			plist->tail = NULL;
		}
		else {
			plist->tail = plist->before;
		}
	}
	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->totalNum)--;
	return rdata;
}

int getTotalNum(CList* plist) {
	return plist->totalNum;
}