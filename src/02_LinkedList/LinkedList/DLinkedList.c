#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(LinkedList* plist) {
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->totalNum = 0;
}

void Insert(LinkedList* plist, Type data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->head->next = newNode;

	(plist->totalNum)++;
}

void SortInsert(LinkedList* plist, Type data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;

	newNode->data = data;

	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0) {
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->totalNum)++;
}

void List_Insert(LinkedList* plist, Type data) {
	if (plist->comp == NULL) {
		Insert(plist, data);
	}
	else {
		SortInsert(plist, data);
	}
}

// it is important whether the first node is empty or not
Type isFirst(LinkedList* plist, Type* pdata) {
	// the first node is empty
	if (plist->head->next == NULL) {
		return FALSE;
	}

	plist->before = plist->head;
	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Type isNext(LinkedList* plist, Type* pdata) {
	if (plist->cur->next == NULL) {
		return FALSE;
	}

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Type Remove(LinkedList* plist) {
	Node* rpos = plist->cur;
	Type rdata = plist->cur->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->totalNum)--;
	return rdata;
}

int getTotalNum(LinkedList* plist) {
	return plist->totalNum;
}

void SetSortMethod(LinkedList* plist, int (*comp)(Type d1, Type d2)) {
	plist->comp = comp;
}