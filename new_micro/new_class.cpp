#include "new_class.h"
#include <QPushButton>
#include <QGridLayout>

New_class::New_class(QWidget *parent) : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
    QChar a = '1';
    QChar b = '2';
    grid->addWidget(createButton(a),0,0);
    grid->addWidget(createButton(b),0,1);

    setLayout(grid);
}

 QPushButton* New_class::createButton(const QString& str)
{
    QPushButton* pcmd = new QPushButton(str);
    pcmd->setMinimumSize(40,40);

    return pcmd;
}
