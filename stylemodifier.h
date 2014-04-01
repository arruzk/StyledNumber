#ifndef STYLEMODIFIER_H
#define STYLEMODIFIER_H
#include <QStringList>
#include <QVector>
class StyleModifier
{
public:
    StyleModifier(QString _style, QStringList _options);
    QString getStyle() const;
    void setStyle(const QString& value);

    void addOption(QString str);
    QString getStyle();

private:
    QString m_style;
    QStringList m_options;
};

#endif // STYLEMODIFIER_H
