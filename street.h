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
    City* getCityA() const;
    City* getCityB() const;

private:
    City* cityA;
    City* cityB;
};

#endif // STREET_H
