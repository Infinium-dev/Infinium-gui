/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__WalletModel_t {
    QByteArrayData data[79];
    char stringdata0[1481];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__WalletModel_t qt_meta_stringdata_WalletGUI__WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WalletGUI::WalletModel"
QT_MOC_LITERAL(1, 23, 18), // "getTransfersSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 29), // "RpcApi::GetTransfers::Request"
QT_MOC_LITERAL(4, 73, 3), // "req"
QT_MOC_LITERAL(5, 77, 14), // "RpcApi::Height"
QT_MOC_LITERAL(6, 92, 9), // "topHeight"
QT_MOC_LITERAL(7, 102, 13), // "fetchedSignal"
QT_MOC_LITERAL(8, 116, 20), // "nothingToFetchSignal"
QT_MOC_LITERAL(9, 137, 16), // "netChangedSignal"
QT_MOC_LITERAL(10, 154, 3), // "net"
QT_MOC_LITERAL(11, 158, 14), // "statusReceived"
QT_MOC_LITERAL(12, 173, 14), // "RpcApi::Status"
QT_MOC_LITERAL(13, 188, 6), // "status"
QT_MOC_LITERAL(14, 195, 17), // "transfersReceived"
QT_MOC_LITERAL(15, 213, 17), // "RpcApi::Transfers"
QT_MOC_LITERAL(16, 231, 7), // "history"
QT_MOC_LITERAL(17, 239, 11), // "from_height"
QT_MOC_LITERAL(18, 251, 9), // "to_height"
QT_MOC_LITERAL(19, 261, 18), // "walletInfoReceived"
QT_MOC_LITERAL(20, 280, 18), // "RpcApi::WalletInfo"
QT_MOC_LITERAL(21, 299, 4), // "info"
QT_MOC_LITERAL(22, 304, 15), // "balanceReceived"
QT_MOC_LITERAL(23, 320, 15), // "RpcApi::Balance"
QT_MOC_LITERAL(24, 336, 7), // "balance"
QT_MOC_LITERAL(25, 344, 12), // "stateChanged"
QT_MOC_LITERAL(26, 357, 20), // "RemoteWalletd::State"
QT_MOC_LITERAL(27, 378, 8), // "oldState"
QT_MOC_LITERAL(28, 387, 8), // "newState"
QT_MOC_LITERAL(29, 396, 7), // "Columns"
QT_MOC_LITERAL(30, 404, 20), // "COLUMN_FIRST_ADDRESS"
QT_MOC_LITERAL(31, 425, 18), // "COLUMN_WALLET_TYPE"
QT_MOC_LITERAL(32, 444, 34), // "COLUMN_CAN_VIEW_OUTGOING_ADDR..."
QT_MOC_LITERAL(33, 479, 26), // "COLUMN_HAS_VIEW_SECRET_KEY"
QT_MOC_LITERAL(34, 506, 32), // "COLUMN_WALLET_CREATION_TIMESTAMP"
QT_MOC_LITERAL(35, 539, 26), // "COLUMN_TOTAL_ADDRESS_COUNT"
QT_MOC_LITERAL(36, 566, 10), // "COLUMN_NET"
QT_MOC_LITERAL(37, 577, 22), // "COLUMN_SECRET_VIEW_KEY"
QT_MOC_LITERAL(38, 600, 22), // "COLUMN_PUBLIC_VIEW_KEY"
QT_MOC_LITERAL(39, 623, 18), // "COLUMN_IMPORT_KEYS"
QT_MOC_LITERAL(40, 642, 15), // "COLUMN_MNEMONIC"
QT_MOC_LITERAL(41, 658, 16), // "COLUMN_VIEW_ONLY"
QT_MOC_LITERAL(42, 675, 18), // "COLUMN_UNLOCK_TIME"
QT_MOC_LITERAL(43, 694, 17), // "COLUMN_PAYMENT_ID"
QT_MOC_LITERAL(44, 712, 16), // "COLUMN_ANONYMITY"
QT_MOC_LITERAL(45, 729, 11), // "COLUMN_HASH"
QT_MOC_LITERAL(46, 741, 18), // "COLUMN_PREFIX_HASH"
QT_MOC_LITERAL(47, 760, 18), // "COLUMN_INPUTS_HASH"
QT_MOC_LITERAL(48, 779, 10), // "COLUMN_FEE"
QT_MOC_LITERAL(49, 790, 9), // "COLUMN_PK"
QT_MOC_LITERAL(50, 800, 12), // "COLUMN_EXTRA"
QT_MOC_LITERAL(51, 813, 15), // "COLUMN_COINBASE"
QT_MOC_LITERAL(52, 829, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(53, 843, 19), // "COLUMN_BLOCK_HEIGHT"
QT_MOC_LITERAL(54, 863, 17), // "COLUMN_BLOCK_HASH"
QT_MOC_LITERAL(55, 881, 16), // "COLUMN_TIMESTAMP"
QT_MOC_LITERAL(56, 898, 12), // "COLUMN_PROOF"
QT_MOC_LITERAL(57, 911, 23), // "COLUMN_TOP_BLOCK_HEIGHT"
QT_MOC_LITERAL(58, 935, 26), // "COLUMN_TOP_BLOCK_TIMESTAMP"
QT_MOC_LITERAL(59, 962, 33), // "COLUMN_TOP_BLOCK_TIMESTAMP_ME..."
QT_MOC_LITERAL(60, 996, 21), // "COLUMN_TOP_BLOCK_HASH"
QT_MOC_LITERAL(61, 1018, 27), // "COLUMN_TOP_BLOCK_DIFFICULTY"
QT_MOC_LITERAL(62, 1046, 23), // "COLUMN_NETWORK_HASHRATE"
QT_MOC_LITERAL(63, 1070, 24), // "COLUMN_LOWER_LEVEL_ERROR"
QT_MOC_LITERAL(64, 1095, 39), // "COLUMN_RECOMMENDED_MAX_TRANSA..."
QT_MOC_LITERAL(65, 1135, 21), // "COLUMN_TXPOOL_VERSION"
QT_MOC_LITERAL(66, 1157, 26), // "COLUMN_PEER_COUNT_OUTGOING"
QT_MOC_LITERAL(67, 1184, 26), // "COLUMN_PEER_COUNT_INCOMING"
QT_MOC_LITERAL(68, 1211, 31), // "COLUMN_RECOMMENDED_FEE_PER_BYTE"
QT_MOC_LITERAL(69, 1243, 29), // "COLUMN_KNOWN_TOP_BLOCK_HEIGHT"
QT_MOC_LITERAL(70, 1273, 21), // "COLUMN_PEER_COUNT_SUM"
QT_MOC_LITERAL(71, 1295, 12), // "COLUMN_STATE"
QT_MOC_LITERAL(72, 1308, 16), // "COLUMN_SPENDABLE"
QT_MOC_LITERAL(73, 1325, 21), // "COLUMN_SPENDABLE_DUST"
QT_MOC_LITERAL(74, 1347, 28), // "COLUMN_LOCKED_OR_UNCONFIRMED"
QT_MOC_LITERAL(75, 1376, 24), // "COLUMN_SPENDABLE_OUTPUTS"
QT_MOC_LITERAL(76, 1401, 29), // "COLUMN_SPENDABLE_DUST_OUTPUTS"
QT_MOC_LITERAL(77, 1431, 36), // "COLUMN_LOCKED_OR_UNCONFIRMED_..."
QT_MOC_LITERAL(78, 1468, 12) // "COLUMN_TOTAL"

    },
    "WalletGUI::WalletModel\0getTransfersSignal\0"
    "\0RpcApi::GetTransfers::Request\0req\0"
    "RpcApi::Height\0topHeight\0fetchedSignal\0"
    "nothingToFetchSignal\0netChangedSignal\0"
    "net\0statusReceived\0RpcApi::Status\0"
    "status\0transfersReceived\0RpcApi::Transfers\0"
    "history\0from_height\0to_height\0"
    "walletInfoReceived\0RpcApi::WalletInfo\0"
    "info\0balanceReceived\0RpcApi::Balance\0"
    "balance\0stateChanged\0RemoteWalletd::State\0"
    "oldState\0newState\0Columns\0"
    "COLUMN_FIRST_ADDRESS\0COLUMN_WALLET_TYPE\0"
    "COLUMN_CAN_VIEW_OUTGOING_ADDRESSES\0"
    "COLUMN_HAS_VIEW_SECRET_KEY\0"
    "COLUMN_WALLET_CREATION_TIMESTAMP\0"
    "COLUMN_TOTAL_ADDRESS_COUNT\0COLUMN_NET\0"
    "COLUMN_SECRET_VIEW_KEY\0COLUMN_PUBLIC_VIEW_KEY\0"
    "COLUMN_IMPORT_KEYS\0COLUMN_MNEMONIC\0"
    "COLUMN_VIEW_ONLY\0COLUMN_UNLOCK_TIME\0"
    "COLUMN_PAYMENT_ID\0COLUMN_ANONYMITY\0"
    "COLUMN_HASH\0COLUMN_PREFIX_HASH\0"
    "COLUMN_INPUTS_HASH\0COLUMN_FEE\0COLUMN_PK\0"
    "COLUMN_EXTRA\0COLUMN_COINBASE\0COLUMN_AMOUNT\0"
    "COLUMN_BLOCK_HEIGHT\0COLUMN_BLOCK_HASH\0"
    "COLUMN_TIMESTAMP\0COLUMN_PROOF\0"
    "COLUMN_TOP_BLOCK_HEIGHT\0"
    "COLUMN_TOP_BLOCK_TIMESTAMP\0"
    "COLUMN_TOP_BLOCK_TIMESTAMP_MEDIAN\0"
    "COLUMN_TOP_BLOCK_HASH\0COLUMN_TOP_BLOCK_DIFFICULTY\0"
    "COLUMN_NETWORK_HASHRATE\0"
    "COLUMN_LOWER_LEVEL_ERROR\0"
    "COLUMN_RECOMMENDED_MAX_TRANSACTION_SIZE\0"
    "COLUMN_TXPOOL_VERSION\0COLUMN_PEER_COUNT_OUTGOING\0"
    "COLUMN_PEER_COUNT_INCOMING\0"
    "COLUMN_RECOMMENDED_FEE_PER_BYTE\0"
    "COLUMN_KNOWN_TOP_BLOCK_HEIGHT\0"
    "COLUMN_PEER_COUNT_SUM\0COLUMN_STATE\0"
    "COLUMN_SPENDABLE\0COLUMN_SPENDABLE_DUST\0"
    "COLUMN_LOCKED_OR_UNCONFIRMED\0"
    "COLUMN_SPENDABLE_OUTPUTS\0"
    "COLUMN_SPENDABLE_DUST_OUTPUTS\0"
    "COLUMN_LOCKED_OR_UNCONFIRMED_OUTPUTS\0"
    "COLUMN_TOTAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__WalletModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   69,    2, 0x0a /* Public */,
      14,    4,   72,    2, 0x0a /* Public */,
      19,    1,   81,    2, 0x0a /* Public */,
      22,    1,   84,    2, 0x0a /* Public */,
      25,    2,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,   16,    6,   17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 26,   27,   28,

 // enums: name, alias, flags, count, data
      29,   29, 0x0,   49,   97,

 // enum data: key, value
      30, uint(WalletGUI::WalletModel::COLUMN_FIRST_ADDRESS),
      31, uint(WalletGUI::WalletModel::COLUMN_WALLET_TYPE),
      32, uint(WalletGUI::WalletModel::COLUMN_CAN_VIEW_OUTGOING_ADDRESSES),
      33, uint(WalletGUI::WalletModel::COLUMN_HAS_VIEW_SECRET_KEY),
      34, uint(WalletGUI::WalletModel::COLUMN_WALLET_CREATION_TIMESTAMP),
      35, uint(WalletGUI::WalletModel::COLUMN_TOTAL_ADDRESS_COUNT),
      36, uint(WalletGUI::WalletModel::COLUMN_NET),
      37, uint(WalletGUI::WalletModel::COLUMN_SECRET_VIEW_KEY),
      38, uint(WalletGUI::WalletModel::COLUMN_PUBLIC_VIEW_KEY),
      39, uint(WalletGUI::WalletModel::COLUMN_IMPORT_KEYS),
      40, uint(WalletGUI::WalletModel::COLUMN_MNEMONIC),
      41, uint(WalletGUI::WalletModel::COLUMN_VIEW_ONLY),
      42, uint(WalletGUI::WalletModel::COLUMN_UNLOCK_TIME),
      43, uint(WalletGUI::WalletModel::COLUMN_PAYMENT_ID),
      44, uint(WalletGUI::WalletModel::COLUMN_ANONYMITY),
      45, uint(WalletGUI::WalletModel::COLUMN_HASH),
      46, uint(WalletGUI::WalletModel::COLUMN_PREFIX_HASH),
      47, uint(WalletGUI::WalletModel::COLUMN_INPUTS_HASH),
      48, uint(WalletGUI::WalletModel::COLUMN_FEE),
      49, uint(WalletGUI::WalletModel::COLUMN_PK),
      50, uint(WalletGUI::WalletModel::COLUMN_EXTRA),
      51, uint(WalletGUI::WalletModel::COLUMN_COINBASE),
      52, uint(WalletGUI::WalletModel::COLUMN_AMOUNT),
      53, uint(WalletGUI::WalletModel::COLUMN_BLOCK_HEIGHT),
      54, uint(WalletGUI::WalletModel::COLUMN_BLOCK_HASH),
      55, uint(WalletGUI::WalletModel::COLUMN_TIMESTAMP),
      56, uint(WalletGUI::WalletModel::COLUMN_PROOF),
      57, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_HEIGHT),
      58, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_TIMESTAMP),
      59, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_TIMESTAMP_MEDIAN),
      60, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_HASH),
      61, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_DIFFICULTY),
      62, uint(WalletGUI::WalletModel::COLUMN_NETWORK_HASHRATE),
      63, uint(WalletGUI::WalletModel::COLUMN_LOWER_LEVEL_ERROR),
      64, uint(WalletGUI::WalletModel::COLUMN_RECOMMENDED_MAX_TRANSACTION_SIZE),
      65, uint(WalletGUI::WalletModel::COLUMN_TXPOOL_VERSION),
      66, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_OUTGOING),
      67, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_INCOMING),
      68, uint(WalletGUI::WalletModel::COLUMN_RECOMMENDED_FEE_PER_BYTE),
      69, uint(WalletGUI::WalletModel::COLUMN_KNOWN_TOP_BLOCK_HEIGHT),
      70, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_SUM),
      71, uint(WalletGUI::WalletModel::COLUMN_STATE),
      72, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE),
      73, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE_DUST),
      74, uint(WalletGUI::WalletModel::COLUMN_LOCKED_OR_UNCONFIRMED),
      75, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE_OUTPUTS),
      76, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE_DUST_OUTPUTS),
      77, uint(WalletGUI::WalletModel::COLUMN_LOCKED_OR_UNCONFIRMED_OUTPUTS),
      78, uint(WalletGUI::WalletModel::COLUMN_TOTAL),

       0        // eod
};

