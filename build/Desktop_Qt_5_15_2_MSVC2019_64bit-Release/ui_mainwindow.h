/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcameraviewfinder.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *portLink;
    QPushButton *pushButton;
    QPushButton *control;
    QSpacerItem *horizontalSpacer;
    QPushButton *search;
    QLabel *label;
    QComboBox *list;
    QPushButton *open;
    QPushButton *stop;
    QPushButton *start;
    QCameraViewfinder *view;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(657, 507);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        portLink = new QPushButton(groupBox);
        portLink->setObjectName(QString::fromUtf8("portLink"));
        QFont font;
        font.setPointSize(11);
        portLink->setFont(font);
        portLink->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(portLink);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        control = new QPushButton(groupBox);
        control->setObjectName(QString::fromUtf8("control"));
        control->setFont(font);
        control->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(control);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        search = new QPushButton(groupBox);
        search->setObjectName(QString::fromUtf8("search"));
        search->setFont(font);
        search->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(search);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        list = new QComboBox(groupBox);
        list->setObjectName(QString::fromUtf8("list"));
        list->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 255);\n"
"background-color:rgb(170, 255, 0)"));

        horizontalLayout->addWidget(list);

        open = new QPushButton(groupBox);
        open->setObjectName(QString::fromUtf8("open"));
        open->setFont(font);
        open->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(open);

        stop = new QPushButton(groupBox);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setFont(font);
        stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(stop);

        start = new QPushButton(groupBox);
        start->setObjectName(QString::fromUtf8("start"));
        start->setFont(font);
        start->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(170, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));

        horizontalLayout->addWidget(start);


        verticalLayout->addWidget(groupBox);

        view = new QCameraViewfinder(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));

        verticalLayout->addWidget(view);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 657, 17));
        menubar->setDefaultUp(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        portLink->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\277\236\346\216\245", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\241\265\351\235\242", nullptr));
        control->setText(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\351\241\265\351\235\242", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\346\221\204\345\203\217\345\244\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\357\274\232", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
