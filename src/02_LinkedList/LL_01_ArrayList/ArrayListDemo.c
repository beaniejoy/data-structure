#include <stdio.h>
#include "ArrayList.h"

int main(void) {
	
    // Initialize ArrayList
    ArrayList list;
    int data;
    ListInit(&list);

    // Store data
    Append(&list, 10);
    Append(&list, 20);
    Append(&list, 10);
    Append(&list, 30);
    Append(&list, 20);
    Append(&list, 50);
    Append(&list, 40);

    // print totalNumber of the ArrayList
    printf("the current totalNumber is : %d\n", getTotalNum(&list));

    // print all the data of the ArrayList
    if (isFirst(&list, &data)) {
        printf("%d ", data);

        while (isNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    // search the '20' number and delete all this number in the ArrayLIst.
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

    // after deleting all the value, print the remainder in the ArrayList.
    printf("the current totalNumber is : %d\n", getTotalNum(&list));

    if (isFirst(&list, &data)) {
        printf("%d ", data);

        while (isNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n");

    return 0;
}