#include "Ctg.h"


Ctg::Ctg(const QString pow) : Func_with_args("ctg(⬚)", pow) {};

Base_func *const Ctg::get_object()
{
    return new Ctg( get_pow() );
};

Base_func *const Ctg::get_object_derivative()
{
    Sin *sin = new Sin("-2⬚");
    sin->get_qstr_name().push_front("-");
    return sin;
};

Ctg::~Ctg() = default;
