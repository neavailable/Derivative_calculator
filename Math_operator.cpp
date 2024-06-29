#include "Math_operator.h"


Math_operator::Math_operator(const QString name_) : Base_operation(name_),
    left_arg { nullptr }, right_arg{ nullptr } {};

const bool Math_operator::can_get_derivative() const
{
    return false;
};

Base_func *&Math_operator::get_left_arg()
{
    return left_arg;
};

Base_func *&Math_operator::get_right_arg()
{
    return right_arg;
};

Base_func *Math_operator::get_derivative_for_operands(Func &derivative_func)
{
    derivative_func.add_operator_to_funcs( get_object() );

    return this->right_arg;
};

// (a +/- b)' = a' +/- b'

// add only add object Math_operator (generaly Plus or Minus)
// to derivative_func ( its so simple in that func because i already
// have derivative from left operand so i add Math_operator and go next
// and counting derivative from right operand (in make_derivative generaly) )

Math_operator::~Math_operator() = default;
