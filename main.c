#include "inf_calc.h"

int main(void) {
    char* exp;
    Num result;
    List postfix_Expr;

    postfix_Expr = inf_to_pos(exp);
    result = calculator(postfix_Expr);
    print_result(result);
}

