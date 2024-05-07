#pragma once

#include "Func_with_args.h"


class Exp : public Func_with_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Exp();

    Exp(const Exp &)            = delete;
    Exp(Exp &&)                 = delete;
    Exp &operator=(const Exp &) = delete;
    Exp &operator=(Exp &&)      = delete;

    ~Exp();
};
