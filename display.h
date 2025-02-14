#ifndef DISPLAY_H
#define DISPLAY_H

#include <QWidget>
#include<QMutex>
#include<QMutexLocker>
namespace Ui {
class display;
}

class display : public QWidget
{
    Q_OBJECT

public:
    explicit display(QWidget *parent = nullptr);
    ~display();

    //接口函数，设置显示数据
    void setA(float a);
    void setB(float b);
    void setC(float c);
    void setD(float d);
    void setWava(float w);
    void setPower(float p);
    void setElec(float e);
    void setSpeed(float s);
    static display*getInstance();

private:
    Ui::display *ui;
    static display*self;
};

#endif // DISPLAY_H
