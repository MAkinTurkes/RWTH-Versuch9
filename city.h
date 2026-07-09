#ifndef CITY_H
#define CITY_H

#include<QString>
#include<QGraphicsScene>

class City
{
public:
    City(QString name, int x, int y);

    /**
     * @brief Draws the city onto the scene.
     * @param scene Pointer to scene to be drawed onto.
     */
    void draw(QGraphicsScene& scene);

    /**
     * @brief Returns the name of the city.
     */
    QString getName() const;

    /**
     * @brief Returns the x coordinate of the city.
     */
    int getX() const;

    /**
     * @brief Returns the y coordinate of the city.
     */
    int getY() const;

private:
    /**
     * @brief The name of the city.
     */
    QString name;

    /**
     * @brief The x coordinate of the city.
     */
    int x;

    /**
     * @brief The y coordinate of the city.
     */
    int y;
};

#endif // CITY_H
