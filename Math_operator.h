#pragma once

#pragma once

#include "Base_operation.h"
#include "Base_func.h"
#include "Func.h"


class Base_func;

class Func;

class Plus;

class Math_operator : public Base_operation
{
protected:
    Base_func *left_arg, *right_arg;
public:
    Math_operator(const QString name_ = "havent modifiable name");

    Math_operator(const Math_operator &)            = delete;
    Math_operator(Math_operator &&)                 = delete;
    Math_operator &operator=(const Math_operator &) = delete;
    Math_operator &operator=(Math_operator &&)      = delete;

    const bool can_get_derivative() const;

    Base_func *&get_left_arg();
    Base_func *&get_right_arg();

    virtual Math_operator *const get_object() = 0;
    virtual Base_func *get_derivative_for_operands(Func &) = 0;

    virtual ~Math_operator() = 0;
};





class Plus : public Math_operator
{
public:
    Plus();

    Plus(const Plus &)            = delete;
    Plus(Plus &&)                 = delete;
    Plus &operator=(const Plus &) = delete;
    Plus &operator=(Plus &&)      = delete;

    Math_operator *const get_object();
    Base_func *get_derivative_for_operands(Func &derivative_func);

    ~Plus();
};





class Minus : public Math_operator
{
public:
    Minus();

    Minus(const Minus &)            = delete;
    Minus(Minus &&)                 = delete;
    Minus &operator=(const Minus &) = delete;
    Minus &operator=(Minus &&)      = delete;

    Math_operator *const get_object();
    Base_func *get_derivative_for_operands(Func &derivative_func);

    ~Minus();
};





class Multiply : public Math_operator
{
public:
    Multiply();

    Multiply(const Multiply &)            = delete;
    Multiply(Multiply &&)                 = delete;
    Multiply &operator=(const Multiply &) = delete;
    Multiply &operator=(Multiply &&)      = delete;

    Math_operator *const get_object();
    Base_func *get_derivative_for_operands(Func &derivative_func);

    ~Multiply();
};




class Division : public Math_operator
{
public:
    Division();

    Division(const Multiply &)            = delete;
    Division(Multiply &&)                 = delete;
    Division &operator=(const Multiply &) = delete;
    Division &operator=(Multiply &&)      = delete;

    Math_operator *const get_object();
    Base_func *get_derivative_for_operands(Func &derivative_func);

    ~Division();
};
