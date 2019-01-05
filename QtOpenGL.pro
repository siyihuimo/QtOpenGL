#-------------------------------------------------
#
# Project created by QtCreator 2019-01-05T15:44:22
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtOpenGL
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    MyOpenGLWindow.cpp

HEADERS  += MainWindow.h \
    MyOpenGLWindow.h

FORMS    += MainWindow.ui
