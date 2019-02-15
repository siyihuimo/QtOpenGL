#include "MyOpenGLWindow.h"

MyOpenGLWindow::MyOpenGLWindow(QWidget *parent)
    : QGLWidget(parent)
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
    glPointSize(4.0f);
    glColor4f(1.0,0.0,0.0,1.0);
    glBegin(GL_POINTS);
        glVertex3f(0.5,0.5,0.5);
        glVertex3f(-0.5,0.5,0.5);
        glVertex3f(-0.5,-0.5,0.5);
        glVertex3f(0.5,-0.5,0.5);
    glEnd();
}

void MyOpenGLWindow::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}
