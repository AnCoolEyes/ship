#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCameraInfo>
#include<QCamera>
#include<QLabel>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QMediaRecorder>
#include <QMainWindow>

#include<serialport.h>

#include<control.h>
#include<display.h>
#pragma execution_character_set("utf-8")

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initCamera();
    QCamera*curCamera=Q_NULLPTR;
    QList<QCameraInfo>cameras;
    QCameraImageCapture*imageCapture;
    QMediaRecorder*mediaRecorder;

private slots:
    void on_portLink_clicked();


    void on_control_clicked();

    void on_open_clicked();

    void on_search_clicked();

    void on_stop_clicked();

    void on_start_clicked();

    void on_pushButton_clicked();

private:
    serialPort*serialport;
    control*cont;
    display *dis;





private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
