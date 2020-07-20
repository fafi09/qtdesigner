#include "mypushbutton.h"
#include <QMessageBox>
#include <QMouseEvent>

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}

void MyPushButton::mousePressEvent(QMouseEvent *event)
{
    //event->ignore();
    event->accept();
    switch(event->button()) {
    case Qt::LeftButton:
        this->setText("left");

        break;
    case Qt::RightButton:
        this->setText("right");
        break;
    default:
        this->setText("default");
        break;
    }
}
