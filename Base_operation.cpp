#include "Base_operation.h"


Base_operation::Base_operation(const QString name_) : name{ name_ } {};

QString &Base_operation::get_qstr_name()
{
    return name;
};

Base_operation::~Base_operation() = default;
