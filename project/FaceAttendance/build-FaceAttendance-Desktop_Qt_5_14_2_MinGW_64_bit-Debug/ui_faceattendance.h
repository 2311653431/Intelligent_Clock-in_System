/********************************************************************************
** Form generated from reading UI file 'faceattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDANCE_H
#define UI_FACEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendance
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *headpicLB;
    QLabel *video;
    QFrame *frame_3;
    QLabel *title;
    QLabel *headR;
    QWidget *widget1;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QWidget *widget_2;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QWidget *widget_3;
    QLabel *label_12;
    QLineEdit *lineEdit_3;
    QWidget *widget_4;
    QLabel *label_13;
    QLineEdit *lineEdit_4;

    void setupUi(QMainWindow *FaceAttendance)
    {
        if (FaceAttendance->objectName().isEmpty())
            FaceAttendance->setObjectName(QString::fromUtf8("FaceAttendance"));
        FaceAttendance->resize(800, 480);
        centralwidget = new QWidget(FaceAttendance);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 480, 480));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(80, 360, 331, 60));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(49,50,54,60);\n"
"border:none"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 341, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(31, 31));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/yes.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(49, 50, 54\357\274\21460);"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        headpicLB = new QLabel(frame);
        headpicLB->setObjectName(QString::fromUtf8("headpicLB"));
        headpicLB->setGeometry(QRect(110, 50, 266, 266));
        headpicLB->setStyleSheet(QString::fromUtf8("border-image: url(:/crc.png);"));
        video = new QLabel(frame);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(0, 0, 480, 480));
        video->raise();
        frame_2->raise();
        headpicLB->raise();
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(480, 0, 320, 480));
        frame_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,90);\n"
"}\n"
"\n"
"QWidget#title{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QWidget#head{\n"
"	border-radius:75px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame_3);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 320, 51));
        title->setAlignment(Qt::AlignCenter);
        headR = new QLabel(frame_3);
        headR->setObjectName(QString::fromUtf8("headR"));
        headR->setGeometry(QRect(90, 60, 150, 150));
        widget1 = new QWidget(frame_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 220, 271, 61));
        widget1->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,90);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(255, 255, 100);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 51, 41));
        label_6->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(70, 10, 191, 41));
        widget_2 = new QWidget(frame_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 280, 271, 61));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,90);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(255, 255, 100);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 51, 41));
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(70, 10, 191, 41));
        widget_3 = new QWidget(frame_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(20, 340, 271, 61));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,90);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(255, 255, 100);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 51, 41));
        label_12->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(70, 10, 191, 41));
        widget_4 = new QWidget(frame_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(20, 400, 271, 61));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color:rgb(37,40,49,90);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(255, 255, 100);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 10, 51, 41));
        label_13->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(widget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(70, 10, 191, 41));
        FaceAttendance->setCentralWidget(centralwidget);

        retranslateUi(FaceAttendance);

        QMetaObject::connectSlotsByName(FaceAttendance);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendance)
    {
        FaceAttendance->setWindowTitle(QCoreApplication::translate("FaceAttendance", "FaceAttendance", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("FaceAttendance", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        headpicLB->setText(QString());
        video->setText(QString());
        title->setText(QCoreApplication::translate("FaceAttendance", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headR->setText(QString());
        label_6->setText(QCoreApplication::translate("FaceAttendance", "\345\267\245\345\217\267", nullptr));
        lineEdit->setText(QCoreApplication::translate("FaceAttendance", "001", nullptr));
        label_7->setText(QCoreApplication::translate("FaceAttendance", "\345\247\223\345\220\215", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("FaceAttendance", "001", nullptr));
        label_12->setText(QCoreApplication::translate("FaceAttendance", "\351\203\250\351\227\250", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("FaceAttendance", "001", nullptr));
        label_13->setText(QCoreApplication::translate("FaceAttendance", "\346\227\266\351\227\264", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("FaceAttendance", "001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttendance: public Ui_FaceAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDANCE_H
