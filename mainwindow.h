#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <iostream>
#include "vmclass.h"
#include <list>
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshItems();
    void startVm(std::string name,std::string CDROM,std::string HARDDRIVE,std::string ram);
    std::list<vm> parsevms(std::string vmsfile);
    std::list<vm> viewVMS;

private slots:
    void on_commandLinkButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_create_new_vm_clicked();

    void on_pushButton_clicked();

    void newimg_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
