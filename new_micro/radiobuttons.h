#ifndef RADIOBUTTONS_H
#define RADIOBUTTONS_H

#include <QWidget>

namespace Ui {
class RadioButtons;
}

class RadioButtons : public QWidget
{
    Q_OBJECT

public:
    explicit RadioButtons(QWidget *parent = 0);
    void setVCC(int x);

    int getVCC();
    ~RadioButtons();
signals:
    void signalChangeState();
private slots:
    void slotChangeState();
private:
    Ui::RadioButtons *ui;
    int state;
};

#endif // RADIOBUTTONS_H
