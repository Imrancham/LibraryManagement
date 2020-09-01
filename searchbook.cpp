#include "searchbook.h"
#include "ui_searchbook.h"
#include "qpushbutton.h"

SearchBook::SearchBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchBook)
{
    ui->setupUi(this);
    readDbAndDisplayTable();
    ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Search");



}

SearchBook::~SearchBook()
{
    delete ui;
}



void SearchBook::on_buttonBox_rejected()
{
    hide();
}

void SearchBook::on_buttonBox_accepted()
{

}


void SearchBook::readDbAndDisplayTable()
{
//    QSqlQuery qry;
//    QString str = "SELECT * FROM Student";
    QStringList lables;
    lables<<"Title" <<"ISBN"<<"Author"<<"Location"<<"Year"<<"Nr.Copys"<<"Ava.Copys";
    ui->tableWidget->setHorizontalHeaderLabels(lables);
}
