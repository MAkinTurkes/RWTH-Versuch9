#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsView>
#include<map.h>

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
    void on_testButton_clicked();

    void on_actionExit_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAbout_triggered();

    void on_cityTestButton_clicked();

    void on_mapTestButton_clicked();

    void on_streetTestButton_clicked();

    void on_testAddStreet_clicked();

    void on_streetErrorTest_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsScene scene;
    Map map;
};
#endif // MAINWINDOW_H















