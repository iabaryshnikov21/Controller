#include "ports.h"
#include "ui_ports.h"

PORTS::PORTS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PORTS)
{
    ui->setupUi(this);
}

PORTS::~PORTS()
{
    delete ui;
}
