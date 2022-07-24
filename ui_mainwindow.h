/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *sub;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QCommandLinkButton *commandLinkButton;
    QLabel *vm_name;
    QLabel *label;
    QLabel *label_2;
    QPushButton *create_new_vm;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(699, 370);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("applications-science");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(10, 10, 161, 81));
        sub = new QLabel(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(10, 70, 421, 17));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 100, 271, 241));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 256, 192));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 110, 381, 171));
        commandLinkButton = new QCommandLinkButton(groupBox_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 130, 177, 31));
        vm_name = new QLabel(groupBox_2);
        vm_name->setObjectName(QString::fromUtf8("vm_name"));
        vm_name->setGeometry(QRect(10, 40, 181, 17));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 351, 17));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 361, 17));
        create_new_vm = new QPushButton(centralwidget);
        create_new_vm->setObjectName(QString::fromUtf8("create_new_vm"));
        create_new_vm->setGeometry(QRect(310, 290, 89, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 290, 121, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 699, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QEF86_64", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">QEF86_64</span><br/></p></body></html>", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "A Simple and minamal GUI frontend for qemu-system-x86_64", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Machines", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Details", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Launch Virtual Machine", nullptr));
        vm_name->setText(QCoreApplication::translate("MainWindow", "VM name", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CD ROM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "HARD DRIVE", nullptr));
        create_new_vm->setText(QCoreApplication::translate("MainWindow", "New VM", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Update VM List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
