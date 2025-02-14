#include "mainwindow.h"
#include<QStyleFactory>
#include <QApplication>
#include<QMenuBar>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.setWindowFlag(Qt::FramelessWindowHint);
    w.setWindowTitle("蔚蓝智创");
    QIcon icon(":/img/img/LG.png");
    w.setWindowIcon(icon);

    w.setStyleSheet(

            "QMainWindow {"
           // "    border-bottom: none;"
           // "    background-image: url(D:/Desktop/WL.jpg);"
            "  border-image: url(:/img/img/WL.jpg) 0 0 0 0 stretch stretch;"
           // "    background-repeat: no-repeat;"
           // "    background-size: cover;"
            "    border: 2px solid #FFA500; /* 设置2像素宽的橙色边框 */"
            "    border-radius: 10px; /* 设置边框圆角 */"
            "}"
            );


    //w.setFixedSize(800,510);

    w.show();
    return a.exec();
}
