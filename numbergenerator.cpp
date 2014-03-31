#include "numbergenerator.h"

NumberGenerator::NumberGenerator(QStringList _alphabet, QObject *parent) :
    alphabet(_alphabet), QObject(parent)
{
}

void NumberGenerator::addModifire(StyleModifier *_style)
{
    styles.append(_style);
}
