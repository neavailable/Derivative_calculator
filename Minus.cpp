#include "Minus.h"


Minus::Minus() : Math_operator("-⬚") {};

Math_operator *const Minus::get_object()
{
    return new Minus;
};

Base_func *Minus::get_derivative_for_operands(Func &derivative_func)
{
    return Math_operator::get_derivative_for_operands(derivative_func);
};

Minus::~Minus() = default;
