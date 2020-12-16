#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void ListInit(List * plist) {
    plist->head = NULL;
    plist->tail = NULL;
}

void LInsert(List * plist, Data data) {
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (plist->head == NULL) {
        plist->head = newNode;
    }
    else {
        plist->tail->next = newNode;
    }
        plist->tail = newNode;
}

Data LRemove(List* plist) {
    Data rdata;
    Node* rnode;

    if (plist->head == NULL) {
        printf("list memory error");
        exit(-1);
    }

    rdata = plist->head->data;
    rnode = plist->head;

    plist->head = plist->head->next;
    free(rnode);

    return rdata;
}