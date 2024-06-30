#pragma once

#include "Math_operator.h"


class Division : public Math_operator
{
public:
    Division();

    Division(const Division &)            = delete;
    Division(Division &&)                 = delete;
    Division &operator=(const Division &) = delete;
    Division &operator=(Division &&)      = delete;

    Math_operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Division();
};

