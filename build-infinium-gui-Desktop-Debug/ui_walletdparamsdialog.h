/********************************************************************************
** Form generated from reading UI file 'walletdparamsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLETDPARAMSDIALOG_H
#define UI_WALLETDPARAMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WalletdParamsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioBuiltinBytecoind;
    QRadioButton *radioExternalBytecoind;
    QGridLayout *gridLayout;
    QSpinBox *spinPort;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *editHost;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioMainNet;
    QRadioButton *radioStageNet;
    QRadioButton *radioTestNet;
    QLabel *label;
    QTextEdit *paramsEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *WalletdParamsDialog)
    {
        if (WalletdParamsDialog->objectName().isEmpty())
            WalletdParamsDialog->setObjectName(QString::fromUtf8("WalletdParamsDialog"));
        WalletdParamsDialog->resize(652, 314);
        verticalLayout_2 = new QVBoxLayout(WalletdParamsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(WalletdParamsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioBuiltinBytecoind = new QRadioButton(groupBox_2);
        radioBuiltinBytecoind->setObjectName(QString::fromUtf8("radioBuiltinBytecoind"));
        radioBuiltinBytecoind->setChecked(true);

        verticalLayout_4->addWidget(radioBuiltinBytecoind);

        radioExternalBytecoind = new QRadioButton(groupBox_2);
        radioExternalBytecoind->setObjectName(QString::fromUtf8("radioExternalBytecoind"));

        verticalLayout_4->addWidget(radioExternalBytecoind);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        spinPort = new QSpinBox(groupBox_2);
        spinPort->setObjectName(QString::fromUtf8("spinPort"));
        spinPort->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinPort->sizePolicy().hasHeightForWidth());
        spinPort->setSizePolicy(sizePolicy1);
        spinPort->setFrame(true);
        spinPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPort->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        spinPort->setKeyboardTracking(false);
        spinPort->setMinimum(0);
        spinPort->setMaximum(65535);
        spinPort->setValue(0);

        gridLayout->addWidget(spinPort, 1, 1, 1, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 0, 1, 1, 2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        editHost = new QLineEdit(groupBox_2);
        editHost->setObjectName(QString::fromUtf8("editHost"));
        editHost->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editHost->sizePolicy().hasHeightForWidth());
        editHost->setSizePolicy(sizePolicy2);
        editHost->setFrame(true);
        editHost->setClearButtonEnabled(true);

        gridLayout->addWidget(editHost, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        groupBox = new QGroupBox(WalletdParamsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setMinimumSize(QSize(160, 0));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioMainNet = new QRadioButton(groupBox);
        radioMainNet->setObjectName(QString::fromUtf8("radioMainNet"));
        radioMainNet->setChecked(true);

        verticalLayout->addWidget(radioMainNet);

        radioStageNet = new QRadioButton(groupBox);
        radioStageNet->setObjectName(QString::fromUtf8("radioStageNet"));

        verticalLayout->addWidget(radioStageNet);

        radioTestNet = new QRadioButton(groupBox);
        radioTestNet->setObjectName(QString::fromUtf8("radioTestNet"));

        verticalLayout->addWidget(radioTestNet);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(WalletdParamsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        paramsEdit = new QTextEdit(WalletdParamsDialog);
        paramsEdit->setObjectName(QString::fromUtf8("paramsEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(paramsEdit->sizePolicy().hasHeightForWidth());
        paramsEdit->setSizePolicy(sizePolicy4);
        paramsEdit->setMaximumSize(QSize(16777215, 16777215));
        paramsEdit->setAcceptRichText(false);

        verticalLayout_2->addWidget(paramsEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        applyButton = new QPushButton(WalletdParamsDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout->addWidget(applyButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(WalletdParamsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(WalletdParamsDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), WalletdParamsDialog, SLOT(reject()));
        QObject::connect(applyButton, SIGNAL(clicked()), WalletdParamsDialog, SLOT(applyParams()));
        QObject::connect(applyButton, SIGNAL(clicked()), WalletdParamsDialog, SLOT(accept()));
        QObject::connect(radioExternalBytecoind, SIGNAL(toggled(bool)), editHost, SLOT(setEnabled(bool)));
        QObject::connect(radioExternalBytecoind, SIGNAL(toggled(bool)), spinPort, SLOT(setEnabled(bool)));
        QObject::connect(editHost, SIGNAL(textChanged(QString)), WalletdParamsDialog, SLOT(hostChanged()));
        QObject::connect(radioExternalBytecoind, SIGNAL(toggled(bool)), WalletdParamsDialog, SLOT(externalBytecoindToggled(bool)));

        QMetaObject::connectSlotsByName(WalletdParamsDialog);
    } // setupUi

    void retranslateUi(QDialog *WalletdParamsDialog)
    {
        WalletdParamsDialog->setWindowTitle(QApplication::translate("WalletdParamsDialog", "Wallet daemon parameters", nullptr));
        groupBox_2->setTitle(QApplication::translate("WalletdParamsDialog", "Infinium node", nullptr));
        radioBuiltinBytecoind->setText(QApplication::translate("WalletdParamsDialog", "bui&lt-in infinium node", nullptr));
        radioExternalBytecoind->setText(QApplication::translate("WalletdParamsDialog", "e&xternal infinium node", nullptr));
        spinPort->setSpecialValueText(QApplication::translate("WalletdParamsDialog", "Default", nullptr));
        label_4->setText(QApplication::translate("WalletdParamsDialog", "Port:", nullptr));
        label_3->setText(QApplication::translate("WalletdParamsDialog", "Host:", nullptr));
        editHost->setText(QApplication::translate("WalletdParamsDialog", "127.0.0.1", nullptr));
        editHost->setPlaceholderText(QApplication::translate("WalletdParamsDialog", "127.0.0.1", nullptr));
        groupBox->setTitle(QApplication::translate("WalletdParamsDialog", "Net", nullptr));
        radioMainNet->setText(QApplication::translate("WalletdParamsDialog", "&mainnet", nullptr));
        radioStageNet->setText(QApplication::translate("WalletdParamsDialog", "&stagenet", nullptr));
        radioTestNet->setText(QApplication::translate("WalletdParamsDialog", "&testnet", nullptr));
        label->setText(QApplication::translate("WalletdParamsDialog", "Additional command line options:", nullptr));
        applyButton->setText(QApplication::translate("WalletdParamsDialog", "Apply", nullptr));
        cancelButton->setText(QApplication::translate("WalletdParamsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WalletdParamsDialog: public Ui_WalletdParamsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLETDPARAMSDIALOG_H
