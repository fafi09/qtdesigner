#include "mypushbutton.h"
#include <QMessageBox>
#include <QMouseEvent>

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}


void MyPushButton::mousePressEvent(QMouseEvent *event)
{
    //event->ignore();
    //event->accept();
    switch(event->button()) {
    case Qt::LeftButton:
        //做处理事件就不会往下传，就不会发生clicked信号
        this->setText("left");
        //不做处理，相当于忽略，继续往下传
        //QPushButton::mousePressEvent(event);

        //忽略继续向下传给谁传递？
        //传递给了父组件而不是父类(基类)
        event->ignore();
        break;
    case Qt::RightButton:
        this->setText("right");
        break;
    default:
        //不做处理，相当于忽略，继续往下传
        QPushButton::mousePressEvent(event);
        break;
    }

}

