#-------------------------------------------------
#
# Project created by QtCreator 2018-04-01T16:15:25
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

-std = c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    glwidget.cpp \
    make_view.cpp \
    combine_func.cpp \
    scale.cpp \
    translate.cpp \
    form_vertex.cpp \
    removing_edge.cpp \
    combine_threed.cpp

HEADERS += \
        mainwindow.h \
    glwidget.h \
    global.h \
    function.h

FORMS += \
        mainwindow.ui
--cc=clang-mp-3.9 --cxx=clang++-mp-3.9
--optflags='-O3 -pipe -arch x86_64 -m64 -mtune=haswell -march=haswell -mmacosx-version-min=10.11 -fopenmp -fomit-frame-pointer -fno-common -funroll-loops -mavx2 -mfma -mfpmath=sse -msse2 -msse3 -msse4.1 -msse4.2'

##LIBS += -lglut
