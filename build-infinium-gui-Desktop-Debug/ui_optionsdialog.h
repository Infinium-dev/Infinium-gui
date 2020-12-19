/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include "connectionoptionsframe.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_optionsTabWidget;
    WalletGUI::ConnectionOptionsFrame *m_connectionTab;
    QFrame *m_buttonFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *m_warningLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(715, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OptionsDialog->sizePolicy().hasHeightForWidth());
        OptionsDialog->setSizePolicy(sizePolicy);
        OptionsDialog->setMinimumSize(QSize(715, 500));
        OptionsDialog->setMaximumSize(QSize(715, 500));
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 12, 0, 0);
        m_optionsTabWidget = new QTabWidget(OptionsDialog);
        m_optionsTabWidget->setObjectName(QString::fromUtf8("m_optionsTabWidget"));
        m_connectionTab = new WalletGUI::ConnectionOptionsFrame();
        m_connectionTab->setObjectName(QString::fromUtf8("m_connectionTab"));
        m_optionsTabWidget->addTab(m_connectionTab, QString());

        verticalLayout->addWidget(m_optionsTabWidget);

        m_buttonFrame = new QFrame(OptionsDialog);
        m_buttonFrame->setObjectName(QString::fromUtf8("m_buttonFrame"));
        m_buttonFrame->setFrameShape(QFrame::NoFrame);
        m_buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(m_buttonFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(25, 0, 25, 25);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        m_warningLabel = new QLabel(m_buttonFrame);
        m_warningLabel->setObjectName(QString::fromUtf8("m_warningLabel"));
        m_warningLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_warningLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(m_buttonFrame);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(m_buttonFrame);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addWidget(m_buttonFrame);


        retranslateUi(OptionsDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), OptionsDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), OptionsDialog, SLOT(reject()));

        m_optionsTabWidget->setCurrentIndex(0);
        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Preferences", nullptr));
        m_optionsTabWidget->setTabText(m_optionsTabWidget->indexOf(m_connectionTab), QApplication::translate("OptionsDialog", "Connection", nullptr));
        m_warningLabel->setText(QApplication::translate("OptionsDialog", "Attention! Restart application to apply changes.", nullptr));
        m_cancelButton->setText(QApplication::translate("OptionsDialog", "Cancel", nullptr));
        m_okButton->setText(QApplication::translate("OptionsDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
