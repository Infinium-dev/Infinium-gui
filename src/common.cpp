// Copyright (c) 2015-2018, The Bytecoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#include <QRegExp>
#include <QUrl>

#include "common.h"

namespace WalletGUI
{

static const QStringList RATE_PREFIXES = {"", "k", "M", "G", "T", "P", "E", "Z", "Y"};

bool isTransactionSpendTimeUnlocked(uint64_t unlockTime, uint32_t blockIndex, uint64_t blockTimestampMedian)
{
    // interpret as block index
    if (unlockTime < CRYPTONOTE_MAX_BLOCK_NUMBER)
        return blockIndex + CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS >= unlockTime;

    // interpret as time
    return blockTimestampMedian + CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS >= unlockTime;
}

QString formatUnsignedAmount(quint64 amount, bool trim /*= true*/)
{
    QString result = QString::number(amount);
    if (result.length() < NUMBER_OF_DECIMAL_PLACES + 1)
        result = result.rightJustified(NUMBER_OF_DECIMAL_PLACES + 1, '0');

    quint32 dotPos = result.length() - NUMBER_OF_DECIMAL_PLACES;
    if (trim)
    {
        for (quint32 pos = result.length() - 1; pos > dotPos + 1; --pos)
        {
            if (result[pos] != '0')
                break;
            result.remove(pos, 1);
        }
    }

    result.insert(dotPos, ".");
    for (qint32 pos = dotPos - 3; pos > 0; pos -= 3)
    {
        if (result[pos - 1].isDigit())
            result.insert(pos, ',');
    }

    return result;
}

QString formatAmount(qint64 amount)
{
    QString result = formatUnsignedAmount(qAbs(amount));
    return amount < 0 ? result.prepend("-") : result;
}

bool isIpOrHostName(const QString& string)
{
    QRegExp ipRegExp("^(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$");
    QRegExp hostNameRegExp("^(([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9\\-]*[a-zA-Z0-9])\\.)*([A-Za-z0-9]|[A-Za-z0-9][A-Za-z0-9\\-]*[A-Za-z0-9])$");
    return !string.isEmpty() && (ipRegExp.exactMatch(string) || hostNameRegExp.exactMatch(string));
}

//quint64 convertAmountFromHumanReadable(double amount)
//{
//    return quint64(amount * COIN + .5); // 0.5 - to avoid floating point errors
//}

QString rpcUrlToString(const QUrl& url)
{
    return QString("%1:%2").arg(url.host()).arg(url.port());
}

QString formatHashRate(quint64 hashRate)
{
    quint64 intPart = hashRate;
    quint64 decimalPart = 0;
    int i = 0;
    while (hashRate >= 1000 && i < RATE_PREFIXES.size())
    {
        ++i;
        intPart = hashRate / 1000;
        decimalPart = hashRate % 1000;
        hashRate /= 1000;
    }

    if (decimalPart > 0)
        return QString("%1.%2 %3H/s").arg(intPart).arg(decimalPart, 3, 10, QChar('0')).arg(RATE_PREFIXES[i]);

    return QString("%1 %2H/s").arg(intPart).arg(RATE_PREFIXES[i]);
}

bool parseAmount(const QString& str, qint64& amount)
{
    static const int numberOfDecimalPlaces = 8;
    static const QChar separator = '.';
    static const QChar minus = '-';
    static const QChar plus = '+';
    static const QChar zero = '0';

    QString trimmedStr = str.trimmed();
    if (trimmedStr.isEmpty())
        return false;
    const QChar first = trimmedStr[0];
    const bool negative = (first == minus);
    if (first == minus || first == plus)
        trimmedStr.remove(0, 1);

    const int fracPos = trimmedStr.indexOf(separator);
    if (fracPos != trimmedStr.lastIndexOf(separator))
        return false;
    if (fracPos == -1)
        trimmedStr.append(separator);
    const QStringList splitted = trimmedStr.split(separator, QString::KeepEmptyParts);
    Q_ASSERT(splitted.size() == 2);
    const QString& integerPart = splitted.first();
    const QString& fractionalPart = splitted.last();
    const QString justifiedFrac = fractionalPart.leftJustified(numberOfDecimalPlaces, zero, true /*truncate*/);

    bool ok = true;
    const qint64 integer = integerPart.isEmpty() ? 0 : integerPart.toLongLong(&ok);
    if (!ok)
        return false;
    const qint64 frac = justifiedFrac.isEmpty() ? 0 : justifiedFrac.toLongLong(&ok);
    if (!ok)
        return false;
    const qint64 value = integer * COIN + frac;
    amount = negative ? -value : value;
    return true;
}

}
