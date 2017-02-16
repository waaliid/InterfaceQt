#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qfiledialog.h>
#include<qmessagebox.h>
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
    QString filename=QFileDialog::getOpenFileName(this,tr("Open File"),"C://");
    QMessageBox::information(this,tr("File Name"),filename) ;

}

void MainWindow::on_pushButton_3_clicked()
{   QString message= "Not implemented yet" ;
    QMessageBox::information(this,tr("File Name"),message) ;

}

void MainWindow::on_pushButton_4_clicked()
{
    QString message= "Not implemented yet" ;
        QMessageBox::information(this,tr("File Name"),message) ;
}

void MainWindow::on_pushButton_2_clicked()
{

}
