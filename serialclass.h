#ifndef SERIALCLASS_H
#define SERIALCLASS_H

#include <QObject>
#include <posix_qextserialport.h>

class SerialClass : public QObject
{
    Q_OBJECT
public:
    explicit SerialClass(QObject *parent = 0);
    qint64 ReadFromSerial(QByteArray &byte);
    int WriteToSerial(const QByteArray &byte);

    bool OpenCom();
    bool CloseCom();

    void ReleaseSerial();

signals:

public slots:

private:
    Posix_QextSerialPort *my_com_;
    enum{OPEN, CLOSE};
    int com_state_;
};

#endif // SERIALCLASS_H
