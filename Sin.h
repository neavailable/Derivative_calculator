#pragma once

#include "Func_with_args.h"
#include "Cos.h"


class Cos;

class Sin : public Func_with_args
{
private:
    Base_func *const get_object_derivative() override;
public:
    Sin(const QString pow = "1⬚");

    Sin(const Sin &)            = delete;
    Sin(Sin &&)                 = delete;
    Sin &operator=(const Sin &) = delete;
    Sin &operator=(Sin &&)      = delete;

    Base_func *const get_object() override;

    ~Sin();
};
