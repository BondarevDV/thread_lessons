TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp


LIBS +=  -lpthread

HEADERS += \
    interesting_things.h \
    lesson_1.h \
    lesson_2.h \
    lesson_3.h \
    lesson_4.h \
    lesson_5.h \
    lvalue_rvalue.h
