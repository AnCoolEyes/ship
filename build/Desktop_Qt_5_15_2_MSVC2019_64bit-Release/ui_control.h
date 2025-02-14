/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_control
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *forward;
    QPushButton *stop;
    QPushButton *backward;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Zero;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QPushButton *pause;
    QPushButton *right;
    QPushButton *go;
    QPushButton *back;
    QPushButton *left;
    QPushButton *beat;

    void setupUi(QWidget *control)
    {
        if (control->objectName().isEmpty())
            control->setObjectName(QString::fromUtf8("control"));
        control->resize(606, 485);
        control->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 170, 255)"));
        verticalLayout = new QVBoxLayout(control);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(control);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(11);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 85, 0)"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        forward = new QPushButton(groupBox_2);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout_2->addWidget(forward);

        stop = new QPushButton(groupBox_2);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout_2->addWidget(stop);

        backward = new QPushButton(groupBox_2);
        backward->setObjectName(QString::fromUtf8("backward"));
        backward->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout_2->addWidget(backward);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(control);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 100));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color:rgb(255, 85, 0)"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        One = new QPushButton(groupBox);
        One->setObjectName(QString::fromUtf8("One"));
        One->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout->addWidget(One);

        Two = new QPushButton(groupBox);
        Two->setObjectName(QString::fromUtf8("Two"));
        Two->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout->addWidget(Two);

        Zero = new QPushButton(groupBox);
        Zero->setObjectName(QString::fromUtf8("Zero"));
        Zero->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
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

        horizontalLayout->addWidget(Zero);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(control);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 85, 0)"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pause = new QPushButton(groupBox_4);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setEnabled(false);
        pause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(pause, 2, 1, 1, 1);

        right = new QPushButton(groupBox_4);
        right->setObjectName(QString::fromUtf8("right"));
        right->setEnabled(false);
        right->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(right, 2, 2, 1, 1);

        go = new QPushButton(groupBox_4);
        go->setObjectName(QString::fromUtf8("go"));
        go->setEnabled(false);
        go->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(go, 1, 1, 1, 1);

        back = new QPushButton(groupBox_4);
        back->setObjectName(QString::fromUtf8("back"));
        back->setEnabled(false);
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(back, 3, 1, 1, 1);

        left = new QPushButton(groupBox_4);
        left->setObjectName(QString::fromUtf8("left"));
        left->setEnabled(false);
        left->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(left, 2, 0, 1, 1);

        beat = new QPushButton(groupBox_4);
        beat->setObjectName(QString::fromUtf8("beat"));
        beat->setEnabled(false);
        beat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 85, 0);\n"
"border: 2px solid #8f8f91;\n"
"border-radius:6px;\n"
"padding:5px 10px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0)\n"
"}\n"
"QPushButton:disabled{\n"
"background-color:gray;\n"
"color:lightgray;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style:inset;\n"
"padding-top:6px;\n"
"padding-left:11px;\n"
"}"));

        gridLayout->addWidget(beat, 0, 2, 1, 1);


        horizontalLayout_3->addWidget(groupBox_4);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(control);

        QMetaObject::connectSlotsByName(control);
    } // setupUi

    void retranslateUi(QWidget *control)
    {
        control->setWindowTitle(QCoreApplication::translate("control", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("control", "\346\216\250\350\277\233\345\231\250", nullptr));
        forward->setText(QCoreApplication::translate("control", "\345\211\215\350\277\233", nullptr));
        stop->setText(QCoreApplication::translate("control", "\345\201\234", nullptr));
        backward->setText(QCoreApplication::translate("control", "\345\220\216\351\200\200", nullptr));
        groupBox->setTitle(QCoreApplication::translate("control", "\346\214\241\344\275\215", nullptr));
        One->setText(QCoreApplication::translate("control", "1\346\241\243", nullptr));
        Two->setText(QCoreApplication::translate("control", "\344\272\214\346\241\243", nullptr));
        Zero->setText(QCoreApplication::translate("control", "\345\244\215\344\275\215", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("control", "\346\216\247\345\210\266", nullptr));
        groupBox_4->setTitle(QString());
        pause->setText(QCoreApplication::translate("control", "\345\201\234\346\255\242", nullptr));
        right->setText(QCoreApplication::translate("control", "\345\217\263\350\275\254", nullptr));
        go->setText(QCoreApplication::translate("control", "\346\263\242\345\212\250\345\211\215\350\277\233", nullptr));
        back->setText(QCoreApplication::translate("control", "\346\263\242\345\212\250\345\220\216\351\200\200", nullptr));
        left->setText(QCoreApplication::translate("control", "\345\267\246\350\275\254", nullptr));
        beat->setText(QCoreApplication::translate("control", "\346\213\215\346\260\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class control: public Ui_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
