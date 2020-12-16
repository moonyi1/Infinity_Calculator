#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#define TRUE    1
#define FALSE   0

typedef int Data;

typedef struct _node {
    Data data;
    struct _node * next;
} Node, *pNode;

typedef struct _list {
    Node * head;
    Node * tail;
} List, *pList;

void ListInit(List * plist);
void LInsert(List * plist, Data data);
Data LRemove(List* plist);

#endif