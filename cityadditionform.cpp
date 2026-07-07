#include "cityadditionform.h"
#include "ui_cityadditionform.h"

#include <QMessageBox>
#include <QString>
#include <QDebug>

cityAdditionForm::cityAdditionForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cityAdditionForm)
{
    ui->setupUi(this);
}

cityAdditionForm::~cityAdditionForm()
{
    delete ui;
}

City* cityAdditionForm::createCity()
{
    bool isIntX = false;
    bool isIntY = false;
    bool isNameEmpty = ui->stadtNameLineEdit->text().isEmpty();

    int newCityX = ui->xLineEdit->text().toInt(&isIntX);
    int newCityY = ui->yLineEdit->text().toInt(&isIntY);



    if(isIntX && isIntY && !isNameEmpty)
    {
        qDebug() << "Neue Stadt erzeugt - Name:" << ui->stadtNameLineEdit->text() << "| X:" << newCityX << "| Y:" << newCityY;
        return new City(ui->stadtNameLineEdit->text(), newCityX, newCityY);
    }
    else if(isNameEmpty)
    {
        QMessageBox msgBox;
        msgBox.setText(QString("Die Name der Stadt kann nicht leer sein!"));
        msgBox.exec();
        return nullptr;
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText(QString("Bitte geben Sie passende Koordinaten!"));
        msgBox.exec();

        return nullptr;
    }
}