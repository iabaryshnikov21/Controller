#include "buttons.h"
#include "ui_buttons.h"

Buttons::Buttons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buttons)
{
    ui->setupUi(this);

    state = new int*[9];
    for (int i=0; i<9; i++)
        state[i] = new int[8];
    buttons = new QPushButton**[9];
    for (int i=0; i<9; i++)
        buttons[i] = new QPushButton*[8];


    buttons[0][0] = ui->BUTTON_RA0;
    buttons[0][1] = ui->BUTTON_RA1;
    buttons[0][2] = ui->BUTTON_RA2;
    buttons[0][3] = ui->BUTTON_RA3;
    buttons[0][4] = ui->BUTTON_RA4;
    buttons[0][5] = ui->BUTTON_RA5;
    buttons[0][6] = ui->BUTTON_RA6;
    buttons[0][7] = ui->BUTTON_RA7;

    buttons[1][0] = ui->BUTTON_RB0;
    buttons[1][1] = ui->BUTTON_RB1;
    buttons[1][2] = ui->BUTTON_RB2;
    buttons[1][3] = ui->BUTTON_RB3;
    buttons[1][4] = ui->BUTTON_RB4;
    buttons[1][5] = ui->BUTTON_RB5;
    buttons[1][6] = ui->BUTTON_RB6;
    buttons[1][7] = ui->BUTTON_RB7;

    buttons[2][0] = ui->BUTTON_RC0;
    buttons[2][1] = ui->BUTTON_RC1;
    buttons[2][2] = ui->BUTTON_RC2;
    buttons[2][3] = ui->BUTTON_RC3;
    buttons[2][4] = ui->BUTTON_RC4;
    buttons[2][5] = ui->BUTTON_RC5;
    buttons[2][6] = ui->BUTTON_RC6;
    buttons[2][7] = ui->BUTTON_RC7;

    buttons[3][0] = ui->BUTTON_RD0;
    buttons[3][1] = ui->BUTTON_RD1;
    buttons[3][2] = ui->BUTTON_RD2;
    buttons[3][3] = ui->BUTTON_RD3;
    buttons[3][4] = ui->BUTTON_RD4;
    buttons[3][5] = ui->BUTTON_RD5;
    buttons[3][6] = ui->BUTTON_RD6;
    buttons[3][7] = ui->BUTTON_RD7;

    buttons[4][0] = ui->BUTTON_RE0;
    buttons[4][1] = ui->BUTTON_RE1;
    buttons[4][2] = ui->BUTTON_RE2;
    buttons[4][3] = ui->BUTTON_RE3;
    buttons[4][4] = ui->BUTTON_RE4;
    buttons[4][5] = ui->BUTTON_RE5;
    buttons[4][6] = ui->BUTTON_RE6;
    buttons[4][7] = ui->BUTTON_RE7;

    buttons[5][0] = ui->BUTTON_RF0;
    buttons[5][1] = ui->BUTTON_RF1;
    buttons[5][2] = ui->BUTTON_RF2;
    buttons[5][3] = ui->BUTTON_RF3;
    buttons[5][4] = ui->BUTTON_RF4;
    buttons[5][5] = ui->BUTTON_RF5;
    buttons[5][6] = ui->BUTTON_RF6;
    buttons[5][7] = ui->BUTTON_RF7;

    buttons[6][0] = ui->BUTTON_RG0;
    buttons[6][1] = ui->BUTTON_RG1;
    buttons[6][2] = ui->BUTTON_RG2;
    buttons[6][3] = ui->BUTTON_RG3;
    buttons[6][4] = ui->BUTTON_RG4;
    buttons[6][5] = ui->BUTTON_RG5;
    buttons[6][6] = ui->BUTTON_RG6;
    buttons[6][7] = ui->BUTTON_RG7;

    buttons[7][0] = ui->BUTTON_RH0;
    buttons[7][1] = ui->BUTTON_RH1;
    buttons[7][2] = ui->BUTTON_RH2;
    buttons[7][3] = ui->BUTTON_RH3;
    buttons[7][4] = ui->BUTTON_RH4;
    buttons[7][5] = ui->BUTTON_RH5;
    buttons[7][6] = ui->BUTTON_RH6;
    buttons[7][7] = ui->BUTTON_RH7;

    buttons[8][0] = ui->BUTTON_RJ0;
    buttons[8][1] = ui->BUTTON_RJ1;
    buttons[8][2] = ui->BUTTON_RJ2;
    buttons[8][3] = ui->BUTTON_RJ3;
    buttons[8][4] = ui->BUTTON_RJ4;
    buttons[8][5] = ui->BUTTON_RJ5;
    buttons[8][6] = ui->BUTTON_RJ6;
    buttons[8][7] = ui->BUTTON_RJ7;


    ui->J10->setVCC(0);
    for (int i=0; i<9; i++)
        for (int j=0; j<8; j++)
            state[i][j] = 0;



    for (int i=0; i<9; i++)
        for (int j=0; j<8; j++)
        {
            connect(buttons[i][j],SIGNAL(pressed()),this,SLOT(slotPressed()));
            connect(buttons[i][j],SIGNAL(released()),this,SLOT(slotReleased()));
        }
    connect(ui->J10,SIGNAL(signalChangeState(int)),this,SLOT(slotJ10Change()));
}

Buttons::~Buttons()
{
    for (int i=0; i<9; i++)
        delete [] state[i];
    for (int i=0; i<9; i++)
        delete [] buttons[i];
    delete ui;
}

int** Buttons::getState()
{
    if (ui->J10->getVCC() == 0)
    {
        for (int i=0; i<9; i++)
            for (int j=0; j<8; j++)
            {
                if(j1_j9[i]==0)
                    state[i][j] = 0;
                else if (j1_j9[i]==1 && buttons[i][j]->isDown())
                    state[i][j] = 0;
                else if (j1_j9[i]==1 && !buttons[i][j]->isDown())
                    state[i][j] = 1;
            }
    }
    if (ui->J10->getVCC() == 1)
    {
        for (int i=0; i<9; i++)
            for (int j=0; j<8; j++)
            {
                if(j1_j9[i]==1)
                    state[i][j] = 1;
                else if (j1_j9[i]==0 && buttons[i][j]->isDown())
                    state[i][j] = 1;
                else if (j1_j9[i]==0 && !buttons[i][j]->isDown())
                    state[i][j] = 0;
            }
    }
    return state;
}

void Buttons::setJ1_J9(int state)
{
    for (int i = 0; i < 9; i++)
        j1_j9[i] = state;
}

void Buttons::slotPressed()
{
    emit signalChangeState(this->getState());
}

void Buttons::slotReleased()
{
    emit signalChangeState(this->getState());
}

void Buttons::slotJ10Change()
{
    emit signalChangeState(this->getState());
}

void Buttons::slotJ1_J9Change(int* state)
{
    for (int i = 0; i < 9; i++)
        j1_j9[i] = state[i];
    emit signalChangeState(this->getState());
}
