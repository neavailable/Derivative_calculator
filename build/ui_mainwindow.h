/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QFrame *enter_frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *enter_label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *result_label;
    QPushButton *copy_func_butt;
    QLabel *label_1;
    QPushButton *copy_derivative_butt;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *sin_butt;
    QPushButton *cos_butt;
    QPushButton *tg_butt;
    QPushButton *ctg_butt;
    QPushButton *exp_butt;
    QPushButton *x_butt;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QPushButton *dot_butt;
    QPushButton *butt_0;
    QPushButton *butt_9;
    QPushButton *plus_butt;
    QPushButton *butt_6;
    QPushButton *butt_8;
    QPushButton *pow_butt;
    QPushButton *butt_1;
    QPushButton *butt_7;
    QPushButton *butt_2;
    QPushButton *butt_3;
    QPushButton *butt_5;
    QPushButton *butt_4;
    QPushButton *to_ext_func_butt;
    QPushButton *minus_butt;
    QPushButton *enter_butt;
    QPushButton *AC_butt;
    QPushButton *division_butt;
    QPushButton *multiply_butt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(667, 561);
        MainWindow->setMinimumSize(QSize(100, 80));
        MainWindow->setSizeIncrement(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_1 = new QFrame(centralwidget);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setMaximumSize(QSize(16777215, 1000));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(frame_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        enter_frame = new QFrame(frame_1);
        enter_frame->setObjectName(QString::fromUtf8("enter_frame"));
        enter_frame->setMaximumSize(QSize(16777215, 60));
        enter_frame->setSizeIncrement(QSize(0, 40));
        enter_frame->setFrameShape(QFrame::StyledPanel);
        enter_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(enter_frame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        enter_label = new QLabel(enter_frame);
        enter_label->setObjectName(QString::fromUtf8("enter_label"));
        QFont font1;
        font1.setPointSize(20);
        enter_label->setFont(font1);

        horizontalLayout_3->addWidget(enter_label);


        gridLayout_2->addWidget(enter_frame, 1, 0, 1, 1);

        frame = new QFrame(frame_1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 60));
        frame->setSizeIncrement(QSize(0, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        result_label = new QLabel(frame);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setMaximumSize(QSize(16777215, 40));
        result_label->setFont(font1);

        horizontalLayout_2->addWidget(result_label);


        gridLayout_2->addWidget(frame, 5, 0, 1, 1);

        copy_func_butt = new QPushButton(frame_1);
        copy_func_butt->setObjectName(QString::fromUtf8("copy_func_butt"));
        copy_func_butt->setMaximumSize(QSize(60, 60));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-text-editor")));
        copy_func_butt->setIcon(icon);
        copy_func_butt->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(copy_func_butt, 1, 1, 1, 1);

        label_1 = new QLabel(frame_1);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setMaximumSize(QSize(16777215, 40));
        label_1->setFont(font);

        gridLayout_2->addWidget(label_1, 0, 0, 1, 1);

        copy_derivative_butt = new QPushButton(frame_1);
        copy_derivative_butt->setObjectName(QString::fromUtf8("copy_derivative_butt"));
        copy_derivative_butt->setMaximumSize(QSize(60, 60));
        copy_derivative_butt->setIcon(icon);
        copy_derivative_butt->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(copy_derivative_butt, 5, 1, 1, 1);


        verticalLayout->addWidget(frame_1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 65));
        frame_2->setSizeIncrement(QSize(0, 65));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sin_butt = new QPushButton(frame_2);
        sin_butt->setObjectName(QString::fromUtf8("sin_butt"));
        sin_butt->setMaximumSize(QSize(80, 40));
        sin_butt->setFont(font);

        horizontalLayout->addWidget(sin_butt);

        cos_butt = new QPushButton(frame_2);
        cos_butt->setObjectName(QString::fromUtf8("cos_butt"));
        cos_butt->setMaximumSize(QSize(80, 40));
        cos_butt->setFont(font);

        horizontalLayout->addWidget(cos_butt);

        tg_butt = new QPushButton(frame_2);
        tg_butt->setObjectName(QString::fromUtf8("tg_butt"));
        tg_butt->setMaximumSize(QSize(80, 40));
        tg_butt->setFont(font);

        horizontalLayout->addWidget(tg_butt);

        ctg_butt = new QPushButton(frame_2);
        ctg_butt->setObjectName(QString::fromUtf8("ctg_butt"));
        ctg_butt->setMaximumSize(QSize(80, 40));
        ctg_butt->setFont(font);

        horizontalLayout->addWidget(ctg_butt);

        exp_butt = new QPushButton(frame_2);
        exp_butt->setObjectName(QString::fromUtf8("exp_butt"));
        exp_butt->setMaximumSize(QSize(80, 40));
        exp_butt->setFont(font);

        horizontalLayout->addWidget(exp_butt);

        x_butt = new QPushButton(frame_2);
        x_butt->setObjectName(QString::fromUtf8("x_butt"));
        x_butt->setMaximumSize(QSize(80, 40));
        x_butt->setFont(font1);

        horizontalLayout->addWidget(x_butt);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMaximumSize(QSize(10000, 1000));
        frame_3->setBaseSize(QSize(0, 1000));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dot_butt = new QPushButton(frame_3);
        dot_butt->setObjectName(QString::fromUtf8("dot_butt"));
        dot_butt->setMaximumSize(QSize(60, 40));
        dot_butt->setFont(font1);

        gridLayout->addWidget(dot_butt, 8, 2, 1, 1);

        butt_0 = new QPushButton(frame_3);
        butt_0->setObjectName(QString::fromUtf8("butt_0"));
        butt_0->setMaximumSize(QSize(60, 40));
        butt_0->setFont(font1);

        gridLayout->addWidget(butt_0, 9, 8, 1, 1);

        butt_9 = new QPushButton(frame_3);
        butt_9->setObjectName(QString::fromUtf8("butt_9"));
        butt_9->setMaximumSize(QSize(60, 40));
        butt_9->setFont(font1);

        gridLayout->addWidget(butt_9, 4, 12, 1, 1);

        plus_butt = new QPushButton(frame_3);
        plus_butt->setObjectName(QString::fromUtf8("plus_butt"));
        plus_butt->setMaximumSize(QSize(60, 40));
        plus_butt->setFont(font1);

        gridLayout->addWidget(plus_butt, 4, 14, 1, 1);

        butt_6 = new QPushButton(frame_3);
        butt_6->setObjectName(QString::fromUtf8("butt_6"));
        butt_6->setMaximumSize(QSize(60, 40));
        butt_6->setFont(font1);

        gridLayout->addWidget(butt_6, 6, 12, 1, 1);

        butt_8 = new QPushButton(frame_3);
        butt_8->setObjectName(QString::fromUtf8("butt_8"));
        butt_8->setMaximumSize(QSize(60, 40));
        butt_8->setFont(font1);

        gridLayout->addWidget(butt_8, 4, 10, 1, 1);

        pow_butt = new QPushButton(frame_3);
        pow_butt->setObjectName(QString::fromUtf8("pow_butt"));
        pow_butt->setMaximumSize(QSize(60, 40));
        pow_butt->setFont(font1);

        gridLayout->addWidget(pow_butt, 4, 2, 1, 1);

        butt_1 = new QPushButton(frame_3);
        butt_1->setObjectName(QString::fromUtf8("butt_1"));
        butt_1->setMaximumSize(QSize(60, 40));
        butt_1->setFont(font1);

        gridLayout->addWidget(butt_1, 8, 8, 1, 1);

        butt_7 = new QPushButton(frame_3);
        butt_7->setObjectName(QString::fromUtf8("butt_7"));
        butt_7->setMaximumSize(QSize(60, 40));
        butt_7->setFont(font1);

        gridLayout->addWidget(butt_7, 4, 8, 1, 1);

        butt_2 = new QPushButton(frame_3);
        butt_2->setObjectName(QString::fromUtf8("butt_2"));
        butt_2->setMaximumSize(QSize(60, 40));
        butt_2->setFont(font1);

        gridLayout->addWidget(butt_2, 8, 10, 1, 1);

        butt_3 = new QPushButton(frame_3);
        butt_3->setObjectName(QString::fromUtf8("butt_3"));
        butt_3->setMinimumSize(QSize(0, 0));
        butt_3->setMaximumSize(QSize(60, 40));
        butt_3->setFont(font1);

        gridLayout->addWidget(butt_3, 8, 12, 1, 1);

        butt_5 = new QPushButton(frame_3);
        butt_5->setObjectName(QString::fromUtf8("butt_5"));
        butt_5->setMaximumSize(QSize(60, 40));
        butt_5->setFont(font1);

        gridLayout->addWidget(butt_5, 6, 10, 1, 1);

        butt_4 = new QPushButton(frame_3);
        butt_4->setObjectName(QString::fromUtf8("butt_4"));
        butt_4->setMaximumSize(QSize(60, 40));
        butt_4->setFont(font1);

        gridLayout->addWidget(butt_4, 6, 8, 1, 1);

        to_ext_func_butt = new QPushButton(frame_3);
        to_ext_func_butt->setObjectName(QString::fromUtf8("to_ext_func_butt"));
        to_ext_func_butt->setMaximumSize(QSize(60, 40));
        QFont font2;
        font2.setPointSize(20);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        to_ext_func_butt->setFont(font2);

        gridLayout->addWidget(to_ext_func_butt, 6, 2, 1, 1);

        minus_butt = new QPushButton(frame_3);
        minus_butt->setObjectName(QString::fromUtf8("minus_butt"));
        minus_butt->setMaximumSize(QSize(60, 40));
        minus_butt->setFont(font1);

        gridLayout->addWidget(minus_butt, 6, 14, 1, 1);

        enter_butt = new QPushButton(frame_3);
        enter_butt->setObjectName(QString::fromUtf8("enter_butt"));
        enter_butt->setMinimumSize(QSize(0, 0));
        enter_butt->setMaximumSize(QSize(60, 100));
        enter_butt->setFont(font1);

        gridLayout->addWidget(enter_butt, 8, 14, 2, 1);

        AC_butt = new QPushButton(frame_3);
        AC_butt->setObjectName(QString::fromUtf8("AC_butt"));
        AC_butt->setMaximumSize(QSize(60, 40));
        AC_butt->setFont(font1);

        gridLayout->addWidget(AC_butt, 9, 2, 1, 1);

        division_butt = new QPushButton(frame_3);
        division_butt->setObjectName(QString::fromUtf8("division_butt"));
        division_butt->setMaximumSize(QSize(60, 40));
        division_butt->setFont(font1);

        gridLayout->addWidget(division_butt, 9, 10, 1, 1);

        multiply_butt = new QPushButton(frame_3);
        multiply_butt->setObjectName(QString::fromUtf8("multiply_butt"));
        multiply_butt->setMaximumSize(QSize(60, 40));
        multiply_butt->setFont(font1);

        gridLayout->addWidget(multiply_butt, 9, 12, 1, 1);


        verticalLayout->addWidget(frame_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "d/dx:", nullptr));
        enter_label->setText(QCoreApplication::translate("MainWindow", "\342\254\232", nullptr));
        result_label->setText(QString());
        copy_func_butt->setText(QString());
        label_1->setText(QCoreApplication::translate("MainWindow", "Enter f(x):", nullptr));
        copy_derivative_butt->setText(QString());
        sin_butt->setText(QCoreApplication::translate("MainWindow", "sin()", nullptr));
        cos_butt->setText(QCoreApplication::translate("MainWindow", "cos()", nullptr));
        tg_butt->setText(QCoreApplication::translate("MainWindow", "tg()", nullptr));
        ctg_butt->setText(QCoreApplication::translate("MainWindow", "ctg()", nullptr));
        exp_butt->setText(QCoreApplication::translate("MainWindow", "exp()", nullptr));
        x_butt->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        dot_butt->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        butt_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        butt_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        plus_butt->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        butt_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        butt_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pow_butt->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        butt_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        butt_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        butt_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        butt_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        butt_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        butt_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        to_ext_func_butt->setText(QCoreApplication::translate("MainWindow", "\342\206\267", nullptr));
        minus_butt->setText(QCoreApplication::translate("MainWindow", "\342\200\223", nullptr));
        enter_butt->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        AC_butt->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        division_butt->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiply_butt->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
