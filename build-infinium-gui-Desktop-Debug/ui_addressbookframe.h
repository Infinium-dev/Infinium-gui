/********************************************************************************
** Form generated from reading UI file 'addressbookframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKFRAME_H
#define UI_ADDRESSBOOKFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_addressBookTextLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QTreeView *m_addressBookView;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_addAddressButton;

    void setupUi(QFrame *AddressBookFrame)
    {
        if (AddressBookFrame->objectName().isEmpty())
            AddressBookFrame->setObjectName(QString::fromUtf8("AddressBookFrame"));
        AddressBookFrame->resize(1070, 500);
        AddressBookFrame->setFrameShape(QFrame::NoFrame);
        AddressBookFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(AddressBookFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, -1, 6, -1);
        m_addressBookTextLabel = new QLabel(AddressBookFrame);
        m_addressBookTextLabel->setObjectName(QString::fromUtf8("m_addressBookTextLabel"));

        horizontalLayout_2->addWidget(m_addressBookTextLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        m_addressBookView = new QTreeView(AddressBookFrame);
        m_addressBookView->setObjectName(QString::fromUtf8("m_addressBookView"));
        m_addressBookView->setFocusPolicy(Qt::NoFocus);
        m_addressBookView->setContextMenuPolicy(Qt::CustomContextMenu);
        m_addressBookView->setFrameShape(QFrame::NoFrame);
        m_addressBookView->setAlternatingRowColors(true);
        m_addressBookView->setSelectionMode(QAbstractItemView::NoSelection);
        m_addressBookView->setTextElideMode(Qt::ElideMiddle);
        m_addressBookView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_addressBookView->setRootIsDecorated(false);
        m_addressBookView->setItemsExpandable(false);
        m_addressBookView->setExpandsOnDoubleClick(false);
        m_addressBookView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(m_addressBookView);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, -1, 6, -1);
        horizontalSpacer = new QSpacerItem(800, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_addAddressButton = new QPushButton(AddressBookFrame);
        m_addAddressButton->setObjectName(QString::fromUtf8("m_addAddressButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_addAddressButton->sizePolicy().hasHeightForWidth());
        m_addAddressButton->setSizePolicy(sizePolicy);
        m_addAddressButton->setMinimumSize(QSize(218, 40));
        m_addAddressButton->setMaximumSize(QSize(218, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        m_addAddressButton->setIcon(icon);

        horizontalLayout->addWidget(m_addAddressButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookFrame);
        QObject::connect(m_addAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(addClicked()));
        QObject::connect(m_addressBookView, SIGNAL(customContextMenuRequested(QPoint)), AddressBookFrame, SLOT(contextMenu(QPoint)));

        QMetaObject::connectSlotsByName(AddressBookFrame);
    } // setupUi

    void retranslateUi(QFrame *AddressBookFrame)
    {
        AddressBookFrame->setWindowTitle(QApplication::translate("AddressBookFrame", "Frame", nullptr));
        m_addressBookTextLabel->setText(QApplication::translate("AddressBookFrame", "Contacts", nullptr));
        m_addAddressButton->setText(QApplication::translate("AddressBookFrame", "Add contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookFrame: public Ui_AddressBookFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKFRAME_H
