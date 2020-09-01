#ifndef SEARCHSTUDENT_H
#define SEARCHSTUDENT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtSql>

namespace Ui {
class SearchStudent;
}

class SearchStudent : public QDialog
{
    Q_OBJECT

public:
    explicit SearchStudent(QWidget *parent = nullptr);
    ~SearchStudent();

private slots:
    void on_close_clicked();

private:
    Ui::SearchStudent *ui;
    void readDbAndDisplayTable();
};

#endif // SEARCHSTUDENT_H
