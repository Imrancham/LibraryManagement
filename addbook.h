#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "book.h"

namespace Ui {
class AddBook;
}

class AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();

private slots:
    void on_Add_accepted();

private:
    Ui::AddBook *ui;
};

#endif // ADDBOOK_H
