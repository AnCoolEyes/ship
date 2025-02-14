#ifndef SERIALPORT_H
#define SERIALPORT_H
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include <QMutex>
#include <QMutexLocker>
#pragma execution_character_set("utf-8")
namespace Ui {
class serialPort;
}

class serialPort : public QWidget
{
    Q_OBJECT

public:
    explicit serialPort(QWidget *parent = nullptr);
    ~serialPort();


    void RefreshSerialPort();
    static serialPort* getInstance();
private:
    void SerialPortInit();

private slots:
    void DataReceived();

    void on_rec_clear_clicked();

    void on_send_clear_clicked();

    void on_send_clicked();

    void on_open_clicked();
    void on_search_clicked();

public:
    QSerialPort*serialport;
private:

    QStringList baudList;
    QStringList parityList;
    QStringList dataBitsList;
    QStringList stopBitsList;
    QStringList flowControlList;
    static serialPort*SELF;

private:
    Ui::serialPort *ui;
};

#endif // SERIALPORT_H
