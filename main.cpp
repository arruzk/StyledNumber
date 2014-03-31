#include "mainwindow.h"
#include "stylemodifier.h"
#include <QApplication>
#include <QFile>
#include <QStringList>
#include <QString>
#include <QDebug>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsrand (QDateTime::currentMSecsSinceEpoch());

    QFile File(":/style.qss");
    File.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(File.readAll());
    qApp->setStyleSheet(StyleSheet);

    MainWindow w;
    w.show();
/*    for(int i = 0; i<10; i++)
        qDebug()<<t.getStyle();*/

    return a.exec();
}
