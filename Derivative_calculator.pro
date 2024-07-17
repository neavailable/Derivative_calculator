# QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    all_math_operations/base_class/Base_operation.cpp \
    all_math_operations/functions/base_function/Base_func.cpp \
    all_math_operations/functions/functions_with_arguments/Cos.cpp \
    all_math_operations/functions/functions_with_arguments/Ctg.cpp \
    all_math_operations/functions/functions_with_arguments/Exp.cpp \
    all_math_operations/functions/functions_with_arguments/Func_with_args.cpp \
    all_math_operations/functions/functions_with_arguments/Sin.cpp \
    all_math_operations/functions/functions_with_arguments/Tg.cpp \
    all_math_operations/functions/functions_without_arguments/Dot.cpp \
    all_math_operations/functions/functions_without_arguments/Func_without_args.cpp \
    all_math_operations/functions/functions_without_arguments/Number.cpp \
    all_math_operations/functions/functions_without_arguments/X.cpp \
    all_math_operations/operators/Division.cpp \
    all_math_operations/operators/Minus.cpp \
    all_math_operations/operators/Multiply.cpp \
    all_math_operations/operators/Operator.cpp \
    all_math_operations/operators/Plus.cpp \
    control_buttons/Control_buttons.cpp \
    derivated_func/Func.cpp \
    main/main.cpp \
    main/mainwindow.cpp \
    my_qstr_methods/My_QStr_methods.cpp \

HEADERS += \
    all_math_operations/base_class/Base_operation.h \
    all_math_operations/functions/base_function/Base_func.h \
    all_math_operations/functions/functions_with_arguments/Cos.h \
    all_math_operations/functions/functions_with_arguments/Ctg.h \
    all_math_operations/functions/functions_with_arguments/Exp.h \
    all_math_operations/functions/functions_with_arguments/Func_with_args.h \
    all_math_operations/functions/functions_with_arguments/Sin.h \
    all_math_operations/functions/functions_with_arguments/Tg.h \
    all_math_operations/functions/functions_without_arguments/Dot.h \
    all_math_operations/functions/functions_without_arguments/Func_without_args.h \
    all_math_operations/functions/functions_without_arguments/Number.h \
    all_math_operations/functions/functions_without_arguments/X.h \
    all_math_operations/operators/Division.h \
    all_math_operations/operators/Minus.h \
    all_math_operations/operators/Multiply.h \
    all_math_operations/operators/Operator.h \
    all_math_operations/operators/Plus.h \
    control_buttons/Control_buttons.h \
    derivated_func/Func.h \
    main/mainwindow.h \
    my_qstr_methods/My_QStr_methods.h \

FORMS += \
    graphics/ui/mainwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
