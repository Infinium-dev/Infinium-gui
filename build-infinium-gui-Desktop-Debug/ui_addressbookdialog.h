/********************************************************************************
** Form generated from reading UI file 'addressbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKDIALOG_H
#define UI_ADDRESSBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_addressBookView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;

    void setupUi(QDialog *AddressBookDialog)
    {
        if (AddressBookDialog->objectName().isEmpty())
            AddressBookDialog->setObjectName(QString::fromUtf8("AddressBookDialog"));
        AddressBookDialog->resize(747, 525);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddressBookDialog->sizePolicy().hasHeightForWidth());
        AddressBookDialog->setSizePolicy(sizePolicy);
        AddressBookDialog->setMinimumSize(QSize(747, 525));
        AddressBookDialog->setMaximumSize(QSize(747, 525));
        verticalLayout = new QVBoxLayout(AddressBookDialog);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        m_addressBookView = new QTreeView(AddressBookDialog);
        m_addressBookView->setObjectName(QString::fromUtf8("m_addressBookView"));
        m_addressBookView->setFocusPolicy(Qt::NoFocus);
        m_addressBookView->setFrameShape(QFrame::NoFrame);
        m_addressBookView->setAlternatingRowColors(true);
        m_addressBookView->setTextElideMode(Qt::ElideMiddle);
        m_addressBookView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_addressBookView->setRootIsDecorated(false);
        m_addressBookView->setItemsExpandable(false);
        m_addressBookView->setExpandsOnDoubleClick(false);
        m_addressBookView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(m_addressBookView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new QPushButton(AddressBookDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AddressBookDialog, SLOT(accept()));
        QObject::connect(m_addressBookView, SIGNAL(doubleClicked(QModelIndex)), AddressBookDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddressBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddressBookDialog)
    {
        AddressBookDialog->setWindowTitle(QApplication::translate("AddressBookDialog", "Select address", nullptr));
        m_okButton->setText(QApplication::translate("AddressBookDialog", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookDialog: public Ui_AddressBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKDIALOG_H
