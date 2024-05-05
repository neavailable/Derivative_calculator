#include "Math_operator.h"
#include "iostream"


Math_operator::Math_operator(const QString name_) : Base_operation(name_),
    left_arg { nullptr }, right_arg{ nullptr } {};

const bool Math_operator::can_get_derivative() const
{
    return false;
};

Base_func *&Math_operator::get_left_arg()
{
    return left_arg;
};

Base_func *&Math_operator::get_right_arg()
{
    return right_arg;
};

Math_operator::~Math_operator() = default;





Plus::Plus() : Math_operator("+⬚") {};

Math_operator *const Plus::get_object()
{
    return new Plus;
};

Base_func *Plus::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs( get_object() );

    return this->right_arg;
};

Plus::~Plus() = default;





Minus::Minus() : Math_operator("-⬚") {};

Math_operator *const Minus::get_object()
{
    return new Minus;
};

Base_func *Minus::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs( get_object() );

    return this->right_arg;
};

Minus::~Minus() = default;





Multiply::Multiply() : Math_operator("*⬚") {};

Math_operator *const Multiply::get_object()
{
    return new Multiply;
};

Base_func *Multiply::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs( get_object() );

    derivative_func.go_to_func
    (
        right_arg->add_func_to_derivative(derivative_func, false)
    );

    derivative_func.add_operator_to_funcs(new Plus);

    derivative_func.go_to_func
    (
        left_arg->add_func_to_derivative(derivative_func, false)
    );

    derivative_func.add_operator_to_funcs( get_object() );

    return this->right_arg;
};

Multiply::~Multiply() = default;





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
        right_arg->add_func_to_derivative(derivative_func, false)
    );

    derivative_func.add_operator_to_funcs(new Minus);

    derivative_func.go_to_func
    (
        left_arg->add_func_to_derivative(derivative_func, false)
    );

    derivative_func.add_operator_to_funcs(new Multiply);

    Math_operator *temp_operator = right_arg->get_right_operator();
    right_arg->get_right_operator() = nullptr;

    right_arg->make_derivative(right_arg, derivative_func);

    derivative_func.add_operator_to_funcs( get_object() );

    Base_func *last_func = right_arg->add_func_to_derivative(derivative_func, false);

    last_func->get_pow().removeLast(),
    last_func->get_pow() = QString::number(last_func->get_pow().toDouble() * 2),
    last_func->get_pow().push_back("⬚");

    derivative_func.go_to_func(last_func);

    right_arg->get_right_operator() = temp_operator;

    if(right_arg->get_right_operator() == nullptr)
        return nullptr;
    else
        return right_arg->get_right_operator()->get_derivative_for_operands(derivative_func);
};

Division::~Division() = default;
