/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *questionLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName(QString::fromUtf8("QuestionDialog"));
        QuestionDialog->resize(481, 116);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuestionDialog->sizePolicy().hasHeightForWidth());
        QuestionDialog->setSizePolicy(sizePolicy);
        QuestionDialog->setMinimumSize(QSize(481, 116));
        QuestionDialog->setMaximumSize(QSize(481, 130));
        verticalLayout = new QVBoxLayout(QuestionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        questionLabel = new QLabel(QuestionDialog);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(questionLabel->sizePolicy().hasHeightForWidth());
        questionLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(questionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(QuestionDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(QuestionDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(QuestionDialog);
        QObject::connect(okButton, SIGNAL(clicked()), QuestionDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), QuestionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QString());
        questionLabel->setText(QString());
        cancelButton->setText(QApplication::translate("QuestionDialog", "No", nullptr));
        okButton->setText(QApplication::translate("QuestionDialog", "Yes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
