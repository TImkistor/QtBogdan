#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    ui->label_2->hide();
    ui->login_9->hide();
    ui->login_10->hide();
    ui->login_11->hide();
    ui->lineEdit->hide();
    ui->login_2->hide();
    ui->login_3->hide();
    ui->login_4->hide();
    ui->login_6->hide();
    ui->login_7->hide();
    ui->login_8->hide();
    ui->pushButton_5->hide();
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    QString filter = ui->login_9->text();
        if(filter == ""){
        QString table = ui->comboBox->currentText();
        if(table =="Фирма"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->hide();
            ui->login_4->hide();
            ui->login_6->hide();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from firma");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Долг"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->hide();
            ui->login_4->hide();
            ui->login_6->hide();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from dolg");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Клиент"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->show();
            ui->login_4->show();
            ui->login_6->show();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from klient");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Продажа"){
            ui->label_2->show();
            ui->login_9->show();
            ui->login_10->show();
            ui->login_11->show();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->show();
            ui->login_4->show();
            ui->login_6->show();
            ui->login_7->show();
            ui->login_8->show();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from prodaga");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Работник"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->show();
            ui->login_4->show();
            ui->login_6->show();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from rabotnik");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Склад"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->show();
            ui->login_4->hide();
            ui->login_6->hide();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from sklad");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Тип"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->hide();
            ui->login_4->hide();
            ui->login_6->hide();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from tip");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        if(table =="Товар"){
            ui->label_2->hide();
            ui->login_9->hide();
            ui->login_10->hide();
            ui->login_11->hide();
            ui->lineEdit->show();
            ui->login_2->show();
            ui->login_3->show();
            ui->login_4->show();
            ui->login_6->show();
            ui->login_7->hide();
            ui->login_8->hide();
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("select * from tovar");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        db.close();
        }
        }
        else {
            QString table = ui->comboBox->currentText();
            if(table =="Продажа"){
               QString filter1 = ui->login_9->text();
               QString filter2 = ui->login_10->text();
               QString filter3 = ui->login_11->text();
               ui->label_2->show();
               ui->login_9->show();
               ui->login_10->show();
               ui->login_11->show();
                ui->lineEdit->show();
                ui->login_2->show();
                ui->login_3->show();
                ui->login_4->show();
                ui->login_6->show();
                ui->login_7->show();
                ui->login_8->show();
            QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
            db.setHostName("127.0.0.1");
            db.setUserName("root");
            db.setPassword("");
            db.setDatabaseName("intrenetmagazine");
            db.open();
            QSqlQueryModel *modal = new QSqlQueryModel();
            QSqlQuery *qry = new QSqlQuery(db);
            qry->prepare("SELECT * FROM `prodaga` WHERE ID_Rabotnik = "+filter1+" and ID_Klient = "+filter2+" and ID_Tovar = "+filter3+";");
            qry->exec();
            modal->setQuery(*qry);
            ui->tableView->setModel(modal);
            db.close();
            }
        }
}

void admin::on_pushButton_2_clicked()
{
    QString table = ui->comboBox->currentText();
    if(table == "Долг"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QueryOnline.exec("INSERT INTO `dolg` (`ID_Dolg`, `Naim`) VALUES (NULL, '"+login1+"');");
    }
    if(table == "Фирма"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QueryOnline.exec("INSERT INTO `firma` (`ID_Firma`, `Naim`) VALUES (NULL, '"+login1+"');");
    }
    if(table == "Клиент"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QueryOnline.exec("INSERT INTO `klient` (`ID_klient`, `FIO`, `Kontakt`, `Pass`, `Balance`) VALUES (NULL, '"+login1+"', '"+login2+"', '"+login3+"', '"+login4+"');");
    }
    if(table == "Продажа"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QString login5 = ui->login_7->text();
QString login6 = ui->login_8->text();
QueryOnline.exec("INSERT INTO `prodaga` (`ID_Prodaga`, `ID_Rabotnik`, `ID_Klient`, `ID_Tovar`, `Kolvo`, `Cena`, `Data`) VALUES (NULL, '"+login1+"', '"+login2+"', '"+login3+"', '"+login4+"', '"+login5+"', '"+login6+"');");
    }
    if(table == "Работник"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QueryOnline.exec("INSERT INTO `rabotnik` (`ID_Rabotnik`, `FIO`, `Kontakt`, `Pass`, `ID_Dolg`) VALUES (NULL, '"+login1+"', '"+login2+"', '"+login3+"', '"+login4+"');");
    }
    if(table == "Склад"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QueryOnline.exec("INSERT INTO `sklad` (`ID_Sklad`, `ID_Tovar`, `Kolvo`) VALUES (NULL, '"+login1+"', '"+login2+"');");
    }
    if(table == "Тип"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QueryOnline.exec("INSERT INTO `tip` (`ID_Tip`, `Naim`) VALUES (NULL, '"+login1+"');");
    }
    if(table == "Товар"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QueryOnline.exec("INSERT INTO `tovar` (`ID_Tovar`, `Naim`, `ID_Tip`, `ID_Firma`, `Cena`) VALUES (NULL, '"+login1+"', '"+login2+"', '"+login3+"', '"+login4+"');");
    }
}

