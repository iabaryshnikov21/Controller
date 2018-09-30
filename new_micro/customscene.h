#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H


#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>


class CustomScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit CustomScene(QObject *parent = 0);
    ~CustomScene();

signals:
    void signalTargetCoordinate(QPointF point);
    void signalPressLeftButton(QPointF point);
    void signalUnPressLeftButton(QPointF point);
    void signalMoveLine(QPointF point);

private:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // CUSTOMSCENE_H
