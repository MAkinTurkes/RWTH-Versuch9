#include "city.h"
#include <QPen>
#include <QBrush>
#include <QDebug>
#include <QGraphicsTextItem>

City::City(QString name, int x, int y) : name(name), x(x), y(y)
{
}

void City::draw(QGraphicsScene& scene)
{
    QGraphicsTextItem* text = new QGraphicsTextItem;
    text->setPos(x - 6, y);
    text->setPlainText(name);
    scene.addItem(text);
    scene.addEllipse(x, y, 4, 4, QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));
    qDebug() << QString("Die Stadt %1 wurde hinzugefügt.").arg(name);
}

QString City::getName() const
{
    return name;
}

int City::getX() const
{
    return x;
}

int City::getY() const
{
    return y;
}