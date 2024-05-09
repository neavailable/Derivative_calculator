QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Base_func.cpp \
    Base_operation.cpp \
    Control_buttons.cpp \
    Cos.cpp \
    Ctg.cpp \
    Dot.cpp \
    Exp.cpp \
    Func.cpp \
    Func_with_args.cpp \
    Func_without_args.cpp \
    Math_operator.cpp \
    My_QStr_methods.cpp \
    Number.cpp \
    Sin.cpp \
    Tg.cpp \
    X.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Base_func.h \
    Base_operation.h \
    Control_buttons.h \
    Cos.h \
    Ctg.h \
    Dot.h \
    Exp.h \
    Func.h \
    Func_with_args.h \
    Func_without_args.h \
    Math_operator.h \
    My_QStr_methods.h \
    Number.h \
    Sin.h \
    Tg.h \
    X.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
