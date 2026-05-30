#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    //接收注册按钮信号
    connect(ui->res_btn, &QPushButton::clicked, this, &LoginDialog::switchRegister);

    //密码遮挡
    ui->loginPassEdit->setEchoMode(QLineEdit::Password);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
