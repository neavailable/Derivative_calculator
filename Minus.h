#pragma once

#include "Math_operator.h"


class Minus : public Math_operator
{
public:
    Minus();

    Minus(const Minus &)            = delete;
    Minus(Minus &&)                 = delete;
    Minus &operator=(const Minus &) = delete;
    Minus &operator=(Minus &&)      = delete;

    Math_operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Minus();
};
