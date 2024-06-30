#pragma once

#include "Math_operator.h"


class Plus : public Math_operator
{
public:
    Plus();

    Plus(const Plus &)            = delete;
    Plus(Plus &&)                 = delete;
    Plus &operator=(const Plus &) = delete;
    Plus &operator=(Plus &&)      = delete;

    Math_operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Plus();
};
