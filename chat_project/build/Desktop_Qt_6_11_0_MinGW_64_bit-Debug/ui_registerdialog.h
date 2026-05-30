/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *acc;
    QLineEdit *accEdit;
    QLabel *email;
    QLineEdit *emailEdit;
    QLabel *password;
    QLineEdit *passEdit;
    QLabel *confirm;
    QLineEdit *confEdit;
    QLabel *capt;
    QLineEdit *captEdit;
    QPushButton *capt_btn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *err_tip;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *reg_btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancel_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(450, 360);
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(24, 24, 24, 24);
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(12);
        acc = new QLabel(page);
        acc->setObjectName("acc");
        acc->setMinimumSize(QSize(70, 30));
        acc->setMaximumSize(QSize(70, 30));
        acc->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(acc, 0, 0, 1, 1);

        accEdit = new QLineEdit(page);
        accEdit->setObjectName("accEdit");
        accEdit->setMinimumSize(QSize(0, 30));
        accEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(accEdit, 0, 1, 1, 2);

        email = new QLabel(page);
        email->setObjectName("email");
        email->setMinimumSize(QSize(70, 30));
        email->setMaximumSize(QSize(70, 30));
        email->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(email, 1, 0, 1, 1);

        emailEdit = new QLineEdit(page);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setMinimumSize(QSize(0, 30));
        emailEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(emailEdit, 1, 1, 1, 2);

        password = new QLabel(page);
        password->setObjectName("password");
        password->setMinimumSize(QSize(70, 30));
        password->setMaximumSize(QSize(70, 30));
        password->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(password, 2, 0, 1, 1);

        passEdit = new QLineEdit(page);
        passEdit->setObjectName("passEdit");
        passEdit->setMinimumSize(QSize(0, 30));
        passEdit->setMaximumSize(QSize(16777215, 30));
        passEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passEdit, 2, 1, 1, 2);

        confirm = new QLabel(page);
        confirm->setObjectName("confirm");
        confirm->setMinimumSize(QSize(70, 30));
        confirm->setMaximumSize(QSize(70, 30));
        confirm->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(confirm, 3, 0, 1, 1);

        confEdit = new QLineEdit(page);
        confEdit->setObjectName("confEdit");
        confEdit->setMinimumSize(QSize(0, 30));
        confEdit->setMaximumSize(QSize(16777215, 30));
        confEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(confEdit, 3, 1, 1, 2);

        capt = new QLabel(page);
        capt->setObjectName("capt");
        capt->setMinimumSize(QSize(70, 30));
        capt->setMaximumSize(QSize(70, 30));
        capt->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(capt, 4, 0, 1, 1);

        captEdit = new QLineEdit(page);
        captEdit->setObjectName("captEdit");
        captEdit->setMinimumSize(QSize(0, 30));
        captEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(captEdit, 4, 1, 1, 1);

        capt_btn = new QPushButton(page);
        capt_btn->setObjectName("capt_btn");
        capt_btn->setMinimumSize(QSize(90, 30));
        capt_btn->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(capt_btn, 4, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        err_tip = new QLabel(widget);
        err_tip->setObjectName("err_tip");
        err_tip->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(err_tip);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        reg_btn = new QPushButton(page);
        reg_btn->setObjectName("reg_btn");
        reg_btn->setMinimumSize(QSize(100, 30));
        reg_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout_6->addWidget(reg_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        cancel_btn = new QPushButton(page);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(100, 30));
        cancel_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout_6->addWidget(cancel_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "mychat", nullptr));
        acc->setText(QCoreApplication::translate("RegisterDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        email->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        capt->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        capt_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\221\351\200\201", nullptr));
        err_tip->setText(QString());
        reg_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
