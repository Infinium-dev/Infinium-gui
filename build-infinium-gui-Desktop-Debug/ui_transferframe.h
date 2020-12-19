/********************************************************************************
** Form generated from reading UI file 'transferframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFRAME_H
#define UI_TRANSFERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransferFrame
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *m_payToTextLabel;
    QPushButton *m_addressBookButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_removeButton;
    QLineEdit *m_sendAddressEdit;
    QGridLayout *gridLayout_2;
    QLabel *m_amountTextLabel;
    QLabel *m_labelTextLabel;
    QDoubleSpinBox *m_sendAmountSpin;
    QLineEdit *m_sendLabelEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *TransferFrame)
    {
        if (TransferFrame->objectName().isEmpty())
            TransferFrame->setObjectName(QString::fromUtf8("TransferFrame"));
        TransferFrame->resize(850, 160);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(150);
        sizePolicy.setHeightForWidth(TransferFrame->sizePolicy().hasHeightForWidth());
        TransferFrame->setSizePolicy(sizePolicy);
        TransferFrame->setMinimumSize(QSize(0, 160));
        TransferFrame->setMaximumSize(QSize(16777215, 160));
        TransferFrame->setStyleSheet(QString::fromUtf8(""));
        TransferFrame->setFrameShape(QFrame::NoFrame);
        TransferFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(TransferFrame);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(25, -1, 25, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(5);
        m_payToTextLabel = new QLabel(TransferFrame);
        m_payToTextLabel->setObjectName(QString::fromUtf8("m_payToTextLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_payToTextLabel->sizePolicy().hasHeightForWidth());
        m_payToTextLabel->setSizePolicy(sizePolicy1);
        m_payToTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_payToTextLabel->setMargin(0);
        m_payToTextLabel->setIndent(0);

        gridLayout->addWidget(m_payToTextLabel, 0, 0, 1, 1);

        m_addressBookButton = new QPushButton(TransferFrame);
        m_addressBookButton->setObjectName(QString::fromUtf8("m_addressBookButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_addressBookButton->sizePolicy().hasHeightForWidth());
        m_addressBookButton->setSizePolicy(sizePolicy2);
        m_addressBookButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_addressBookButton->setFocusPolicy(Qt::StrongFocus);
        m_addressBookButton->setLayoutDirection(Qt::LeftToRight);
        m_addressBookButton->setFlat(false);

        gridLayout->addWidget(m_addressBookButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(318, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        m_removeButton = new QPushButton(TransferFrame);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        sizePolicy2.setHeightForWidth(m_removeButton->sizePolicy().hasHeightForWidth());
        m_removeButton->setSizePolicy(sizePolicy2);
        m_removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_removeButton->setFocusPolicy(Qt::StrongFocus);
        m_removeButton->setFlat(false);

        gridLayout->addWidget(m_removeButton, 0, 3, 1, 1, Qt::AlignBottom);

        m_sendAddressEdit = new QLineEdit(TransferFrame);
        m_sendAddressEdit->setObjectName(QString::fromUtf8("m_sendAddressEdit"));
        m_sendAddressEdit->setStyleSheet(QString::fromUtf8("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));

        gridLayout->addWidget(m_sendAddressEdit, 1, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(5);
        m_amountTextLabel = new QLabel(TransferFrame);
        m_amountTextLabel->setObjectName(QString::fromUtf8("m_amountTextLabel"));
        m_amountTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        m_amountTextLabel->setIndent(0);

        gridLayout_2->addWidget(m_amountTextLabel, 0, 0, 1, 1);

        m_labelTextLabel = new QLabel(TransferFrame);
        m_labelTextLabel->setObjectName(QString::fromUtf8("m_labelTextLabel"));
        m_labelTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        m_labelTextLabel->setIndent(0);

        gridLayout_2->addWidget(m_labelTextLabel, 0, 1, 1, 1);

        m_sendAmountSpin = new QDoubleSpinBox(TransferFrame);
        m_sendAmountSpin->setObjectName(QString::fromUtf8("m_sendAmountSpin"));
        m_sendAmountSpin->setFocusPolicy(Qt::StrongFocus);
        m_sendAmountSpin->setLayoutDirection(Qt::LeftToRight);
        m_sendAmountSpin->setStyleSheet(QString::fromUtf8("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));
        m_sendAmountSpin->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        m_sendAmountSpin->setSuffix(QString::fromUtf8(""));
        m_sendAmountSpin->setDecimals(12);
        m_sendAmountSpin->setMaximum(1000000000.000000000000000);

        gridLayout_2->addWidget(m_sendAmountSpin, 1, 0, 1, 1);

        m_sendLabelEdit = new QLineEdit(TransferFrame);
        m_sendLabelEdit->setObjectName(QString::fromUtf8("m_sendLabelEdit"));
        m_sendLabelEdit->setStyleSheet(QString::fromUtf8("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));

        gridLayout_2->addWidget(m_sendLabelEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(m_addressBookButton, m_removeButton);
        QWidget::setTabOrder(m_removeButton, m_sendAddressEdit);
        QWidget::setTabOrder(m_sendAddressEdit, m_sendAmountSpin);
        QWidget::setTabOrder(m_sendAmountSpin, m_sendLabelEdit);

        retranslateUi(TransferFrame);
        QObject::connect(m_removeButton, SIGNAL(clicked()), TransferFrame, SLOT(deleteLater()));
        QObject::connect(m_addressBookButton, SIGNAL(clicked()), TransferFrame, SLOT(addressBookClicked()));
        QObject::connect(m_sendAddressEdit, SIGNAL(textChanged(QString)), TransferFrame, SLOT(labelOrAddressChanged(QString)));
        QObject::connect(m_sendLabelEdit, SIGNAL(textChanged(QString)), TransferFrame, SLOT(labelOrAddressChanged(QString)));
        QObject::connect(m_sendAmountSpin, SIGNAL(valueChanged(QString)), TransferFrame, SLOT(amountStringChanged(QString)));
        QObject::connect(m_sendAddressEdit, SIGNAL(textChanged(QString)), TransferFrame, SLOT(addressChanged(QString)));
        QObject::connect(m_sendAmountSpin, SIGNAL(valueChanged(double)), TransferFrame, SLOT(validateAmount(double)));

        QMetaObject::connectSlotsByName(TransferFrame);
    } // setupUi

    void retranslateUi(QFrame *TransferFrame)
    {
        TransferFrame->setWindowTitle(QApplication::translate("TransferFrame", "Frame", nullptr));
        m_payToTextLabel->setText(QApplication::translate("TransferFrame", "Pay to", nullptr));
        m_addressBookButton->setText(QApplication::translate("TransferFrame", "Add from contacts", nullptr));
        m_removeButton->setText(QApplication::translate("TransferFrame", "Remove recipient", nullptr));
        m_amountTextLabel->setText(QApplication::translate("TransferFrame", "Amount (INF)", nullptr));
        m_labelTextLabel->setText(QApplication::translate("TransferFrame", "Label", nullptr));
        m_sendLabelEdit->setPlaceholderText(QApplication::translate("TransferFrame", "Enter a label for this address to add it to your address book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransferFrame: public Ui_TransferFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFRAME_H
