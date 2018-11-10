#ifndef MCU_H
#define MCU_H

#include <QWidget>

namespace Ui {
class MCU;
}

class MCU : public QWidget
{
    Q_OBJECT

public:
    int** getPortState();
    void ChangeState();
    explicit MCU(QWidget *parent = 0);
    ~MCU();

private:
    Ui::MCU *ui;
    int** stateButton;
    int** stateButton2;
    int** portState;
    int sw1[8];
    int sw2[8];
    int sw3[8];
    int sw4[8];

    void setPortState(int**);


signals:
    void signalButtonsChange(int**);
private slots:
    void slotButtonsChange(int **);
    void slotSW1Change(int*);
    void slotSW2Change(int*);
    void slotSW3Change(int*);
    void slotSW4Change(int*);
};

#endif // MCU_H
