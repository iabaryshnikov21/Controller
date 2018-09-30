#ifndef SWITCHES_H
#define SWITCHES_H

#include <QWidget>
#include<QEvent>
#include<QCheckBox>

namespace Ui {
class Switches;
}

class Switches : public QWidget
{
    Q_OBJECT

public:
    explicit Switches(QWidget *parent = 0);
    ~Switches();
    int* getState();
    void SetAllLable (QString name, QString switch1, QString switch2, QString switch3, QString switch4, QString switch5, QString switch6, QString switch7, QString switch8);
private:
    Ui::Switches *ui;
    QVector<QCheckBox*> v;
    int sw[8];
private slots:
    void slotChangeState();


signals:
    void signalCheckbox(int* state);
};

#endif // SWITCHES_H
