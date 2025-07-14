#include "attendenwin.h"
#include "ui_attendenwin.h"
#include <QDateTime>
#include <QSqlRecord>
#include <QThread>
#include <opencv.hpp>
#include <QSqlQuery>
#include <QSqlError>

AttendenWin::AttendenWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AttendenWin)
{
    ui->setupUi(this);
    connect(&mserver,&QTcpServer::newConnection,this,&AttendenWin::accept_client);
    mserver.listen(QHostAddress::Any,9999);//监听，也就是启动服务器
    bsize = 0;

    model.setTable("employee");

    //创建线程
    QThread *thread = new QThread();
    fobj.moveToThread(thread);
    thread->start();

    connect(this,&AttendenWin::query,&fobj,&QFaceObject::face_query);

    //关联faceobject对象
    connect(&fobj,&QFaceObject::send_faceid,this,&AttendenWin::recv_faceid);
}

AttendenWin::~AttendenWin()
{
    delete ui;
}

void AttendenWin::accept_client()
{
    msocket = mserver.nextPendingConnection();
    //收到数据
    connect(msocket,&QTcpSocket::readyRead,this,&AttendenWin::read_data);
}

void AttendenWin::read_data()
{
    QDataStream stream(msocket);
    stream.setVersion(QDataStream::Qt_5_14);

    if(bsize == 0)
    {
        if(msocket->bytesAvailable()<(qint64)sizeof(bsize)) return;
        stream>>bsize;
    }
    if(msocket->bytesAvailable() < bsize)
    {
        return;
    }

    QByteArray data;
    stream>>data;
    bsize = 0;
    if(data.size() == 0)
    {
        return;
    }

    QPixmap mmp;
    mmp.loadFromData(data,"jpg");
    mmp = mmp.scaled(ui->label->size());
    ui->label->setPixmap(mmp);

    //识别人脸
    cv::Mat faceImage;
    std::vector<uchar>decode;
    decode.resize(data.size());
    memcpy(decode.data(),data.data(),data.size());
    faceImage = cv::imdecode(decode,cv::IMREAD_COLOR);
    //int faceid = fobj.face_query(faceImage);
    //qDebug()<<faceid;
    emit query(faceImage);
}

void AttendenWin::recv_faceid(int64_t faceid)
{
    qDebug()<<"识别到的人脸id:"<<faceid;
    if(faceid < 0)
    {
        QString sdmsg = QString("{\"employeeID\":,\"name\":,\"department\":,\"time\":}");
        msocket->write(sdmsg.toUtf8());
        return ;
    }

    model.setFilter(QString("faceid=%1").arg(faceid));
    model.select();
    if(model.rowCount() == 1)
    {
        //工号，姓名，部门，时间
        //{employeeID:%1,name:%2,department:软件,time:%3}
        QSqlRecord record = model.record(0);
        QString sdmsg = QString("{\"employeeID\":\"%1\",\"name\":\"%2\",\"department\":\"软件\",\"time\":\"%3\"}")
                .arg(record.value("employeeID").toString()).arg(record.value("name").toString())
                .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));


        //把数据写入数据库--考勤表
        QString insertSql = QString("insert into attendance(employeeID) values('%1')").arg(record.value("employeeID").toString());
        QSqlQuery query;
        if(!query.exec(insertSql))
        {
            QString sdmsg = QString("{\"employeeID\":\" \",\"name\":\"\",\"department\":\"\",\"time\":\"\"}");
            msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端
            qDebug()<<query.lastError().text();
            return ;
        }else
        {
            msocket->write(sdmsg.toUtf8());//把打包好的数据发送给客户端
        }
    }
}

