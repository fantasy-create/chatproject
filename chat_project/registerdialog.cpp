#include "registerdialog.h"
#include "global.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);

    //密码遮挡
    ui->passEdit->setEchoMode(QLineEdit::Password);
    ui->confEdit->setEchoMode(QLineEdit::Password);

    //错误提示
    ui->err_tip->setProperty("state","normal");
    repolish(ui->err_tip);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_capt_btn_clicked()
{
    //验证邮箱的地址正则表达式
    auto email = ui->emailEdit->text();
    // 邮箱地址的正则表达式
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    // 执行正则表达式匹配
    bool match = regex.match(email).hasMatch();
    if(match){
        //发送http请求获取验证码
    }else{
        //提示邮箱不正确
        showTip(tr("邮箱地址不正确"));
    }
}

void RegisterDialog::showTip(QString str)
{
    ui->err_tip->setText(str);
    ui->err_tip->setProperty("state","err");
    repolish(ui->err_tip);
}

