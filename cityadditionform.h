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

private slots:
    /**
     * @brief Checks if the user input is correct, and if it is creates a new city.
     */
    void on_buttonBox_accepted();

private:
    Ui::cityAdditionForm *ui;
};

#endif // CITYADDITIONFORM_H
