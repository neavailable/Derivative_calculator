#pragma once

#include <QString>


class Base_operation
{
private:
    QString name;
public:
    Base_operation(const QString name_ = "haven't modifiable name");

    Base_operation(const Base_operation &)            = delete;
    Base_operation(Base_operation &&)                 = delete;
    Base_operation &operator=(const Base_operation &) = delete;
    Base_operation &operator=(Base_operation &&)      = delete;

    QString &get_qstr_name();

    virtual const bool can_get_derivative() const = 0;

    virtual ~Base_operation() = 0;
};
