#ifndef CITYADDITIONFORM_H
#define CITYADDITIONFORM_H

#include "city.h"

#include <QDialog>

namespace Ui {
class cityAdditionForm;
}

class cityAdditionForm : public QDialog
{
    Q_OBJECT

public:
    explicit cityAdditionForm(QWidget *parent = nullptr);
    ~cityAdditionForm();

    City* createCity();

private:
    Ui::cityAdditionForm *ui;
};

#endif // CITYADDITIONFORM_H
