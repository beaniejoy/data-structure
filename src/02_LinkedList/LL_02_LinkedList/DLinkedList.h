#ifndef __D_LINKEDLIST_H__
#define __D_LINKEDLIST_H__

#define TRUE	1
#define FALSE	0

typedef int Type;

typedef struct _node {
	Type data;
	struct _node* next;
} Node;

typedef struct _linkedlist {
	Node* head;
	Node* cur;
	Node* before;
	int totalNum;
	int (*comp)(Type d1, Type d2);
} LinkedList;

// Initialize ArrayList
void ListInit(LinkedList* plist);
// Insert function
void List_Insert(LinkedList* plist, Type data);

// First Node
Type isFirst(LinkedList* plist, Type* pdata);
// Next Node
Type isNext(LinkedList* plist, Type* pdata);

// Romve data
Type Remove(LinkedList* plist);
// the number of all the data in the current LinkedList
int getTotalNum(LinkedList* plist);

void SetSortMethod(LinkedList* plist, int (*comp)(Type d1, Type d2));

#endif