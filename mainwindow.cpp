#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCompleter>
#include <QStringList>
#include <QMessageBox>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

