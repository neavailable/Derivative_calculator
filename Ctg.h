#pragma once

#include "Func_with_args.h"


class Ctg : public Func_with_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Ctg(const QString pow = "1⬚");

    Ctg(const Ctg &)            = delete;
    Ctg(Ctg &&)                 = delete;
    Ctg &operator=(const Ctg &) = delete;
    Ctg &operator=(Ctg &&)      = delete;

    ~Ctg();
};
