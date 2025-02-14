/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_display
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *D;
    QLineEdit *A;
    QLineEdit *B;
    QLineEdit *C;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *wava;
    QLabel *label_5;
    QLineEdit *speed;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QLineEdit *elec;
    QLabel *label_8;
    QLineEdit *power;

    void setupUi(QWidget *display)
    {
        if (display->objectName().isEmpty())
            display->setObjectName(QString::fromUtf8("display"));
        display->resize(650, 378);
        horizontalLayout_2 = new QHBoxLayout(display);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_4 = new QGroupBox(display);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(11);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        D = new QLineEdit(groupBox);
        D->setObjectName(QString::fromUtf8("D"));
        D->setEnabled(true);

        gridLayout->addWidget(D, 4, 1, 1, 1);

        A = new QLineEdit(groupBox);
        A->setObjectName(QString::fromUtf8("A"));
        A->setEnabled(true);

        gridLayout->addWidget(A, 0, 1, 1, 1);

        B = new QLineEdit(groupBox);
        B->setObjectName(QString::fromUtf8("B"));
        B->setEnabled(true);

        gridLayout->addWidget(B, 2, 1, 1, 1);

        C = new QLineEdit(groupBox);
        C->setObjectName(QString::fromUtf8("C"));
        C->setEnabled(true);

        gridLayout->addWidget(C, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        wava = new QLineEdit(groupBox_2);
        wava->setObjectName(QString::fromUtf8("wava"));
        wava->setEnabled(true);

        gridLayout_3->addWidget(wava, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        speed = new QLineEdit(groupBox_2);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setEnabled(true);

        gridLayout_3->addWidget(speed, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        elec = new QLineEdit(groupBox_3);
        elec->setObjectName(QString::fromUtf8("elec"));
        elec->setEnabled(true);

        gridLayout_4->addWidget(elec, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        power = new QLineEdit(groupBox_3);
        power->setObjectName(QString::fromUtf8("power"));
        power->setEnabled(true);

        gridLayout_4->addWidget(power, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_3);


        horizontalLayout_2->addWidget(groupBox_4);


        retranslateUi(display);

        QMetaObject::connectSlotsByName(display);
    } // setupUi

    void retranslateUi(QWidget *display)
    {
        display->setWindowTitle(QCoreApplication::translate("display", "Form", nullptr));
        groupBox_4->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("display", "\346\260\224\350\210\261", nullptr));
        label->setText(QCoreApplication::translate("display", "  A:  ", nullptr));
        label_2->setText(QCoreApplication::translate("display", "B:", nullptr));
        label_3->setText(QCoreApplication::translate("display", "C:", nullptr));
        label_4->setText(QCoreApplication::translate("display", "D:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("display", "\346\216\247\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("display", "\350\275\254\351\200\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("display", "\346\263\242\345\275\242\357\274\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("display", "\347\224\265\351\207\217", nullptr));
        label_7->setText(QCoreApplication::translate("display", "\347\224\265\351\207\217\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("display", "\345\212\237\347\216\207\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display: public Ui_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
