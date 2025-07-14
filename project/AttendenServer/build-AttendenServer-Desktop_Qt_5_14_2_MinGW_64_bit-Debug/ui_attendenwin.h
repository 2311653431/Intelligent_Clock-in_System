/********************************************************************************
** Form generated from reading UI file 'attendenwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDENWIN_H
#define UI_ATTENDENWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <selectwin.h>
#include "registerwin.h"

QT_BEGIN_NAMESPACE

class Ui_AttendenWin
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *showWidget;
    QLabel *label;
    RegisterWin *registWidget;
    selectwin *selectWidget;

    void setupUi(QMainWindow *AttendenWin)
    {
        if (AttendenWin->objectName().isEmpty())
            AttendenWin->setObjectName(QString::fromUtf8("AttendenWin"));
        AttendenWin->resize(772, 500);
        centralwidget = new QWidget(AttendenWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 731, 491));
        showWidget = new QWidget();
        showWidget->setObjectName(QString::fromUtf8("showWidget"));
        label = new QLabel(showWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 471, 431));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"background-color: rgb(255, 170, 255);"));
        tabWidget->addTab(showWidget, QString());
        registWidget = new RegisterWin();
        registWidget->setObjectName(QString::fromUtf8("registWidget"));
        tabWidget->addTab(registWidget, QString());
        selectWidget = new selectwin();
        selectWidget->setObjectName(QString::fromUtf8("selectWidget"));
        tabWidget->addTab(selectWidget, QString());
        AttendenWin->setCentralWidget(centralwidget);

        retranslateUi(AttendenWin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AttendenWin);
    } // setupUi

    void retranslateUi(QMainWindow *AttendenWin)
    {
        AttendenWin->setWindowTitle(QCoreApplication::translate("AttendenWin", "AttendenWin", nullptr));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(showWidget), QCoreApplication::translate("AttendenWin", "\350\200\203\345\213\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(registWidget), QCoreApplication::translate("AttendenWin", "\346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(selectWidget), QCoreApplication::translate("AttendenWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendenWin: public Ui_AttendenWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDENWIN_H
