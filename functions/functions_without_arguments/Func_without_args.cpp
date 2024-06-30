#include "Func_without_args.h"
#include "../../my_qstr_methods/My_QStr_methods.h"


Func_without_args::Func_without_args(const QString name, const QString pow) : Base_func(name, pow) {};

const bool Func_without_args::is_arguments() const
{
    return false;
};

Func_without_args::~Func_without_args() = default;
