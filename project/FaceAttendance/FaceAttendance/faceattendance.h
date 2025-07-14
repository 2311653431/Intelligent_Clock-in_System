#ifndef FACEATTENDANCE_H
#define FACEATTENDANCE_H

#include <QMainWindow>
#include <opencv.hpp>
#include <QTcpSocket>
#include <QTimer>

using namespace std;
using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class FaceAttendance; }
QT_END_NAMESPACE

class FaceAttendance : public QMainWindow
{
    Q_OBJECT

public:
    FaceAttendance(QWidget *parent = nullptr);
    ~FaceAttendance();
    //定时器
    void timerEvent(QTimerEvent *e);

protected slots:
    void recv_data();
private slots:
    void timer_connect();
    void stop_connect();
    void start_connect();

private:
    Ui::FaceAttendance *ui;

    //摄像头
    VideoCapture cap;
    //人脸检测
    cv::CascadeClassifier cascade;
    //服务器
    QTcpSocket msocket;
    QTimer mtimer;

    int flag;

    cv::Mat faceMat;
};
#endif // FACEATTENDANCE_H
