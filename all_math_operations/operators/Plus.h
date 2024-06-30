#pragma once

#include "Operator.h"


class Plus : public Operator
{
public:
    Plus();

    Plus(const Plus &)            = delete;
    Plus(Plus &&)                 = delete;
    Plus &operator=(const Plus &) = delete;
    Plus &operator=(Plus &&)      = delete;

    Operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Plus();
};
