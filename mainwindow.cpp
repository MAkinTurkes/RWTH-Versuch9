#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "city.h"
#include "street.h"
#include "cityadditionform.h"
#include "mapionrw.h"
#include "dijkstra.h"

#include <QMessageBox>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->graphicsView->setScene(&scene);
    mapIo = new MapIoNrw();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testButton_clicked()
{
    qDebug() << "Der Knopf wurde geklickt.";
    scene.addRect(QRandomGenerator::global()->bounded(1000), QRandomGenerator::global()->bounded(1000), 100, 80, QPen(Qt::blue), QBrush(Qt::blue, Qt::SolidPattern));

    QString str = ui->inputEditSpace->text();
    bool isNumber = false;
    int n = str.toInt(&isNumber);

    QMessageBox msgBox;
    if(isNumber)
    {
        n += 4;
        str = QString("Die gegebene Zahl erhöht um 4 ist: %1").arg(n);

        msgBox.setText(str);
        msgBox.exec();
        qDebug() << str;
    }
    else
    {
        str = QString("Die Eingabe ist: %1").arg(str);

        msgBox.setText(str);
        msgBox.exec();
        qDebug() << str;
    }
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionClear_Scene_triggered()
{
    scene.clear();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox;
    msgBox.aboutQt(this);
}


void MainWindow::on_cityTestButton_clicked()
{
    City c1("city c2", 20,50);
    c1.draw(scene);
}

void MainWindow::on_mapTestButton_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c2", 40,100);
    map.addCity(&c1);
    map.addCity(&c2);
    map.draw(scene);
}


void MainWindow::on_streetTestButton_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c1", 40,100);
    c1.draw(scene);
    c2.draw(scene);

    Street street(&c1, &c2);
    street.draw(scene);
}


void MainWindow::on_testAddStreet_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c1", 40,100);
    map.addCity(&c1);
    map.addCity(&c2);
    c1.draw(scene);
    c2.draw(scene);

    Street street(&c1, &c2);
    street.draw(scene);

    map.addStreet(&street);
}

void MainWindow::on_streetErrorTest_clicked()
{
    QMessageBox msgBox;
    msgBox.setText(QString("Die Städte werden nicht zur Karte hinzugefügt."));
    msgBox.exec();

    City c1("city c1", 20,50);
    City c2("city c1", 40,100);

    Street street(&c1, &c2);
    street.draw(scene);

    map.addStreet(&street);
}


void MainWindow::on_addCity_clicked()
{
    if(ui->addCity->isChecked())
    {
        ui->cityTestButton->hide();
        ui->mapTestButton->hide();
        ui->streetTestButton->hide();
        ui->streetErrorTest->hide();
        ui->testAddStreet->hide();
        ui->testButton->hide();
    }
    else
    {
        ui->cityTestButton->show();
        ui->mapTestButton->show();
        ui->streetTestButton->show();
        ui->streetErrorTest->show();
        ui->testAddStreet->show();
        ui->testButton->show();
    }
}


void MainWindow::on_addCityButton_clicked()
{
    if(ui->addCity->isChecked())
    {
        cityAdditionForm addCityForm;

        if(addCityForm.exec() == QDialog::Accepted)
        {
            City* newCity = addCityForm.createCity();

            if(newCity != nullptr)
            {
                newCity->draw(scene);
                ui->dijkstraFirstCity->addItem(newCity->getName());
                ui->dijkstraSecondCity->addItem(newCity->getName());
                map.addCity(newCity);
            }
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText(QString("Bitte drücken Sie zuerst ans 'City Addition Mode' Kästchen."));
        msgBox.exec();
    }
}

void MainWindow::on_fillMapButton_clicked()
{
    mapIo->fillMap(map);
    QList<City*> citiesToAdd = map.getCityList();
    for(QList<City*>::ConstIterator it = citiesToAdd.constBegin(); it != citiesToAdd.constEnd(); it++)
    {
        ui->dijkstraFirstCity->addItem((*it)->getName());
        ui->dijkstraSecondCity->addItem((*it)->getName());
    }

    map.draw(scene);
}


void MainWindow::on_dijkstraButton_clicked()
{
    QVector<Street*> dijkWay = Dijkstra::search(map, ui->dijkstraFirstCity->currentText(), ui->dijkstraSecondCity->currentText());
    Street* prevStreet = (*dijkWay.begin());

    for(QVector<Street*>::ConstIterator it = dijkWay.constBegin(); it != dijkWay.constEnd(); it++)
    {
        (*it)->drawRed(scene);

        if(prevStreet->getCityA()->getName() == (*it)->getCityA()->getName())
        {
            qDebug() << QString("von %1 zu %2").arg((*it)->getCityA()->getName(), (*it)->getCityB()->getName());
        }
        else
        {
            qDebug() << QString("von %1 zu %2").arg((*it)->getCityB()->getName(), (*it)->getCityA()->getName());
        }
        prevStreet = (*it);
    }
}

