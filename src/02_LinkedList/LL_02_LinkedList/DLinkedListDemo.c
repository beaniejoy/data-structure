#include <stdio.h>
#include "DLinkedList.h"

int isPrecede(Type, Type);

int main(void) {

	LinkedList list;
	Type data;
	ListInit(&list);

	SetSortMethod(&list, isPrecede);

	List_Insert(&list, 50);
	List_Insert(&list, 60);
	List_Insert(&list, 10);
	List_Insert(&list, 20);
	List_Insert(&list, 30);
	List_Insert(&list, 40);

	printf("the current totalNumber is : %d\n", getTotalNum(&list));

	if (isFirst(&list, &data)) {
		printf("%d ", data);

		while (isNext(&list, &data)) {
			printf("%d ", data);
		}
	}
	printf("\n");

	if (isFirst(&list, &data)) {
		if (data == 20) {
			Remove(&list);
		}

		while (isNext(&list, &data)) {
			if (data == 20) {
				Remove(&list);
			}
		}
	}

	printf("the current totalNumber is : %d\n", getTotalNum(&list));

	if (isFirst(&list, &data)) {
		printf("%d ", data);

		while (isNext(&list, &data)) {
			printf("%d ", data);
		}
	}
}

int isPrecede(Type d1, Type d2) {
	if (d1 < d2) {
		return 0;
	}
	else {
		return 1;
	}

}