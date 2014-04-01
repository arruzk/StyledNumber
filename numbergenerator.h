#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

#include <QObject>
#include <QStringList>
#include <QList>
#include <QListIterator>
#include <QSet>
#include <QString>
#include <QLabel>
#include "stylemodifier.h"

class NumberGenerator : public QObject
{
    Q_OBJECT
public:
    explicit NumberGenerator(QStringList _alphabet, QObject *parent = 0);
    void addModifire(StyleModifier *_style);
    QList<QLabel *> generateLabel();
signals:

public slots:

private:
    QStringList getNumbers();

private:
    QStringList m_alphabet;
    QList<StyleModifier*> m_styles;
};

#endif // NUMBERGENERATOR_H
