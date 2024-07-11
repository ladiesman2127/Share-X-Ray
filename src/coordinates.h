#ifndef COORDINATES_H
#define COORDINATES_H

#include <QObject>
#include <QQmlEngine>
class Coordinates : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(double dx READ dx WRITE setDx)
    Q_PROPERTY(double dy READ dy WRITE setDy)
public:
    explicit Coordinates(QObject *parent = nullptr);

    void setDx(double dx);
    void setDy(double dy);

    double dx() const;
    double dy() const;

    Q_INVOKABLE QString serialize();
    Q_INVOKABLE void deserialize(const QString& xmlString);

private:
    double m_dx, m_dy;
    inline static const QString COORDINATES = "coordinates";
    inline static const QString DX = "dx";
    inline static const QString DY = "dy";
signals:
};

#endif // COORDINATES_H
