#include "inf_calc.h"

int main(void) {
    char* list;
    Num result;
    List postfix_Expr;

    postfix_Expr = inf_to_pos(list);
    result = calculator(postfix_Expr);
    print_result(result);
}

