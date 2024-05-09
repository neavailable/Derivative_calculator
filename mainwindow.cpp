#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
      сontrol_buttons{nullptr}, enetered_pow{ false }
{
    ui->setupUi(this);

    ui->enter_label->setText( func.get_qstr_func() );

    сontrol_buttons = new Control_buttons(ui),
    сontrol_buttons->block_at_beginning();
};

void MainWindow::on_funcs_clicked(Base_func *func_)
{
    func_->is_arguments() ? сontrol_buttons->block_for_funcs_with_args()
                          : сontrol_buttons->block_for_numbers();

    func.add_func_to_funcs(func_);

    ui->enter_label->setText( func.get_qstr_func() );

    if (enetered_pow) сontrol_buttons->block_for_pow();
};

void MainWindow::on_operators_clicked(Math_operator *math_operator)
{
    сontrol_buttons->block_for_operators();

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

void MainWindow::on_exp_butt_clicked()
{
    on_funcs_clicked(new Exp);

    ui->pow_butt->setEnabled(false);
};

void MainWindow::on_x_butt_clicked()
{
    on_funcs_clicked(new X);

    сontrol_buttons->block_for_x();
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

    сontrol_buttons->block_for_dot();
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

void MainWindow::on_to_ext_func_butt_clicked()
{
    func.go_to_external_func();

    ui->enter_label->setText( func.get_qstr_func() );

    if (enetered_pow)
    {
        func.get_curr_func_is_arguments() ? сontrol_buttons->block_for_funcs_with_args()
                                          : сontrol_buttons->block_for_x();

        ui->pow_butt->setEnabled(false);

        enetered_pow = false;
    }
    else
        сontrol_buttons->block_for_to_ext_func();

};

void MainWindow::on_pow_butt_clicked()
{
    сontrol_buttons->block_for_pow();
    func.enter_pow();

    ui->enter_label->setText( func.get_qstr_func() );

    enetered_pow = true;
};

void MainWindow::on_enter_butt_clicked()
{
    func.get_derivative_and_print(derivative);

    My_QStr_methods::add_to_qstring(func.get_qstr_func(), "");

    ui->enter_label->setText( func.get_qstr_func() );
    ui->result_label->setText( derivative.get_qstr_func() );

    сontrol_buttons->block_for_enter();
};

void MainWindow::on_AC_butt_clicked()
{
    сontrol_buttons->block_at_beginning();

    func.clear();
    derivative.clear();

    ui->enter_label->setText("⬚");
    ui->result_label->clear();

    enetered_pow = false;
};

MainWindow::~MainWindow()
{
    on_AC_butt_clicked();

    delete ui;
    delete сontrol_buttons;
};
