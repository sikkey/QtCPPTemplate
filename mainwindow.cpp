#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set title
    this->setWindowTitle("Template C++ Qt APP");
    // set icon
    this->setWindowIcon(QIcon(":/atlas/logo.png"));
    // remove window frame
    //this->setWindowFlags(Qt::CustomizeWindowHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoadConfig()
{
    QSettings *configIni = new QSettings("config.ini", QSettings::IniFormat);

    if(configIni)
    {
        /*
        // example: [server] ip = 127.0.0.1
        configIni->setValue("server/ip", "127.0.0.1");
        // example: [server] port = 8080
        configIni->setValue("server/port", 8080);
        */

        delete configIni;// save config
    }
}

void MainWindow::SaveConfig()
{
    QSettings *configIni = new QSettings("config.ini", QSettings::IniFormat);

    if(configIni)
    {
        /*
        // example: [server] ip = 127.0.0.1
        QString str_ip = configIni->value("server/ip", "127.0.0.1").toString();
        // example: [server] port = 8080
        int32_t i_port = configIni->value("server/port", 8080).toInt();
        */

        delete configIni;
    }
}
