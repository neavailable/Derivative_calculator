#pragma once

#include "Cos.h"


class Tg : public Func_with_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Tg(const QString pow = "1⬚");

    Tg(const Tg &)            = delete;
    Tg(Tg &&)                 = delete;
    Tg &operator=(const Tg &) = delete;
    Tg &operator=(Tg &&)      = delete;

    ~Tg();
};
