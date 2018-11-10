#ifndef DIODES_H
#define DIODES_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Diodes;
}

class Diodes : public QWidget
{
    Q_OBJECT

public:
    explicit Diodes(QWidget *parent = 0);
    ~Diodes();

private:
    Ui::Diodes *ui;
    QLabel*** diodes;
    int sw1[8];
    int sw2[8];
    int sw3[8];
    int sw4[8];
    int** state;

private slots:
    void slotButtonsChange(int **);

};

#endif // DIODES_H
