#include "qfaceobject.h"
#include <QDebug>

QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    //初始化
    seeta::ModelSetting FDmode("E:/CMake_program/SeetaFace/bin/model/fd_2_00.dat",seeta::ModelSetting::GPU,0);
    seeta::ModelSetting PDmode("E:/CMake_program/SeetaFace/bin/model/pd_2_00_pts5.dat",seeta::ModelSetting::GPU,0);
    seeta::ModelSetting FRmode("E:/CMake_program/SeetaFace/bin/model/fr_2_10.dat",seeta::ModelSetting::GPU,0);
    this->fenginptr = new seeta::FaceEngine(FDmode,PDmode,FRmode);
    this->fenginptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    if (fenginptr) {
        delete fenginptr;
    }
}

int64_t QFaceObject::face_register(cv::Mat &faceimage)
{
    SeetaImageData simage;
    simage.data = faceimage.data;
    simage.width = faceimage.cols;
    simage.height = faceimage.rows;
    simage.channels = faceimage.channels();
    int64_t faceid = this->fenginptr->Register(simage);//注册返回一个人脸id
    if(faceid >= 0)
    {
        fenginptr->Save("./face.db");
    }
    return faceid;

}

int QFaceObject::face_query(cv::Mat &faceimage)
{
    SeetaImageData simage;
    simage.data = faceimage.data;
    simage.width = faceimage.cols;
    simage.height = faceimage.rows;
    simage.channels = faceimage.channels();
    float similarity = 0;
    int64_t faceid = fenginptr->Query(simage,&similarity);//但是运算时间比较长
    qDebug()<<"查询"<<faceid<<similarity;
    if(similarity > 0.8)
    {
        emit send_faceid(faceid);
    }else
    {
        emit send_faceid(-1);
    }
    return faceid;
}
