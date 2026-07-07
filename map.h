#ifndef MAP_H
#define MAP_H

#include<QList>
#include<city.h>
#include<abstractmap.h>

class Map : public AbstractMap
{
public:
    Map();
    void addCity(City* newCity) override;
    void draw(QGraphicsScene& scene);
    bool addStreet(Street*) override;

private:
    QList<City*> cityList;
    QList<Street*> streetList;
};

#endif // MAP_H
