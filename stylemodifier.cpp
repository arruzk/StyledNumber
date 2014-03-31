#include "stylemodifier.h"

StyleModifier::StyleModifier(QString _style, QStringList _options):
    style(_style), options(_options)
{
}
QString StyleModifier::getStyle() const
{
    return style;
}

void StyleModifier::setStyle(const QString &value)
{
    style = value;
}

void StyleModifier::addOption(QString str)
{
    options.append(str);
}

QString StyleModifier::getStyle()
{
    return style+': '+options.at(qrand() % options.count());
}


