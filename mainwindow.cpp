#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("historyinfo");
    db.setUserName("root");
    db.setPassword("chenzhilin");
    if(!db.open())
    {
        //QMessageBox::information(NULL, "","数据库连接失败，请重试",  QMessageBox::Yes);
        is_use_database = false;
    }
*/
    //初始化串口定时器
   // read_timer = new QTimer();
    //connect(read_timer, SIGNAL(timeout()), this, SLOT(read_time_out()));
    //read_timer->start(READTIME);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_OpenSerial_clicked()
{
    serial = new SerialClass();
    if(serial->OpenCom())
        ui->text->append("open success");
    else
        ui->text->append("open failed");
}

void MainWindow::on_CloseSerial_clicked()
{
    if(serial->CloseCom())
        ui->text->append("close success");
    else
        ui->text->append("close failed");
}



void MainWindow::on_pushButton_clicked()
{
    QByteArray byte;
    serial->ReadFromSerial(byte);
    if(byte.isEmpty())
        return;
    ui->text->append("TempHumLight msg: " + byte);//.toHex()
}


