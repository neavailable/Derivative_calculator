#pragma once

#include <QString>


class My_QStr_methods
{
private: 
    static void swap_symbols(QString &func, const size_t ind1, const size_t ind2);
    static const QString add_pow_to_name(QString &func_, QString &pow);
public: 
    My_QStr_methods();

    My_QStr_methods(const My_QStr_methods &)            = delete;
    My_QStr_methods(My_QStr_methods &&)                 = delete;
    My_QStr_methods &operator=(const My_QStr_methods &) = delete;
    My_QStr_methods &operator=(My_QStr_methods &&)      = delete;

    static void add_to_qstring(QString &func, const QString &text);

    static void add_func_to_qstr(QString &func, QString &text, QString &pow);

    static void swap_to_external_func(QString &func);

    static void swap_to_enter_pow(QString &func);

    ~My_QStr_methods();
};
