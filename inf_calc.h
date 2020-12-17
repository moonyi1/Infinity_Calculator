#ifndef __INF_CALC_H__
#define __INF_CALC_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "Stack.h"
#include "LinkedList.h"

#define TRUE    1;
#define FALSE   0;

typedef struct _digit {
    int digit;
    struct _digit * next;
} Digit;

typedef struct _number {
    int integer_part_size;
    int decimal_part_size;
    Digit * integer_part;
    Digit * decimal_part;
    int positive;
} Num;

void inf_to_pos(char* exp);
Num calculator(List postfix_expression);
void print_result(Num result);

#endif