#pragma once

#include "Operator.h"


class Division : public Operator
{
public:
    Division();

    Division(const Division &)            = delete;
    Division(Division &&)                 = delete;
    Division &operator=(const Division &) = delete;
    Division &operator=(Division &&)      = delete;

    Operator *const get_object() override;
    Base_func *get_derivative_for_operands(Func &derivative_func) override;

    ~Division();
};
