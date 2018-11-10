#ifndef PORT_H
#define PORT_H

#include <QWidget>

namespace Ui {
class PORT;
}

class PORT : public QWidget
{
    Q_OBJECT

public:
    explicit PORT(QWidget *parent = 0);
    ~PORT();

private:
    Ui::PORT *ui;
};

#endif // PORT_H
