/********************************************************************************
** Form generated from reading UI file 'mnemonicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNEMONICDIALOG_H
#define UI_MNEMONICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MnemonicDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *mnemonicEdit;
    QLabel *descriptionLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *generateButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MnemonicDialog)
    {
        if (MnemonicDialog->objectName().isEmpty())
            MnemonicDialog->setObjectName(QString::fromUtf8("MnemonicDialog"));
        MnemonicDialog->resize(494, 200);
        verticalLayout = new QVBoxLayout(MnemonicDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MnemonicDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mnemonicEdit = new QTextEdit(MnemonicDialog);
        mnemonicEdit->setObjectName(QString::fromUtf8("mnemonicEdit"));
        mnemonicEdit->setReadOnly(false);

        verticalLayout->addWidget(mnemonicEdit);

        descriptionLabel = new QLabel(MnemonicDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        generateButton = new QPushButton(MnemonicDialog);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));

        horizontalLayout->addWidget(generateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(MnemonicDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MnemonicDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MnemonicDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MnemonicDialog, SLOT(reject()));
        QObject::connect(mnemonicEdit, SIGNAL(textChanged()), MnemonicDialog, SLOT(mnemonicChanged()));
        QObject::connect(generateButton, SIGNAL(clicked()), MnemonicDialog, SLOT(generateMnemonic()));

        QMetaObject::connectSlotsByName(MnemonicDialog);
    } // setupUi

    void retranslateUi(QDialog *MnemonicDialog)
    {
        MnemonicDialog->setWindowTitle(QApplication::translate("MnemonicDialog", "Mnemonic generation", nullptr));
        label->setText(QApplication::translate("MnemonicDialog", "Your wallet seed:", nullptr));
        descriptionLabel->setText(QApplication::translate("MnemonicDialog", "Please save these words on paper (order is important). This seed will allow you to recover your wallet.", nullptr));
        generateButton->setText(QApplication::translate("MnemonicDialog", "Generate another seed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MnemonicDialog: public Ui_MnemonicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNEMONICDIALOG_H
