/********************************************************************************
** Form generated from reading UI file 'overviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWFRAME_H
#define UI_OVERVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include "balanceoverviewframe.h"
#include "miningoverviewframe.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    WalletGUI::BalanceOverviewFrame *m_balanceOverviewFrame;
    WalletGUI::MiningOverviewFrame *m_miningOverviewFrame;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QTableView *m_recentTransactionsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_exportButton;

    void setupUi(QFrame *OverviewFrame)
    {
        if (OverviewFrame->objectName().isEmpty())
            OverviewFrame->setObjectName(QString::fromUtf8("OverviewFrame"));
        OverviewFrame->resize(870, 500);
        OverviewFrame->setFrameShape(QFrame::StyledPanel);
        OverviewFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(OverviewFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 10);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_balanceOverviewFrame = new WalletGUI::BalanceOverviewFrame(OverviewFrame);
        m_balanceOverviewFrame->setObjectName(QString::fromUtf8("m_balanceOverviewFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_balanceOverviewFrame->sizePolicy().hasHeightForWidth());
        m_balanceOverviewFrame->setSizePolicy(sizePolicy);
        m_balanceOverviewFrame->setMinimumSize(QSize(200, 20));
        m_balanceOverviewFrame->setFrameShape(QFrame::NoFrame);
        m_balanceOverviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(m_balanceOverviewFrame);

        m_miningOverviewFrame = new WalletGUI::MiningOverviewFrame(OverviewFrame);
        m_miningOverviewFrame->setObjectName(QString::fromUtf8("m_miningOverviewFrame"));
        sizePolicy.setHeightForWidth(m_miningOverviewFrame->sizePolicy().hasHeightForWidth());
        m_miningOverviewFrame->setSizePolicy(sizePolicy);
        m_miningOverviewFrame->setMinimumSize(QSize(200, 20));
        m_miningOverviewFrame->setFrameShape(QFrame::NoFrame);
        m_miningOverviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(m_miningOverviewFrame);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        m_recentTransactionsView = new QTableView(OverviewFrame);
        m_recentTransactionsView->setObjectName(QString::fromUtf8("m_recentTransactionsView"));
        m_recentTransactionsView->setEnabled(true);
        m_recentTransactionsView->setFocusPolicy(Qt::NoFocus);
        m_recentTransactionsView->setFrameShape(QFrame::NoFrame);
        m_recentTransactionsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_recentTransactionsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_recentTransactionsView->setAlternatingRowColors(true);
        m_recentTransactionsView->setSelectionMode(QAbstractItemView::NoSelection);
        m_recentTransactionsView->setSelectionBehavior(QAbstractItemView::SelectItems);
        m_recentTransactionsView->setTextElideMode(Qt::ElideMiddle);
        m_recentTransactionsView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_recentTransactionsView->setShowGrid(false);
        m_recentTransactionsView->setWordWrap(false);
        m_recentTransactionsView->setCornerButtonEnabled(false);
        m_recentTransactionsView->horizontalHeader()->setHighlightSections(false);
        m_recentTransactionsView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(m_recentTransactionsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, -1, 6, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_exportButton = new QPushButton(OverviewFrame);
        m_exportButton->setObjectName(QString::fromUtf8("m_exportButton"));

        horizontalLayout->addWidget(m_exportButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(2, 1);

        retranslateUi(OverviewFrame);
        QObject::connect(m_exportButton, SIGNAL(clicked()), OverviewFrame, SLOT(exportToCSV()));

        QMetaObject::connectSlotsByName(OverviewFrame);
    } // setupUi

    void retranslateUi(QFrame *OverviewFrame)
    {
        OverviewFrame->setWindowTitle(QApplication::translate("OverviewFrame", "Frame", nullptr));
        m_exportButton->setText(QApplication::translate("OverviewFrame", "Export to CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverviewFrame: public Ui_OverviewFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWFRAME_H
