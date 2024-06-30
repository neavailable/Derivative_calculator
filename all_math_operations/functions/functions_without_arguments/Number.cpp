#include "Number.h"


Number::Number(const QString number, const QString pow) : Func_without_args(number, pow) {};

Base_func *const Number::get_object()
{
    return new Number( get_qstr_name(), get_pow() );
};

Base_func *const Number::get_object_derivative()
{
    return new Number("0⬚", "1⬚");
};

Number::~Number() = default;
