/********************************************************************************
** Form generated from reading UI file 'serialport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_H
#define UI_SERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialPort
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QPushButton *search;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_10;
    QComboBox *ports;
    QSpacerItem *verticalSpacer_6;
    QComboBox *bauds;
    QSpacerItem *verticalSpacer_7;
    QComboBox *datas;
    QSpacerItem *verticalSpacer_8;
    QComboBox *parities;
    QSpacerItem *verticalSpacer_9;
    QComboBox *stops;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_8;
    QPushButton *send;
    QPushButton *send_clear;
    QPushButton *rec_clear;
    QTextEdit *rec_text;
    QLabel *label_9;
    QLabel *state;
    QTextEdit *send_text;
    QPushButton *open;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *serialPort)
    {
        if (serialPort->objectName().isEmpty())
            serialPort->setObjectName(QString::fromUtf8("serialPort"));
        serialPort->resize(476, 293);
        serialPort->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 85, 255);"));
        horizontalLayout = new QHBoxLayout(serialPort);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(serialPort);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        search = new QPushButton(groupBox);
        search->setObjectName(QString::fromUtf8("search"));
        QFont font;
        font.setPointSize(11);
        search->setFont(font);
        search->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}\n"
"\n"
""));

        verticalLayout_6->addWidget(search);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_6->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_6->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_6->addWidget(label_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_6->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        verticalLayout_7->addWidget(pushButton_2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_10);

        ports = new QComboBox(groupBox);
        ports->setObjectName(QString::fromUtf8("ports"));
        ports->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_7->addWidget(ports);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        bauds = new QComboBox(groupBox);
        bauds->setObjectName(QString::fromUtf8("bauds"));
        bauds->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_7->addWidget(bauds);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        datas = new QComboBox(groupBox);
        datas->setObjectName(QString::fromUtf8("datas"));
        datas->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_7->addWidget(datas);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);

        parities = new QComboBox(groupBox);
        parities->setObjectName(QString::fromUtf8("parities"));
        parities->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_7->addWidget(parities);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        stops = new QComboBox(groupBox);
        stops->setObjectName(QString::fromUtf8("stops"));
        QFont font1;
        font1.setPointSize(9);
        stops->setFont(font1);
        stops->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        verticalLayout_7->addWidget(stops);


        horizontalLayout_4->addLayout(verticalLayout_7);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout->addWidget(groupBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        send = new QPushButton(serialPort);
        send->setObjectName(QString::fromUtf8("send"));
        send->setFont(font);
        send->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}\n"
"\n"
""));

        verticalLayout_8->addWidget(send);

        send_clear = new QPushButton(serialPort);
        send_clear->setObjectName(QString::fromUtf8("send_clear"));
        send_clear->setFont(font);
        send_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}\n"
"\n"
""));

        verticalLayout_8->addWidget(send_clear);


        gridLayout->addLayout(verticalLayout_8, 4, 1, 1, 1);

        rec_clear = new QPushButton(serialPort);
        rec_clear->setObjectName(QString::fromUtf8("rec_clear"));
        rec_clear->setFont(font);
        rec_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(rec_clear, 1, 1, 1, 1);

        rec_text = new QTextEdit(serialPort);
        rec_text->setObjectName(QString::fromUtf8("rec_text"));
        rec_text->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color:rgb(30, 90, 240);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(rec_text, 1, 0, 1, 1);

        label_9 = new QLabel(serialPort);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        state = new QLabel(serialPort);
        state->setObjectName(QString::fromUtf8("state"));
        state->setEnabled(false);
        state->setFont(font);
        state->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(state, 6, 0, 1, 1);

        send_text = new QTextEdit(serialPort);
        send_text->setObjectName(QString::fromUtf8("send_text"));
        send_text->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color:rgb(30, 90, 240);\n"
"color:rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(send_text, 4, 0, 1, 1);

        open = new QPushButton(serialPort);
        open->setObjectName(QString::fromUtf8("open"));
        open->setFont(font);
        open->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 170, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(open, 6, 1, 1, 1);

        label_8 = new QLabel(serialPort);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(serialPort);

        QMetaObject::connectSlotsByName(serialPort);
    } // setupUi

    void retranslateUi(QWidget *serialPort)
    {
        serialPort->setWindowTitle(QCoreApplication::translate("serialPort", "Form", nullptr));
        groupBox->setTitle(QString());
        search->setText(QCoreApplication::translate("serialPort", "\346\220\234\347\264\242\344\270\262\345\217\243", nullptr));
        label_3->setText(QCoreApplication::translate("serialPort", "\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("serialPort", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("serialPort", "\346\225\260\346\215\256\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("serialPort", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("serialPort", "\345\201\234\346\255\242\344\275\215", nullptr));
        pushButton_2->setText(QString());
        send->setText(QCoreApplication::translate("serialPort", "\345\217\221\351\200\201", nullptr));
        send_clear->setText(QCoreApplication::translate("serialPort", "\346\270\205\347\251\272", nullptr));
        rec_clear->setText(QCoreApplication::translate("serialPort", "\346\270\205\347\251\272\346\230\276\347\244\272", nullptr));
        label_9->setText(QCoreApplication::translate("serialPort", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        state->setText(QCoreApplication::translate("serialPort", "\346\234\252\350\277\236\346\216\245", nullptr));
        open->setText(QCoreApplication::translate("serialPort", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_8->setText(QCoreApplication::translate("serialPort", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serialPort: public Ui_serialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_H
