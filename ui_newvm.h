/********************************************************************************
** Form generated from reading UI file 'newvm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWVM_H
#define UI_NEWVM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_newvm
{
public:
    QLabel *label;
    QLineEdit *vm_name;
    QCommandLinkButton *commandLinkButton;
    QLineEdit *vm_name_3;
    QLabel *label_2;
    QLineEdit *vm_name_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;

    void setupUi(QDialog *newvm)
    {
        if (newvm->objectName().isEmpty())
            newvm->setObjectName(QString::fromUtf8("newvm"));
        newvm->resize(331, 236);
        label = new QLabel(newvm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 211, 61));
        vm_name = new QLineEdit(newvm);
        vm_name->setObjectName(QString::fromUtf8("vm_name"));
        vm_name->setGeometry(QRect(100, 100, 151, 25));
        commandLinkButton = new QCommandLinkButton(newvm);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(200, 190, 91, 41));
        vm_name_3 = new QLineEdit(newvm);
        vm_name_3->setObjectName(QString::fromUtf8("vm_name_3"));
        vm_name_3->setGeometry(QRect(140, 160, 151, 25));
        label_2 = new QLabel(newvm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 81, 17));
        vm_name_2 = new QLineEdit(newvm);
        vm_name_2->setObjectName(QString::fromUtf8("vm_name_2"));
        vm_name_2->setGeometry(QRect(120, 130, 151, 25));
        label_3 = new QLabel(newvm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 101, 17));
        label_4 = new QLabel(newvm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 121, 17));
        spinBox = new QSpinBox(newvm);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(110, 190, 44, 26));
        label_5 = new QLabel(newvm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 190, 101, 17));

        retranslateUi(newvm);

        QMetaObject::connectSlotsByName(newvm);
    } // setupUi

    void retranslateUi(QDialog *newvm)
    {
        newvm->setWindowTitle(QCoreApplication::translate("newvm", "Add New VM", nullptr));
        label->setText(QCoreApplication::translate("newvm", "<html><head/><body><p><span style=\" font-size:26pt;\">Add new VM</span></p></body></html>", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("newvm", "Add VM", nullptr));
        label_2->setText(QCoreApplication::translate("newvm", "VM Name: ", nullptr));
        label_3->setText(QCoreApplication::translate("newvm", "CD ROM path:", nullptr));
        label_4->setText(QCoreApplication::translate("newvm", "Hard Drive Path:", nullptr));
        label_5->setText(QCoreApplication::translate("newvm", "Memory (GBS)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newvm: public Ui_newvm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWVM_H
