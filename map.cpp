#include "map.h"

#include<QDebug>
#include<QMessageBox>
#include<QVector>

Map::Map()
{

}

void Map::addCity(City* newCity)
{
    cityList.append(newCity);
    qDebug() << newCity->getName();
}

void Map::draw(QGraphicsScene& scene)
{
    for(QList<Street*>::Iterator it = streetList.begin(); it != streetList.end(); it++)
    {
        (*it)->draw(scene);
    }

    for(QList<City*>::Iterator it = cityList.begin(); it != cityList.end(); it++)
    {
        (*it)->draw(scene);
    }
}

bool Map::addStreet(Street* street)
{
    QMessageBox msgBox;

    if(cityList.indexOf(street->getCityA()) == -1 || cityList.indexOf(street->getCityB()) == -1)
    {
        msgBox.setText(QString("Am wenigsten fehlt eine Stadt!"));
        msgBox.exec();

        return false;
    }
    else
    {
        /*msgBox.setText(QString("Die Straße wurde hinzugefügt."));
        msgBox.exec();*/
        qDebug() << QString("Die Straße wurde hinzugefügt.");
        streetList.append(street);

        return true;
    }
}

City* Map::findCity(const QString cityName) const
{
    for(QList<City*>::const_iterator it = cityList.constBegin(); it != cityList.constEnd(); it++)
    {
        if((*it)->getName() == cityName)
        {
            return (*it);
        }
    }

    return nullptr;
}

QVector<Street*> Map::getStreetList(const City* city) const
{
    QVector<Street*> cityStreetList;

    for(QList<Street*>::ConstIterator it = streetList.constBegin(); it != streetList.constEnd(); it++)
    {
        if((*it)->getCityA() == city || (*it)->getCityB() == city)
        {
            cityStreetList.append((*it));
        }
    }

    return cityStreetList;
}

QList<City*> Map::getCityList() const
{
    return cityList;
}

City* Map::getOppositeCity(const Street* street, const City* city) const
{
    if(street->getCityA() == city)
    {
        return street->getCityB();
    }
    else if(street->getCityB() == city)
    {
        return street->getCityA();
    }
    else
    {
        return nullptr;
    }
}

double Map::getLength(const Street* street) const
{
    return sqrt(((street->getCityA()->getX() - street->getCityB()->getX()) ^ 2) + ((street->getCityA()->getY() - street->getCityB()->getY()) ^ 2));
}















