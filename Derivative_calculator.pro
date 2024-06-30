# QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    base_class/Base_operation.cpp \
    control_buttons/Control_buttons.cpp \
    derivated_func/Func.cpp \
    functions/base_function/Base_func.cpp \
    functions/functions_with_arguments/Cos.cpp \
    functions/functions_with_arguments/Ctg.cpp \
    functions/functions_with_arguments/Exp.cpp \
    functions/functions_with_arguments/Func_with_args.cpp \
    functions/functions_with_arguments/Sin.cpp \
    functions/functions_with_arguments/Tg.cpp \
    functions/functions_without_arguments/Dot.cpp \
    functions/functions_without_arguments/Func_without_args.cpp \
    functions/functions_without_arguments/Number.cpp \
    functions/functions_without_arguments/X.cpp \
    main/main.cpp \
    main/mainwindow.cpp \
    my_qstr_methods/My_QStr_methods.cpp \
    operators/Division.cpp \
    operators/Math_operator.cpp \
    operators/Minus.cpp \
    operators/Multiply.cpp \
    operators/Plus.cpp

HEADERS += \
    base_class/Base_operation.h \
    control_buttons/Control_buttons.h \
    derivated_func/Func.h \
    functions/base_function/Base_func.h \
    functions/functions_with_arguments/Cos.h \
    functions/functions_with_arguments/Ctg.h \
    functions/functions_with_arguments/Exp.h \
    functions/functions_with_arguments/Func_with_args.h \
    functions/functions_with_arguments/Sin.h \
    functions/functions_with_arguments/Tg.h \
    functions/functions_without_arguments/Dot.h \
    functions/functions_without_arguments/Func_without_args.h \
    functions/functions_without_arguments/Number.h \
    functions/functions_without_arguments/X.h \
    main/mainwindow.h \
    my_qstr_methods/My_QStr_methods.h \
    operators/Division.h \
    operators/Math_operator.h \
    operators/Minus.h \
    operators/Multiply.h \
    operators/Plus.h

FORMS += \
    qt_files/graphics/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
