#include "addbook.h"
#include "ui_addbook.h"

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::on_Add_accepted()
{
    Book book;
    book.SetName(ui->name->text()) ;
    book.SetAutor(ui->author->text());
    book.SetYear((ui->year->text()).toInt());
    book.SetLocation(ui->location->text());
    book.SetNrCopys((ui->nocopys->text()).toInt());
    book.SetAvaCpoys((ui->nocopys->text()).toInt());
    book.SetISBN(ui->isbn->text());

    QSqlQuery stmt;
    stmt.prepare("INSERT INTO Books (Name, Author, Year, ISBN, Location, Nr_copys, Available_Copys)"
              "VALUES (:name, :author, :year, :isbn, :location, :nrCopys, :avaCopys)");
    stmt.bindValue(":name", book.GetName());
    stmt.bindValue(":author", book.GetAuthor());
    stmt.bindValue(":year", book.GetYear());
    stmt.bindValue(":isbn", book.GetISBN());
    stmt.bindValue(":nrCopys", book.GetNrCopys());
    stmt.bindValue(":avaCopys", book.GetAvaCopys());
    stmt.bindValue(":location", book.GetLocation());
    if(stmt.exec()){

        QMessageBox::information(this,"Done", "Book added successfully.. ");
        hide();
}
else{
            QMessageBox::critical(this,"Error", "Unable to add record" );
        qDebug() << "SQL Statement Error" << stmt.lastError();
    }



}
