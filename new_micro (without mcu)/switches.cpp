#include "switches.h"
#include "ui_switches.h"

Switches::Switches(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Switches)
{
    ui->setupUi(this);
    v.push_back(ui->switch1);
    v.push_back(ui->switch2);
    v.push_back(ui->switch3);
    v.push_back(ui->switch4);
    v.push_back(ui->switch5);
    v.push_back(ui->switch6);
    v.push_back(ui->switch7);
    v.push_back(ui->switch8);

    for (int i = 0; i < 8; i++)
    {
        connect(v[i],SIGNAL(stateChanged(int)),this,SLOT(slotChangeState()));
    }
}

Switches::~Switches()
{
    delete ui;
}
void Switches::SetAllLable (QString name, QString switch1, QString switch2, QString switch3, QString switch4, QString switch5, QString switch6, QString switch7, QString switch8)
{
    ui->label_title->setText(name);
    ui->label_1->setText(switch1);
    ui->label_2->setText(switch2);
    ui->label_3->setText(switch3);
    ui->label_4->setText(switch4);
    ui->label_5->setText(switch5);
    ui->label_6->setText(switch6);
    ui->label_7->setText(switch7);
    ui->label_8->setText(switch8);

}

int* Switches::getState()
{
    for (int i = 0; i < 8; i++)
    {
        if (v[i]->checkState() == Qt::Checked)
            sw[i] = 1;
        else
            sw[i] = 0;
    }
    return sw;
}

void Switches::slotChangeState()
{
    for (int i = 0; i < 8; i++)
    {
        if (v[i]->checkState() == Qt::Checked)
            sw[i] = 1;
        else
            sw[i] = 0;
    }
    emit signalCheckbox(sw);
}
