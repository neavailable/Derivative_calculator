#pragma once

#include "Base_func.h"


class Dot : public Func_without_args
{
private:
    Base_func *const get_object() override;
    Base_func *const get_object_derivative() override;
public:
    Dot();

    Dot(const Dot &)            = delete;
    Dot(Dot &&)                 = delete;
    Dot &operator=(const Dot &) = delete;
    Dot &operator=(Dot &&)      = delete;

    ~Dot();
};
