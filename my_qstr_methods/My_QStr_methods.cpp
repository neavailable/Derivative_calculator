#include "My_QStr_methods.h"


My_QStr_methods::My_QStr_methods() = default;

void My_QStr_methods::swap_symbols(QString &func, const size_t ind1, const size_t ind2)
{
    QChar temp_str = *(func.begin() + ind2);
    *(func.begin() + ind2) = *(func.begin() + ind1);
    *(func.begin() + ind1) = temp_str;
};

const QString My_QStr_methods::add_pow_to_name(QString &func_, QString &pow)
{
    double dpow = pow.removeLast().toDouble();
    pow.push_back("⬚");

    if (dpow == 1) return func_;

    QString func = func_;

    swap_to_enter_pow(func);
    add_to_qstring(func, "^⬚");
    add_to_qstring(func, pow);
    swap_to_external_func(func);

    return func;
};

void My_QStr_methods::add_to_qstring(QString &func, const QString &text)
{
    size_t i = func.toStdString().find("⬚");

    func.removeAt(i), func.insert(i, text);
};

void My_QStr_methods::add_func_to_qstr(QString &func, QString &text, QString &pow)
{
    const QString name_with_pow = add_pow_to_name(text, pow);
    add_to_qstring( func, name_with_pow );
};

void My_QStr_methods::swap_to_external_func(QString &func)
{
    size_t ind = func.toStdString().find("⬚");

    if (ind < func.size() - 1)
        swap_symbols(func, ind, ind + 1);
};

void My_QStr_methods::swap_to_enter_pow(QString &func)
{
    size_t ind = func.toStdString().find("⬚");

    if ( *(func.begin() + ind - 1) == QChar('(') )
        swap_symbols(func, ind - 1, ind);
};

My_QStr_methods::~My_QStr_methods() = default;
