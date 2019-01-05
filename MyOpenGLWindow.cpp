#include "MyOpenGLWindow.h"

MyOpenGLWindow::MyOpenGLWindow(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

void MyOpenGLWindow::initializeGL()
{
    initializeOpenGLFunctions();
}

void MyOpenGLWindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void MyOpenGLWindow::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}
