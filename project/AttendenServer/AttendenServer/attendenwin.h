#ifndef ATTENDENWIN_H
#define ATTENDENWIN_H

#include "qfaceobject.h"
#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QSqlTableModel>
#include <QSqlRecord>

QT_BEGIN_NAMESPACE
namespace Ui { class AttendenWin; }
QT_END_NAMESPACE

class AttendenWin : public QMainWindow
{
    Q_OBJECT

public:
    AttendenWin(QWidget *parent = nullptr);
    ~AttendenWin();

signals:
    void query(cv::Mat& image);

protected slots:
    void accept_client();
    void read_data();
    void recv_faceid(int64_t faceid);

private:
    Ui::AttendenWin *ui;
    QTcpServer mserver;
    QTcpSocket *msocket;
    quint64 bsize;
    QFaceObject fobj;
    QSqlTableModel model;
};
#endif // ATTENDENWIN_H
