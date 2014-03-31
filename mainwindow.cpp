#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylemodifier.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList lst;
    lst<< "red" << "black" << "blue";
    StyleModifier *t = new StyleModifier("color", lst);


}

MainWindow::~MainWindow()
{
    delete ui;
}
