#pragma once

#include "base_class/Base_operation.h"
#include "operators/Math_operator.h"
#include "../../derivated_func/Func.h"


class Math_operator;

class Base_func : public Base_operation
{
private:
    Base_func *external_func, *arg;
    Math_operator *left_operator, *right_operator;

    QString pow;

    void add_pow_derivative(Base_func *const curr, Func &derivative_func);
    void add_args_to_derivative(Base_func *const curr, Func &derivative_func, const bool add_to_qstr) const;

    virtual Base_func *const get_object() = 0;
    virtual Base_func *const get_object_derivative() = 0;
public:
    Base_func(const QString name_ = "havent modifiable name", const QString pow_ = "1⬚");

    Base_func(const Base_func &)            = delete;
    Base_func(Base_func &&)                 = delete;
    Base_func &operator=(const Base_func &) = delete;
    Base_func &operator=(Base_func &&)      = delete;

    virtual const bool is_arguments() const = 0;

    Base_func *&get_arg();
    Base_func *&get_external_func();
    Math_operator *&get_left_operator();
    Math_operator *&get_right_operator();

    const bool can_get_derivative() const override;

    QString &get_pow();

    Base_func *add_func_to_derivative(Func &derivative_func, const bool add_to_qstr);
    void make_derivative(Base_func *const curr, Func &derivative_func);

    virtual ~Base_func() = 0;
};
