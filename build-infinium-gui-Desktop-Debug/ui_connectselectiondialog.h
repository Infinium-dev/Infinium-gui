/********************************************************************************
** Form generated from reading UI file 'connectselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTSELECTIONDIALOG_H
#define UI_CONNECTSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "connectionoptionsframe.h"

QT_BEGIN_NAMESPACE

class Ui_ConnectSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    WalletGUI::ConnectionOptionsFrame *m_connectionOptionsFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConnectSelectionDialog)
    {
        if (ConnectSelectionDialog->objectName().isEmpty())
            ConnectSelectionDialog->setObjectName(QString::fromUtf8("ConnectSelectionDialog"));
        ConnectSelectionDialog->resize(410, 182);
        verticalLayout = new QVBoxLayout(ConnectSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ConnectSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        m_connectionOptionsFrame = new WalletGUI::ConnectionOptionsFrame(ConnectSelectionDialog);
        m_connectionOptionsFrame->setObjectName(QString::fromUtf8("m_connectionOptionsFrame"));

        verticalLayout->addWidget(m_connectionOptionsFrame);

        buttonBox = new QDialogButtonBox(ConnectSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConnectSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConnectSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConnectSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectSelectionDialog)
    {
        ConnectSelectionDialog->setWindowTitle(QApplication::translate("ConnectSelectionDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ConnectSelectionDialog", "Please specify walletd address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectSelectionDialog: public Ui_ConnectSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTSELECTIONDIALOG_H
