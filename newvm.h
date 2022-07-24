#ifndef NEWVM_H
#define NEWVM_H

#include <QDialog>

namespace Ui {
class newvm;
}

class newvm : public QDialog
{
    Q_OBJECT

public:
    explicit newvm(QWidget *parent = nullptr);
    ~newvm();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::newvm *ui;
};

#endif // NEWVM_H
