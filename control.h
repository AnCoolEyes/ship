#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include<serialport.h>
#include<QKeyEvent>
#pragma execution_character_set("utf-8")
namespace Ui {
class control;
}

class control : public QWidget
{
    Q_OBJECT

public:
    explicit control(QWidget *parent = nullptr);
    ~control();

private slots:

    void on_forward_clicked();

    void on_stop_clicked();

    void on_backward_clicked();

    void on_One_clicked();

    void on_Two_clicked();

    void on_Zero_clicked();

    void on_beat_clicked();

    void on_go_clicked();

    void on_left_clicked();

    void on_pause_clicked();

    void on_right_clicked();

    void on_back_clicked();
private:
    void keyPressEvent(QKeyEvent *event);


private:
    Ui::control *ui;
    serialPort*serialport;
    //记录当前挡位
    int flag;
};

#endif // CONTROL_H
