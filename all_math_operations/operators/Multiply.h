#pragma once

#include "Operator.h"


class Multiply : public Operator
{
public:
    Multiply();
    Multiply(const Multiply &)            = delete;
    Multiply(Multiply &&)                 = delete;
    Multiply &operator=(const Multiply &) = delete;
    Multiply &operator=(Multiply &&)      = delete;

    Operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Multiply();
};
