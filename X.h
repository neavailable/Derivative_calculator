#pragma once

#include "Base_func.h"


class X : public Func_without_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    X(const QString pow = "1⬚");

    X(const X &)            = delete;
    X(X &&)                 = delete;
    X &operator=(const X &) = delete;
    X &operator=(X &&)      = delete;

    ~X();
};
