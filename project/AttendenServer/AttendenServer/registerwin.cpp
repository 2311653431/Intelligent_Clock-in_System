#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>

RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin),
    timerid(0),  // 初始化timerid为0
    cap()
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    // 确保在窗口关闭前停止计时器和释放摄像头
    if (timerid != 0) {
        killTimer(timerid);
        timerid = 0;
    }
    cap.release();
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据
    if(cap.isOpened())
    {
        cap>>image;
        if(image.data == nullptr) return;
    }

    cv::Mat rgbImage;
    cv::cvtColor(image,rgbImage,cv::COLOR_BGR2RGB);
    QImage qImg(image.data,image.cols,image.rows,image.step1(),QImage::Format_BGR888);

    QPixmap mmp = QPixmap::fromImage(qImg);
    mmp = mmp.scaledToWidth(ui->headpicLB->width());
    ui->headpicLB->setPixmap(mmp);
}

void RegisterWin::on_resetBT_clicked()
{
    //清空输入数据
    ui->nameEdit->clear();
    ui->birthdayEdit->setDate(QDate::currentDate());
    ui->adressEdit->clear();
    ui->phoneEdit->clear();
    ui->picFileEdit->clear();
}

void RegisterWin::on_addPicBT_clicked()
{
    //通过文件对话框选择文件路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->picFileEdit->setText(filepath);

    //显示图片
    QPixmap mmp(filepath);
    mmp = mmp.scaledToWidth(ui->headpicLB->width());
    ui->headpicLB->setPixmap(mmp);
}

void RegisterWin::on_registerBT_clicked()
{
    //通过照片，结合faceObject模块，得到faceID
    QFaceObject faceobj;
    cv::Mat image = cv::imread(ui->picFileEdit->text().toUtf8().data());
    int faceID = faceobj.face_register(image);
    qDebug()<<faceID;
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    cv::imwrite(headfile.toUtf8().data(),image);

    //把信息存储到employee数据库表
    QSqlTableModel model;
    model.setTable("employee");
    QSqlRecord record = model.record();
    record.setValue("name",ui->nameEdit->text());
    record.setValue("sex",ui->male->isChecked()?"男":"女");
    record.setValue("birthday",ui->birthdayEdit->text());
    record.setValue("address",ui->adressEdit->text());
    record.setValue("phone",ui->phoneEdit->text());
    record.setValue("faceID",faceID);
    record.setValue("headFile",headfile);
    bool ret = model.insertRecord(0,record);

    //提示成功
    if(ret)
    {
       QMessageBox::information(this,"注册提示","注册成功");
       model.submitAll();
    }else
    {
        QMessageBox::information(this,"注册提示","注册失败");
    }
}

void RegisterWin::on_videoswithBT_clicked()
{
    if(ui->videoswithBT->text() == "打开摄像头") // 修改按钮文本判断
    {
        if(cap.open(0))
        {
            ui->videoswithBT->setText("关闭摄像头");
            timerid = startTimer(100);
        }
    }else
    {

        killTimer(timerid);
        ui->videoswithBT->setText("打开摄像头");
        cap.release();
    }
}

void RegisterWin::on_cameraBT_clicked()
{
    //保存数据
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->nameEdit->text().toUtf8().toBase64()));
    ui->picFileEdit->setText(headfile);
    cv::imwrite(headfile.toUtf8().data(), image);
    killTimer(timerid);//关闭定时器事件
    ui->videoswithBT->setText("打开摄像头");
    cap.release();

}
