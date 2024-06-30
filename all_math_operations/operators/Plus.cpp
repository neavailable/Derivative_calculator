#include "Plus.h"


Plus::Plus() : Operator("+⬚") {};

Operator *const Plus::get_object()
{
    return new Plus;
};

Base_func *Plus::get_derivative_for_operands(Func &derivative_func)
{
    return Operator::get_derivative_for_operands(derivative_func);
};

Plus::~Plus() = default;
