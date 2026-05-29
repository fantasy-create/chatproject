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
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *acc;
    QLineEdit *accEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email;
    QLineEdit *emailEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password;
    QLineEdit *passEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirm;
    QLineEdit *confEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *capt;
    QLineEdit *captEdit;
    QPushButton *capt_btn;
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
        RegisterDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        acc = new QLabel(page);
        acc->setObjectName("acc");
        acc->setMinimumSize(QSize(0, 25));
        acc->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(acc);

        accEdit = new QLineEdit(page);
        accEdit->setObjectName("accEdit");
        accEdit->setMinimumSize(QSize(330, 30));
        accEdit->setMaximumSize(QSize(330, 30));

        horizontalLayout->addWidget(accEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        email = new QLabel(page);
        email->setObjectName("email");
        email->setMinimumSize(QSize(0, 25));
        email->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email);

        emailEdit = new QLineEdit(page);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setMinimumSize(QSize(330, 30));
        emailEdit->setMaximumSize(QSize(330, 30));

        horizontalLayout_2->addWidget(emailEdit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        password = new QLabel(page);
        password->setObjectName("password");
        password->setMinimumSize(QSize(0, 25));
        password->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(password);

        passEdit = new QLineEdit(page);
        passEdit->setObjectName("passEdit");
        passEdit->setMinimumSize(QSize(330, 30));
        passEdit->setMaximumSize(QSize(20, 330));

        horizontalLayout_3->addWidget(passEdit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confirm = new QLabel(page);
        confirm->setObjectName("confirm");
        confirm->setMinimumSize(QSize(0, 25));
        confirm->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm);

        confEdit = new QLineEdit(page);
        confEdit->setObjectName("confEdit");
        confEdit->setMinimumSize(QSize(330, 30));
        confEdit->setMaximumSize(QSize(330, 30));

        horizontalLayout_4->addWidget(confEdit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        capt = new QLabel(page);
        capt->setObjectName("capt");
        capt->setMinimumSize(QSize(0, 25));
        capt->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(capt);

        captEdit = new QLineEdit(page);
        captEdit->setObjectName("captEdit");
        captEdit->setMinimumSize(QSize(270, 30));
        captEdit->setMaximumSize(QSize(200, 30));

        horizontalLayout_5->addWidget(captEdit);

        capt_btn = new QPushButton(page);
        capt_btn->setObjectName("capt_btn");
        capt_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(capt_btn);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 3);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        reg_btn = new QPushButton(page);
        reg_btn->setObjectName("reg_btn");
        reg_btn->setMinimumSize(QSize(0, 30));
        reg_btn->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(reg_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        cancel_btn = new QPushButton(page);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(0, 30));
        cancel_btn->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(cancel_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        acc->setText(QCoreApplication::translate("RegisterDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        email->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        capt->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201", nullptr));
        capt_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\221\351\200\201", nullptr));
        reg_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
