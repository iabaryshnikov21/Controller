#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Buttons;
}

class Buttons : public QWidget
{
    Q_OBJECT

public:
    explicit Buttons(QWidget *parent = 0);
    int** getState();
    void setJ1_J9(int);
    ~Buttons();

private:
    Ui::Buttons *ui;
    int** state;
    int j1_j9[9];
    QPushButton*** buttons;

signals:
    void signalChangeState(int**);
private slots:
    void slotPressed();
    void slotReleased();
    void slotJ10Change();
    void slotJ1_J9Change(int*);
};

#endif // BUTTONS_H
