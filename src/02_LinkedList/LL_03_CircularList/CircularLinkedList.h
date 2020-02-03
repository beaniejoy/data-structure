#ifndef __CIRCULAR_LINKEDLIST_H__
#define __CIRCULAR_LINKEDLIST_H__

#define TRUE	1
#define FALSE	0

typedef int Type;

typedef struct _node {
	Type data;
	struct _node* next;
} Node;

typedef struct _CLL {
	Node* tail;
	Node* cur;
	Node* before;
	int totalNum;
} CList;

void ListInit(CList* plist);
void List_Insert_Tail(CList* plist, Type data);
void List_Insert_Front(CList* plist, Type data);

int isFirst(CList* plist, Type* pdata);
int isNext(CList* plist, Type* pdata);
Type Remove(CList* plist);
int getTotalNum(CList* plist);

#endif

