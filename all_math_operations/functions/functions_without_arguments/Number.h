#pragma once

#include "Func_without_args.h"


class Number : public Func_without_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Number(const QString number = "1⬚", const QString pow = "1⬚");

    Number(const Number &)            = delete;
    Number(Number &&)                 = delete;
    Number &operator=(const Number &) = delete;
    Number &operator=(Number &&)      = delete;

    ~Number();
};
