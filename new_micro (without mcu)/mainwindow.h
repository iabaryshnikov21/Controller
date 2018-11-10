#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QMainWindow>
#include <QMouseEvent>
#include <QGridLayout>
#include <QLabel>

#include <customscene.h>
#include <new_class.h>
#include <switches.h>
#include <buttons.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CustomScene* scene;
    New_class* new_class;
    QVector<QLabel*> v_debug;

    int length, width;
private slots:
    void checkboxChange(int* sw);
    void j1_j9Change(int* state);
};

#endif // MAINWINDOW_H
