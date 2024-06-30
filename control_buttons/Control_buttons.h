#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QPushButton>


class Control_buttons
{
private:
    Ui::MainWindow *ui;

    static const size_t all_butts_size             = 27,
                        funcs_with_args_butts_size = 5,
                        digits_buts_size           = 10,
                        operators_butts_size       = 5,
                        other_butts_size           = 3,
                        copy_butts_size            = 2;

    QPushButton *all_butts            [all_butts_size],
                *funcs_with_args_butts[funcs_with_args_butts_size],
                *digits_buts          [digits_buts_size],
                *operators_butts      [operators_butts_size],
                *other_butts          [other_butts_size],
                *copy_butts           [copy_butts_size];

    void un_block_buttons(QPushButton *buttons[], const size_t size, const bool un_block);
    void block_all();
    void unblock_all();
public:
    Control_buttons(Ui::MainWindow *ui_ = nullptr);

    Control_buttons(const Control_buttons &)            = delete;
    Control_buttons(Control_buttons &&)                 = delete;
    Control_buttons &operator=(const Control_buttons &) = delete;
    Control_buttons &operator=(Control_buttons &&)      = delete;

    void block_at_beginning();
    void block_for_funcs_with_args();
    void block_for_funcs_without_args();
    void block_for_dot();
    void block_for_x();
    void block_for_operators();
    void block_for_pow();
    void block_for_to_ext_func();
    void block_for_from_pow_to_func();
    void block_for_enter();

    ~Control_buttons();
};
