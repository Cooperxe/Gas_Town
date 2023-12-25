/********************************************************************************
** Form generated from reading UI file 'canseting.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSETING_H
#define UI_CANSETING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Canseting
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QComboBox *comboBox_4;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *Canseting)
    {
        if (Canseting->objectName().isEmpty())
            Canseting->setObjectName("Canseting");
        Canseting->resize(297, 206);
        gridLayout_3 = new QGridLayout(Canseting);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(Canseting);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        gridLayout->addWidget(comboBox_4, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Canseting);

        QMetaObject::connectSlotsByName(Canseting);
    } // setupUi

    void retranslateUi(QWidget *Canseting)
    {
        Canseting->setWindowTitle(QCoreApplication::translate("Canseting", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Canseting", "\350\256\276\347\275\256", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Canseting", "10Kbps", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Canseting", "20Kbps", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Canseting", "40Kbps", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Canseting", "50Kbps", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Canseting", "80Kbps", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("Canseting", "100Kbps", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("Canseting", "125Kbps", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("Canseting", "200Kbps", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("Canseting", "250Kbps", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("Canseting", "400Kbps", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("Canseting", "500Kbps", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("Canseting", "666Kbps", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("Canseting", "800Kbps", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("Canseting", "1000Kbps", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("Canseting", "33.33Kbps", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("Canseting", "66.66Kbps", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("Canseting", "83.33Kbps", nullptr));

        label_4->setText(QCoreApplication::translate("Canseting", "                              \351\200\232\351\201\223:", nullptr));
        label_2->setText(QCoreApplication::translate("Canseting", "\350\256\276\345\244\207\347\264\242\345\274\225\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Canseting", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Canseting", "\351\200\200\345\207\272", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Canseting", "0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Canseting", "1", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Canseting", "2", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Canseting", "3", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Canseting", "4", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Canseting", "5", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("Canseting", "6", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("Canseting", "7", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("Canseting", "8", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("Canseting", "9", nullptr));

        pushButton->setText(QCoreApplication::translate("Canseting", "\347\241\256\345\256\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Canseting", "0", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Canseting", "1", nullptr));

        label->setText(QCoreApplication::translate("Canseting", "                       \350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Canseting", "USBCAN-2A", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Canseting", "USBCAN-2C", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Canseting", "CANalyst-II", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Canseting: public Ui_Canseting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSETING_H
