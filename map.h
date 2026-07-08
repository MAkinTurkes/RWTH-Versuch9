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
    City* findCity(const QString cityName) const override;
    QVector<Street*> getStreetList(const City* city) const override;
    City* getOppositeCity(const Street* street, const City* city) const override;
    double getLength(const Street* street) const override;

private:
    QList<City*> cityList;
    QList<Street*> streetList;
};

#endif // MAP_H
