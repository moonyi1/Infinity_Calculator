#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#define TRUE    1
#define FALSE   0

typedef int LData;

typedef struct _node {
    LData data;
    struct _lnode * next;
} LNode, *pLNode;

typedef struct _list {
    LNode * head;
    LNode * tail;
} List, *pList;

void ListInit(List * plist);
void LInsert(List * plist, LData data);
LData LRemove(List* plist);

#endif