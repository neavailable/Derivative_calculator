#pragma once

#include "Func_with_args.h"


class Cos : public Func_with_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Cos(const QString pow = "1⬚");

    Cos(const Cos &)            = delete;
    Cos(Cos &&)                 = delete;
    Cos &operator=(const Cos &) = delete;
    Cos &operator=(Cos &&)      = delete;

    ~Cos();
};
