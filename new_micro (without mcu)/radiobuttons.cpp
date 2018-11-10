#include "radiobuttons.h"
#include "ui_radiobuttons.h"

RadioButtons::RadioButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioButtons)
{
    ui->setupUi(this);
    connect(ui->J_VCC,SIGNAL(clicked(bool)),this,SLOT(slotChangeState()));
    connect(ui->J_GND,SIGNAL(clicked(bool)),this,SLOT(slotChangeState()));
}

RadioButtons::~RadioButtons()
{
    delete ui;
}

void RadioButtons::slotChangeState()
{
    emit signalChangeState(getVCC());
}

void RadioButtons::setVCC(int x)
{
    if (x == 0)
        ui->J_GND->setChecked(true);
    else if (x == 1)
        ui->J_VCC->setChecked(true);

}

int RadioButtons::getVCC()
{
    if (ui->J_GND->isChecked())
        state = 0;
    else if (ui->J_VCC->isChecked())
        state = 1;
    return state;
}
