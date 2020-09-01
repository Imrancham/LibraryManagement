#include "controlpanel.h"
#include "ui_controlpanel.h"

controlpanel::controlpanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controlpanel)
{
    ui->setupUi(this);

}

controlpanel::~controlpanel()
{
    delete ui;
}

void controlpanel::on_AddStudent_clicked()
{
    AddStuent addStudent;
    addStudent.setModal(true);
    addStudent.exec();
}

void controlpanel::on_AddBook_clicked()
{
    AddBook addbook;
    addbook.setModal(true);
    addbook.exec();
}

void controlpanel::on_SearchStudent_clicked()
{
    SearchStudent searchStudent;
    searchStudent.setModal(true);
    searchStudent.exec();
}

void controlpanel::on_SearchBook_clicked()
{
    SearchBook searchbook;
    searchbook.setModal(true);
    searchbook.exec();
};

