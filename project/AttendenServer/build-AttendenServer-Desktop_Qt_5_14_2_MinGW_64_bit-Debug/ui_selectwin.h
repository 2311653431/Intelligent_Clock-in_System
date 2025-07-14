/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectwin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *empRb;
    QRadioButton *attRb;
    QPushButton *selectBt;
    QTableView *tableView;

    void setupUi(QWidget *selectwin)
    {
        if (selectwin->objectName().isEmpty())
            selectwin->setObjectName(QString::fromUtf8("selectwin"));
        selectwin->resize(866, 510);
        verticalLayout = new QVBoxLayout(selectwin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        empRb = new QRadioButton(selectwin);
        empRb->setObjectName(QString::fromUtf8("empRb"));

        horizontalLayout->addWidget(empRb);

        attRb = new QRadioButton(selectwin);
        attRb->setObjectName(QString::fromUtf8("attRb"));

        horizontalLayout->addWidget(attRb);

        selectBt = new QPushButton(selectwin);
        selectBt->setObjectName(QString::fromUtf8("selectBt"));

        horizontalLayout->addWidget(selectBt);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(selectwin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(selectwin);

        QMetaObject::connectSlotsByName(selectwin);
    } // setupUi

    void retranslateUi(QWidget *selectwin)
    {
        selectwin->setWindowTitle(QCoreApplication::translate("selectwin", "Form", nullptr));
        empRb->setText(QCoreApplication::translate("selectwin", "\345\221\230\345\267\245", nullptr));
        attRb->setText(QCoreApplication::translate("selectwin", "\350\200\203\345\213\244", nullptr));
        selectBt->setText(QCoreApplication::translate("selectwin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectwin: public Ui_selectwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
