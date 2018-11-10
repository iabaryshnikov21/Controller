#include "j1_j9.h"
#include "ui_j1_j9.h"

J1_J9::J1_J9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::J1_J9)
{
    ui->setupUi(this);

    radioButtons[0] = ui->J1;
    radioButtons[1] = ui->J2;
    radioButtons[2] = ui->J3;
    radioButtons[3] = ui->J4;
    radioButtons[4] = ui->J5;
    radioButtons[5] = ui->J6;
    radioButtons[6] = ui->J7;
    radioButtons[7] = ui->J8;
    radioButtons[8] = ui->J9;

    for (int i=0; i<9; i++)
    {
        radioButtons[i]->setVCC(1);
        connect(radioButtons[i], SIGNAL(signalChangeState(int)), this, SLOT(slotChangeState()));
    }
}

J1_J9::~J1_J9()
{
    delete ui;
}

void J1_J9::slotChangeState()
{
    for (int i=0; i<9; i++)
    {
        state[i] = radioButtons[i]->getVCC();
    }

    emit signalChangeState(state);
}
