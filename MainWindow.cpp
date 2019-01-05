#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "MyOpenGLWindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyOpenGLWindow* openGLWidget = new MyOpenGLWindow();

    QVBoxLayout* centralLayout = new QVBoxLayout();
    centralLayout->addWidget(openGLWidget);
    ui->centralWidget->setLayout(centralLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
