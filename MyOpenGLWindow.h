#ifndef MYOPENGLWINDOW_H
#define MYOPENGLWINDOW_H

#include <QGLWidget>
#include <QOpenGLFunctions>

class MyOpenGLWindow : public QGLWidget , protected  QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit MyOpenGLWindow(QWidget *parent = 0);

signals:

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

public slots:
};

#endif // MYOPENGLWINDOW_H
