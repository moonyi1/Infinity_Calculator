#ifndef __L_STACK_H__
#define __L_STACK_H__

#define TRUE    1
#define FALSE   0

typedef int Data;
typedef struct _node {
    Data data;
    struct _node * next;
} Node, *pNode;

typedef struct _stack {
    Node * head;
} Stack, *pStack;

void StackInit(Stack * pstack);         // 스택 초기화
int SIsEmpty(Stack * pstack);           // 스택이 비어있는지 확인

void Push(Stack * pstack, Data data);   // 스택의 push연산
Data Pop(Stack * pstack);               // 스택의 pop 연산
Data Peek(Stack * pstack);              // 스택의 peek연산

#endif