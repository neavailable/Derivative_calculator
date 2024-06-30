#include "Base_func.h"
#include "../functions_without_arguments/Number.h"
#include "../../../my_qstr_methods/My_QStr_methods.h"
#include "../../operators/Multiply.h"


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

Operator *&Base_func::get_left_operator()
{
    return left_operator;
};

Operator *&Base_func::get_right_operator()
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

// here we count derivative for func in power. For example:
// ( cos^3(something) )' = 3 * cos^2(something) * ...
//                            ^         ^          ^  ^
//                            |         |          |  |
//                         line 46   line 49  line 58 |
// But if power = 1 we skip all of this, so we go at this place

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

// in this method we go through all branches which are on the left
// (arguments) and on the right (operators).
// depends on value of add_to_qstr we will work with QString or other func (tree)

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

// this method simply add func (without args and operators) to the tree (if !add_to_qstr)

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

// this is main func for counting derivative.
// first if is only for counting derivative of first func.
// second is for add to tree all arguments from what entered
// user to func, which was created in first if.
// next we add to the tree multiply and recursively starting
// counting derivative from arg, which entered user.
// so we returning to first if but with argument.
// in third if we call method, which can count derivative
// from left and right operands. for example derivative from ax + bx
// is a + b, so to the tree we only add +. Other case will be if user
// entered a * b or a / b, but it was clarified Multiply and Division classes.

Base_func::~Base_func() = default;


// 1) здєлай меседж бох -

// 2) зроби шоб можна було вйобувать мінус перед виразом -

// 3) здєлай навяси -
