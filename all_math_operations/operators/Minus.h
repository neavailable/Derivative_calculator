#pragma once

#include "Operator.h"


class Minus : public Operator
{
public:
    Minus();

    Minus(const Minus &)            = delete;
    Minus(Minus &&)                 = delete;
    Minus &operator=(const Minus &) = delete;
    Minus &operator=(Minus &&)      = delete;

    Operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Minus();
};
