#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serialclass.h"
#include <QByteArray>
#include <QString>
#include <QTimer>
#define READTIME 100


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_OpenSerial_clicked();

    void on_CloseSerial_clicked();

     //void read_time_out();

private:
    Ui::MainWindow *ui;
    SerialClass *serial;
     //QTimer *read_timer;
     //bool is_use_database;//判断是否使用数据库
};

#endif // MAINWINDOW_H
