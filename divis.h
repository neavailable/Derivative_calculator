#ifndef DIVIS_H
#define DIVIS_H
#include "mult.h"
#include "minus.h"
class divis : math_op
{
private:
    mult *mul;
    minus *min;
public:
    divis();
};

#endif // DIVIS_H
