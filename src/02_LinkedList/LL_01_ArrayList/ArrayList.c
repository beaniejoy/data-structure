#include <stdio.h>
#include "ArrayList.h"

// Intialize ArrayList
void ListInit(ArrayList* plist) {
	plist->totalNum = 0;
	plist->curPosition = -1;
}

void Append(ArrayList* plist, Type data) {
	// if the size of the current List is bigger than defined size,
	// it is not possible to append new data in the List.
	if (plist->totalNum >= ARRAYLIST_LEN) {
		puts("the ArrayList is already full. it is not possible to append it.");
		return;
	}

	plist->arr[plist->totalNum] = data;
	(plist->totalNum)++;
}

int isFirst(ArrayList* plist, Type* pdata) {
	if (plist->totalNum == 0) {
		return FALSE;
	}

	plist->curPosition = 0;
	*pdata = plist->arr[0];
	return TRUE;
}

int isNext(ArrayList* plist, Type* pdata) {
	if (plist->curPosition >= (plist->totalNum - 1)) {
		return FALSE;
	}

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

Type Remove(ArrayList* plist) {
	
	int ridx = plist->curPosition;
	int total = plist->totalNum;
	Type rvalue = plist->arr[ridx];
	
	for (int i = ridx; i < total - 1; i++) {
		// In this case, the value type in the List is integer(primitive type),
		// Therefore, it is possible to just assign the next value in the previous.
		// However, in the LinkedList, it may be more complicated. 
		plist->arr[i] = plist->arr[i + 1];
	}

	(plist->totalNum)--;
	(plist->curPosition)--;
	return rvalue;
}

int getTotalNum(ArrayList* plist) {
	return plist->totalNum;
}