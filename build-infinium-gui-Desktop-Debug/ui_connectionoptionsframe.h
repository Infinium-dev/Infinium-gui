/********************************************************************************
** Form generated from reading UI file 'connectionoptionsframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONOPTIONSFRAME_H
#define UI_CONNECTIONOPTIONSFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionOptionsFrame
{
public:
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *m_remoteHostEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpinBox *m_remotePortSpin;
    QSpacerItem *horizontalSpacer_4;
    QLabel *m_remoteHelperLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *ConnectionOptionsFrame)
    {
        if (ConnectionOptionsFrame->objectName().isEmpty())
            ConnectionOptionsFrame->setObjectName(QString::fromUtf8("ConnectionOptionsFrame"));
        ConnectionOptionsFrame->resize(424, 115);
        ConnectionOptionsFrame->setFrameShape(QFrame::NoFrame);
        ConnectionOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(ConnectionOptionsFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(22, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(ConnectionOptionsFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_remoteHostEdit = new QLineEdit(ConnectionOptionsFrame);
        m_remoteHostEdit->setObjectName(QString::fromUtf8("m_remoteHostEdit"));
        m_remoteHostEdit->setEnabled(true);

        horizontalLayout_2->addWidget(m_remoteHostEdit);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_3 = new QLabel(ConnectionOptionsFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        m_remotePortSpin = new QSpinBox(ConnectionOptionsFrame);
        m_remotePortSpin->setObjectName(QString::fromUtf8("m_remotePortSpin"));
        m_remotePortSpin->setEnabled(true);
        m_remotePortSpin->setMinimum(1);
        m_remotePortSpin->setMaximum(65535);
        m_remotePortSpin->setValue(27856);

        horizontalLayout_2->addWidget(m_remotePortSpin, 0, Qt::AlignVCenter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        m_remoteHelperLabel = new QLabel(ConnectionOptionsFrame);
        m_remoteHelperLabel->setObjectName(QString::fromUtf8("m_remoteHelperLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_remoteHelperLabel->sizePolicy().hasHeightForWidth());
        m_remoteHelperLabel->setSizePolicy(sizePolicy);
        m_remoteHelperLabel->setMinimumSize(QSize(406, 36));
        m_remoteHelperLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_remoteHelperLabel->setWordWrap(true);
        m_remoteHelperLabel->setIndent(0);

        verticalLayout_5->addWidget(m_remoteHelperLabel);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(ConnectionOptionsFrame);
        QObject::connect(m_remoteHostEdit, SIGNAL(textChanged(QString)), ConnectionOptionsFrame, SLOT(remoteHostNameChanged(QString)));

        QMetaObject::connectSlotsByName(ConnectionOptionsFrame);
    } // setupUi

    void retranslateUi(QFrame *ConnectionOptionsFrame)
    {
        ConnectionOptionsFrame->setWindowTitle(QApplication::translate("ConnectionOptionsFrame", "Frame", nullptr));
        label_2->setText(QApplication::translate("ConnectionOptionsFrame", "Host:", nullptr));
        m_remoteHostEdit->setText(QApplication::translate("ConnectionOptionsFrame", "127.0.0.1", nullptr));
        label_3->setText(QApplication::translate("ConnectionOptionsFrame", "Port:", nullptr));
        m_remoteHelperLabel->setText(QApplication::translate("ConnectionOptionsFrame", "<html><head/><body><p>Wallet GUI will connect to Wallet daemon (walletd) in the local or global network. Please specify IP address or domain name and the port.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionOptionsFrame: public Ui_ConnectionOptionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONOPTIONSFRAME_H
