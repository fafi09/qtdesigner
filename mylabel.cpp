#include "mylabel.h"
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    this->setText("click me show your position");
}

void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    int x = ev->x();
    int y = ev->y();

    QString mousePos = QString("mousePressEvent x:%1 y:%2 button %3 is pressed").arg(x).arg(y);



    switch(ev->button()) {
    case Qt::LeftButton:
        mousePos = mousePos.arg("left");
        break;
    case Qt::RightButton:
        mousePos = mousePos.arg("right");
        break;
    default:
        mousePos = mousePos.arg("right");
        break;
    }
    this->setText(mousePos);

}

void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
    int x = ev->x();
    int y = ev->y();

    QString mousePos = QString("mouseMoveEvent x:%1 y:%2").arg(x).arg(y);

    this->setText(mousePos);
}

void MyLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    int x = ev->x();
    int y = ev->y();

    QString mousePos = QString("mouseReleaseEvent x:%1 y:%2").arg(x).arg(y);

    this->setText(mousePos);
}
