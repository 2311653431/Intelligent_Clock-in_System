/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QRadioButton *male;
    QRadioButton *female;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *birthdayEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *adressEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *registerBT;
    QPushButton *resetBT;
    QVBoxLayout *verticalLayout_3;
    QLabel *headpicLB;
    QLineEdit *picFileEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addPicBT;
    QPushButton *videoswithBT;
    QPushButton *cameraBT;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(711, 472);
        widget = new QWidget(RegisterWin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 671, 431));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        nameEdit->setFont(font1);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        male = new QRadioButton(widget);
        male->setObjectName(QString::fromUtf8("male"));
        male->setFont(font);

        horizontalLayout_4->addWidget(male);

        female = new QRadioButton(widget);
        female->setObjectName(QString::fromUtf8("female"));
        female->setFont(font);

        horizontalLayout_4->addWidget(female);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        birthdayEdit = new QDateEdit(widget);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));
        sizePolicy.setHeightForWidth(birthdayEdit->sizePolicy().hasHeightForWidth());
        birthdayEdit->setSizePolicy(sizePolicy);
        birthdayEdit->setFont(font);

        horizontalLayout_5->addWidget(birthdayEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        adressEdit = new QLineEdit(widget);
        adressEdit->setObjectName(QString::fromUtf8("adressEdit"));
        sizePolicy.setHeightForWidth(adressEdit->sizePolicy().hasHeightForWidth());
        adressEdit->setSizePolicy(sizePolicy);
        adressEdit->setFont(font1);

        horizontalLayout_2->addWidget(adressEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        phoneEdit = new QLineEdit(widget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);
        phoneEdit->setFont(font1);

        horizontalLayout_3->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        registerBT = new QPushButton(widget);
        registerBT->setObjectName(QString::fromUtf8("registerBT"));

        horizontalLayout_6->addWidget(registerBT);

        resetBT = new QPushButton(widget);
        resetBT->setObjectName(QString::fromUtf8("resetBT"));

        horizontalLayout_6->addWidget(resetBT);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        headpicLB = new QLabel(widget);
        headpicLB->setObjectName(QString::fromUtf8("headpicLB"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(headpicLB->sizePolicy().hasHeightForWidth());
        headpicLB->setSizePolicy(sizePolicy1);
        headpicLB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));

        verticalLayout_3->addWidget(headpicLB);

        picFileEdit = new QLineEdit(widget);
        picFileEdit->setObjectName(QString::fromUtf8("picFileEdit"));

        verticalLayout_3->addWidget(picFileEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        addPicBT = new QPushButton(widget);
        addPicBT->setObjectName(QString::fromUtf8("addPicBT"));

        horizontalLayout_7->addWidget(addPicBT);

        videoswithBT = new QPushButton(widget);
        videoswithBT->setObjectName(QString::fromUtf8("videoswithBT"));

        horizontalLayout_7->addWidget(videoswithBT);

        cameraBT = new QPushButton(widget);
        cameraBT->setObjectName(QString::fromUtf8("cameraBT"));

        horizontalLayout_7->addWidget(cameraBT);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QCoreApplication::translate("RegisterWin", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisterWin", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWin", "\346\200\247\345\210\253:", nullptr));
        male->setText(QCoreApplication::translate("RegisterWin", "\347\224\267", nullptr));
        female->setText(QCoreApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWin", "\347\224\237\346\227\245:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWin", "\345\234\260\345\235\200:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWin", "\347\224\265\350\257\235:", nullptr));
        registerBT->setText(QCoreApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        resetBT->setText(QCoreApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
        headpicLB->setText(QString());
        addPicBT->setText(QCoreApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        videoswithBT->setText(QCoreApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        cameraBT->setText(QCoreApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
