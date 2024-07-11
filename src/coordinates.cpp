#include "coordinates.h"
#include <QBuffer>
#include <QXmlStreamWriter>

Coordinates::Coordinates(QObject *parent)
    : QObject{parent}
{
    m_dx = 0.0;
    m_dy = 0.0;
}

double Coordinates::dx() const {
    return m_dx;
}

double Coordinates::dy() const {
    return m_dy;
}

QString Coordinates::serialize()
{
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    QXmlStreamWriter writer(&buffer);
    writer.setAutoFormatting(true);

    writer.writeStartDocument();
    writer.writeStartElement(COORDINATES);

    writer.writeStartElement(DX);
    writer.writeCharacters(QString::number(m_dx));
    writer.writeEndElement();

    writer.writeStartElement(DY);
    writer.writeCharacters(QString::number(m_dy));
    writer.writeEndElement();

    writer.writeEndElement();
    writer.writeEndDocument();

    QString xmlString = buffer.buffer();
    buffer.close();

    return xmlString;
}

void Coordinates::deserialize(const QString& xmlString)
{
    QXmlStreamReader reader(xmlString);
    while (!reader.atEnd() && !reader.hasError())
    {
        if (reader.isStartElement())
        {
            if (reader.name() == DX)
            {
                reader.readNext();
                m_dx = reader.text().toDouble();
            }
            else if (reader.name() == DY)
            {
                reader.readNext();
                m_dy = reader.text().toDouble();
            }
        }
        reader.readNext();
    }

    if (reader.hasError())
    {
        qDebug() << "Error parsing XML:" << reader.errorString();
    }
}

void Coordinates::setDx(double dx)
{
    m_dx = dx;
}

void Coordinates::setDy(double dy)
{
    m_dy = dy;
}
