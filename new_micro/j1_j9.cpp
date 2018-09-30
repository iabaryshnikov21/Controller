#include "j1_j9.h"
#include "ui_j1_j9.h"

J1_J9::J1_J9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::J1_J9)
{
    ui->setupUi(this);
    ui->J1->setVCC(0);
    ui->J2->setVCC(0);
    ui->J3->setVCC(0);
    ui->J4->setVCC(0);
    ui->J5->setVCC(0);
    ui->J6->setVCC(0);
    ui->J7->setVCC(0);
    ui->J8->setVCC(0);
    ui->J9->setVCC(0);
    connect(ui->J1, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J2, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J3, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J4, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J5, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J6, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J7, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J8, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
    connect(ui->J9, SIGNAL(signalChangeState()), this, SLOT(slotChangeState()));
}

J1_J9::~J1_J9()
{
    delete ui;
}

void J1_J9::slotChangeState()
{
    state[0] = ui->J1->getVCC();
    state[1] = ui->J2->getVCC();
    state[2] = ui->J3->getVCC();
    state[3] = ui->J4->getVCC();
    state[4] = ui->J5->getVCC();
    state[5] = ui->J6->getVCC();
    state[6] = ui->J7->getVCC();
    state[7] = ui->J8->getVCC();
    state[8] = ui->J9->getVCC();
    emit signalChangeState(state);
}
