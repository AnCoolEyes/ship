#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serialport=serialPort::getInstance();
    cont=new control;
    curCamera=new QCamera;
    dis = display::getInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
}


//打开串口页面
void MainWindow::on_portLink_clicked()
{
    //serialport->RefreshSerialPort();
    serialport->show();
}



//打开控制页面
void MainWindow::on_control_clicked()
{
    cont->show();
}


void MainWindow::initCamera()
{
    cameras=QCameraInfo::availableCameras();
    qDebug()<<cameras.size();
    for(int i=0;i<cameras.size();i++){
        ui->list->addItem(cameras[i].description());
    }
}

//打开摄像头
void MainWindow::on_open_clicked()
{
    if(curCamera->state()==QCamera::ActiveState){
        curCamera->stop();
    }
    if(curCamera->state()==QCamera::LoadedState){
        delete curCamera;
        curCamera=NULL;
    }
    if(!cameras.isEmpty()){
        curCamera=new QCamera(cameras[ui->list->currentIndex()],this);
        curCamera->setViewfinder(ui->view);
        curCamera->start();
    }

}

void MainWindow::on_search_clicked()
{
    ui->list->clear();
    if(cameras.size()!=0){
        cameras.clear();
    }
    initCamera();
}


void MainWindow::on_stop_clicked()
{
    if(curCamera->state()==QCamera::ActiveState){
        curCamera->stop();
    }
}


void MainWindow::on_start_clicked()
{
    if(curCamera->state()==QCamera::LoadedState){
        curCamera->start();
    }
}


void MainWindow::on_pushButton_clicked()
{
    dis->show();
}

