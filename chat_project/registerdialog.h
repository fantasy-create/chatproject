#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private slots:
    void on_capt_btn_clicked();

private:
    Ui::RegisterDialog *ui;
    void showTip(QString str, bool b_ok);
};

#endif // REGISTERDIALOG_H
