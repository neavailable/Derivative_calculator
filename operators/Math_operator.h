#pragma once

#include "../base_class/Base_operation.h"
#include "../functions/base_function/Base_func.h"
#include "../derivated_func/Func.h"


class Base_func;

class Func;

class Math_operator : public Base_operation
{
private:
    Base_func *left_arg, *right_arg;
public:
    Math_operator(const QString name_ = "havent modifiable name");

    Math_operator(const Math_operator &)            = delete;
    Math_operator(Math_operator &&)                 = delete;
    Math_operator &operator=(const Math_operator &) = delete;
    Math_operator &operator=(Math_operator &&)      = delete;

    const bool can_get_derivative() const override;

    Base_func *&get_left_arg();
    Base_func *&get_right_arg();

    virtual Math_operator *const get_object() = 0;
    virtual Base_func *get_derivative_for_operands(Func &derivative_func) = 0;

    virtual ~Math_operator() = 0;
};
