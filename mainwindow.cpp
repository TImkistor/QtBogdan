#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    QString login = ui->lineEdit->text();
    QString pass = ui->lineEdit_2->text();
    if (db.open()){
        QSqlQuery QueryOnline;
        QueryOnline.exec( "SELECT * FROM rabotnik WHERE Kontakt='"+login+"' AND Pass='"+pass+"'" );
        if(QueryOnline.next()){
             cvb = new admin(this);
             cvb->show();
             hide();
        }
        else {
            QMessageBox::information(this, "Ошибка", "Не верный логин или пароль");
        }
    }
}
