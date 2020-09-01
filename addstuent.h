#ifndef ADDSTUENT_H
#define ADDSTUENT_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "student.h"

namespace Ui {
class AddStuent;
}

class AddStuent : public QDialog
{
    Q_OBJECT

public:
    explicit AddStuent(QWidget *parent = nullptr);
    ~AddStuent();

private slots:
    void on_Add_clicked();

private:
    Ui::AddStuent *ui;
};

#endif // ADDSTUENT_H
