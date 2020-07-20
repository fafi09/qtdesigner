#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimerEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void keyReleaseEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent *e);
    void mousePressEvent(QMouseEvent *event);
private:
    Ui::MainWindow *ui;
    int timerIdd;
};
#endif // MAINWINDOW_H
