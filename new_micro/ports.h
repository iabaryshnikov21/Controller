#ifndef PORTS_H
#define PORTS_H

#include <QWidget>

namespace Ui {
class PORTS;
}

class PORTS : public QWidget
{
    Q_OBJECT

public:
    explicit PORTS(QWidget *parent = 0);
    ~PORTS();

private:
    Ui::PORTS *ui;
};

#endif // PORTS_H
