#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
protected:
    void mousePressEvent(QMouseEvent *event);
signals:

};

#endif // MYPUSHBUTTON_H
