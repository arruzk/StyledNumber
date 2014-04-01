#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stylemodifier.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList lst;
    lst<< "red" << "black" << "blue";
    StyleModifier *color = new StyleModifier("color", lst);
    QStringList lst2;
    lst<< "10px" << "20px" << "14px";
    StyleModifier *fontSize = new StyleModifier("font-size", lst);
    QStringList alphabet;
    alphabet << "I" << "II" << "III" << "IV" << "V" << "VI" << "VII" << "VIII" << "IX";
    m_numGenerator = new NumberGenerator(alphabet);
    m_numGenerator->addModifire(color);
    m_numGenerator->addModifire(fontSize);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::deleteWidgetInLayout()
{
    if ( ui->horizontalLayout != NULL )
    {
        QLayoutItem* item;
        while ( ( item = ui->horizontalLayout->takeAt( 0 ) ) != NULL )
        {
            delete item->widget();
            delete item;
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    deleteWidgetInLayout();
    foreach(QLabel *t, m_numGenerator->generateLabel())
        ui->horizontalLayout->addWidget(t);
}
