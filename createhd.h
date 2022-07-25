#ifndef CREATEHD_H
#define CREATEHD_H

#include <QDialog>

namespace Ui {
class createHD;
}

class createHD : public QDialog
{
    Q_OBJECT

public:
    explicit createHD(QWidget *parent = nullptr);
    ~createHD();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::createHD *ui;
};

#endif // CREATEHD_H
