#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "Tg.h"
#include "Ctg.h"
#include "Exp.h"
#include "X.h"
#include "Number.h"
#include "Dot.h"
#include "Func.h"


QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
};
QT_END_NAMESPACE

struct Buttons_in_array;

class MainWindow : public QMainWindow
{
private:
    Q_OBJECT
    Ui::MainWindow *ui;
    Buttons_in_array *buttons_in_array;

    Func func, derivative;

    bool enetered_pow;

    void on_funcs_clicked(Base_func *func);
    void on_operators_clicked(Math_operator *math_operator);
private slots:
    void on_sin_butt_clicked();
    void on_cos_butt_clicked();
    void on_tg_butt_clicked();
    void on_ctg_butt_clicked();
    void on_exp_butt_clicked();
    void on_x_butt_clicked();

    void on_butt_0_clicked();
    void on_butt_1_clicked();
    void on_butt_2_clicked();
    void on_butt_3_clicked();
    void on_butt_4_clicked();
    void on_butt_5_clicked();
    void on_butt_6_clicked();
    void on_butt_7_clicked();
    void on_butt_8_clicked();
    void on_butt_9_clicked();

    void on_dot_butt_clicked();

    void on_plus_butt_clicked();
    void on_minus_butt_clicked();
    void on_multiply_butt_clicked();
    void on_division_butt_clicked();

    void on_to_ext_func_butt_clicked();
    void on_pow_butt_clicked();

    void on_enter_butt_clicked();

    void on_AC_butt_clicked();    
public:
    MainWindow(QWidget *parent = nullptr);

    MainWindow(const MainWindow &)            = delete;
    MainWindow(MainWindow &&)                 = delete;
    MainWindow &operator=(const MainWindow &) = delete;
    MainWindow &operator=(MainWindow &&)      = delete;

    ~MainWindow();
};

struct Buttons_in_array
{
private:
    Ui::MainWindow *ui;

    static const size_t all_butts_size = 25,
                        funcs_with_args_butts_size = 5,
                        digits_buts_size = 10,
                        operators_butts_size = 5,
                        other_butts_size = 3;

    QPushButton *all_butts[all_butts_size],
                *funcs_with_args_butts[funcs_with_args_butts_size],
                *digits_buts[digits_buts_size],
                *operators_butts[operators_butts_size],
                *other_butts[other_butts_size];

    void un_block_buttons(QPushButton *buttons[], const size_t size, const bool un_block);
public:
    Buttons_in_array(Ui::MainWindow *ui_);

    Buttons_in_array(const Buttons_in_array &)            = delete;
    Buttons_in_array(Buttons_in_array &&)                 = delete;
    Buttons_in_array &operator=(const Buttons_in_array &) = delete;
    Buttons_in_array &operator=(Buttons_in_array &&)      = delete;

    void block_at_beginning();
    void block_for_funcs_with_args();
    void block_for_numbers();
    void block_for_dot();
    void block_for_x();
    void block_for_operators();
    void block_for_pow();
    void block_for_to_ext_func();
    void block_for_from_pow_to_func();

    ~Buttons_in_array();
};
