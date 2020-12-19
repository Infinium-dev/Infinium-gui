/********************************************************************************
** Form generated from reading UI file 'exportkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTKEYDIALOG_H
#define UI_EXPORTKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *keyEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportKeyDialog)
    {
        if (ExportKeyDialog->objectName().isEmpty())
            ExportKeyDialog->setObjectName(QString::fromUtf8("ExportKeyDialog"));
        ExportKeyDialog->resize(366, 133);
        verticalLayout = new QVBoxLayout(ExportKeyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        keyEdit = new QTextEdit(ExportKeyDialog);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setReadOnly(true);
        keyEdit->setAcceptRichText(false);

        verticalLayout->addWidget(keyEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        saveButton = new QPushButton(ExportKeyDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ExportKeyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExportKeyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportKeyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportKeyDialog, SLOT(reject()));
        QObject::connect(saveButton, SIGNAL(clicked()), ExportKeyDialog, SLOT(saveKey()));

        QMetaObject::connectSlotsByName(ExportKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportKeyDialog)
    {
        ExportKeyDialog->setWindowTitle(QApplication::translate("ExportKeyDialog", "Export keys", nullptr));
        saveButton->setText(QApplication::translate("ExportKeyDialog", "Save to file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportKeyDialog: public Ui_ExportKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTKEYDIALOG_H
