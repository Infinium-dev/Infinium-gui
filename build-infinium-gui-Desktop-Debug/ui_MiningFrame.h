/********************************************************************************
** Form generated from reading UI file 'MiningFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGFRAME_H
#define UI_MININGFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "PoolTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_MiningFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_miningManageFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_cpuCoresCombo;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *m_failoverStrategyRadio;
    QRadioButton *m_randomStrategyRadio;
    QSpacerItem *horizontalSpacer;
    QFrame *m_hashRateFrame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *m_hashrateLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_startMiningButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_8;
    WalletGUI::PoolTreeView *m_poolView;
    QFrame *m_addPoolFrame;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *m_newPoolHostEdit;
    QSpinBox *m_newPoolPortSpin;
    QSpinBox *m_difficultySpin;
    QPushButton *m_addPoolButton;
    QButtonGroup *m_poolSelectionStrategyButtonGroup;

    void setupUi(QFrame *MiningFrame)
    {
        if (MiningFrame->objectName().isEmpty())
            MiningFrame->setObjectName(QString::fromUtf8("MiningFrame"));
        MiningFrame->resize(870, 500);
        MiningFrame->setFrameShape(QFrame::NoFrame);
        MiningFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(MiningFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_miningManageFrame = new QFrame(MiningFrame);
        m_miningManageFrame->setObjectName(QString::fromUtf8("m_miningManageFrame"));
        m_miningManageFrame->setMinimumSize(QSize(0, 100));
        m_miningManageFrame->setMaximumSize(QSize(16777215, 100));
        m_miningManageFrame->setFrameShape(QFrame::NoFrame);
        m_miningManageFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(m_miningManageFrame);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(25, 20, 25, 20);
        label = new QLabel(m_miningManageFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        m_cpuCoresCombo = new QComboBox(m_miningManageFrame);
        m_cpuCoresCombo->setObjectName(QString::fromUtf8("m_cpuCoresCombo"));

        horizontalLayout->addWidget(m_cpuCoresCombo);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(m_miningManageFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_failoverStrategyRadio = new QRadioButton(m_miningManageFrame);
        m_poolSelectionStrategyButtonGroup = new QButtonGroup(MiningFrame);
        m_poolSelectionStrategyButtonGroup->setObjectName(QString::fromUtf8("m_poolSelectionStrategyButtonGroup"));
        m_poolSelectionStrategyButtonGroup->addButton(m_failoverStrategyRadio);
        m_failoverStrategyRadio->setObjectName(QString::fromUtf8("m_failoverStrategyRadio"));
        m_failoverStrategyRadio->setChecked(true);

        horizontalLayout_4->addWidget(m_failoverStrategyRadio);

        m_randomStrategyRadio = new QRadioButton(m_miningManageFrame);
        m_poolSelectionStrategyButtonGroup->addButton(m_randomStrategyRadio);
        m_randomStrategyRadio->setObjectName(QString::fromUtf8("m_randomStrategyRadio"));

        horizontalLayout_4->addWidget(m_randomStrategyRadio);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_hashRateFrame = new QFrame(m_miningManageFrame);
        m_hashRateFrame->setObjectName(QString::fromUtf8("m_hashRateFrame"));
        gridLayout_2 = new QGridLayout(m_hashRateFrame);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        m_hashrateLabel = new QLabel(m_hashRateFrame);
        m_hashrateLabel->setObjectName(QString::fromUtf8("m_hashrateLabel"));
        m_hashrateLabel->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(m_hashrateLabel, 1, 1, 1, 1, Qt::AlignLeft);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        label_7 = new QLabel(m_hashRateFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setIndent(0);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);


        horizontalLayout->addWidget(m_hashRateFrame);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        m_startMiningButton = new QPushButton(m_miningManageFrame);
        m_startMiningButton->setObjectName(QString::fromUtf8("m_startMiningButton"));
        sizePolicy.setHeightForWidth(m_startMiningButton->sizePolicy().hasHeightForWidth());
        m_startMiningButton->setSizePolicy(sizePolicy);
        m_startMiningButton->setMinimumSize(QSize(100, 0));
        m_startMiningButton->setMaximumSize(QSize(190, 16777215));
        m_startMiningButton->setCheckable(true);

        horizontalLayout->addWidget(m_startMiningButton);


        verticalLayout->addWidget(m_miningManageFrame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(25, 20, 25, 20);
        label_6 = new QLabel(MiningFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        label_8 = new QLabel(MiningFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8, 0, Qt::AlignHCenter);

        m_poolView = new WalletGUI::PoolTreeView(MiningFrame);
        m_poolView->setObjectName(QString::fromUtf8("m_poolView"));
        m_poolView->setFocusPolicy(Qt::NoFocus);
        m_poolView->setFrameShape(QFrame::NoFrame);
        m_poolView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_poolView->setProperty("showDropIndicator", QVariant(false));
        m_poolView->setDragEnabled(false);
        m_poolView->setDragDropOverwriteMode(false);
        m_poolView->setDragDropMode(QAbstractItemView::InternalMove);
        m_poolView->setDefaultDropAction(Qt::MoveAction);
        m_poolView->setSelectionMode(QAbstractItemView::SingleSelection);
        m_poolView->setSelectionBehavior(QAbstractItemView::SelectRows);
        m_poolView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_poolView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(m_poolView);

        m_addPoolFrame = new QFrame(MiningFrame);
        m_addPoolFrame->setObjectName(QString::fromUtf8("m_addPoolFrame"));
        m_addPoolFrame->setFrameShape(QFrame::NoFrame);
        m_addPoolFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_addPoolFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(25, 23, 25, 23);
        label_3 = new QLabel(m_addPoolFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setIndent(0);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(m_addPoolFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setIndent(0);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(m_addPoolFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setIndent(0);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        m_newPoolHostEdit = new QLineEdit(m_addPoolFrame);
        m_newPoolHostEdit->setObjectName(QString::fromUtf8("m_newPoolHostEdit"));

        gridLayout->addWidget(m_newPoolHostEdit, 1, 0, 1, 1);

        m_newPoolPortSpin = new QSpinBox(m_addPoolFrame);
        m_newPoolPortSpin->setObjectName(QString::fromUtf8("m_newPoolPortSpin"));
        m_newPoolPortSpin->setMinimum(1);
        m_newPoolPortSpin->setMaximum(65535);
        m_newPoolPortSpin->setValue(1);

        gridLayout->addWidget(m_newPoolPortSpin, 1, 1, 1, 1);

        m_difficultySpin = new QSpinBox(m_addPoolFrame);
        m_difficultySpin->setObjectName(QString::fromUtf8("m_difficultySpin"));
        m_difficultySpin->setMaximum(999999999);
        m_difficultySpin->setSingleStep(1000);

        gridLayout->addWidget(m_difficultySpin, 1, 2, 1, 1);

        m_addPoolButton = new QPushButton(m_addPoolFrame);
        m_addPoolButton->setObjectName(QString::fromUtf8("m_addPoolButton"));
        m_addPoolButton->setEnabled(false);
        m_addPoolButton->setMinimumSize(QSize(80, 0));
        m_addPoolButton->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(m_addPoolButton, 1, 3, 1, 1);


        verticalLayout->addWidget(m_addPoolFrame);


        retranslateUi(MiningFrame);
        QObject::connect(m_poolSelectionStrategyButtonGroup, SIGNAL(buttonToggled(QAbstractButton*,bool)), MiningFrame, SLOT(schedulePolicyChanged(QAbstractButton*,bool)));
        QObject::connect(m_startMiningButton, SIGNAL(clicked(bool)), MiningFrame, SLOT(startMiningClicked(bool)));
        QObject::connect(m_newPoolHostEdit, SIGNAL(textChanged(QString)), MiningFrame, SLOT(newPoolUrlChanged()));
        QObject::connect(m_newPoolPortSpin, SIGNAL(valueChanged(int)), MiningFrame, SLOT(newPoolUrlChanged()));
        QObject::connect(m_addPoolButton, SIGNAL(clicked()), MiningFrame, SLOT(addPoolClicked()));
        QObject::connect(m_cpuCoresCombo, SIGNAL(activated(int)), MiningFrame, SLOT(cpuCoreCountChangedByUser(int)));
        QObject::connect(m_poolView, SIGNAL(clicked(QModelIndex)), MiningFrame, SLOT(deleteClicked(QModelIndex)));

        QMetaObject::connectSlotsByName(MiningFrame);
    } // setupUi

    void retranslateUi(QFrame *MiningFrame)
    {
        MiningFrame->setWindowTitle(QApplication::translate("MiningFrame", "Frame", nullptr));
        label->setText(QApplication::translate("MiningFrame", "CPU CORES:", nullptr));
        label_2->setText(QApplication::translate("MiningFrame", "POOL SELECTION STRATEGY:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_failoverStrategyRadio->setToolTip(QApplication::translate("MiningFrame", "Starts mining on the first pool. If it fails chooses the next one.", nullptr));
#endif // QT_NO_TOOLTIP
        m_failoverStrategyRadio->setText(QApplication::translate("MiningFrame", "Fai&lover", nullptr));
#ifndef QT_NO_TOOLTIP
        m_randomStrategyRadio->setToolTip(QApplication::translate("MiningFrame", "Chooses random pool from the pool list.", nullptr));
#endif // QT_NO_TOOLTIP
        m_randomStrategyRadio->setText(QApplication::translate("MiningFrame", "Rando&m", nullptr));
        m_hashrateLabel->setText(QString());
        label_7->setText(QApplication::translate("MiningFrame", "Hashrate:", nullptr));
        m_startMiningButton->setText(QApplication::translate("MiningFrame", "Start mining", nullptr));
        label_6->setText(QApplication::translate("MiningFrame", "Mining pool list", nullptr));
        label_8->setText(QApplication::translate("MiningFrame", "Mining is here in wallet, but it is not recommended, becouse on standard cpu you will have low hashrate compared to ASICs mining infinium now.", nullptr));
        label_3->setText(QApplication::translate("MiningFrame", "HOST", nullptr));
        label_4->setText(QApplication::translate("MiningFrame", "PORT", nullptr));
        label_5->setText(QApplication::translate("MiningFrame", "DIFFICULTY", nullptr));
        m_newPoolHostEdit->setPlaceholderText(QString());
        m_newPoolPortSpin->setSpecialValueText(QString());
        m_difficultySpin->setSpecialValueText(QString());
        m_addPoolButton->setText(QApplication::translate("MiningFrame", "Add pool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiningFrame: public Ui_MiningFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGFRAME_H
