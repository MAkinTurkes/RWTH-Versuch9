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
    int newCityX = ui->xLineEdit->text().toInt();
    int newCityY = ui->yLineEdit->text().toInt();

    qDebug() << "Neue Stadt erzeugt - Name:" << ui->stadtNameLineEdit->text() << "| X:" << newCityX << "| Y:" << newCityY;
    return new City(ui->stadtNameLineEdit->text(), newCityX, newCityY);
}

void cityAdditionForm::on_buttonBox_accepted()
{
    bool isIntX = false;
    bool isIntY = false;
    bool isNameEmpty = ui->stadtNameLineEdit->text().isEmpty();

    ui->xLineEdit->text().toInt(&isIntX);
    ui->yLineEdit->text().toInt(&isIntY);

    if(isNameEmpty)
    {
        QMessageBox msgBox;
        msgBox.setText(QString("Die Name der Stadt kann nicht leer sein!"));
        msgBox.exec();
        return;
    }
    else if(!isIntX || !isIntY)
    {
        QMessageBox msgBox;
        msgBox.setText(QString("Bitte geben Sie passende Koordinaten!"));
        msgBox.exec();

        return;
    }
    else
    {
        accept();
    }
}

