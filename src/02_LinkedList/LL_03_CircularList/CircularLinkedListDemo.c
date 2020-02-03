#include <stdio.h>
#include "CircularLinkedList.h"

int main(void) {
	CList list;
	int data, currentNum;
	ListInit(&list);

	List_Insert_Tail(&list, 3);
	List_Insert_Tail(&list, 10);
	List_Insert_Tail(&list, 21);
	List_Insert_Tail(&list, 39);
	List_Insert_Tail(&list, 42);

	if (isFirst(&list, &data)) {
		printf("%d ", data);

		for (int i = 0; i < getTotalNum(&list) * 2 - 1; i++) {
			if (isNext(&list, &data)) {
				printf("%d ", data);
			}
		}
	}
	printf("\n");

	currentNum = getTotalNum(&list);
	
	if (isFirst(&list, &data)) {
		if (data % 2 == 0) {
			Remove(&list);
		}

		for (int i = 0; i < currentNum - 1; i++) {
			isNext(&list, &data);
			if (data % 2 == 0) {
				Remove(&list);
			}
		}
	}

	if (isFirst(&list, &data)) {
		printf("%d ", data);

		for (int i = 0; i < getTotalNum(&list) - 1; i++) {
			if (isNext(&list, &data)) {
				printf("%d ", data);
			}
		}
	}

	return 0;
}