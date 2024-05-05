#include "X.h"


X::X(const QString pow) : Func_without_args("x⬚", pow) {};

Base_func *const X::get_object()
{
    return new X( get_pow() );
};

Base_func *const X::get_object_derivative()
{
    return new Number;
}

X::~X() = default;
