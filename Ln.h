#pragma once

#include "Func_with_args.h"


class Ln : public Func_with_args
{
private:
    Base_func *const get_object_derivative() override;
public:
    Ln(const QString pow = "1⬚");

    Ln(const Ln &)            = delete;
    Ln(Ln &&)                 = delete;
    Ln &operator=(const Ln &) = delete;
    Ln &operator=(Ln &&)      = delete;

    Base_func *const get_object() override;

    ~Ln();
};
