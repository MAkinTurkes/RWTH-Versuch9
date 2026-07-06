#ifndef STREET_H
#define STREET_H

#include <QGraphicsScene>

#include <city.h>

class Street
{
public:
    Street();

    Street(City* cityA, City* cityB);
    void draw(QGraphicsScene& scene);
    City* getCityA();
    City* getCityB();

private:
    City* cityA;
    City* cityB;
};

#endif // STREET_H
