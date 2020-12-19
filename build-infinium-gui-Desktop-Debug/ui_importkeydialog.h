/********************************************************************************
** Form generated from reading UI file 'importkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKEYDIALOG_H
#define UI_IMPORTKEYDIALOG_H

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

class Ui_ImportKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *keyEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportKeyDialog)
    {
        if (ImportKeyDialog->objectName().isEmpty())
            ImportKeyDialog->setObjectName(QString::fromUtf8("ImportKeyDialog"));
        ImportKeyDialog->resize(366, 133);
        verticalLayout = new QVBoxLayout(ImportKeyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        keyEdit = new QTextEdit(ImportKeyDialog);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(keyEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loadButton = new QPushButton(ImportKeyDialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        horizontalLayout->addWidget(loadButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ImportKeyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImportKeyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportKeyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportKeyDialog, SLOT(reject()));
        QObject::connect(loadButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(loadKey()));
        QObject::connect(keyEdit, SIGNAL(textChanged()), ImportKeyDialog, SLOT(keyChanged()));

        QMetaObject::connectSlotsByName(ImportKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportKeyDialog)
    {
        ImportKeyDialog->setWindowTitle(QApplication::translate("ImportKeyDialog", "Import key", nullptr));
        loadButton->setText(QApplication::translate("ImportKeyDialog", "Load from file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportKeyDialog: public Ui_ImportKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKEYDIALOG_H
