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

    portStateBuff = new int*[9];
    for (int i=0; i<9; i++)
        portStateBuff[i] = new int[8];

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
            if (j%2 == 0)
                portStateBuff[i][j] = 0;
            else
                portStateBuff[i][j] = 0;
    setPortState(portStateBuff);

    //connect(buttons,SIGNAL(signalChangeState()),this,SLOT(slotButtonsChange()));
}

MCU::~MCU()
{
    for (int i=0; i<9; i++)
        delete [] stateButton[i];
    delete ui;

    for (int i=0; i<9; i++)
        delete [] portStateBuff[i];
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
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
        {
                //stateButton[i][j] = portState[i][j];
        }
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
            if (stateButton[i][j] == 0)
                portStateBuff[i][j] = 0;
            else

            if (i == 8)
                if (sw2[0] == 0)
                    portStateBuff[i][j] = 0;
                else
                {
                    if(stateButton[i][j] == 2 || stateButton[i][j] == -2)
                        portStateBuff[i][j] = portState[i][j];
                    else
                        portStateBuff[i][j] += stateButton[i][j];
                }
            else
                if (sw1[i] == 0)
                    portStateBuff[i][j] = 0;
                else
                {
                    if(stateButton[i][j] == 2 || stateButton[i][j] == -2)
                        portStateBuff[i][j] = portState[i][j];
                    else
                        portStateBuff[i][j] += stateButton[i][j];
                }

            if (portStateBuff[i][j] < 0)
                portStateBuff[i][j] = 0;
            if (portStateBuff[i][j] > 1)
                portStateBuff[i][j] = 1;
        }

    emit signalButtonsChange(portStateBuff);
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


void MCU::setP0(int x)
{
    for (int i = 0; i < 8; i++)
    {
        portState[0][i] = x%2;
        x /= 2;
    }
    ChangeState();
}

void MCU::setP1(int x)
{
    for (int i = 0; i < 8; i++)
    {
        portState[1][i] = x%2;
        x /= 2;
    }
    ChangeState();
}

void MCU::setP2(int x)
{
    for (int i = 0; i < 8; i++)
    {
        portState[2][i] = x%2;
        x /= 2;
    }
    ChangeState();
}

void MCU::setP3(int x)
{
    for (int i = 0; i < 8; i++)
    {
        portState[3][i] = x%2;
        x /= 2;
    }
    ChangeState();
}
