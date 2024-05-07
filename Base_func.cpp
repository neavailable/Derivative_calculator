#include "Base_func.h"


Base_func::Base_func(const QString name_, const QString pow_) :
    Base_operation(name_), external_func { nullptr },
    arg{ nullptr }, left_operator{ nullptr },
    right_operator{ nullptr }, pow { pow_ } {};

Base_func *&Base_func::get_arg()
{
    return arg;
};

Base_func *&Base_func::get_external_func()
{
    return external_func;
};

Math_operator *&Base_func::get_left_operator()
{
    return left_operator;
};

Math_operator *&Base_func::get_right_operator()
{
    return right_operator;
};

const bool Base_func::can_get_derivative() const
{
    return true;
};

QString &Base_func::get_pow()
{
    return pow;
};

void Base_func::add_pow_derivative(Base_func *const curr, Func &derivative_func)
{
    double pow = curr->get_pow().removeLast().toDouble();
    curr->get_pow().push_back("⬚");

    if (pow == 1) return;

    derivative_func.add_func_to_funcs( new Number( curr->get_pow() ) );

    derivative_func.add_operator_to_funcs(new Multiply);
    Base_func *func = curr->add_func_to_derivative(derivative_func, false);

    curr->get_pow().removeLast();
    func->get_pow() = QString::number(curr->get_pow().toDouble() - 1),
    func->get_pow().push_back("⬚"),
    curr->get_pow().push_back("⬚");

    derivative_func.go_to_func(func);

    derivative_func.add_operator_to_funcs(new Multiply);
};

void Base_func::add_args_to_derivative(Base_func *const curr, Func &derivative_func, const bool add_to_qstr) const
{
    if (curr != nullptr)
    {
        if (add_to_qstr)
            My_QStr_methods::add_func_to_qstr( derivative_func.get_qstr_func(), curr->get_qstr_name(), curr->get_pow() );
        else
            derivative_func.add_func_to_funcs( curr->get_object() );
    }

    else return;


    if (curr->arg != nullptr)
    {
        add_args_to_derivative(curr->arg, derivative_func, add_to_qstr);

        if (add_to_qstr)
            My_QStr_methods::swap_to_external_func( derivative_func.get_qstr_func() );

        else
            derivative_func.go_to_external_func();

    };

    if (curr->right_operator != nullptr)
    {
        if (add_to_qstr)
            My_QStr_methods::add_to_qstring( derivative_func.get_qstr_func(), curr->right_operator->get_qstr_name() );

        else
            derivative_func.add_operator_to_funcs( curr->right_operator->get_object() );

        add_args_to_derivative(curr->right_operator->get_right_arg(), derivative_func, add_to_qstr);
    }
};

Base_func *Base_func::add_func_to_derivative(Func &derivative_func, const bool add_to_qstr)
{
    if (add_to_qstr)
    {
        add_args_to_derivative(this, derivative_func, true);

        return nullptr;
    }
    else
    {
        Base_func *func = this->get_object();
        derivative_func.add_func_to_funcs(func);
        add_args_to_derivative(this->arg, derivative_func, false);

        return func;
    }
};

void Base_func::make_derivative(Base_func *const curr, Func &derivative_func)
{
    if (curr != nullptr)
    {
        add_pow_derivative(curr, derivative_func);

        derivative_func.add_func_to_funcs( curr->get_object_derivative() );
    }

    else return;


    if (curr->arg != nullptr)
    {
        add_args_to_derivative(curr->arg, derivative_func, false);

        derivative_func.go_to_external_func();

        derivative_func.add_operator_to_funcs(new Multiply);

        make_derivative(curr->arg, derivative_func);
    };

    if (curr->right_operator != nullptr)
        make_derivative(curr->right_operator->get_derivative_for_operands(derivative_func), derivative_func);
};

Base_func::~Base_func() = default;





Func_without_args::Func_without_args(const QString name, const QString pow) : Base_func(name, pow) {};

const bool Func_without_args::is_arguments() const
{
    return false;
};

Func_without_args::~Func_without_args() = default;





Number::Number(const QString number, const QString pow) : Func_without_args(number, pow) {};

Base_func *const Number::get_object()
{
    return new Number( get_qstr_name(), get_pow() );
};

Base_func *const Number::get_object_derivative()
{
    return new Number("0⬚");
};

Number::~Number() = default;


// 0) додавання функції а не кустрінга -  ☑

// 1) здєлай ділення - ☑

// 2) заблокуй краші -

// 3) здєлай меседж бох -

// 4) здєлай можливість вводити цифри - ☑

// 5) здєлай можливість вводити і обробляти кому - ☑

// 6) зроби шоб можна було вйобувать мінус перед виразом -

// 7) здєлай степінь - ☑

// 8) здєлай корінь -

// 9) здєлай тг -

// 10) здєлай ктг -

// 11) здєлай лн -

// 12) здєлай адекватний інтерфейс -

// 13) здєлай множення яке би працювало з >2 аргументами -
