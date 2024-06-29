#include "Tg.h"
#include "Cos.h"


Tg::Tg(const QString pow) : Func_with_args("tg(⬚)", pow) {};

Base_func *const Tg::get_object()
{
    return new Tg( get_pow() );
};

Base_func *const Tg::get_object_derivative()
{
    return new Cos("-2⬚");
};

Tg::~Tg() = default;
