/********************************************************************************
** Form generated from reading UI file 'createproofdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROOFDIALOG_H
#define UI_CREATEPROOFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateProofDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *messageEdit;
    QLabel *addressLabel;
    QComboBox *addressesBox;
    QLabel *proofLabel;
    QTextEdit *proofEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *generateButton;
    QPushButton *copyButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreateProofDialog)
    {
        if (CreateProofDialog->objectName().isEmpty())
            CreateProofDialog->setObjectName(QString::fromUtf8("CreateProofDialog"));
        CreateProofDialog->resize(450, 286);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateProofDialog->sizePolicy().hasHeightForWidth());
        CreateProofDialog->setSizePolicy(sizePolicy);
        CreateProofDialog->setMinimumSize(QSize(450, 0));
        verticalLayout = new QVBoxLayout(CreateProofDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CreateProofDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label);

        messageEdit = new QLineEdit(CreateProofDialog);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(messageEdit->sizePolicy().hasHeightForWidth());
        messageEdit->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(messageEdit);

        addressLabel = new QLabel(CreateProofDialog);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        verticalLayout->addWidget(addressLabel);

        addressesBox = new QComboBox(CreateProofDialog);
        addressesBox->setObjectName(QString::fromUtf8("addressesBox"));
        addressesBox->setDuplicatesEnabled(true);

        verticalLayout->addWidget(addressesBox);

        proofLabel = new QLabel(CreateProofDialog);
        proofLabel->setObjectName(QString::fromUtf8("proofLabel"));

        verticalLayout->addWidget(proofLabel);

        proofEdit = new QTextEdit(CreateProofDialog);
        proofEdit->setObjectName(QString::fromUtf8("proofEdit"));
        proofEdit->setReadOnly(true);

        verticalLayout->addWidget(proofEdit);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        generateButton = new QPushButton(CreateProofDialog);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setAutoDefault(true);

        horizontalLayout->addWidget(generateButton);

        copyButton = new QPushButton(CreateProofDialog);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setAutoDefault(false);

        horizontalLayout->addWidget(copyButton);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(CreateProofDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CreateProofDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), CreateProofDialog, SLOT(reject()));
        QObject::connect(copyButton, SIGNAL(clicked()), CreateProofDialog, SLOT(copyToClipboard()));
        QObject::connect(generateButton, SIGNAL(clicked()), CreateProofDialog, SLOT(generateProof()));
        QObject::connect(addressesBox, SIGNAL(activated(int)), CreateProofDialog, SLOT(addressChanged(int)));
        QObject::connect(addressesBox, SIGNAL(currentTextChanged(QString)), CreateProofDialog, SLOT(currentAddressChanged()));

        generateButton->setDefault(true);


        QMetaObject::connectSlotsByName(CreateProofDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateProofDialog)
    {
        CreateProofDialog->setWindowTitle(QApplication::translate("CreateProofDialog", "Create proof", nullptr));
        label->setText(QApplication::translate("CreateProofDialog", "User message:", nullptr));
        messageEdit->setPlaceholderText(QApplication::translate("CreateProofDialog", "Entered message will be embedded to proof", nullptr));
        addressLabel->setText(QApplication::translate("CreateProofDialog", "Address:", nullptr));
        proofLabel->setText(QApplication::translate("CreateProofDialog", "Proof:", nullptr));
        proofEdit->setPlaceholderText(QString());
        generateButton->setText(QApplication::translate("CreateProofDialog", "Generate", nullptr));
        copyButton->setText(QApplication::translate("CreateProofDialog", "Copy to clipboard", nullptr));
        cancelButton->setText(QApplication::translate("CreateProofDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateProofDialog: public Ui_CreateProofDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROOFDIALOG_H
