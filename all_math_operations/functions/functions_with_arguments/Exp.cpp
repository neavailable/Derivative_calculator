#include "Exp.h"


Exp::Exp() : Func_with_args("exp(⬚)", "1⬚") {};

Base_func *const Exp::get_object()
{
    return new Exp;
};

Base_func *const Exp::get_object_derivative()
{
    return get_object();
};

Exp::~Exp() = default;
