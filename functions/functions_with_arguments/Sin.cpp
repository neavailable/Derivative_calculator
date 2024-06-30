#include "Sin.h"
#include "Cos.h"


Sin::Sin(const QString pow) : Func_with_args("sin(⬚)", pow) {};

Base_func *const Sin::get_object()
{
    return new Sin( get_pow() );
};

Base_func *const Sin::get_object_derivative()
{
    return new Cos;
};

Sin::~Sin() = default;
