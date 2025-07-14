#include "attendenwin.h"
#include "selectwin.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <opencv.hpp>

#include "registerwin.h"
#include "selectwin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qRegisterMetaType<cv::Mat>("cv::Mat&");
    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<int64_t>("int64_t");

//    RegisterWin ww;
//    ww.show();

    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    //设置数据库路径
    db.setDatabaseName("server.db");
    if(!db.open())
    {
        qDebug() << "数据库打开失败:" << db.lastError().text();
        return -1;
    }

    //创建员工信息表格 - 修正了primary key拼写错误和address拼写
    QString createsql = "CREATE TABLE IF NOT EXISTS employee ("
                        "employeeID INTEGER PRIMARY KEY AUTOINCREMENT, "
                        "name VARCHAR(256), "
                        "sex VARCHAR(32), "
                        "birthday TEXT, "
                        "address TEXT, "
                        "phone TEXT, "
                        "faceID INTEGER UNIQUE, "
                        "headfile TEXT)";

    QSqlQuery query;
    if(!query.exec(createsql))
    {
        qDebug() << "创建employee表失败:" << query.lastError().text();
        return -1;
    }

    createsql = "CREATE TABLE IF NOT EXISTS attendance ("
                "attendanceID INTEGER PRIMARY KEY AUTOINCREMENT, "
                "employeeID INTEGER, "
                "attendanceTime TIMESTAMP NOT NULL DEFAULT (datetime('now', 'localtime')))";

    if(!query.exec(createsql))
    {
        qDebug() << "创建attendance表失败:" << query.lastError().text();
        return -1;
    }

    AttendenWin w;
    w.show();

//    selectwin sw;
//    sw.show();
    return a.exec();
}
