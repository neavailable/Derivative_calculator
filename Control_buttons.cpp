#include "Control_buttons.h"


Control_buttons::Control_buttons(Ui::MainWindow *ui_)
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


void Control_buttons::un_block_buttons(QPushButton *buttons[], const size_t size, const bool un_block)
{
    for (size_t i = 0; i < size; ++i) buttons[i]->setEnabled(un_block);
};

void Control_buttons::block_at_beginning()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(operators_butts, operators_butts_size, false),
    ui->dot_butt->setEnabled(false),
    ui->pow_butt->setEnabled(false);
};

void Control_buttons::block_for_funcs_with_args()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(operators_butts, operators_butts_size, false),
    ui->to_ext_func_butt->setEnabled(false),
    ui->dot_butt->setEnabled(false);
};

void Control_buttons::block_for_numbers()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    ui->x_butt->setEnabled(false),
    ui->pow_butt->setEnabled(false);
};

void Control_buttons::block_for_dot()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    un_block_buttons(operators_butts, operators_butts_size, false),
    un_block_buttons(other_butts, other_butts_size, false);
};

void Control_buttons::block_for_x()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    un_block_buttons(digits_buts, digits_buts_size, false),
    ui->x_butt->setEnabled(false);
    ui->dot_butt->setEnabled(false);
};

void Control_buttons::block_for_operators()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(other_butts, other_butts_size, false),
    ui->AC_butt->setEnabled(false),
    un_block_buttons(operators_butts, operators_butts_size, false);
};

void Control_buttons::block_for_pow()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    ui->x_butt->setEnabled(false),
    un_block_buttons(operators_butts, operators_butts_size, false),
    ui->pow_butt->setEnabled(false);
};

void Control_buttons::block_for_to_ext_func()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
        ui->x_butt->setEnabled(false),
        un_block_buttons(digits_buts, digits_buts_size, false),
        ui->pow_butt->setEnabled(false),
        ui->dot_butt->setEnabled(false);
};

void Control_buttons::block_for_from_pow_to_func()
{
    un_block_buttons(all_butts, all_butts_size, true);

    un_block_buttons(funcs_with_args_butts, funcs_with_args_butts_size, false),
    un_block_buttons(operators_butts, operators_butts_size, false);
};

void Control_buttons::block_for_enter()
{
    un_block_buttons(all_butts, all_butts_size, false);

    ui->AC_butt->setEnabled(true);
};

Control_buttons::~Control_buttons() = default;
