#include "port.h"
#include "ui_port.h"

PORT::PORT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PORT)
{
    ui->setupUi(this);
}

PORT::~PORT()
{
    delete ui;
}
