#include "map.h"

#include<QDebug>
#include<QMessageBox>

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















