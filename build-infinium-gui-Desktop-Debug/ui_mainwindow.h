/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MiningFrame.h"
#include "addressbookframe.h"
#include "logframe.h"
#include "overviewframe.h"
#include "progressbar.h"
#include "sendframe.h"
#include "statusbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_exitAction;
    QAction *m_createLegacyWalletAction;
    QAction *m_openWalletAction;
    QAction *m_aboutBytecoinAction;
    QAction *m_aboutQtAction;
    QAction *m_remoteWalletAction;
    QAction *m_communityForumAction;
    QAction *m_encryptWalletAction;
    QAction *m_changePasswordAction;
    QAction *m_openDataFolderAction;
    QAction *m_importKeysAction;
    QAction *m_checkProofAction;
    QAction *m_paramsAction;
    QAction *m_exportViewOnlyKeysAction;
    QAction *m_exportKeysAction;
    QAction *m_createNewWalletAction;
    QAction *m_restoreWalletFromMnemonicAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *m_headerFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *m_logoLabel;
    QSpacerItem *horizontalSpacer_5;
    QFrame *m_walletFrame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *m_updateLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *m_addressLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_creationTimestampLabel;
    QLabel *m_addressesCountLabel;
    QLabel *m_viewOnlyLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *m_balanceIconLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_balanceTextLabel;
    QLabel *m_balanceLabel;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QFrame *m_toolFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *m_overviewButton;
    QPushButton *m_sendButton;
    QPushButton *m_addressBookButton;
    QPushButton *m_miningButton;
    QPushButton *m_logButton;
    QSpacerItem *verticalSpacer;
    WalletGUI::OverviewFrame *m_overviewFrame;
    WalletGUI::SendFrame *m_sendFrame;
    WalletGUI::MiningFrame *m_miningFrame;
    WalletGUI::AddressBookFrame *m_addressBookFrame;
    WalletGUI::LogFrame *m_logFrame;
    WalletGUI::WalletProgressBar *m_syncProgress;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;
    WalletGUI::WalletStatusBar *statusBar;
    QButtonGroup *m_toolButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1273, 824);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 540));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bytecoin"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QString::fromUtf8("m_exitAction"));
        m_exitAction->setCheckable(false);
        m_exitAction->setEnabled(true);
        m_createLegacyWalletAction = new QAction(MainWindow);
        m_createLegacyWalletAction->setObjectName(QString::fromUtf8("m_createLegacyWalletAction"));
        m_createLegacyWalletAction->setEnabled(true);
        m_openWalletAction = new QAction(MainWindow);
        m_openWalletAction->setObjectName(QString::fromUtf8("m_openWalletAction"));
        m_openWalletAction->setEnabled(true);
        m_aboutBytecoinAction = new QAction(MainWindow);
        m_aboutBytecoinAction->setObjectName(QString::fromUtf8("m_aboutBytecoinAction"));
        m_aboutBytecoinAction->setEnabled(true);
        m_aboutQtAction = new QAction(MainWindow);
        m_aboutQtAction->setObjectName(QString::fromUtf8("m_aboutQtAction"));
        m_aboutQtAction->setEnabled(true);
        m_remoteWalletAction = new QAction(MainWindow);
        m_remoteWalletAction->setObjectName(QString::fromUtf8("m_remoteWalletAction"));
        m_remoteWalletAction->setEnabled(true);
        m_communityForumAction = new QAction(MainWindow);
        m_communityForumAction->setObjectName(QString::fromUtf8("m_communityForumAction"));
        m_encryptWalletAction = new QAction(MainWindow);
        m_encryptWalletAction->setObjectName(QString::fromUtf8("m_encryptWalletAction"));
        m_changePasswordAction = new QAction(MainWindow);
        m_changePasswordAction->setObjectName(QString::fromUtf8("m_changePasswordAction"));
        m_openDataFolderAction = new QAction(MainWindow);
        m_openDataFolderAction->setObjectName(QString::fromUtf8("m_openDataFolderAction"));
        m_importKeysAction = new QAction(MainWindow);
        m_importKeysAction->setObjectName(QString::fromUtf8("m_importKeysAction"));
        m_checkProofAction = new QAction(MainWindow);
        m_checkProofAction->setObjectName(QString::fromUtf8("m_checkProofAction"));
        m_paramsAction = new QAction(MainWindow);
        m_paramsAction->setObjectName(QString::fromUtf8("m_paramsAction"));
        m_exportViewOnlyKeysAction = new QAction(MainWindow);
        m_exportViewOnlyKeysAction->setObjectName(QString::fromUtf8("m_exportViewOnlyKeysAction"));
        m_exportKeysAction = new QAction(MainWindow);
        m_exportKeysAction->setObjectName(QString::fromUtf8("m_exportKeysAction"));
        m_createNewWalletAction = new QAction(MainWindow);
        m_createNewWalletAction->setObjectName(QString::fromUtf8("m_createNewWalletAction"));
        m_restoreWalletFromMnemonicAction = new QAction(MainWindow);
        m_restoreWalletFromMnemonicAction->setObjectName(QString::fromUtf8("m_restoreWalletFromMnemonicAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_headerFrame = new QFrame(centralwidget);
        m_headerFrame->setObjectName(QString::fromUtf8("m_headerFrame"));
        m_headerFrame->setMinimumSize(QSize(0, 116));
        m_headerFrame->setMaximumSize(QSize(16777215, 116));
        m_headerFrame->setFrameShape(QFrame::NoFrame);
        m_headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(m_headerFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 25, 0);
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        m_logoLabel = new QLabel(m_headerFrame);
        m_logoLabel->setObjectName(QString::fromUtf8("m_logoLabel"));
        m_logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/light/logo")));

        horizontalLayout_3->addWidget(m_logoLabel);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        m_walletFrame = new QFrame(m_headerFrame);
        m_walletFrame->setObjectName(QString::fromUtf8("m_walletFrame"));
        m_walletFrame->setFrameShape(QFrame::NoFrame);
        m_walletFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m_walletFrame);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        m_updateLabel = new QLabel(m_walletFrame);
        m_updateLabel->setObjectName(QString::fromUtf8("m_updateLabel"));
        m_updateLabel->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_2->addWidget(m_updateLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer_3);

        m_addressLabel = new QLabel(m_walletFrame);
        m_addressLabel->setObjectName(QString::fromUtf8("m_addressLabel"));
        sizePolicy.setHeightForWidth(m_addressLabel->sizePolicy().hasHeightForWidth());
        m_addressLabel->setSizePolicy(sizePolicy);
        m_addressLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_addressLabel->setIndent(0);

        verticalLayout_5->addWidget(m_addressLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_creationTimestampLabel = new QLabel(m_walletFrame);
        m_creationTimestampLabel->setObjectName(QString::fromUtf8("m_creationTimestampLabel"));
        sizePolicy.setHeightForWidth(m_creationTimestampLabel->sizePolicy().hasHeightForWidth());
        m_creationTimestampLabel->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(m_creationTimestampLabel);

        m_addressesCountLabel = new QLabel(m_walletFrame);
        m_addressesCountLabel->setObjectName(QString::fromUtf8("m_addressesCountLabel"));

        horizontalLayout_4->addWidget(m_addressesCountLabel);

        m_viewOnlyLabel = new QLabel(m_walletFrame);
        m_viewOnlyLabel->setObjectName(QString::fromUtf8("m_viewOnlyLabel"));
        sizePolicy.setHeightForWidth(m_viewOnlyLabel->sizePolicy().hasHeightForWidth());
        m_viewOnlyLabel->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(m_viewOnlyLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_3->addWidget(m_walletFrame);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_8 = new QSpacerItem(34, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        m_balanceIconLabel = new QLabel(m_headerFrame);
        m_balanceIconLabel->setObjectName(QString::fromUtf8("m_balanceIconLabel"));
        m_balanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/total_balance")));

        horizontalLayout_3->addWidget(m_balanceIconLabel);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        m_balanceTextLabel = new QLabel(m_headerFrame);
        m_balanceTextLabel->setObjectName(QString::fromUtf8("m_balanceTextLabel"));

        verticalLayout_4->addWidget(m_balanceTextLabel);

        m_balanceLabel = new QLabel(m_headerFrame);
        m_balanceLabel->setObjectName(QString::fromUtf8("m_balanceLabel"));
        m_balanceLabel->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(m_balanceLabel);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_2->addWidget(m_headerFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_toolFrame = new QFrame(centralwidget);
        m_toolFrame->setObjectName(QString::fromUtf8("m_toolFrame"));
        m_toolFrame->setFrameShape(QFrame::NoFrame);
        m_toolFrame->setFrameShadow(QFrame::Plain);
        m_toolFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(m_toolFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup = new QButtonGroup(MainWindow);
        m_toolButtonGroup->setObjectName(QString::fromUtf8("m_toolButtonGroup"));
        m_toolButtonGroup->setExclusive(true);
        m_toolButtonGroup->addButton(m_overviewButton);
        m_overviewButton->setObjectName(QString::fromUtf8("m_overviewButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_overviewButton->sizePolicy().hasHeightForWidth());
        m_overviewButton->setSizePolicy(sizePolicy1);
        m_overviewButton->setMinimumSize(QSize(90, 50));
        m_overviewButton->setMaximumSize(QSize(16777215, 50));
        m_overviewButton->setFocusPolicy(Qt::NoFocus);
        m_overviewButton->setCheckable(true);
        m_overviewButton->setFlat(true);

        verticalLayout->addWidget(m_overviewButton);

        m_sendButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_sendButton);
        m_sendButton->setObjectName(QString::fromUtf8("m_sendButton"));
        sizePolicy1.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy1);
        m_sendButton->setMinimumSize(QSize(90, 50));
        m_sendButton->setMaximumSize(QSize(16777215, 50));
        m_sendButton->setFocusPolicy(Qt::NoFocus);
        m_sendButton->setCheckable(true);
        m_sendButton->setFlat(true);

        verticalLayout->addWidget(m_sendButton);

        m_addressBookButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_addressBookButton);
        m_addressBookButton->setObjectName(QString::fromUtf8("m_addressBookButton"));
        m_addressBookButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_addressBookButton->sizePolicy().hasHeightForWidth());
        m_addressBookButton->setSizePolicy(sizePolicy1);
        m_addressBookButton->setMinimumSize(QSize(90, 50));
        m_addressBookButton->setMaximumSize(QSize(16777215, 50));
        m_addressBookButton->setFocusPolicy(Qt::NoFocus);
        m_addressBookButton->setCheckable(true);
        m_addressBookButton->setFlat(true);

        verticalLayout->addWidget(m_addressBookButton);

        m_miningButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_miningButton);
        m_miningButton->setObjectName(QString::fromUtf8("m_miningButton"));
        m_miningButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_miningButton->sizePolicy().hasHeightForWidth());
        m_miningButton->setSizePolicy(sizePolicy1);
        m_miningButton->setMinimumSize(QSize(90, 50));
        m_miningButton->setMaximumSize(QSize(16777215, 50));
        m_miningButton->setFocusPolicy(Qt::NoFocus);
        m_miningButton->setCheckable(true);
        m_miningButton->setFlat(true);

        verticalLayout->addWidget(m_miningButton);

        m_logButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_logButton);
        m_logButton->setObjectName(QString::fromUtf8("m_logButton"));
        m_logButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_logButton->sizePolicy().hasHeightForWidth());
        m_logButton->setSizePolicy(sizePolicy1);
        m_logButton->setMinimumSize(QSize(90, 50));
        m_logButton->setMaximumSize(QSize(16777215, 50));
        m_logButton->setFocusPolicy(Qt::NoFocus);
        m_logButton->setCheckable(true);
        m_logButton->setFlat(true);

        verticalLayout->addWidget(m_logButton);

        verticalSpacer = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(m_toolFrame);

        m_overviewFrame = new WalletGUI::OverviewFrame(centralwidget);
        m_overviewFrame->setObjectName(QString::fromUtf8("m_overviewFrame"));
        m_overviewFrame->setFrameShape(QFrame::NoFrame);
        m_overviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_overviewFrame);

        m_sendFrame = new WalletGUI::SendFrame(centralwidget);
        m_sendFrame->setObjectName(QString::fromUtf8("m_sendFrame"));
        m_sendFrame->setFrameShape(QFrame::NoFrame);
        m_sendFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_sendFrame);

        m_miningFrame = new WalletGUI::MiningFrame(centralwidget);
        m_miningFrame->setObjectName(QString::fromUtf8("m_miningFrame"));
        m_miningFrame->setFrameShape(QFrame::NoFrame);
        m_miningFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_miningFrame);

        m_addressBookFrame = new WalletGUI::AddressBookFrame(centralwidget);
        m_addressBookFrame->setObjectName(QString::fromUtf8("m_addressBookFrame"));
        m_addressBookFrame->setFrameShape(QFrame::NoFrame);
        m_addressBookFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_addressBookFrame);

        m_logFrame = new WalletGUI::LogFrame(centralwidget);
        m_logFrame->setObjectName(QString::fromUtf8("m_logFrame"));
        m_logFrame->setFrameShape(QFrame::NoFrame);
        m_logFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_logFrame);


        verticalLayout_2->addLayout(horizontalLayout);

        m_syncProgress = new WalletGUI::WalletProgressBar(centralwidget);
        m_syncProgress->setObjectName(QString::fromUtf8("m_syncProgress"));
        m_syncProgress->setMaximum(0);
        m_syncProgress->setValue(0);
        m_syncProgress->setTextVisible(false);

        verticalLayout_2->addWidget(m_syncProgress);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1273, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusBar = new WalletGUI::WalletStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_createNewWalletAction);
        menuFile->addAction(m_restoreWalletFromMnemonicAction);
        menuFile->addAction(m_openWalletAction);
        menuFile->addSeparator();
        menuFile->addAction(m_changePasswordAction);
        menuFile->addSeparator();
        menuFile->addAction(m_createLegacyWalletAction);
        menuFile->addAction(m_importKeysAction);
        menuFile->addAction(m_remoteWalletAction);
        menuFile->addAction(m_exportViewOnlyKeysAction);
        menuFile->addAction(m_exportKeysAction);
        menuFile->addSeparator();
        menuFile->addAction(m_exitAction);
        menuHelp->addAction(m_communityForumAction);
        menuHelp->addAction(m_aboutBytecoinAction);
        menuHelp->addAction(m_aboutQtAction);
        menuTools->addAction(m_checkProofAction);
        menuTools->addAction(m_openDataFolderAction);
        menuTools->addAction(m_paramsAction);

        retranslateUi(MainWindow);
        QObject::connect(m_createLegacyWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createLegacyWallet()));
        QObject::connect(m_aboutQtAction, SIGNAL(triggered()), MainWindow, SLOT(aboutQt()));
        QObject::connect(m_aboutBytecoinAction, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(m_overviewButton, SIGNAL(toggled(bool)), m_overviewFrame, SLOT(setVisible(bool)));
        QObject::connect(m_sendButton, SIGNAL(toggled(bool)), m_sendFrame, SLOT(setVisible(bool)));
        QObject::connect(m_miningButton, SIGNAL(toggled(bool)), m_miningFrame, SLOT(setVisible(bool)));
        QObject::connect(m_addressBookButton, SIGNAL(toggled(bool)), m_addressBookFrame, SLOT(setVisible(bool)));
        QObject::connect(m_changePasswordAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_openWalletAction, SIGNAL(triggered()), MainWindow, SLOT(openWallet()));
        QObject::connect(m_remoteWalletAction, SIGNAL(triggered()), MainWindow, SLOT(remoteWallet()));
        QObject::connect(m_communityForumAction, SIGNAL(triggered()), MainWindow, SLOT(communityForumTriggered()));
        QObject::connect(m_overviewFrame, SIGNAL(copiedToClipboardSignal()), MainWindow, SLOT(copiedToClipboard()));
        QObject::connect(m_openDataFolderAction, SIGNAL(triggered()), MainWindow, SLOT(openDataFolder()));
        QObject::connect(m_logButton, SIGNAL(toggled(bool)), m_logFrame, SLOT(setVisible(bool)));
        QObject::connect(m_importKeysAction, SIGNAL(triggered()), MainWindow, SLOT(importKeys()));
        QObject::connect(m_checkProofAction, SIGNAL(triggered()), MainWindow, SLOT(checkProof()));
        QObject::connect(m_paramsAction, SIGNAL(triggered()), MainWindow, SLOT(showWalletdParams()));
        QObject::connect(m_exportViewOnlyKeysAction, SIGNAL(triggered()), MainWindow, SLOT(exportViewOnlyKeys()));
        QObject::connect(m_exportKeysAction, SIGNAL(triggered()), MainWindow, SLOT(exportKeys()));
        QObject::connect(m_createNewWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createWallet()));
        QObject::connect(m_restoreWalletFromMnemonicAction, SIGNAL(triggered()), MainWindow, SLOT(restoreWalletFromMnemonic()));
        QObject::connect(m_overviewFrame, SIGNAL(createProofSignal(QString,QStringList,bool)), MainWindow, SLOT(createProof(QString,QStringList,bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        m_exitAction->setText(QApplication::translate("MainWindow", "E&xit", nullptr));
#ifndef QT_NO_SHORTCUT
        m_exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        m_createLegacyWalletAction->setText(QApplication::translate("MainWindow", "Create &legacy wallet file", nullptr));
        m_openWalletAction->setText(QApplication::translate("MainWindow", "&Open wallet file", nullptr));
        m_aboutBytecoinAction->setText(QApplication::translate("MainWindow", "&About Infinium", nullptr));
        m_aboutBytecoinAction->setIconText(QApplication::translate("MainWindow", "About Infinium", nullptr));
        m_aboutQtAction->setText(QApplication::translate("MainWindow", "About &Qt", nullptr));
        m_remoteWalletAction->setText(QApplication::translate("MainWindow", "Connect to remote &wallet daemon", nullptr));
        m_communityForumAction->setText(QApplication::translate("MainWindow", "&Official site", nullptr));
        m_encryptWalletAction->setText(QApplication::translate("MainWindow", "&Encrypt wallet", nullptr));
        m_changePasswordAction->setText(QApplication::translate("MainWindow", "C&hange password", nullptr));
        m_openDataFolderAction->setText(QApplication::translate("MainWindow", "Open default data &folder", nullptr));
        m_importKeysAction->setText(QApplication::translate("MainWindow", "Create legacy wallet file from &keys", nullptr));
        m_checkProofAction->setText(QApplication::translate("MainWindow", "&Check SendProof", nullptr));
        m_paramsAction->setText(QApplication::translate("MainWindow", "Wallet daemon &parameters", nullptr));
        m_exportViewOnlyKeysAction->setText(QApplication::translate("MainWindow", "&Export view-only wallet file", nullptr));
        m_exportKeysAction->setText(QApplication::translate("MainWindow", "Ex&port keys", nullptr));
        m_createNewWalletAction->setText(QApplication::translate("MainWindow", "&Create Amethyst wallet file", nullptr));
        m_restoreWalletFromMnemonicAction->setText(QApplication::translate("MainWindow", "&Restore Amethyst wallet from mnemonic", nullptr));
        m_logoLabel->setText(QString());
        m_updateLabel->setText(QApplication::translate("MainWindow", "New version %1 of Infinium wallet is available!", nullptr));
        m_addressLabel->setText(QApplication::translate("MainWindow", "address", nullptr));
        m_creationTimestampLabel->setText(QApplication::translate("MainWindow", "Wallet created: 01/01/1970", nullptr));
        m_addressesCountLabel->setText(QApplication::translate("MainWindow", "Total addresses in the wallet: 5", nullptr));
        m_viewOnlyLabel->setText(QApplication::translate("MainWindow", "(view-only)", nullptr));
        m_balanceIconLabel->setText(QString());
        m_balanceTextLabel->setText(QApplication::translate("MainWindow", "Total balance", nullptr));
#ifndef QT_NO_TOOLTIP
        m_balanceLabel->setToolTip(QApplication::translate("MainWindow", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_balanceLabel->setText(QApplication::translate("MainWindow", "0.00", nullptr));
        m_overviewButton->setText(QApplication::translate("MainWindow", "OVERVIEW", nullptr));
        m_sendButton->setText(QApplication::translate("MainWindow", "SEND", nullptr));
        m_addressBookButton->setText(QApplication::translate("MainWindow", "CONTACTS", nullptr));
        m_miningButton->setText(QApplication::translate("MainWindow", "MINING", nullptr));
        m_logButton->setText(QApplication::translate("MainWindow", "CONSOLE", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&Wallet", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "&Tools", nullptr));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
