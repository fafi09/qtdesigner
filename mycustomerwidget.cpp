#include "mycustomerwidget.h"
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>

MyCustomerWidget::MyCustomerWidget(QWidget *parent) : QWidget(parent)
{
    QSpinBox* spin = new QSpinBox(this);
    QSlider* slider = new QSlider(Qt::Horizontal,this);

    QHBoxLayout* hLayout = new QHBoxLayout(this);
    hLayout->addWidget(spin);
    hLayout->addWidget(slider);



    connect(spin, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged)
            , slider, static_cast<void (QSlider::*)(int)>(&QSlider::setValue));

    connect(slider, static_cast<void (QSlider::*)(int)>(&QSlider::valueChanged)
            , spin, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::setValue));
}
