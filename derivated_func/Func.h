#pragma once

#include "../all_math_operations/functions/base_function/Base_func.h"
#include "../all_math_operations/operators/Operator.h"
#include "control_buttons/Control_buttons.h"


class Base_func;

class Operator;

class Func
{
private:
    Base_func *head, *curr_func;
    bool entered_func, entered_pow;

    QString qstr_func;

    void remove_funcs(Base_func *func);
    const bool is_number(Base_func *func) const;
public:
    Func();

    Func(const Func &)            = delete;
    Func(Func &&)                 = delete;
    Func &operator=(const Func &) = delete;
    Func &operator=(Func &&)      = delete;

    void add_func_to_funcs(Base_func *const func);
    void add_operator_to_funcs(Operator *const math_operator);

    void enter_pow();
    void go_to_external_func();
    void block_to_ext_func_butt(Control_buttons *control_buttons, const bool entered_pow_);
    void go_to_func(const Base_func *const &func);

    QString &get_qstr_func();

    void get_derivative_and_print(Func &func);

    const bool get_curr_func_is_arguments();

    void clear();

    ~Func();
};
