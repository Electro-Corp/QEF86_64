#include "createhd.h"
#include "ui_createhd.h"
#include <iostream>
#include "common.h"
#include <QMessageBox>
createHD::createHD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createHD)
{
    ui->setupUi(this);
}

createHD::~createHD()
{
    delete ui;
}

void createHD::on_pushButton_clicked()
{
    std::string final;
    system("mkdir /home/$USERNAME/machines;mkdir /home/$USERNAME/machines/hds");
    final = "qemu-img create /home/$USERNAME/machines/hds/" + ui->lineEdit->text().toStdString() + ".img "+std::to_string(ui->horizontalSlider->sliderPosition())+"m";

    char mainfinal[100000];
    strcpy(mainfinal,final.c_str());
    std::string system = execcommandwithreturn(mainfinal);
    QMessageBox msgBox;
    char *systemchar = new char[system.length()+1];
    strcpy(systemchar, system.c_str());
    msgBox.setText(systemchar);
    msgBox.exec();
    this->close();

}


void createHD::on_horizontalSlider_sliderMoved(int position)
{
    //1000
    ui->gb_show->setText(QString::number(ui->horizontalSlider->sliderPosition()));
    ui->GBS->setText(QString::number(ui->horizontalSlider->sliderPosition()/1000));
}

