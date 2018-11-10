#include "mcu.h"
#include "ui_mcu.h"

MCU::MCU(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MCU)
{
    ui->setupUi(this);
    stateButton = new int*[9];
    for (int i=0; i<9; i++)
        stateButton[i] = new int[8];

    stateButton2 = new int*[9];
    for (int i=0; i<9; i++)
        stateButton2[i] = new int[8];

    portState = new int*[9];
    for (int i=0; i<9; i++)
        portState[i] = new int[8];

    for (int i = 0; i < 8; i++)
    {
        sw1[i] = 0;
        sw2[i] = 0;
        sw3[i] = 0;
        sw4[i] = 0;
    }
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
            stateButton[i][j] = 0;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
            stateButton2[i][j] = 0;
    setPortState(stateButton);

    //connect(buttons,SIGNAL(signalChangeState()),this,SLOT(slotButtonsChange()));
}

MCU::~MCU()
{
    for (int i=0; i<9; i++)
        delete [] stateButton[i];
    delete ui;

    for (int i=0; i<9; i++)
        delete [] stateButton2[i];
    for (int i=0; i<9; i++)
        delete [] portState[i];

}

void MCU::slotButtonsChange(int ** state)
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
        {
                stateButton[i][j] = state[i][j];
        }
    ChangeState();
    //emit signalPortChange();
}
void MCU::slotSW1Change(int* state)
{
    for (int i = 0; i < 8; i++)
        sw1[i] = state[i];
    ChangeState();
}

void MCU::slotSW2Change(int* state)
{
    for (int i = 0; i < 8; i++)
        sw2[i] = state[i];
    ChangeState();
}

void MCU::slotSW3Change(int* state)
{
    for (int i = 0; i < 8; i++)
        sw3[i] = state[i];
}

void MCU::slotSW4Change(int* state)
{
    for (int i = 0; i < 8; i++)
        sw4[i] = state[i];
}


void MCU::ChangeState()
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
        {
            if (i == 8)
                if (sw2[0] == 0)
                    stateButton2[i][j] = 0;
                else
                    stateButton2[i][j] = stateButton[i][j];
            else
                if (sw1[i] == 0)
                    stateButton2[i][j] = 0;
                else
                    stateButton2[i][j] = stateButton[i][j];
        }

    emit signalButtonsChange(stateButton2);
}

int** MCU::getPortState()
{
    return portState;
}

void MCU::setPortState(int** state)
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
        {
            portState[i][j] = state[i][j];
        }
}
