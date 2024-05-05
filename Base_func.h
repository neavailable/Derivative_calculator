#pragma once

#include "Base_operation.h"
#include "Math_operator.h"
#include "Func.h"
#include "My_QStr_methods.h"


class Math_operator;

class Multiply;

class Func;

class Number;

class Base_func : public Base_operation
{
private:
    Base_func *external_func, *arg;
    Math_operator *left_operator, *right_operator;

    QString pow;

    void add_pow_derivative(Base_func *const curr, Func &derivative_func);
    void add_args_to_derivative(Base_func *const curr, Func &derivative_func, const bool add_to_qstr) const;

    virtual Base_func *const get_object_derivative() = 0;
public:
    Base_func(const QString name_ = "havent modifiable name", const QString pow_ = "1⬚");

    Base_func(const Base_func &)            = delete;
    Base_func(Base_func &&)                 = delete;
    Base_func &operator=(const Base_func &) = delete;
    Base_func &operator=(Base_func &&)      = delete;

    virtual Base_func *const get_object() = 0;

    virtual const bool is_arguments() const = 0;

    Base_func *&get_arg();
    Base_func *&get_external_func();
    Math_operator *&get_left_operator();
    Math_operator *&get_right_operator();

    const bool can_get_derivative() const;

    QString &get_pow();

    Base_func *add_func_to_derivative(Func &derivative_func, const bool add_to_qstr);
    void make_derivative(Base_func *const curr, Func &derivative_func);

    virtual ~Base_func() = 0;
};


class Func_without_args : public Base_func
{
public:
    Func_without_args(const QString name = "havent modifiable name", const QString pow = "1⬚");

    Func_without_args(const Func_without_args &)            = delete;
    Func_without_args(Func_without_args &&)                 = delete;
    Func_without_args &operator=(const Func_without_args &) = delete;
    Func_without_args &operator=(Func_without_args &&)      = delete;

    const bool is_arguments() const override;

    virtual ~Func_without_args() = 0;
};


class Number : public Func_without_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Number(const QString number = "1⬚", const QString pow = "1⬚");

    Number(const Number &)            = delete;
    Number(Number &&)                 = delete;
    Number &operator=(const Number &) = delete;
    Number &operator=(Number &&)      = delete;

    ~Number();
};
