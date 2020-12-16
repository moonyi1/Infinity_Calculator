#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void StackInit(Stack * pstack) {            // 스택 초기화
    pstack->head = NULL;
}

int SIsEmpty(Stack * pstack) {              // 스택이 비어있는지 확인
    if (pstack->head == NULL)
        return TRUE;
    else
        return FALSE;
}

void Push(Stack * pstack, SData data) {      // 스택의 push연산
    SNode * newNode = (SNode*)malloc(sizeof(SNode));

    newNode->data = data;
    newNode->next = pstack->head;

    pstack->head = newNode;
}

SData Pop(Stack * pstack) {                 // 스택의 pop 연산
    SData rdata;
    SNode* rnode;

    if (SIsEmpty(pstack)) {
        printf("stack memory error");
        exit(-1);
    }

    rdata = pstack->head->data;
    rnode = pstack->head;

    pstack->head = pstack->head->next;
    free(rnode);

    return rdata;
}

SData Peek(Stack * pstack) {                 // 스택의 peek 연산
    if (SIsEmpty(pstack)) {
        printf("stack memory error");
        exit(-1);
    }

    return pstack->head->data;
}