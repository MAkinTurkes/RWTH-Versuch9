#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>

#include "map.h"
#include "mapio.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    /**
     * @brief Gives the user's input back. If the input was a number gives the number increased by 4 back.
     */
    void on_testButton_clicked();

    /**
     * @brief Closes the App.
     */
    void on_actionExit_triggered();

    /**
     * @brief Clears the scene.
     */
    void on_actionClear_Scene_triggered();

    /**
     * @brief Creates a pop-up window about the app's infrastructure.
     */
    void on_actionAbout_triggered();

    /**
     *  @brief City creation test function.
     *
     *  Creates a cities, and draws it onto the scene.
     */
    void on_cityTestButton_clicked();

    /**
     *  @brief Map test function.
     *
     *  Creates a map, and adds two cities to it. Afterwards draws these onto the scene.
     */
    void on_mapTestButton_clicked();

    /**
     *  @brief Street creation test function.
     *
     *  Creates a street between two cities, and draws it onto the scene.
     */
    void on_streetTestButton_clicked();

    /**
     *  @brief Street addition test function.
     *
     *  Creates a street, and adds to the map.
     */
    void on_testAddStreet_clicked();

    /**
     *  @brief Flawed street creation test function.
     *
     *  Tries to create a street between two cities not included on the map. Gives an error if any of the cities wasn't on the map.
     */
    void on_streetErrorTest_clicked();

    /**
     *  @brief Opens a window for the creation of a city.
     */
    void on_addCity_clicked();

    /**
     *  @brief City creation, and addition function.
     *
     *  Creates, and adds a city to the map, and the combo box "library".
     */
    void on_addCityButton_clicked();

    /**
     *  @brief Fills the scene according to a preset map.
     */
    void on_fillMapButton_clicked();

    /**
     *  @brief Finds the shortest way between the two given cities.
     */
    void on_dijkstraButton_clicked();

    /**
     *  @brief Executes a group of test for the AbstractMap class.
     */
    void on_testAbstractMapButton_clicked();

    /**
     *  @brief Creates a new street between two given cities.
     */
    void on_addStreetButton_clicked();

private:
    Ui::MainWindow *ui;

    /**
     *  @brief Scene that is to be drawn on the graphics view.
     */
    QGraphicsScene scene;

    /**
     *  @brief The map that contains all the information about the saved cities, and streets.
     */
    Map map;

    /**
     *  @brief A MapIo pointer. It's only used for its fillMap() function.
     */
    MapIo* mapIo;
};
#endif // MAINWINDOW_H















