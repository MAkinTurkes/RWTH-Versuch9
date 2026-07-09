#ifndef STREET_H
#define STREET_H

#include <QGraphicsScene>

#include <city.h>

class Street
{
public:
    Street();
    Street(City* cityA, City* cityB);

    /**
     * @brief Draws the street in blue onto a given scene.
     *
     * @param scene The scene, on which the street'll be drawed upon.
     */
    void draw(QGraphicsScene& scene);

    /**
     * @brief Draws the street in red onto a given scene.
     *
     * @param scene The scene, on which the street'll be drawed upon.
     */
    void drawRed(QGraphicsScene& scene);

    /**
     * @brief The getter function for the first city.
     *
     * @return A pointer to the first city.
     */
    City* getCityA() const;

    /**
     * @brief The getter function for the second city.
     *
     * @return A pointer to the second city.
     */
    City* getCityB() const;

private:
    /**
     * @brief The first city on the street.
     */
    City* cityA;

    /**
     * @brief The second city on the street.
     */
    City* cityB;
};

#endif // STREET_H
