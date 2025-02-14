#include "display.h"
#include "ui_display.h"
#include<QIcon>
#pragma execution_character_set("utf-8")
display*display::self=nullptr;
display::display(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::display)
{
    ui->setupUi(this);
    QIcon icon(":/img/img/LG.png");
    this->setWindowIcon(icon);
    setWindowTitle("数据接收");
}

display::~display()
{
    delete ui;
}

//单例模式
display *display::getInstance()
{
    if (self==nullptr){
        static QMutex mutex;
        QMutexLocker locker(&mutex);
        if(self==nullptr){
            self=new display;
        }
    }
    return self;
}

void display::setA(float a)
{
    ui->A->setText(QString::number(a));
}

void display::setB(float b)
{
    ui->B->setText(QString::number(b));
}

void display::setC(float c)
{
    ui->C->setText(QString::number(c));
}

void display::setD(float d)
{
    ui->D->setText(QString::number(d));
}

void display::setWava(float w)
{
    ui->wava->setText(QString::number(w));
}

void display::setPower(float p)
{
    ui->power->setText(QString::number(p));
}

void display::setElec(float e)
{
    ui->elec->setText(QString::number(e));
}

void display::setSpeed(float s)
{
    ui->speed->setText(QString::number(s));
}

