#pragma once

#include "Math_operator.h"


class Multiply : public Math_operator
{
public:
    Multiply();
    Multiply(const Multiply &)            = delete;
    Multiply(Multiply &&)                 = delete;
    Multiply &operator=(const Multiply &) = delete;
    Multiply &operator=(Multiply &&)      = delete;

    Math_operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Multiply();
};
