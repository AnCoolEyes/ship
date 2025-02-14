#include "serialport.h"
#include "ui_serialport.h"
serialPort *serialPort::SELF = nullptr;
#pragma execution_character_set("utf-8")
serialPort::serialPort(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::serialPort)
{
    ui->setupUi(this);
    //setWindowFlag(Qt::FramelessWindowHint);
    setWindowTitle("串口连接");
    SerialPortInit();
    connect(serialport,&QSerialPort::readyRead,this,&serialPort::DataReceived);
    QIcon icon(":/img/img/LG.png");
    this->setWindowIcon(icon);
}

serialPort *serialPort::getInstance()
{
    if(SELF == nullptr){
        static QMutex mutex_config;
        QMutexLocker locker(&mutex_config);

        if(SELF == nullptr){
            SELF = new serialPort();
        }
    }

    return SELF;
}
serialPort::~serialPort()
{
    delete ui;
}

void serialPort::SerialPortInit()
{
    serialport=new QSerialPort;
    // foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
    //     serialport->setPort(info);
    //     if(serial->open(QIODevice::ReadWrite)){
    //         ui->ports->addItem(info.portName());
    //         serialport->close();
    //     }
    //     else{
    //         qDebug()<<"串口："<<info.portName()<<"--打开失败";
    //     }
    // }
    ui->bauds->addItem("9600");
    ui->bauds->addItem("115200");
    ui->bauds->addItem("4800");

    ui->datas->addItem("8");
    ui->datas->addItem("5");
    ui->datas->addItem("6");
    ui->datas->addItem("7");

    ui->stops->addItem("1");
    ui->stops->addItem("1.5");
    ui->stops->addItem("2");
    ui->parities->addItem("无");
    ui->parities->addItem("奇校验");
    ui->parities->addItem("偶校验");
}



void serialPort::RefreshSerialPort()
{
       QSerialPort*serial=new QSerialPort;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serial->setPort(info);
        if(serial->open(QIODevice::ReadWrite)){
            ui->ports->addItem(info.portName());
            serial->close();
        }
        else{
            qDebug()<<"串口："<<info.portName()<<"--打开失败";
        }
    }
}



void serialPort::DataReceived()
{
    QByteArray data=serialport->readAll();
    if(!data.isEmpty()){
        QString str=ui->rec_text->toPlainText();
        str+=tr(data);
        ui->rec_text->clear();
        ui->rec_text->append(str);
    }
}

void serialPort::on_rec_clear_clicked()
{
    ui->rec_text->clear();
}


void serialPort::on_send_clear_clicked()
{
    ui->send_text->clear();
}


void serialPort::on_send_clicked()
{
    serialport->write(ui->send_text->toPlainText().toLatin1());
}


void serialPort::on_open_clicked()
{
    if(serialport->isOpen()){
        serialport->clear();
        serialport->close();
    }

    ui->state->setText("正在连接");
    serialport->setPortName(ui->ports->currentText());
    if(!serialport->open(QIODevice::ReadWrite)){
        qWarning()<<"打开串口："<<serialport->portName()<<"--失败！";
        QMessageBox::warning(this,"警告","串口："+serialport->portName()+"  连接失败！");
        ui->state->setText("连接失败");
        return;
    }
    serialport->setBaudRate(ui->bauds->currentText().toInt());
    serialport->setDataBits((QSerialPort::DataBits)(ui->datas->currentText().toInt()));
    serialport->setFlowControl(QSerialPort::NoFlowControl);
    if(ui->parities->currentText()=="无"){
        serialport->setParity(QSerialPort::NoParity);
    }
    else if(ui->parities->currentText()=="奇校验"){
        serialport->setParity(QSerialPort::OddParity);
    }
    else if(ui->parities->currentText()=="偶校验"){
        serialport->setParity(QSerialPort::EvenParity);
    }
    serialport->setStopBits((QSerialPort::StopBits)(ui->stops->currentText().toInt()));
    ui->state->setText("已连接");
    qWarning()<<"打开串口："<<serialport->portName()<<"--成功！";
}



void serialPort::on_search_clicked()
{
    ui->ports->clear();
    RefreshSerialPort();
}

