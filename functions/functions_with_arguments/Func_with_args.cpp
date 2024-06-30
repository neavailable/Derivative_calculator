#include "Func_with_args.h"


Func_with_args::Func_with_args(const QString name, const QString pow) : Base_func(name, pow) {};

const bool Func_with_args::is_arguments() const
{
    return true;
};

Func_with_args::~Func_with_args() = default;
