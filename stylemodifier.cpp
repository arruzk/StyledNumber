#include "stylemodifier.h"

StyleModifier::StyleModifier(QString _style, QStringList _options):
    m_style(_style), m_options(_options)
{
}
QString StyleModifier::getStyle() const
{
    return m_style;
}

void StyleModifier::setStyle(const QString &value)
{
    m_style = value;
}

void StyleModifier::addOption(QString str)
{
    m_options.append(str);
}

QString StyleModifier::getStyle()
{
    return m_style+QString(": ")+m_options.at(qrand() % m_options.count())+QString(";");
}


