#ifndef NEW_CLASS_H
#define NEW_CLASS_H

#include <QObject>
# include <QWidget>
#include <QWidget>
#include <QPushButton>

class New_class : public QWidget
{
     Q_OBJECT
public:
    explicit New_class(QWidget *parent = 0);
private:
    QPushButton* createButton(const QString& str);
};

#endif // NEW_CLASS_H
