#ifndef MULT_H
#define MULT_H
#include "plus.h"
class mult : public math_op
{
private:
    plus *a;
public:
    mult();
};

#endif // MULT_H
