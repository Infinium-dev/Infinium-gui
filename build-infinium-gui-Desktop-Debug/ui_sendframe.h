/********************************************************************************
** Form generated from reading UI file 'sendframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resizablescrollarea.h"

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *verticalLayout;
    WalletGUI::ResizableScrollArea *m_sendScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_transfersLayout;
    QSpacerItem *verticalSpacer;
    QFrame *m_sendFeeFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_addRecipientButton;
    QSlider *m_feeSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_mixinTextLabel;
    QSpinBox *m_mixinSpin;
    QSpacerItem *horizontalSpacer_3;
    QSlider *m_mixinSlider;
    QLineEdit *m_paymentIdEdit;
    QLabel *m_feeTextLabel;
    QCheckBox *m_subtractFeeFromAmountCheckBox;
    QLabel *m_paymentIdTextLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *minimalLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *fastLabel;
    QFrame *m_mixinFrame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_totalAmountLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_sendButton;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QString::fromUtf8("SendFrame"));
        SendFrame->resize(654, 365);
        SendFrame->setFrameShape(QFrame::NoFrame);
        SendFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(SendFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea = new WalletGUI::ResizableScrollArea(SendFrame);
        m_sendScrollarea->setObjectName(QString::fromUtf8("m_sendScrollarea"));
        m_sendScrollarea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_sendScrollarea->sizePolicy().hasHeightForWidth());
        m_sendScrollarea->setSizePolicy(sizePolicy);
        m_sendScrollarea->setAutoFillBackground(false);
        m_sendScrollarea->setStyleSheet(QString::fromUtf8(""));
        m_sendScrollarea->setFrameShape(QFrame::NoFrame);
        m_sendScrollarea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_sendScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 654, 68));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        m_transfersLayout = new QVBoxLayout(scrollAreaWidgetContents);
        m_transfersLayout->setSpacing(0);
        m_transfersLayout->setObjectName(QString::fromUtf8("m_transfersLayout"));
        m_transfersLayout->setSizeConstraint(QLayout::SetNoConstraint);
        m_transfersLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(m_sendScrollarea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_sendFeeFrame = new QFrame(SendFrame);
        m_sendFeeFrame->setObjectName(QString::fromUtf8("m_sendFeeFrame"));
        m_sendFeeFrame->setFrameShape(QFrame::NoFrame);
        m_sendFeeFrame->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(m_sendFeeFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(18);
        gridLayout_2->setContentsMargins(10, 5, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_addRecipientButton = new QPushButton(m_sendFeeFrame);
        m_addRecipientButton->setObjectName(QString::fromUtf8("m_addRecipientButton"));
        m_addRecipientButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_addRecipientButton->setFocusPolicy(Qt::StrongFocus);
        m_addRecipientButton->setFlat(false);

        horizontalLayout->addWidget(m_addRecipientButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 1);

        m_feeSlider = new QSlider(m_sendFeeFrame);
        m_feeSlider->setObjectName(QString::fromUtf8("m_feeSlider"));
        m_feeSlider->setMinimum(0);
        m_feeSlider->setMaximum(4);
        m_feeSlider->setPageStep(1);
        m_feeSlider->setValue(2);
        m_feeSlider->setOrientation(Qt::Horizontal);
        m_feeSlider->setTickPosition(QSlider::TicksBelow);
        m_feeSlider->setTickInterval(1);

        gridLayout_2->addWidget(m_feeSlider, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_mixinTextLabel = new QLabel(m_sendFeeFrame);
        m_mixinTextLabel->setObjectName(QString::fromUtf8("m_mixinTextLabel"));

        horizontalLayout_2->addWidget(m_mixinTextLabel);

        m_mixinSpin = new QSpinBox(m_sendFeeFrame);
        m_mixinSpin->setObjectName(QString::fromUtf8("m_mixinSpin"));
        m_mixinSpin->setMinimum(3);
        m_mixinSpin->setMaximum(999999999);

        horizontalLayout_2->addWidget(m_mixinSpin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        m_mixinSlider = new QSlider(m_sendFeeFrame);
        m_mixinSlider->setObjectName(QString::fromUtf8("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(16777215, 16777215));
        m_mixinSlider->setMinimum(3);
        m_mixinSlider->setMaximum(50);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(6);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(m_mixinSlider, 4, 0, 1, 2);

        m_paymentIdEdit = new QLineEdit(m_sendFeeFrame);
        m_paymentIdEdit->setObjectName(QString::fromUtf8("m_paymentIdEdit"));
        m_paymentIdEdit->setStyleSheet(QString::fromUtf8("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));

        gridLayout_2->addWidget(m_paymentIdEdit, 4, 2, 1, 1);

        m_feeTextLabel = new QLabel(m_sendFeeFrame);
        m_feeTextLabel->setObjectName(QString::fromUtf8("m_feeTextLabel"));

        gridLayout_2->addWidget(m_feeTextLabel, 0, 0, 1, 2);

        m_subtractFeeFromAmountCheckBox = new QCheckBox(m_sendFeeFrame);
        m_subtractFeeFromAmountCheckBox->setObjectName(QString::fromUtf8("m_subtractFeeFromAmountCheckBox"));

        gridLayout_2->addWidget(m_subtractFeeFromAmountCheckBox, 1, 2, 1, 1);

        m_paymentIdTextLabel = new QLabel(m_sendFeeFrame);
        m_paymentIdTextLabel->setObjectName(QString::fromUtf8("m_paymentIdTextLabel"));

        gridLayout_2->addWidget(m_paymentIdTextLabel, 3, 2, 1, 1);

        frame = new QFrame(m_sendFeeFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 20));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        minimalLabel = new QLabel(frame);
        minimalLabel->setObjectName(QString::fromUtf8("minimalLabel"));
        minimalLabel->setEnabled(true);

        horizontalLayout_3->addWidget(minimalLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        fastLabel = new QLabel(frame);
        fastLabel->setObjectName(QString::fromUtf8("fastLabel"));
        fastLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(fastLabel);


        gridLayout_2->addWidget(frame, 2, 0, 1, 2);


        verticalLayout->addWidget(m_sendFeeFrame);

        m_mixinFrame = new QFrame(SendFrame);
        m_mixinFrame->setObjectName(QString::fromUtf8("m_mixinFrame"));
        m_mixinFrame->setFrameShape(QFrame::NoFrame);
        m_mixinFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_mixinFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 23);
        label = new QLabel(m_mixinFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 2, 1);

        m_totalAmountLabel = new QLabel(m_mixinFrame);
        m_totalAmountLabel->setObjectName(QString::fromUtf8("m_totalAmountLabel"));
        m_totalAmountLabel->setIndent(0);

        gridLayout->addWidget(m_totalAmountLabel, 0, 5, 2, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 2, 1);

        m_sendButton = new QPushButton(m_mixinFrame);
        m_sendButton->setObjectName(QString::fromUtf8("m_sendButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy2);
        m_sendButton->setMinimumSize(QSize(218, 40));
        m_sendButton->setMaximumSize(QSize(218, 40));
        m_sendButton->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(m_sendButton, 0, 7, 2, 1);

        label_2 = new QLabel(m_mixinFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 6, 2, 1);


        verticalLayout->addWidget(m_mixinFrame);

        QWidget::setTabOrder(m_sendScrollarea, m_addRecipientButton);
        QWidget::setTabOrder(m_addRecipientButton, m_feeSlider);
        QWidget::setTabOrder(m_feeSlider, m_sendButton);

        retranslateUi(SendFrame);
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_paymentIdEdit, SIGNAL(textChanged(QString)), SendFrame, SLOT(validatePaymentId(QString)));
        QObject::connect(m_mixinSpin, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_feeSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(feeValueChanged(int)));

        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", nullptr));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "Add recipient", nullptr));
        m_mixinTextLabel->setText(QApplication::translate("SendFrame", "Anonymity level", nullptr));
        m_paymentIdEdit->setPlaceholderText(QApplication::translate("SendFrame", "Payment identifier issued by payee (market, exchange or other entity)", nullptr));
#ifndef QT_NO_TOOLTIP
        m_feeTextLabel->setToolTip(QApplication::translate("SendFrame", "Atomic units per byte", nullptr));
#endif // QT_NO_TOOLTIP
        m_feeTextLabel->setText(QApplication::translate("SendFrame", "Fee (AU per byte)", nullptr));
#ifndef QT_NO_TOOLTIP
        m_subtractFeeFromAmountCheckBox->setToolTip(QApplication::translate("SendFrame", "The fee will be deducted from the amount being sent. The recipient will receive less bytecoins than you enter in the amount field. If multiple recipients are selected, the fee will be subtracted from transfers in their respective order.", nullptr));
#endif // QT_NO_TOOLTIP
        m_subtractFeeFromAmountCheckBox->setText(QApplication::translate("SendFrame", "Subtract fee from amount", nullptr));
        m_paymentIdTextLabel->setText(QApplication::translate("SendFrame", "Payment ID", nullptr));
        minimalLabel->setText(QApplication::translate("SendFrame", "Slow", nullptr));
        fastLabel->setText(QApplication::translate("SendFrame", "Fast", nullptr));
        label->setText(QString());
        m_totalAmountLabel->setText(QApplication::translate("SendFrame", "amount", nullptr));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", nullptr));
        label_2->setText(QApplication::translate("SendFrame", "Total amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
