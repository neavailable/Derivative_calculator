#pragma once

#include "functions/base_function/Base_func.h"


class Func_with_args : public Base_func
{
public:
    Func_with_args(const QString name = "havent modifiable name", const QString pow = "1⬚");

    Func_with_args(const Func_with_args &)            = delete;
    Func_with_args(Func_with_args &&)                 = delete;
    Func_with_args &operator=(const Func_with_args &) = delete;
    Func_with_args &operator=(Func_with_args &&)      = delete;

    const bool is_arguments() const override;

    virtual ~Func_with_args() = 0;
};

