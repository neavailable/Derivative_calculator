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
#include "Control_buttons.h"


QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
};
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
private:
    Q_OBJECT
    Ui::MainWindow *ui;

    Func func, derivative;

    Control_buttons *control_buttons;

    bool entered_pow;

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
