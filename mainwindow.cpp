#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_funcs_clicked(Base_func *func_)
{
    func.add_func_to_funcs(func_);

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_operators_clicked(Math_operator *math_operator)
{
    func.add_operator_to_funcs(math_operator);

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_sin_butt_clicked()
{
    on_funcs_clicked(new Sin);
};

void MainWindow::on_cos_butt_clicked()
{
    on_funcs_clicked(new Cos);
};

void MainWindow::on_tg_butt_clicked()
{
    on_funcs_clicked(new Tg);
};

void MainWindow::on_ctg_butt_clicked()
{
    on_funcs_clicked(new Ctg);
};

void MainWindow::on_ln_butt_clicked()
{
    on_funcs_clicked(new Ln);
};

void MainWindow::on_x_butt_clicked()
{
    on_funcs_clicked(new X);
};

void MainWindow::on_butt_0_clicked()
{
    on_funcs_clicked( new Number("0⬚") );
};

void MainWindow::on_butt_1_clicked()
{
    on_funcs_clicked( new Number("1⬚") );
};

void MainWindow::on_butt_2_clicked()
{
    on_funcs_clicked( new Number("2⬚") );
};

void MainWindow::on_butt_3_clicked()
{
    on_funcs_clicked( new Number("3⬚") );
};

void MainWindow::on_butt_4_clicked()
{
    on_funcs_clicked( new Number("4⬚") );
};

void MainWindow::on_butt_5_clicked()
{
    on_funcs_clicked( new Number("5⬚") );
};

void MainWindow::on_butt_6_clicked()
{
    on_funcs_clicked( new Number("6⬚") );
};

void MainWindow::on_butt_7_clicked()
{
    on_funcs_clicked( new Number("7⬚") );
};

void MainWindow::on_butt_8_clicked()
{
    on_funcs_clicked( new Number("8⬚") );
};

void MainWindow::on_butt_9_clicked()
{
    on_funcs_clicked( new Number("9⬚") );
};

void MainWindow::on_dot_butt_clicked()
{
    on_funcs_clicked(new Dot);
};

void MainWindow::on_plus_butt_clicked()
{
    on_operators_clicked(new Plus);
};

void MainWindow::on_minus_butt_clicked()
{
    on_operators_clicked(new Minus);
};

void MainWindow::on_multiply_butt_clicked()
{
    on_operators_clicked(new Multiply);
};

void MainWindow::on_division_butt_clicked()
{
    on_operators_clicked(new Division);
};

void MainWindow::on_to_external_func_butt_clicked()
{
    func.go_to_external_func();

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_pow_butt_clicked()
{
    func.enter_pow();

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_enter_butt_clicked()
{
    func.get_derivative_and_print(derivative);

    ui->result_label->setText( derivative.get_qstr_func() );
};

void MainWindow::on_AC_butt_clicked()
{
    func.clear();
    derivative.clear();

    ui->enter_label->setText("⬚");
    ui->result_label->clear();
};

MainWindow::~MainWindow()
{
    on_AC_butt_clicked();

    delete ui;
}
