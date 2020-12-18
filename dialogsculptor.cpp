#include "dialogsculptor.h"
#include "ui_dialogsculptor.h"

DialogSculptor::DialogSculptor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSculptor)
{
    ui->setupUi(this);
}

DialogSculptor::~DialogSculptor()
{
    delete ui;
}
int DialogSculptor::getNumX()
{
    return ui->spinBox_ValorX->value();
}

int DialogSculptor::getNumY()
{
    return ui->spinBox_ValorY->value();
}

int DialogSculptor::getNumZ()
{
    return ui->spinBox_ValorZ->value();
}

