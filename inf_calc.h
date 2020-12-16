#ifndef __INF_CALC_H__
#define __INF_CALC_H__

#include "Stack.h"
#include "LinkedList.h"

typedef enum { false, true } bool;

typedef struct _digit {
    int digit;
    struct _digit * next;
} Digit;

typedef struct _number {
    int integer_part_size;
    int decimal_part_size;
    Digit * integer_part;
    Digit * decimal_part;
    bool positive;
} Num;

List inf_to_pos(char* list);
Digit calculator(List postfix_expression);
void print_result(Digit result);

#endif