void WalletGUI::WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getTransfersSignal((*reinterpret_cast< const RpcApi::GetTransfers::Request(*)>(_a[1])),(*reinterpret_cast< RpcApi::Height(*)>(_a[2]))); break;
        case 1: _t->fetchedSignal(); break;
        case 2: _t->nothingToFetchSignal(); break;
        case 3: _t->netChangedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->statusReceived((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 5: _t->transfersReceived((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1])),(*reinterpret_cast< RpcApi::Height(*)>(_a[2])),(*reinterpret_cast< RpcApi::Height(*)>(_a[3])),(*reinterpret_cast< RpcApi::Height(*)>(_a[4]))); break;
        case 6: _t->walletInfoReceived((*reinterpret_cast< const RpcApi::WalletInfo(*)>(_a[1]))); break;
        case 7: _t->balanceReceived((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 8: _t->stateChanged((*reinterpret_cast< RemoteWalletd::State(*)>(_a[1])),(*reinterpret_cast< RemoteWalletd::State(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletModel::*)(const RpcApi::GetTransfers::Request & , RpcApi::Height );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::getTransfersSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::fetchedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::nothingToFetchSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::netChangedSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::WalletModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_WalletGUI__WalletModel.data,
    qt_meta_data_WalletGUI__WalletModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGUI::WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::WalletModel::getTransfersSignal(const RpcApi::GetTransfers::Request & _t1, RpcApi::Height _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::WalletModel::fetchedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGUI::WalletModel::nothingToFetchSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGUI::WalletModel::netChangedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
