#ifndef __L_STACK_H__
#define __L_STACK_H__

#define TRUE    1
#define FALSE   0

typedef int SData;
typedef struct _snode {
    SData data;
    struct _snode * next;
} SNode, *pSNode;

typedef struct _stack {
    SNode * head;
} Stack, *pStack;

void StackInit(Stack * pstack);         // 스택 초기화
int SIsEmpty(Stack * pstack);           // 스택이 비어있는지 확인

void Push(Stack * pstack, SData data);   // 스택의 push연산
SData Pop(Stack * pstack);               // 스택의 pop 연산
SData Peek(Stack * pstack);              // 스택의 peek연산

#endif