#include "Dot.h"


Dot::Dot() : Func_without_args(".⬚", "") {};

Base_func *const Dot::get_object()
{
    return new Dot;
};

Base_func *const Dot::get_object_derivative()
{
    return new Dot;
};

Dot::~Dot() = default;
