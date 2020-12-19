/********************************************************************************
** Form generated from reading UI file 'balanceoverviewframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEOVERVIEWFRAME_H
#define UI_BALANCEOVERVIEWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_BalanceFrame
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QLabel *m_overviewSpendableBalanceTextLabel;
    QLabel *m_overviewSpendableBalanceLabel;
    QLabel *m_overviewSpendableBalanceTickerLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_overviewLockedOrUnconfirmedBalanceTextLabel;
    QLabel *m_overviewLockedOrUnconfirmedBalanceLabel;
    QLabel *m_overviewLockedOrUnconfirmedBalanceTickerLabel;
    QLabel *m_overviewTotalBalanceTextLabel;
    QLabel *m_overviewTotalBalanceLabel;
    QLabel *m_overviewTotalBalanceTickerLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QLabel *m_overviewBalanceIconLabel;

    void setupUi(QFrame *BalanceFrame)
    {
        if (BalanceFrame->objectName().isEmpty())
            BalanceFrame->setObjectName(QString::fromUtf8("BalanceFrame"));
        BalanceFrame->resize(358, 123);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BalanceFrame->sizePolicy().hasHeightForWidth());
        BalanceFrame->setSizePolicy(sizePolicy);
        BalanceFrame->setFrameShape(QFrame::StyledPanel);
        BalanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(BalanceFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 1, 3, 1, 1);

        m_overviewSpendableBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceTextLabel->setObjectName(QString::fromUtf8("m_overviewSpendableBalanceTextLabel"));
        m_overviewSpendableBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableBalanceTextLabel, 2, 3, 1, 1);

        m_overviewSpendableBalanceLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceLabel->setObjectName(QString::fromUtf8("m_overviewSpendableBalanceLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_overviewSpendableBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewSpendableBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewSpendableBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewSpendableBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewSpendableBalanceLabel, 2, 4, 1, 1);

        m_overviewSpendableBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewSpendableBalanceTickerLabel->setObjectName(QString::fromUtf8("m_overviewSpendableBalanceTickerLabel"));
        m_overviewSpendableBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewSpendableBalanceTickerLabel, 2, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        m_overviewLockedOrUnconfirmedBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setObjectName(QString::fromUtf8("m_overviewLockedOrUnconfirmedBalanceTextLabel"));
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceTextLabel, 3, 3, 1, 1);

        m_overviewLockedOrUnconfirmedBalanceLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceLabel->setObjectName(QString::fromUtf8("m_overviewLockedOrUnconfirmedBalanceLabel"));
        sizePolicy1.setHeightForWidth(m_overviewLockedOrUnconfirmedBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewLockedOrUnconfirmedBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewLockedOrUnconfirmedBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewLockedOrUnconfirmedBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceLabel, 3, 4, 1, 1);

        m_overviewLockedOrUnconfirmedBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setObjectName(QString::fromUtf8("m_overviewLockedOrUnconfirmedBalanceTickerLabel"));
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedOrUnconfirmedBalanceTickerLabel, 3, 5, 1, 1);

        m_overviewTotalBalanceTextLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceTextLabel->setObjectName(QString::fromUtf8("m_overviewTotalBalanceTextLabel"));
        m_overviewTotalBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTextLabel, 4, 3, 1, 1);

        m_overviewTotalBalanceLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceLabel->setObjectName(QString::fromUtf8("m_overviewTotalBalanceLabel"));
        sizePolicy1.setHeightForWidth(m_overviewTotalBalanceLabel->sizePolicy().hasHeightForWidth());
        m_overviewTotalBalanceLabel->setSizePolicy(sizePolicy1);
        m_overviewTotalBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewTotalBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewTotalBalanceLabel, 4, 4, 1, 1);

        m_overviewTotalBalanceTickerLabel = new QLabel(BalanceFrame);
        m_overviewTotalBalanceTickerLabel->setObjectName(QString::fromUtf8("m_overviewTotalBalanceTickerLabel"));

        gridLayout->addWidget(m_overviewTotalBalanceTickerLabel, 4, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 6, 1, 1);

        m_overviewBalanceIconLabel = new QLabel(BalanceFrame);
        m_overviewBalanceIconLabel->setObjectName(QString::fromUtf8("m_overviewBalanceIconLabel"));
        m_overviewBalanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/total_balance")));

        gridLayout->addWidget(m_overviewBalanceIconLabel, 0, 1, 6, 1);


        retranslateUi(BalanceFrame);

        QMetaObject::connectSlotsByName(BalanceFrame);
    } // setupUi

    void retranslateUi(QFrame *BalanceFrame)
    {
        BalanceFrame->setWindowTitle(QApplication::translate("BalanceFrame", "Frame", nullptr));
        m_overviewSpendableBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Spendable", nullptr));
#ifndef QT_NO_TOOLTIP
        m_overviewSpendableBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewSpendableBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", nullptr));
        m_overviewSpendableBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "INF", nullptr));
        m_overviewLockedOrUnconfirmedBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Locked or unconfirmed", nullptr));
#ifndef QT_NO_TOOLTIP
        m_overviewLockedOrUnconfirmedBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewLockedOrUnconfirmedBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", nullptr));
        m_overviewLockedOrUnconfirmedBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "INF", nullptr));
        m_overviewTotalBalanceTextLabel->setText(QApplication::translate("BalanceFrame", "Total balance", nullptr));
#ifndef QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setToolTip(QApplication::translate("BalanceFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setText(QApplication::translate("BalanceFrame", "TextLabel", nullptr));
        m_overviewTotalBalanceTickerLabel->setText(QApplication::translate("BalanceFrame", "INF", nullptr));
        m_overviewBalanceIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BalanceFrame: public Ui_BalanceFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEOVERVIEWFRAME_H