void admin::on_pushButton_4_clicked()
{
    QString table = ui->comboBox->currentText();
     if(table == "Долг"){
         QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
         db.setHostName("127.0.0.1");
         db.setUserName("root");
         db.setPassword("");
         db.setDatabaseName("intrenetmagazine");
         db.open();
    QSqlQuery QueryOnline;
    QString Delete = ui->lineEdit->text();
    QueryOnline.exec("DELETE FROM dolg WHERE `dolg`.`ID_Dolg` = '"+Delete+"'");
     }
    if(table == "Фирма"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM firma WHERE `firma`.`ID_Firma` = '"+Delete+"'");
    }
    if(table == "Клиент"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM klient WHERE `klient`.`ID_Klient` = '"+Delete+"'");
    }
    if(table == "Продажа"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM prodaga WHERE `prodaga`.`ID_Prodaga` = '"+Delete+"'");
    }
    if(table == "Работник"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM rabotnik WHERE `rabotnik`.`ID_Rabotnik` = '"+Delete+"'");
    }
    if(table == "Склад"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM sklad WHERE `sklad`.`ID_Sklad` = '"+Delete+"'");
    }
    if(table == "Тип"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM tip WHERE `tip`.`ID_Tip` = '"+Delete+"'");
    }
    if(table == "Товар"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("intrenetmagazine");
        db.open();
   QSqlQuery QueryOnline;
   QString Delete = ui->lineEdit->text();
   QueryOnline.exec("DELETE FROM tovar WHERE `tovar`.`ID_Tovar` = '"+Delete+"'");
    }
}

void admin::on_pushButton_3_clicked()
{
    QString table = ui->comboBox->currentText();
    if(table == "Долг"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `dolg` SET `Naim` = '"+login1+"' WHERE `dolg`.`ID_Dolg` = "+id+";");
    }
    if(table == "Фирма"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `firma` SET `Naim` = '"+login1+"' WHERE `firma`.`ID_Firma` = "+id+";");
    }
    if(table == "Клиент"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `klient` SET `FIO` = '"+login1+"', `Kontakt` = '"+login2+"', `Pass` = '"+login3+"', Balance = '"+login4+"' WHERE `klient`.`ID_klient` = "+id+";");
    }
    if(table == "Продажа"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QString login5 = ui->login_7->text();
QString login6 = ui->login_8->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `prodaga` SET `ID_Rabotnik` = '"+login1+"', `ID_Klient` = '"+login2+"', `ID_Tovar` = '"+login3+"', `Kolvo` = '"+login4+"', `Cena` = '"+login5+"', `Data` = '"+login6+"' WHERE `prodaga`.`ID_Prodaga` = "+id+";");
    }
    if(table == "Работник"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `rabotnik` SET `FIO` = '"+login1+"', `Kontakt` = '"+login2+"', `Pass` = '"+login3+"', `ID_Dolg` = '"+login4+"'  WHERE `rabotnik`.`ID_Rabotnik` = "+id+";");
    }
    if(table == "Склад"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `sklad` SET `ID_Tovar` = '"+login1+"', `Kolvo` = '"+login2+"' WHERE `sklad`.`ID_Sklad` = "+id+";");
    }
    if(table == "Тип"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `tip` SET `Naim` = '"+login1+"' WHERE `tip`.`ID_Tip` = "+id+";");
    }
    if(table == "Товар"){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("intrenetmagazine");
    db.open();

QSqlQuery QueryOnline;
QString login1 = ui->login_2->text();
QString login2 = ui->login_3->text();
QString login3 = ui->login_4->text();
QString login4 = ui->login_6->text();
QString id = ui->lineEdit->text();
QueryOnline.exec("UPDATE `tovar` SET `Naim` = '"+login1+"', `ID_Tip` = '"+login2+"', `ID_Firma` = '"+login3+"', `Cena` = '"+login4+"' WHERE `tovar`.`ID_Tovar` = "+id+";");
    }
}
