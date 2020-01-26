#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__

#define TRUE 1
#define FALSE 0

#define ARRAYLIST_LEN 100

typedef int Type;

typedef struct __ArrayList
{
	Type arr[ARRAYLIST_LEN];
	int totalNum;
	int curPosition;
} ArrayList;

// Initialize ArrayList
void ListInit(ArrayList* plist);
// Insert function
void Append(ArrayList* plist, Type data);

int isFirst(ArrayList* plist, Type* pdata);
int isNext(ArrayList* plist, Type* pdata);

Type Remove(ArrayList* plist);
int getTotalNum(ArrayList* plist);

#endif
