/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "okbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_aboutLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGUI::WalletOkButton *m_okButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(600, 390);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(600, 390));
        AboutDialog->setMaximumSize(QSize(600, 390));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_aboutLabel = new QLabel(AboutDialog);
        m_aboutLabel->setObjectName(QString::fromUtf8("m_aboutLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_aboutLabel->sizePolicy().hasHeightForWidth());
        m_aboutLabel->setSizePolicy(sizePolicy1);
        m_aboutLabel->setTextFormat(Qt::RichText);
        m_aboutLabel->setWordWrap(true);
        m_aboutLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_aboutLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGUI::WalletOkButton(AboutDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Infinium", nullptr));
        m_aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Infinium GUI version %1</p><p>Copyright \302\251 2012-2018 The Bytecoin developers</p><p>Copyright \302\251 2020-%4 The Bytecoin developers</p><p>This is free software.</p><p>Distributed under the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or any later version.</p><p>Distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details:</p><p><a href=\"https://www.gnu.org/licenses/lgpl.html\"><span style=\" text-decoration: underline; color:#0000ff;\">https://www.gnu.org/licenses/lgpl.html</span></a></p><p><a href=\"http://infinium.space/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://infinium.space/</span></a></p></body></html>", nullptr));
        m_okButton->setText(QApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
