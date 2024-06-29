#include "Plus.h"


Plus::Plus() : Math_operator("+⬚") {};

Math_operator *const Plus::get_object()
{
    return new Plus;
};

Base_func *Plus::get_derivative_for_operands(Func &derivative_func)
{
    return Math_operator::get_derivative_for_operands(derivative_func);
};

Plus::~Plus() = default;
