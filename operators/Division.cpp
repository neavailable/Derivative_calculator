#include "Division.h"
#include "Minus.h"
#include "Multiply.h"


Division::Division() : Math_operator("/⬚") {};


Math_operator *const Division::get_object()
{
    return new Division;
};

Base_func *Division::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs(new Multiply);

    derivative_func.go_to_func
        (
            get_right_arg()->add_func_to_derivative(derivative_func, false)
            );

    derivative_func.add_operator_to_funcs(new Minus);

    derivative_func.go_to_func
        (
            get_left_arg()->add_func_to_derivative(derivative_func, false)
            );

    derivative_func.add_operator_to_funcs(new Multiply);

    Math_operator *temp_operator = get_right_arg()->get_right_operator();
    get_right_arg()->get_right_operator() = nullptr;

    get_right_arg()->make_derivative(get_right_arg(), derivative_func);

    derivative_func.add_operator_to_funcs( get_object() );

    Base_func *last_func = get_right_arg()->add_func_to_derivative(derivative_func, false);

    last_func->get_pow().removeLast(),
        last_func->get_pow() = QString::number(last_func->get_pow().toDouble() * 2),
        last_func->get_pow().push_back("⬚");

    derivative_func.go_to_func(last_func);

    get_right_arg()->get_right_operator() = temp_operator;

    if (get_right_arg()->get_right_operator() == nullptr) return nullptr;

    else
        return get_right_arg()->get_right_operator()
            ->get_derivative_for_operands(derivative_func);
};

// (a / b)' = a' * b - a * b' / a^2

// in this method we do all the same to previous, but b' we count here.
// in order to skip all b's operators we set b->right_operator in nullptr.
// that make because we want to add at the end a^2

Division::~Division() = default;

