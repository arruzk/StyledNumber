#include "numbergenerator.h"
#include <QDebug>

NumberGenerator::NumberGenerator(QStringList _alphabet, QObject *parent) :
    m_alphabet(_alphabet), QObject(parent)
{
}

void NumberGenerator::addModifire(StyleModifier *_style)
{
    m_styles.append(_style);
}

QStringList NumberGenerator::getNumbers()
{
    int maxCount = qrand() % m_alphabet.count();
    QSet<int>indexes;
    while(indexes.count()<maxCount)
        indexes.insert(qrand() % maxCount);
    QStringList temp;
    foreach(const int &t , indexes)
        temp.append(m_alphabet[t]);
    return temp;
}

QList<QLabel *> NumberGenerator::generateLabel(){
    QList<QLabel *> labels;
    foreach (const QString &content, getNumbers()) {
        QLabel *tLabel = new QLabel(content);
        QString labelStyle("");
        foreach (StyleModifier * style, m_styles) {
            labelStyle += style->getStyle();
        }
        tLabel->setStyleSheet(labelStyle);
        labels.append(tLabel);
    }
    return labels;
}
