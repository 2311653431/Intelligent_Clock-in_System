#include "selectwin.h"
#include "ui_selectwin.h"

selectwin::selectwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectwin)
{
    ui->setupUi(this);
    model = new QSqlTableModel();
}

selectwin::~selectwin()
{
    delete ui;
}

void selectwin::on_selectBt_clicked()
{
    if(ui->empRb->isChecked())
    {
        model->setTable("employee");
    }
    if(ui->attRb->isChecked())
    {
        model->setTable("attendance");
    }

    model->select();

    ui->tableView->setModel(model);
}
