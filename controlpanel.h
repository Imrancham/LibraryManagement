#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QDialog>
#include "addstuent.h"
#include "addbook.h"
#include "searchstudent.h"
#include "searchbook.h"

namespace Ui {
class controlpanel;
}

class controlpanel : public QDialog
{
    Q_OBJECT

public:
    explicit controlpanel(QWidget *parent = nullptr);
    ~controlpanel();

private slots:
    void on_AddStudent_clicked();

    void on_AddBook_clicked();

    void on_SearchStudent_clicked();

    void on_SearchBook_clicked();

private:
    Ui::controlpanel *ui;
};

#endif // CONTROLPANEL_H
