#include "addstuent.h"
#include "ui_addstuent.h"

AddStuent::AddStuent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStuent)
{
    ui->setupUi(this);
    ui->name->setPlaceholderText("Enter Student's name");
    ui->department->setPlaceholderText("Students's department");
    ui->DateOfBirth->setPlaceholderText("yyyy-mm-dd");
}

AddStuent::~AddStuent()
{
    delete ui;
}

void AddStuent::on_Add_clicked()
{
    Student student;
    student.SetName(ui->name->text());
    student.SetDepartment(ui->department->text());
    student.SetDateOfBirth(ui->DateOfBirth->text());

    if(ui->SexMale)
        student.SetSex('M');
    else if (ui->SexFemal) {
        student.SetSex('F');
    }



    QSqlQuery stmt;
    stmt.prepare("INSERT INTO Students (Name, Department, Sex,DateOfBirth)"
              "VALUES (:name, :dep, :sex, :dateofbirth)");
    stmt.bindValue(":name", student.GetName());
    stmt.bindValue(":dep", student.GetDepartment());
    stmt.bindValue(":sex", student.GetSex());
    stmt.bindValue(":dateofbirth", student.GetDateOfBirth());

    if(stmt.exec()){

        QMessageBox::information(this,"Done", "Student added successfully.. ");
        hide();
}
else{
            QMessageBox::critical(this,"Error", "Unable to add record" );
        qDebug() << "SQL Statement Error" << stmt.lastError();
    }


}
