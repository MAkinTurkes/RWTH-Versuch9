#include "street.h"

#include <QPen>
#include <QBrush>

Street::Street()
{
}

Street::Street(City* cityA, City* cityB) : cityA(cityA), cityB(cityB)
{
}


void Street::draw(QGraphicsScene& scene)
{
    scene.addLine(cityA->getX(), cityA->getY(), cityB->getX(), cityB->getY(), QPen(Qt::blue));
}

void Street::drawRed(QGraphicsScene& scene)
{
    scene.addLine(cityA->getX(), cityA->getY(), cityB->getX(), cityB->getY(), QPen(Qt::red));
}

City* Street::getCityA() const
{
    return cityA;
}

City* Street::getCityB() const
{
    return cityB;
}