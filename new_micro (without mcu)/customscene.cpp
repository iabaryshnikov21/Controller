#include "customscene.h"

CustomScene::CustomScene(QObject *parent) : QGraphicsScene()
{
    Q_UNUSED(parent);
}

CustomScene::~CustomScene(){}

void CustomScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    emit signalTargetCoordinate(event->scenePos()); // сигнал при движении мыши в зоне сцены
}
void CustomScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        emit signalPressLeftButton(event->scenePos()); // сигнал при нажатии левой кнопки мыши
}

void CustomScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        emit signalUnPressLeftButton(event->scenePos()); // сигнал при отпускании левой кнопки мыши
}
