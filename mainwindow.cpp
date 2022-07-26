#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newvm.h"
#include <iostream>
#include <QApplication>
#include <fstream>
#include<stdlib.h>
#include <QMessageBox>
#include "createhd.h"
int currentIndex = 0;
std::string execcom(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->viewVMS = MainWindow::parsevms("/home/segfault/qemuBackVMS/vms.qemuvm");
    ui->setupUi(this);
    this->refreshItems();
    //QObject::connect(ui->debug_refresh,&QPushButton::clicked,this,this->refreshItems());
}

MainWindow::~MainWindow()
{
    delete ui;
}
//void MainWindow::startVm(std::string name,std::string CDROM,std::string HARDDRIVE,std::string ram){

//}

void MainWindow::refreshItems(){
    ui->listWidget->clear();
    for(std::list<vm>::iterator i = viewVMS.begin(); i != viewVMS.end(); ++i)
    {
        ui->vm_name->setText((QString::fromStdString(i->name)));
        ui->label->setText((QString::fromStdString(i->cdpath)));
        ui->label_2->setText((QString::fromStdString(i->hdpath)));
        ui->listWidget->addItem(QString::fromStdString(i->name));
        //ui->label_2->setText((QString::fromStdString(std::to_string(i->memsize))))
    }

}
/*
 * Added into newvm.cpp instead.
 */
//void updateVMS(vm newVM){
//    std::ifstream pathForNewVM;
//    pathForNewVM.open("/home/segfault/qemuBackVMS/vms.qemuvm");
//    std::string newEntry;
//    newEntry = "{"+newVM.name+","+newVM.hdpath+","+newVM.cdpath+","+std::to_string(newVM.memsize)+"}";
//}
std::list<vm> MainWindow::parsevms(std::string vmsfile){
    std::ifstream pathForVM;
    pathForVM.open(vmsfile);
    std::string currentName;
    std::string currentCDPath;
    std::string currentHDPath;
    std::string memBefore = "0";
    std::list <vm> vmslol;
    char c;
    int in = 0;
    int mem;
    int counts = 0;
    if(pathForVM){
        // do stuff lamo (parse it)
        while(pathForVM.get(c)){
            if(in == 1 && counts == 0&& c!=','){
                currentName = currentName + c;
            }
            if(in == 1 && counts == 2 && c!=','){
                currentCDPath = currentCDPath + c;
            }
            if(in == 1 && counts == 1&& c!=','){
                currentHDPath = currentHDPath + c;
            }
            if(in == 1 && counts == 3&& c!=','){
                memBefore = memBefore + c;
            }
            if(c == '{'){
                in = 1;
            }
            if(c == ','){counts++;}

            if(c == '}'){
                in = 0;
                vm currentVM(currentName,currentCDPath,currentHDPath,std::stoi(memBefore));
                currentName = "";
                currentCDPath = "";
                currentHDPath = "";
                counts = 0;
                vmslol.push_back(currentVM);
            }

        }
        return vmslol;
    }else{
        ui->vm_name->setText(("Error Loading."));
    }


}

void MainWindow::on_commandLinkButton_clicked()
{
    std::string final;
    std::list<vm>::iterator i;
    int countboi = 0;
    for(i = this->viewVMS.begin(); countboi < currentIndex; ++i)
    {
        //bruh
        countboi ++;
    }
    std::string name = i->name;
    std::string cdpath = i->cdpath;
    std::string hdpath = i->hdpath;
    final = "qemu-system-x86_64 ";
    if(cdpath != "NULL"){
        final = final + " -cdrom "+cdpath;
    }
    if(hdpath != "NULL"){
        final = final + " -hdd "+hdpath;
    }
    final = final + " -m "+(std::to_string(i->memsize))+"G";
    char mainfinal[100000];
    strcpy(mainfinal,final.c_str());
    std::string system = execcom(mainfinal);
    QMessageBox msgBox;
    char *systemchar = new char[system.length()+1];
    strcpy(systemchar, system.c_str());
    msgBox.setText(systemchar);

    msgBox.exec();
}

//std::string name = i->name;
//std::string cdpath = i->cdpath;
//std::string hdpath = i->hdpath;


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int index = ui->listWidget->currentRow();
    currentIndex = index;
    int countboi = 0;
    std::list<vm>::iterator i;
    for(i = this->viewVMS.begin(); countboi < currentIndex; ++i)
    {
        countboi ++;
    }
    ui->vm_name->setText((QString::fromStdString(i->name)));
    ui->label->setText((QString::fromStdString(i->cdpath)));
    ui->label_2->setText((QString::fromStdString(i->hdpath)));
}


void MainWindow::on_create_new_vm_clicked()
{
    newvm *addvm = new newvm();
    addvm->show();
}


void MainWindow::on_pushButton_clicked()
{
    this->refreshItems();
}


/*
 *  createHD *hd = new createHD();
    hd->show();
 */

void MainWindow::newimg_clicked()
{
    createHD *hd = new createHD();
    hd->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    createHD *hd = new createHD();
    hd->show();
}

