#include "Multiply.h"
#include "Plus.h"


Multiply::Multiply() : Operator("*⬚") {};

Operator *const Multiply::get_object()
{
    return new Multiply;
};

Base_func *Multiply::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs( get_object() );

    derivative_func.go_to_func
        (
            get_right_arg()->add_func_to_derivative(derivative_func, false)
            );

    derivative_func.add_operator_to_funcs(new Plus);

    derivative_func.go_to_func
        (
            get_left_arg()->add_func_to_derivative(derivative_func, false)
            );

    derivative_func.add_operator_to_funcs( get_object() );

    return this->get_right_arg();
};

// (a * b)' = a' * b + a * b'

// in this method we add to func only b and a, according to equation
// (reminding that we already have a' from the make_derivative
// and b' we will count in make_derivative when this method will end

Multiply::~Multiply() = default;
