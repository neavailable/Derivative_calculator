#include "Func.h"
#include "../my_qstr_methods/My_QStr_methods.h"


Func::Func() : head { nullptr }, curr_func { nullptr }, entered_func { true },
               entered_pow { false }, qstr_func { "⬚" } {};

const bool Func::is_number(Base_func *func) const
{
    return *(func->get_qstr_name().end() - 2) != QChar('x')    and
           *(func->get_qstr_name().end() - 1) == QChar(0x2B1A) ?
           true : false;
};

// we know, this only 2 type of funcs have ⬚ symbol at the end
// (0x2B1A is the code of symbol ⬚)
// and next we only check is the symbol before ⬚, so we rule out x

void Func::add_func_to_funcs(Base_func *const func)
{
    if (func == nullptr) return;


    if (head == nullptr)
        head = func, curr_func = head;

    else if ( head != nullptr and is_number(curr_func) and entered_func )
    {
        My_QStr_methods::add_to_qstring( qstr_func, func->get_qstr_name() ),
        My_QStr_methods::add_to_qstring( curr_func->get_qstr_name(), func->get_qstr_name() );

        delete func;
        return;
    }

    else if (entered_func)
    {
        curr_func->get_arg() = func;
        curr_func->get_arg()->get_external_func() = curr_func;

        curr_func = curr_func->get_arg();
    }

    else if (entered_pow)
    {
        My_QStr_methods::add_to_qstring( qstr_func, func->get_qstr_name() ),
        My_QStr_methods::add_to_qstring( curr_func->get_pow(), func->get_qstr_name() );

        delete func;
        return;
    }

    else
    {
        curr_func->get_right_operator()->get_right_arg() = func;
        func->get_left_operator() = curr_func->get_right_operator();

        curr_func = func;

        entered_func = true;
    };

    My_QStr_methods::add_to_qstring( qstr_func, curr_func->get_qstr_name() );
};

// [in this method we add func to our tree] first if make a head, add first func
// second add last digit which entered user to number
// third if create a new func and add it to the tree. this func is arg of previous func
// last else has been created when user want to add func after entering the operator

void Func::add_operator_to_funcs(Math_operator *const math_operator)
{
    curr_func->get_right_operator() = math_operator;
    curr_func->get_right_operator()->get_left_arg() = curr_func;

    My_QStr_methods::add_to_qstring( qstr_func, curr_func->get_right_operator()->get_qstr_name() );

    entered_func = false, entered_pow = false;
};

void Func::enter_pow()
{
    My_QStr_methods::swap_to_enter_pow(qstr_func),
    My_QStr_methods::add_to_qstring(qstr_func, "^⬚");

    curr_func->get_pow() = "⬚";

    entered_pow = true, entered_func = false;
};

void Func::go_to_external_func()
{
    if (entered_pow)
    {
        if ( curr_func->is_arguments() )
            My_QStr_methods::swap_to_external_func(qstr_func);

        entered_pow = false, entered_func = true;
    }
    else
    {
        while(curr_func != head)
            if (curr_func->get_external_func() != nullptr)
            {
                My_QStr_methods::swap_to_external_func(qstr_func);

                curr_func = curr_func->get_external_func();
                break;
            }
            else if (curr_func->get_left_operator() != nullptr)
            {
                curr_func = curr_func->get_left_operator()->get_left_arg();
            }
    }
};

// go to external func or end entering pow

void Func::block_to_ext_func_butt(Control_buttons *control_buttons, const bool entered_pow_)
{
    entered_pow_ ?
    curr_func->is_arguments() ?
        control_buttons->block_for_funcs_with_args() :
        control_buttons->block_for_funcs_without_args() :
    control_buttons->block_for_to_ext_func();
};

void Func::go_to_func(const Base_func *const &func)
{
    while(curr_func != func) go_to_external_func();
};

// !!! it works only if func is external to curr_func

QString &Func::get_qstr_func()
{
    return qstr_func;
};

void Func::remove_funcs(Base_func *curr)
{
    do
        if (curr->get_arg() != nullptr)
        {
            curr = curr->get_arg();
        }

        else if (curr->get_right_operator() != nullptr)
        {
            curr = curr->get_right_operator()->get_right_arg();
        }

        else if (curr->get_arg() == nullptr and curr->get_right_operator() == nullptr)
        {
            Base_func *temp = curr;

            if (curr->get_external_func() != nullptr)
            {
                curr = curr->get_external_func();

                delete temp;

                curr->get_arg() = nullptr;
            }

            else if(curr->get_left_operator() != nullptr)
            {
                curr = curr->get_left_operator()->get_left_arg();

                delete temp->get_left_operator();
                delete temp;

                curr->get_right_operator() = nullptr;
            };
        }

    while(head->get_right_operator() != nullptr or head->get_arg() != nullptr);
};

// in this method we delete elements like in a tree. So we go at the and of each branch
// and delete element if left and right cells (in our case right_operator and arg) = nullptr
// in first and second ifs we go to element which doesnt have cells after him. in other ifs we deleted it

void Func::get_derivative_and_print(Func &func)
{
    head->make_derivative(head, func);

    func.qstr_func = "⬚";

    func.head->add_func_to_derivative(func, true);

    My_QStr_methods::add_to_qstring(func.qstr_func, "");
};

const bool Func::get_curr_func_is_arguments()
{
    return curr_func->is_arguments();
};

void Func::clear()
{
    if (head == nullptr) return;

    remove_funcs(head);

    delete head;
    head = nullptr, curr_func = nullptr;

    entered_func = true;

    qstr_func = "⬚";
};

// method remove_funcs dont delete a head, so we delete it here

Func::~Func()
{
    clear();
};
