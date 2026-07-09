#ifndef MAP_H
#define MAP_H

#include<QList>
#include<city.h>
#include<abstractmap.h>

class Map : public AbstractMap
{
public:
    Map();

    /**
     * @brief Adds a city to the map.
     *
     * @param newCiy The pointer to the city that's to be added.
     */
    void addCity(City* newCity) override;

    /**
     * @brief Draws the cities, and the streets onto the scene.
     *
     * @param scene The scene to be drawes on.
     */
    void draw(QGraphicsScene& scene);

    /**
     * @brief Adds a street to the map.
     *
     * @param Street* The pointer to the street that's to be added.
     * @return true if the street was successfully added to the map. Otherwise false.
     */
    bool addStreet(Street*) override;

    /**
     * @brief Searchs through the map for a city with the given name.
     *
     * @param cityName The name of the city that's to be found.
     * @return A pointer to the city with given name. Otherwise nullptr.
     */
    City* findCity(const QString cityName) const override;

    /**
     * @brief Finds and returns every single street connected to the given city.
     *
     * @param city A pointer to the city that must be one of the cities of the street.
     * @return A street pointer vector containing the streets with the desired characteristics. It returns an empty vector, if none was found.
     */
    QVector<Street*> getStreetList(const City* city) const override;

    /**
     * @brief Getter function for the city list of the map.
     *
     * @return The city list.
     */
    QList<City*> getCityList() const;

    /**
     * @brief Returns the city at the opposite side of a street.
     *
     * @param street The street, which'll be worked upon.
     * @param city The city which should be ignored.
     *
     * @return A pointer to the city at the other of the given street. A nullpointer, if the other side is empty or the given city is not a part of the given street.
     */
    City* getOppositeCity(const Street* street, const City* city) const override;

    /**
     * @brief Calculates and returns the length of a street.
     *
     * @param street The street, whose length will be calculated.
     * @return The length of the given street as a double.
     */
    double getLength(const Street* street) const override;

private:
    /**
     * @brief The list of cities that are on the map.
     */
    QList<City*> cityList;

    /**
     * @brief The list of streets that are on the map.
     */
    QList<Street*> streetList;
};

#endif // MAP_H
