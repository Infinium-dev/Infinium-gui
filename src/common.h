// Copyright (c) 2015-2018, The Bytecoin developers.
// Copyright (c) 2020-2020, The Infinium developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#ifndef COMMON_H
#define COMMON_H

#include <cstdint>
#include <QString>

class QUrl;

constexpr const char CURRENCY_TICKER[] = "INF";
//constexpr const uint64_t MAXIMUM_UNSYNCED_BLOCKS_WHEN_SEND_AVAILABLE = 5;
constexpr const uint64_t COIN = 1000000000000;
constexpr const uint32_t CONFIRMATIONS = 5;
constexpr const int NUMBER_OF_DECIMAL_PLACES = 12;
constexpr const int64_t DEFAULT_MIXIN_VALUE = 6;
constexpr const int64_t MAX_MIXIN_VALUE = 1000;
constexpr const int64_t CRITICAL_MIXIN_BOUND = 3;
constexpr const int64_t NORMAL_MIXIN_BOUND = 6;
constexpr const uint16_t RPC_DEFAULT_PORT = 27855;

constexpr const uint64_t DIFFICULTY_TARGET = 90; // seconds
constexpr const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS = 1;
constexpr const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;
constexpr const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER = 500000000;

namespace WalletGUI
{

constexpr const char MAIN_NET_COLOR[] = "#121de3";
constexpr const char STAGE_NET_COLOR[] = "#44EE86";
constexpr const char TEST_NET_COLOR[] = "#8644EE";

bool isTransactionSpendTimeUnlocked(uint64_t unlockTime, uint32_t blockIndex, uint64_t blockTimestampMedian);
QString formatUnsignedAmount(quint64 amount, bool trim = true);
QString formatAmount(qint64 amount);
QString formatHashRate(quint64 hashRate);
//quint64 convertAmountFromHumanReadable(double amount);
bool parseAmount(const QString& str, qint64& amount);

bool isIpOrHostName(const QString& string);

QString rpcUrlToString(const QUrl& url);

}

#endif // COMMON_H

