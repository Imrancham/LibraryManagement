#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Username->setPlaceholderText("User name");
    ui->password->setPlaceholderText("Password");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString passowrd = ui->password->text();


    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword(passowrd);
    db.setDatabaseName("Library");

    if(db.open())
    {
        QMessageBox::information(this, "Connection", "you are successfully connected");
        hide();
        controlpanel panel;
        panel.setModal(true);
        panel.exec();


    }else
    {
        QMessageBox::critical(this,"Connection error", "failed to connecte to the database");
    }
}
