#include "control.h"
#include "ui_control.h"
#pragma execution_character_set("utf-8")
control::control(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::control)
{
    ui->setupUi(this);
    setWindowTitle("控制");
    serialport=serialPort::getInstance();
    flag=0;//开局默认复位档（0档）
    QIcon icon(":/img/img/LG.png");
    this->setWindowIcon(icon);
}

control::~control()
{
    delete ui;
}

void control::on_forward_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("000"));
    };
}


void control::on_stop_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("010"));
    };
}


void control::on_backward_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("020"));
    };
}


void control::on_One_clicked()
{
    ui->beat->setEnabled(true);
    ui->go->setEnabled(true);
    ui->back->setEnabled(false);
    ui->left->setEnabled(true);
    ui->right->setEnabled(true);
    ui->pause->setEnabled(true);

    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("320"));
    };
    flag=1;
}


void control::on_Two_clicked()
{
    ui->beat->setEnabled(true);
    ui->go->setEnabled(false);
    ui->back->setEnabled(true);
    ui->left->setEnabled(true);
    ui->right->setEnabled(true);
    ui->pause->setEnabled(true);

    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("330"));
    };
    flag=2;
}


void control::on_Zero_clicked()
{
    ui->beat->setEnabled(false);
    ui->go->setEnabled(false);
    ui->back->setEnabled(false);
    ui->left->setEnabled(false);
    ui->right->setEnabled(false);
    ui->pause->setEnabled(false);

    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("310"));
    };
    flag=0;
}


void control::on_beat_clicked()
{
    if(serialport->serialport->isOpen()){
        if(flag==1){
            serialport->serialport->write(QByteArray("200"));
        }
        else if(flag==2){
            serialport->serialport->write(QByteArray("220"));
        }
    };
}


void control::on_go_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("220"));
    };
}


void control::on_left_clicked()
{
    if(serialport->serialport->isOpen()){
        if(flag==1){
            serialport->serialport->write(QByteArray("260"));
        }
        else if(flag==2){
            serialport->serialport->write(QByteArray("230"));
        }
    };
}


void control::on_pause_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("210"));
    };
}


void control::on_right_clicked()
{
    if(serialport->serialport->isOpen()){
        if(flag==1){
            serialport->serialport->write(QByteArray("250"));
        }
        else if(flag==2){
            serialport->serialport->write(QByteArray("240"));
        }
    };
}


void control::on_back_clicked()
{
    if(serialport->serialport->isOpen()){
        serialport->serialport->write(QByteArray("200"));
    };
}

void control::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_8){
        serialport->serialport->write(QByteArray("000"));
    }
    else if(event->key()==Qt::Key_5){
        serialport->serialport->write(QByteArray("010"));
    }
    else if(event->key()==Qt::Key_2){
        serialport->serialport->write(QByteArray("020"));
    }
    if(flag==0);
    else if(flag==1){
        if(event->key()==Qt::Key_W){
            serialport->serialport->write(QByteArray("220"));//前
        }
        else if(event->key()==Qt::Key_D){
            serialport->serialport->write(QByteArray("250"));//右
        }
        else if(event->key()==Qt::Key_A){
            serialport->serialport->write(QByteArray("260"));//左
        }
        else if(event->key()==Qt::Key_S){
            serialport->serialport->write(QByteArray("210"));//停
        }
        else if(event->key()==Qt::Key_E){
            serialport->serialport->write(QByteArray("200"));//拍水
        }
    }
    else if(flag==2){
        if(event->key()==Qt::Key_X){
            serialport->serialport->write(QByteArray("200"));//后
        }
        else if(event->key()==Qt::Key_D){
            serialport->serialport->write(QByteArray("240"));//右
        }
        else if(event->key()==Qt::Key_A){
            serialport->serialport->write(QByteArray("230"));//左
        }
        else if(event->key()==Qt::Key_S){
            serialport->serialport->write(QByteArray("210"));//停
        }
        else if(event->key()==Qt::Key_E){
            serialport->serialport->write(QByteArray("220"));//拍水
        }
    }
}





