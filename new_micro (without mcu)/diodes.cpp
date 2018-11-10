#include "diodes.h"
#include "ui_diodes.h"

Diodes::Diodes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diodes)
{
    ui->setupUi(this);

    state = new int*[9];
    for (int i=0; i<9; i++)
        state[i] = new int[8];

    diodes = new QLabel**[9];
    for (int i=0; i<9; i++)
        diodes[i] = new QLabel*[8];

    diodes[0][0] = ui->DIODE_RA0;
    diodes[0][1] = ui->DIODE_RA1;
    diodes[0][2] = ui->DIODE_RA2;
    diodes[0][3] = ui->DIODE_RA3;
    diodes[0][4] = ui->DIODE_RA4;
    diodes[0][5] = ui->DIODE_RA5;
    diodes[0][6] = ui->DIODE_RA6;
    diodes[0][7] = ui->DIODE_RA7;

    diodes[1][0] = ui->DIODE_RB0;
    diodes[1][1] = ui->DIODE_RB1;
    diodes[1][2] = ui->DIODE_RB2;
    diodes[1][3] = ui->DIODE_RB3;
    diodes[1][4] = ui->DIODE_RB4;
    diodes[1][5] = ui->DIODE_RB5;
    diodes[1][6] = ui->DIODE_RB6;
    diodes[1][7] = ui->DIODE_RB7;

    diodes[2][0] = ui->DIODE_RC0;
    diodes[2][1] = ui->DIODE_RC1;
    diodes[2][2] = ui->DIODE_RC2;
    diodes[2][3] = ui->DIODE_RC3;
    diodes[2][4] = ui->DIODE_RC4;
    diodes[2][5] = ui->DIODE_RC5;
    diodes[2][6] = ui->DIODE_RC6;
    diodes[2][7] = ui->DIODE_RC7;

    diodes[3][0] = ui->DIODE_RD0;
    diodes[3][1] = ui->DIODE_RD1;
    diodes[3][2] = ui->DIODE_RD2;
    diodes[3][3] = ui->DIODE_RD3;
    diodes[3][4] = ui->DIODE_RD4;
    diodes[3][5] = ui->DIODE_RD5;
    diodes[3][6] = ui->DIODE_RD6;
    diodes[3][7] = ui->DIODE_RD7;

    diodes[4][0] = ui->DIODE_RE0;
    diodes[4][1] = ui->DIODE_RE1;
    diodes[4][2] = ui->DIODE_RE2;
    diodes[4][3] = ui->DIODE_RE3;
    diodes[4][4] = ui->DIODE_RE4;
    diodes[4][5] = ui->DIODE_RE5;
    diodes[4][6] = ui->DIODE_RE6;
    diodes[4][7] = ui->DIODE_RE7;

    diodes[5][0] = ui->DIODE_RF0;
    diodes[5][1] = ui->DIODE_RF1;
    diodes[5][2] = ui->DIODE_RF2;
    diodes[5][3] = ui->DIODE_RF3;
    diodes[5][4] = ui->DIODE_RF4;
    diodes[5][5] = ui->DIODE_RF5;
    diodes[5][6] = ui->DIODE_RF6;
    diodes[5][7] = ui->DIODE_RF7;

    diodes[6][0] = ui->DIODE_RG0;
    diodes[6][1] = ui->DIODE_RG1;
    diodes[6][2] = ui->DIODE_RG2;
    diodes[6][3] = ui->DIODE_RG3;
    diodes[6][4] = ui->DIODE_RG4;
    diodes[6][5] = ui->DIODE_RG5;
    diodes[6][6] = ui->DIODE_RG6;
    diodes[6][7] = ui->DIODE_RG7;

    diodes[7][0] = ui->DIODE_RH0;
    diodes[7][1] = ui->DIODE_RH1;
    diodes[7][2] = ui->DIODE_RH2;
    diodes[7][3] = ui->DIODE_RH3;
    diodes[7][4] = ui->DIODE_RH4;
    diodes[7][5] = ui->DIODE_RH5;
    diodes[7][6] = ui->DIODE_RH6;
    diodes[7][7] = ui->DIODE_RH7;

    diodes[8][0] = ui->DIODE_RJ0;
    diodes[8][1] = ui->DIODE_RJ1;
    diodes[8][2] = ui->DIODE_RJ2;
    diodes[8][3] = ui->DIODE_RJ3;
    diodes[8][4] = ui->DIODE_RJ4;
    diodes[8][5] = ui->DIODE_RJ5;
    diodes[8][6] = ui->DIODE_RJ6;
    diodes[8][7] = ui->DIODE_RJ7;


    //diodes[0][0]->setText("<html><head/><body><p><span style=\" font-size:48pt; color:#dd0000;\">•</span></p></body></html>");
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
            state[i][j] = 0;

    for (int i = 0; i < 8; i++)
    {
        sw1[i] = 0;
        sw2[i] = 0;
        sw3[i] = 0;
        sw4[i] = 0;
    }

}

Diodes::~Diodes()
{
    delete ui;
}

void Diodes::slotButtonsChange(int **   st)
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8; j++)
        {
            if (st[i][j] == 0)
                diodes[i][j]->setText("<html><head/><body><p><span style=\" font-size:48pt; color:#740000;\">•</span></p></body></html>");
            else
                diodes[i][j]->setText("<html><head/><body><p><span style=\" font-size:48pt; color:#dd0000;\">•</span></p></body></html>");
        }
}
