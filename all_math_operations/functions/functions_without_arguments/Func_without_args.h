#pragma once

#include "../base_function/Base_func.h"


class Func_without_args : public Base_func
{
public:
    Func_without_args(const QString name = "havent modifiable name", const QString pow = "1⬚");

    Func_without_args(const Func_without_args &)            = delete;
    Func_without_args(Func_without_args &&)                 = delete;
    Func_without_args &operator=(const Func_without_args &) = delete;
    Func_without_args &operator=(Func_without_args &&)      = delete;

    const bool is_arguments() const override;

    virtual ~Func_without_args() = 0;
};
