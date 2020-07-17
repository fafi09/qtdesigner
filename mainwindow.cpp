#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCompleter>
#include <QStringList>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

