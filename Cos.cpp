#include "Cos.h"


Cos::Cos(const QString pow) : Func_with_args("cos(⬚)", pow) {};

Base_func *const Cos::get_object()
{
    return new Cos( get_pow() );;
};

Base_func *const Cos::get_object_derivative()
{
    Sin *sin = new Sin;
    sin->get_qstr_name().push_front("-");
    return sin;
};

Cos::~Cos() = default;
