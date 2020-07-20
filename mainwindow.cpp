#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCompleter>
#include <QStringList>
#include <QMessageBox>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList list;
    list << "hello" << "how are you" << "hero";

    QCompleter* com = new QCompleter(list, this);
    com->setCaseSensitivity(Qt::CaseSensitive);

    ui->lineEdit->setCompleter(com);

    ui->label_2->setStyleSheet("QLabel{color:rgb(0.255,255);"
                               "background-color:green}");

    this->setStyleSheet("QMainWindow{border-image:url(:/new/prefix1/C:/Users/Administrator/Downloads/sky.jpg)} " );
    ui->pushButton->setStyleSheet("QPushButton{border:2px outset green;"
                                  "border-image:url(:/new/prefix1/C:/Users/Administrator/Downloads/6334/6334/k16.ico);}"
                                  "QPushButton:hover{"
                                  "border-image:url(:/new/prefix1/C:/Users/Administrator/Downloads/6334/6334/k15.ico);}"
                                  "QPushButton:pressed{"
                                  "border-image:url(:/new/prefix1/C:/Users/Administrator/Downloads/5724/5724/0.ico);}");
    connect(ui->pushButton,&QPushButton::clicked,
            [=](){
        QMessageBox::about(this,"prompt","login");
    });

    this->timerIdd = this->startTimer(1000);

    connect(ui->pushButton_3, &QPushButton::pressed,
            [=](){
        QMessageBox::about(this,"event","is event accept or ignore");
    });
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    int result = event->key();
    QString keycode = QString("keyReleaseEvent keycode:%1").arg(result);
    ui->label_4->setText(keycode);
    this->killTimer(this->timerIdd);
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    static int i = 0;
    i++;
    QString text = QString("i:%1").arg(i);
    ui->label_4->setText(text);

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QMessageBox::about(this,"mainwin event","mainwin mouse press");
}

MainWindow::~MainWindow()
{
    delete ui;
}

