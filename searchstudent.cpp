#include "searchstudent.h"
#include "ui_searchstudent.h"

SearchStudent::SearchStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchStudent)
{
    ui->setupUi(this);
    readDbAndDisplayTable();
}

SearchStudent::~SearchStudent()
{
    delete ui;
}

void SearchStudent::readDbAndDisplayTable()
{
    QSqlQuery qry;
    QString str = "SELECT * FROM Student";
    QStringList lables;
    lables<<"id" <<"Name"<<"Department"<<"Sex"<<"Birthday"<<"NOCBBs"<<"Charge";
    ui->tableWidget->setHorizontalHeaderLabels(lables);
}

void SearchStudent::on_close_clicked()
{
    hide();
}
