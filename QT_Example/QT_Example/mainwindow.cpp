#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<unistd.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnstart_clicked()
{
    unsigned int microsecond = 1000000;
    for(int x=0;x<100;x++)
    {
        ui->pbStatus->setValue(x);


    }
}

