// Copyright (c) 2015-2018, The Bytecoin developers.
// Copyright (c) 2020-2020, The Infinium developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <QDialog>

namespace Ui {
class AboutDialog;
}

namespace WalletGUI {

class AboutDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AboutDialog)

public:
  explicit AboutDialog(QWidget* _parent);
  ~AboutDialog();

private:
  QScopedPointer<Ui::AboutDialog> m_ui;
};

}
