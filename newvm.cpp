#include "newvm.h"
#include "ui_newvm.h"
#include "vmclass.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QMessageBox>
newvm::newvm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newvm)
{
    ui->setupUi(this);
}
void updateVMS(vm newVM){
    std::fstream pathForNewVM;
    pathForNewVM.open("/home/segfault/qemuBackVMS/vms.qemuvm",std::fstream::in | std::fstream::out | std::fstream::app);
    std::string newEntry;
    newEntry = "{"+newVM.name+","+newVM.hdpath+","+newVM.cdpath+","+std::to_string(newVM.memsize)+"}";
    std::ofstream final;

     final.open("/home/segfault/qemuBackVMS/vms.qemuvm", std::ios_base::app);
     final << newEntry.c_str();
 }
newvm::~newvm()
{
    delete ui;
}

void newvm::on_commandLinkButton_clicked()
{
    std::string vmname = (ui->vm_name->text()).toStdString();
    std::string cdpath = (ui->vm_name_2->text()).toStdString();
    std::string hdpath = (ui->vm_name_3->text()).toStdString();
    int mem = ui->spinBox->value();
    vm vmtoadd(vmname,cdpath,hdpath,mem);
    updateVMS(vmtoadd);
    this->close();
}

