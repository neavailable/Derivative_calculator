#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), enetered_pow{ false }
{
    ui->setupUi(this);

    buttons_in_array = new Buttons_in_array(ui);

    ui->enter_label->setText( func.get_qstr_func() );

    buttons_in_array->block_at_beginning();
};

void MainWindow::on_funcs_clicked(Base_func *func_)
{
    func_->is_arguments() ? buttons_in_array->block_for_funcs_with_args()
                          : buttons_in_array->block_for_numbers();

    func.add_func_to_funcs(func_);

    ui->enter_label->setText( func.get_qstr_func() );
};

void MainWindow::on_operators_clicked(Math_operator *math_operator)
{
    buttons_in_array->block_for_operators();

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

    buttons_in_array->block_for_x();
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

    buttons_in_array->block_for_dot();
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

    buttons_in_array->block_for_to_ext_func();
};

void MainWindow::on_pow_butt_clicked()
{
    buttons_in_array->block_for_pow();
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
    buttons_in_array->block_at_beginning();

    func.clear();
    derivative.clear();

    ui->enter_label->setText("⬚");
    ui->result_label->clear();
};

MainWindow::~MainWindow()
{
    on_AC_butt_clicked();

    delete ui;
    delete buttons_in_array;
};






Buttons_in_array::Buttons_in_array(Ui::MainWindow *ui_)
    : ui{ ui_ }, all_butts
    {
        ui->sin_butt, ui->cos_butt, ui->tg_butt, ui->ctg_butt, ui->exp_butt, ui->x_butt,
        ui->butt_0, ui->butt_1, ui->butt_2, ui->butt_3, ui->butt_4, ui->butt_5, ui->butt_6, ui->butt_7, ui->butt_8, ui->butt_9,
        ui->plus_butt, ui->minus_butt, ui->multiply_butt, ui->division_butt, ui->enter_butt,
        ui->pow_butt, ui->to_ext_func_butt, ui->AC_butt, ui->dot_butt
    },
    funcs_with_args_butts { ui->sin_butt, ui->cos_butt, ui->tg_butt, ui->ctg_butt, ui->exp_butt },
    digits_buts { ui->butt_0, ui->butt_1, ui->butt_2, ui->butt_3, ui->butt_4, ui->butt_5, ui->butt_6, ui->butt_7, ui->butt_8, ui->butt_9 },
    operators_butts { ui->plus_butt, ui->minus_butt, ui->multiply_butt, ui->division_butt, ui->enter_butt },
    other_butts { ui->pow_butt, ui->to_ext_func_butt, ui->dot_butt } {};


void Buttons_in_array::un_block_buttons(QPushButton *buttons[], const size_t size, const bool un_block)
{
    for (size_t i = 0; i < size; ++i) buttons[i]->setEnabled(un_block);
};

void Buttons_in_array::block_at_beginning()
{
    un_block_buttons(all_butts, all_butts_size, true);

    ui->dot_butt->setEnabled(false),
    ui->pow_butt->setEnabled(false);
};

void Buttons_in_array::block_for_funcs_with_args()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(operators_butts, operators_butts_size, false),
        ui->to_ext_func_butt->setEnabled(false),
    ui->dot_butt->setEnabled(false);
};

void Buttons_in_array::block_for_numbers()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    ui->x_butt->setEnabled(false),
    ui->pow_butt->setEnabled(false);
};

void Buttons_in_array::block_for_dot()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    un_block_buttons(operators_butts, operators_butts_size, false),
    un_block_buttons(other_butts, other_butts_size, false);
};

void Buttons_in_array::block_for_x()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    un_block_buttons(digits_buts, digits_buts_size, false),
    ui->dot_butt->setEnabled(false);
};

void Buttons_in_array::block_for_operators()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(other_butts, other_butts_size, false),
    ui->AC_butt->setEnabled(false),
    un_block_buttons(operators_butts, operators_butts_size, false);
};

void Buttons_in_array::block_for_pow()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    ui->x_butt->setEnabled(false),
    un_block_buttons(operators_butts, operators_butts_size, false),
    ui->pow_butt->setEnabled(false);
};

void Buttons_in_array::block_for_to_ext_func()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    ui->x_butt->setEnabled(false),
    un_block_buttons(digits_buts, digits_buts_size, false),
    ui->pow_butt->setEnabled(false),
    ui->dot_butt->setEnabled(false);
};

void Buttons_in_array::block_for_from_pow_to_func()
{
    //un_block_buttons(all_butts, all_butts_size, true);

    //un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    //un_block_buttons(operators_butts, operators_butts_size, false),
    //    ui->
};

Buttons_in_array::~Buttons_in_array() = default;
