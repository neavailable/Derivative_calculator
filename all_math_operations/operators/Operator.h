#pragma once

#include "../base_class/Base_operation.h"
#include "../functions/base_function/Base_func.h"
#include "../../derivated_func/Func.h"


class Base_func;

class Func;

class Operator : public Base_operation
{
private:
    Base_func *left_arg, *right_arg;
public:
    Operator(const QString name_ = "havent modifiable name");

    Operator(const Operator &)            = delete;
    Operator(Operator &&)                 = delete;
    Operator &operator=(const Operator &) = delete;
    Operator &operator=(Operator &&)      = delete;

    const bool can_get_derivative() const override;

    Base_func *&get_left_arg();
    Base_func *&get_right_arg();

    virtual Operator *const get_object() = 0;
    virtual Base_func *get_derivative_for_operands(Func &derivative_func) = 0;

    virtual ~Operator() = 0;
};
