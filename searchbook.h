#ifndef SEARCHBOOK_H
#define SEARCHBOOK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtSql>

namespace Ui {
class SearchBook;
}

class SearchBook : public QDialog
{
    Q_OBJECT

public:
    explicit SearchBook(QWidget *parent = nullptr);
    ~SearchBook();

private slots:

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::SearchBook *ui;
    void readDbAndDisplayTable();

};

#endif // SEARCHBOOK_H
