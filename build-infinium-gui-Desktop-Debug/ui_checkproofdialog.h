/********************************************************************************
** Form generated from reading UI file 'checkproofdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKPROOFDIALOG_H
#define UI_CHECKPROOFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckProofDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *proofEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *resultLabel;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *messageLabel;
    QLabel *addressLabel;
    QLabel *amountLabel;
    QLabel *txHashLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkButton;
    QPushButton *copyButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *CheckProofDialog)
    {
        if (CheckProofDialog->objectName().isEmpty())
            CheckProofDialog->setObjectName(QString::fromUtf8("CheckProofDialog"));
        CheckProofDialog->resize(400, 292);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckProofDialog->sizePolicy().hasHeightForWidth());
        CheckProofDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CheckProofDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CheckProofDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        proofEdit = new QTextEdit(CheckProofDialog);
        proofEdit->setObjectName(QString::fromUtf8("proofEdit"));

        verticalLayout->addWidget(proofEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(CheckProofDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        resultLabel = new QLabel(CheckProofDialog);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(resultLabel->sizePolicy().hasHeightForWidth());
        resultLabel->setSizePolicy(sizePolicy2);
        resultLabel->setCursor(QCursor(Qt::IBeamCursor));
        resultLabel->setWordWrap(false);
        resultLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(resultLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(CheckProofDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(CheckProofDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(CheckProofDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(CheckProofDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        messageLabel = new QLabel(CheckProofDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, messageLabel);

        addressLabel = new QLabel(CheckProofDialog);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, addressLabel);

        amountLabel = new QLabel(CheckProofDialog);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, amountLabel);

        txHashLabel = new QLabel(CheckProofDialog);
        txHashLabel->setObjectName(QString::fromUtf8("txHashLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txHashLabel);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkButton = new QPushButton(CheckProofDialog);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));

        horizontalLayout->addWidget(checkButton);

        copyButton = new QPushButton(CheckProofDialog);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setAutoDefault(false);

        horizontalLayout->addWidget(copyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(CheckProofDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(false);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CheckProofDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), CheckProofDialog, SLOT(reject()));
        QObject::connect(copyButton, SIGNAL(clicked()), CheckProofDialog, SLOT(pasteFromClipboard()));
        QObject::connect(proofEdit, SIGNAL(textChanged()), CheckProofDialog, SLOT(proofChanged()));
        QObject::connect(checkButton, SIGNAL(clicked()), CheckProofDialog, SLOT(checkProof()));

        checkButton->setDefault(true);


        QMetaObject::connectSlotsByName(CheckProofDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckProofDialog)
    {
        CheckProofDialog->setWindowTitle(QApplication::translate("CheckProofDialog", "Check proof", nullptr));
        label->setText(QApplication::translate("CheckProofDialog", "Proof:", nullptr));
        label_2->setText(QApplication::translate("CheckProofDialog", "Result of checking:", nullptr));
        resultLabel->setText(QApplication::translate("CheckProofDialog", "Unchecked", nullptr));
        label_4->setText(QApplication::translate("CheckProofDialog", "Tx hash:", nullptr));
        label_3->setText(QApplication::translate("CheckProofDialog", "Message:", nullptr));
        label_5->setText(QApplication::translate("CheckProofDialog", "To address:", nullptr));
        label_6->setText(QApplication::translate("CheckProofDialog", "Amount:", nullptr));
        messageLabel->setText(QApplication::translate("CheckProofDialog", "TextLabel", nullptr));
        addressLabel->setText(QApplication::translate("CheckProofDialog", "TextLabel", nullptr));
        amountLabel->setText(QApplication::translate("CheckProofDialog", "TextLabel", nullptr));
        txHashLabel->setText(QApplication::translate("CheckProofDialog", "TextLabel", nullptr));
        checkButton->setText(QApplication::translate("CheckProofDialog", "Check", nullptr));
        copyButton->setText(QApplication::translate("CheckProofDialog", "Paste from clipboard", nullptr));
        closeButton->setText(QApplication::translate("CheckProofDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckProofDialog: public Ui_CheckProofDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKPROOFDIALOG_H
