#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    length = 1800;
    width = 900;
    this->resize(length,width);           // фиксированый размер окна
    this->setFixedSize(length,width);     //

    ui->SW1->SetAllLable("SW1","PORTA","PORTB","PORTC","PORTD","PORTE","PORTF","PORTG","PORTH");


    v_debug.push_back(ui->debug_1);
    v_debug.push_back(ui->debug_2);
    v_debug.push_back(ui->debug_3);
    v_debug.push_back(ui->debug_4);
    v_debug.push_back(ui->debug_5);
    v_debug.push_back(ui->debug_6);
    v_debug.push_back(ui->debug_7);
    v_debug.push_back(ui->debug_8);

    v_debug.push_back(ui->debugJ_1);
    v_debug.push_back(ui->debugJ_2);
    v_debug.push_back(ui->debugJ_3);
    v_debug.push_back(ui->debugJ_4);
    v_debug.push_back(ui->debugJ_5);
    v_debug.push_back(ui->debugJ_6);
    v_debug.push_back(ui->debugJ_7);
    v_debug.push_back(ui->debugJ_8);
    v_debug.push_back(ui->debugJ_9);

    connect(ui->SW1, SIGNAL(signalCheckbox(int*)),this,SLOT(checkboxChange(int*)));
    connect(ui->j1_j9,SIGNAL(signalChangeState(int*)),this,SLOT(j1_j9Change(int*)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkboxChange(int* sw)
{
    for (int i = 0; i < 8; i++)
    {
        v_debug[i]->setText(QString::number(sw[i]));
    }
}

void MainWindow::j1_j9Change(int* state)
{
    for (int i = 0; i < 9; i++)
    {
        v_debug[i+8]->setText(QString::number(state[i]));
    }
}
