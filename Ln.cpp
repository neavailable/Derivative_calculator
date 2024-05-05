#include "Ln.h"


Ln::Ln(const QString pow) : Func_with_args("ln(⬚)", pow) {};

Base_func *const Ln::get_object()
{
    return new Ln;
};

Base_func *const Ln::get_object_derivative()
{
    return nullptr;
};

Ln::~Ln() = default;
