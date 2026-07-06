#include "city.h"
#include<QPen>
#include<QBrush>
#include<QDebug>

City::City(QString name, int x, int y) : name(name), x(x), y(y)
{
}

void City::draw(QGraphicsScene& scene)
{
    scene.addEllipse(x, y, 4, 4, QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));
    qDebug() << QString("Die Stadt %1 wurde hinzugefügt.").arg(name);
}

QString City::getName()
{
    return name;
}

int City::getX()
{
    return x;
}

int City::getY()
{
    return y;
}