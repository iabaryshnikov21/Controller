#ifndef J1_J9_H
#define J1_J9_H

#include <QWidget>
#include <radiobuttons.h>

namespace Ui {
class J1_J9;
}

class J1_J9 : public QWidget
{
    Q_OBJECT
signals:
    void signalChangeState(int* state);

public:
    explicit J1_J9(QWidget *parent = 0);
    ~J1_J9();

private:
    Ui::J1_J9 *ui;

    int state[9];
private slots:
    void slotChangeState();
};

#endif // J1_J9_H
