#ifndef BASE_FUNC_H
#define BASE_FUNC_H

#include "base_op.h"
#include "fnc_wout_args.h"

class fnc_wout_args;

class base_func : public base_op
{
public:
    fnc_wout_args *a;
    base_func();
};

#endif
