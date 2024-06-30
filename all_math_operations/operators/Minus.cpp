#include "Minus.h"


Minus::Minus() : Operator("-⬚") {};

Operator *const Minus::get_object()
{
    return new Minus;
};

Base_func *Minus::get_derivative_for_operands(Func &derivative_func)
{
    return Operator::get_derivative_for_operands(derivative_func);
};

Minus::~Minus() = default;
