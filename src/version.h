#ifndef VERSION_H
#define VERSION_H

#include <QString>

namespace WalletGUI {

constexpr char VERSION[] = "3.0.1";
constexpr char CODENAME[] = "New Way";
constexpr char VERSION_SUFFIX[] = "stable";
constexpr char REVISION[] = "20190419";

// returns <0, if newVersion is worse than currentVersion, returns >0, if newVersion is better, and returns 0, if versions are equal
int compareVersion(const QString& newVersion, const QString& currentVersion);
bool isStableVersion();
QString fullVersion();

}

#endif // VERSION_H
