/****************************************************************************
** Meta object code from reading C++ file 'walletd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/walletd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__RemoteWalletd_t {
    QByteArrayData data[69];
    char stringdata0[1003];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__RemoteWalletd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__RemoteWalletd_t qt_meta_stringdata_WalletGUI__RemoteWalletd = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::RemoteWalletd"
QT_MOC_LITERAL(1, 25, 20), // "statusReceivedSignal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "RpcApi::Status"
QT_MOC_LITERAL(4, 62, 6), // "status"
QT_MOC_LITERAL(5, 69, 23), // "transfersReceivedSignal"
QT_MOC_LITERAL(6, 93, 17), // "RpcApi::Transfers"
QT_MOC_LITERAL(7, 111, 7), // "history"
QT_MOC_LITERAL(8, 119, 14), // "RpcApi::Height"
QT_MOC_LITERAL(9, 134, 9), // "topHeight"
QT_MOC_LITERAL(10, 144, 11), // "from_height"
QT_MOC_LITERAL(11, 156, 9), // "to_height"
QT_MOC_LITERAL(12, 166, 24), // "walletInfoReceivedSignal"
QT_MOC_LITERAL(13, 191, 18), // "RpcApi::WalletInfo"
QT_MOC_LITERAL(14, 210, 4), // "info"
QT_MOC_LITERAL(15, 215, 21), // "balanceReceivedSignal"
QT_MOC_LITERAL(16, 237, 15), // "RpcApi::Balance"
QT_MOC_LITERAL(17, 253, 7), // "balance"
QT_MOC_LITERAL(18, 261, 22), // "createTxReceivedSignal"
QT_MOC_LITERAL(19, 284, 17), // "RpcApi::CreatedTx"
QT_MOC_LITERAL(20, 302, 2), // "tx"
QT_MOC_LITERAL(21, 305, 20), // "sendTxReceivedSignal"
QT_MOC_LITERAL(22, 326, 14), // "RpcApi::SentTx"
QT_MOC_LITERAL(23, 341, 20), // "proofsReceivedSignal"
QT_MOC_LITERAL(24, 362, 14), // "RpcApi::Proofs"
QT_MOC_LITERAL(25, 377, 6), // "proofs"
QT_MOC_LITERAL(26, 384, 24), // "checkProofReceivedSignal"
QT_MOC_LITERAL(27, 409, 18), // "RpcApi::ProofCheck"
QT_MOC_LITERAL(28, 428, 10), // "proofCheck"
QT_MOC_LITERAL(29, 439, 18), // "networkErrorSignal"
QT_MOC_LITERAL(30, 458, 11), // "errorString"
QT_MOC_LITERAL(31, 470, 22), // "jsonParsingErrorSignal"
QT_MOC_LITERAL(32, 493, 7), // "message"
QT_MOC_LITERAL(33, 501, 23), // "jsonErrorResponseSignal"
QT_MOC_LITERAL(34, 525, 2), // "id"
QT_MOC_LITERAL(35, 528, 14), // "JsonRpc::Error"
QT_MOC_LITERAL(36, 543, 5), // "error"
QT_MOC_LITERAL(37, 549, 26), // "jsonUnknownMessageIdSignal"
QT_MOC_LITERAL(38, 576, 13), // "errorOccurred"
QT_MOC_LITERAL(39, 590, 18), // "stateChangedSignal"
QT_MOC_LITERAL(40, 609, 5), // "State"
QT_MOC_LITERAL(41, 615, 8), // "oldState"
QT_MOC_LITERAL(42, 624, 8), // "newState"
QT_MOC_LITERAL(43, 633, 15), // "connectedSignal"
QT_MOC_LITERAL(44, 649, 10), // "packetSent"
QT_MOC_LITERAL(45, 660, 4), // "data"
QT_MOC_LITERAL(46, 665, 14), // "packetReceived"
QT_MOC_LITERAL(47, 680, 18), // "authRequiredSignal"
QT_MOC_LITERAL(48, 699, 15), // "QAuthenticator*"
QT_MOC_LITERAL(49, 715, 13), // "authenticator"
QT_MOC_LITERAL(50, 729, 14), // "statusReceived"
QT_MOC_LITERAL(51, 744, 9), // "sendAgain"
QT_MOC_LITERAL(52, 754, 17), // "transfersReceived"
QT_MOC_LITERAL(53, 772, 18), // "walletInfoReceived"
QT_MOC_LITERAL(54, 791, 15), // "balanceReceived"
QT_MOC_LITERAL(55, 807, 16), // "createTxReceived"
QT_MOC_LITERAL(56, 824, 14), // "sendTxReceived"
QT_MOC_LITERAL(57, 839, 14), // "proofsReceived"
QT_MOC_LITERAL(58, 854, 6), // "result"
QT_MOC_LITERAL(59, 861, 18), // "checkProofReceived"
QT_MOC_LITERAL(60, 880, 12), // "networkError"
QT_MOC_LITERAL(61, 893, 16), // "jsonParsingError"
QT_MOC_LITERAL(62, 910, 17), // "jsonErrorResponse"
QT_MOC_LITERAL(63, 928, 20), // "jsonUnknownMessageId"
QT_MOC_LITERAL(64, 949, 7), // "STOPPED"
QT_MOC_LITERAL(65, 957, 10), // "CONNECTING"
QT_MOC_LITERAL(66, 968, 9), // "CONNECTED"
QT_MOC_LITERAL(67, 978, 13), // "NETWORK_ERROR"
QT_MOC_LITERAL(68, 992, 10) // "JSON_ERROR"

    },
    "WalletGUI::RemoteWalletd\0statusReceivedSignal\0"
    "\0RpcApi::Status\0status\0transfersReceivedSignal\0"
    "RpcApi::Transfers\0history\0RpcApi::Height\0"
    "topHeight\0from_height\0to_height\0"
    "walletInfoReceivedSignal\0RpcApi::WalletInfo\0"
    "info\0balanceReceivedSignal\0RpcApi::Balance\0"
    "balance\0createTxReceivedSignal\0"
    "RpcApi::CreatedTx\0tx\0sendTxReceivedSignal\0"
    "RpcApi::SentTx\0proofsReceivedSignal\0"
    "RpcApi::Proofs\0proofs\0checkProofReceivedSignal\0"
    "RpcApi::ProofCheck\0proofCheck\0"
    "networkErrorSignal\0errorString\0"
    "jsonParsingErrorSignal\0message\0"
    "jsonErrorResponseSignal\0id\0JsonRpc::Error\0"
    "error\0jsonUnknownMessageIdSignal\0"
    "errorOccurred\0stateChangedSignal\0State\0"
    "oldState\0newState\0connectedSignal\0"
    "packetSent\0data\0packetReceived\0"
    "authRequiredSignal\0QAuthenticator*\0"
    "authenticator\0statusReceived\0sendAgain\0"
    "transfersReceived\0walletInfoReceived\0"
    "balanceReceived\0createTxReceived\0"
    "sendTxReceived\0proofsReceived\0result\0"
    "checkProofReceived\0networkError\0"
    "jsonParsingError\0jsonErrorResponse\0"
    "jsonUnknownMessageId\0STOPPED\0CONNECTING\0"
    "CONNECTED\0NETWORK_ERROR\0JSON_ERROR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__RemoteWalletd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       1,  270, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       5,    4,  167,    2, 0x06 /* Public */,
      12,    1,  176,    2, 0x06 /* Public */,
      15,    1,  179,    2, 0x06 /* Public */,
      18,    1,  182,    2, 0x06 /* Public */,
      21,    1,  185,    2, 0x06 /* Public */,
      23,    1,  188,    2, 0x06 /* Public */,
      26,    1,  191,    2, 0x06 /* Public */,
      29,    1,  194,    2, 0x06 /* Public */,
      31,    1,  197,    2, 0x06 /* Public */,
      33,    2,  200,    2, 0x06 /* Public */,
      37,    1,  205,    2, 0x06 /* Public */,
      38,    0,  208,    2, 0x06 /* Public */,
      39,    2,  209,    2, 0x06 /* Public */,
      43,    0,  214,    2, 0x06 /* Public */,
      44,    1,  215,    2, 0x06 /* Public */,
      46,    1,  218,    2, 0x06 /* Public */,
      47,    1,  221,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      50,    2,  224,    2, 0x08 /* Private */,
      52,    4,  229,    2, 0x08 /* Private */,
      53,    1,  238,    2, 0x08 /* Private */,
      54,    1,  241,    2, 0x08 /* Private */,
      55,    1,  244,    2, 0x08 /* Private */,
      56,    1,  247,    2, 0x08 /* Private */,
      57,    1,  250,    2, 0x08 /* Private */,
      59,    1,  253,    2, 0x08 /* Private */,
      60,    1,  256,    2, 0x08 /* Private */,
      61,    1,  259,    2, 0x08 /* Private */,
      62,    2,  262,    2, 0x08 /* Private */,
      63,    1,  267,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    7,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 35,   34,   36,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40,   41,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, 0x80000000 | 48,   49,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   51,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    7,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   58,
    QMetaType::Void, 0x80000000 | 27,   58,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 35,   34,   36,
    QMetaType::Void, QMetaType::QString,   34,

 // enums: name, alias, flags, count, data
      40,   40, 0x2,    5,  275,

 // enum data: key, value
      64, uint(WalletGUI::RemoteWalletd::State::STOPPED),
      65, uint(WalletGUI::RemoteWalletd::State::CONNECTING),
      66, uint(WalletGUI::RemoteWalletd::State::CONNECTED),
      67, uint(WalletGUI::RemoteWalletd::State::NETWORK_ERROR),
      68, uint(WalletGUI::RemoteWalletd::State::JSON_ERROR),

       0        // eod
};

void WalletGUI::RemoteWalletd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteWalletd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusReceivedSignal((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 1: _t->transfersReceivedSignal((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1])),(*reinterpret_cast< RpcApi::Height(*)>(_a[2])),(*reinterpret_cast< RpcApi::Height(*)>(_a[3])),(*reinterpret_cast< RpcApi::Height(*)>(_a[4]))); break;
        case 2: _t->walletInfoReceivedSignal((*reinterpret_cast< const RpcApi::WalletInfo(*)>(_a[1]))); break;
        case 3: _t->balanceReceivedSignal((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 4: _t->createTxReceivedSignal((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 5: _t->sendTxReceivedSignal((*reinterpret_cast< const RpcApi::SentTx(*)>(_a[1]))); break;
        case 6: _t->proofsReceivedSignal((*reinterpret_cast< const RpcApi::Proofs(*)>(_a[1]))); break;
        case 7: _t->checkProofReceivedSignal((*reinterpret_cast< const RpcApi::ProofCheck(*)>(_a[1]))); break;
        case 8: _t->networkErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->jsonParsingErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->jsonErrorResponseSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const JsonRpc::Error(*)>(_a[2]))); break;
        case 11: _t->jsonUnknownMessageIdSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->errorOccurred(); break;
        case 13: _t->stateChangedSignal((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        case 14: _t->connectedSignal(); break;
        case 15: _t->packetSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: _t->packetReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 17: _t->authRequiredSignal((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 18: _t->statusReceived((*reinterpret_cast< const RpcApi::Status(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->transfersReceived((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1])),(*reinterpret_cast< RpcApi::Height(*)>(_a[2])),(*reinterpret_cast< RpcApi::Height(*)>(_a[3])),(*reinterpret_cast< RpcApi::Height(*)>(_a[4]))); break;
        case 20: _t->walletInfoReceived((*reinterpret_cast< const RpcApi::WalletInfo(*)>(_a[1]))); break;
        case 21: _t->balanceReceived((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 22: _t->createTxReceived((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 23: _t->sendTxReceived((*reinterpret_cast< const RpcApi::SentTx(*)>(_a[1]))); break;
        case 24: _t->proofsReceived((*reinterpret_cast< const RpcApi::Proofs(*)>(_a[1]))); break;
        case 25: _t->checkProofReceived((*reinterpret_cast< const RpcApi::ProofCheck(*)>(_a[1]))); break;
        case 26: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->jsonParsingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->jsonErrorResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const JsonRpc::Error(*)>(_a[2]))); break;
        case 29: _t->jsonUnknownMessageId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::Status & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::statusReceivedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::Transfers & , RpcApi::Height , RpcApi::Height , RpcApi::Height );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::transfersReceivedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::WalletInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::walletInfoReceivedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::Balance & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::balanceReceivedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::CreatedTx & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::createTxReceivedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::SentTx & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::sendTxReceivedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::Proofs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::proofsReceivedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const RpcApi::ProofCheck & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::checkProofReceivedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::networkErrorSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::jsonParsingErrorSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QString & , const JsonRpc::Error & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::jsonErrorResponseSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::jsonUnknownMessageIdSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::errorOccurred)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(State , State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::stateChangedSignal)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::connectedSignal)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::packetSent)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::packetReceived)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (RemoteWalletd::*)(QAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWalletd::authRequiredSignal)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::RemoteWalletd::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WalletGUI__RemoteWalletd.data,
    qt_meta_data_WalletGUI__RemoteWalletd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::RemoteWalletd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::RemoteWalletd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__RemoteWalletd.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGUI::RemoteWalletd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::RemoteWalletd::statusReceivedSignal(const RpcApi::Status & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::RemoteWalletd::transfersReceivedSignal(const RpcApi::Transfers & _t1, RpcApi::Height _t2, RpcApi::Height _t3, RpcApi::Height _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGUI::RemoteWalletd::walletInfoReceivedSignal(const RpcApi::WalletInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGUI::RemoteWalletd::balanceReceivedSignal(const RpcApi::Balance & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::RemoteWalletd::createTxReceivedSignal(const RpcApi::CreatedTx & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::RemoteWalletd::sendTxReceivedSignal(const RpcApi::SentTx & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::RemoteWalletd::proofsReceivedSignal(const RpcApi::Proofs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGUI::RemoteWalletd::checkProofReceivedSignal(const RpcApi::ProofCheck & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGUI::RemoteWalletd::networkErrorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGUI::RemoteWalletd::jsonParsingErrorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGUI::RemoteWalletd::jsonErrorResponseSignal(const QString & _t1, const JsonRpc::Error & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGUI::RemoteWalletd::jsonUnknownMessageIdSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGUI::RemoteWalletd::errorOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void WalletGUI::RemoteWalletd::stateChangedSignal(State _t1, State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGUI::RemoteWalletd::connectedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void WalletGUI::RemoteWalletd::packetSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WalletGUI::RemoteWalletd::packetReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WalletGUI::RemoteWalletd::authRequiredSignal(QAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
struct qt_meta_stringdata_WalletGUI__BuiltinWalletd_t {
    QByteArrayData data[52];
    char stringdata0[950];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__BuiltinWalletd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__BuiltinWalletd_t qt_meta_stringdata_WalletGUI__BuiltinWalletd = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WalletGUI::BuiltinWalletd"
QT_MOC_LITERAL(1, 26, 26), // "daemonStandardOutputSignal"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "data"
QT_MOC_LITERAL(4, 59, 25), // "daemonStandardErrorSignal"
QT_MOC_LITERAL(5, 85, 19), // "daemonStartedSignal"
QT_MOC_LITERAL(6, 105, 25), // "daemonErrorOccurredSignal"
QT_MOC_LITERAL(7, 131, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(8, 154, 5), // "error"
QT_MOC_LITERAL(9, 160, 11), // "errorString"
QT_MOC_LITERAL(10, 172, 20), // "daemonFinishedSignal"
QT_MOC_LITERAL(11, 193, 8), // "exitCode"
QT_MOC_LITERAL(12, 202, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(13, 223, 10), // "exitStatus"
QT_MOC_LITERAL(14, 234, 18), // "stateChangedSignal"
QT_MOC_LITERAL(15, 253, 5), // "State"
QT_MOC_LITERAL(16, 259, 8), // "oldState"
QT_MOC_LITERAL(17, 268, 8), // "newState"
QT_MOC_LITERAL(18, 277, 21), // "requestPasswordSignal"
QT_MOC_LITERAL(19, 299, 37), // "requestPasswordWithConfirmati..."
QT_MOC_LITERAL(20, 337, 30), // "requestPasswordForExportSignal"
QT_MOC_LITERAL(21, 368, 9), // "QProcess*"
QT_MOC_LITERAL(22, 378, 7), // "walletd"
QT_MOC_LITERAL(23, 386, 8), // "QString*"
QT_MOC_LITERAL(24, 395, 4), // "pass"
QT_MOC_LITERAL(25, 400, 15), // "requestMnemonic"
QT_MOC_LITERAL(26, 416, 25), // "daemonStandardOutputReady"
QT_MOC_LITERAL(27, 442, 24), // "daemonStandardErrorReady"
QT_MOC_LITERAL(28, 467, 13), // "daemonStarted"
QT_MOC_LITERAL(29, 481, 19), // "daemonErrorOccurred"
QT_MOC_LITERAL(30, 501, 14), // "daemonFinished"
QT_MOC_LITERAL(31, 516, 7), // "STOPPED"
QT_MOC_LITERAL(32, 524, 8), // "STARTING"
QT_MOC_LITERAL(33, 533, 7), // "RUNNING"
QT_MOC_LITERAL(34, 541, 7), // "CRASHED"
QT_MOC_LITERAL(35, 549, 9), // "FINISHING"
QT_MOC_LITERAL(36, 559, 11), // "ReturnCodes"
QT_MOC_LITERAL(37, 571, 24), // "BYTECOIND_DATABASE_ERROR"
QT_MOC_LITERAL(38, 596, 25), // "BYTECOIND_ALREADY_RUNNING"
QT_MOC_LITERAL(39, 622, 24), // "WALLETD_BIND_PORT_IN_USE"
QT_MOC_LITERAL(40, 647, 26), // "BYTECOIND_BIND_PORT_IN_USE"
QT_MOC_LITERAL(41, 674, 20), // "BYTECOIND_WRONG_ARGS"
QT_MOC_LITERAL(42, 695, 22), // "WALLET_FILE_READ_ERROR"
QT_MOC_LITERAL(43, 718, 27), // "WALLET_FILE_UNKNOWN_VERSION"
QT_MOC_LITERAL(44, 746, 25), // "WALLET_FILE_DECRYPT_ERROR"
QT_MOC_LITERAL(45, 772, 23), // "WALLET_FILE_WRITE_ERROR"
QT_MOC_LITERAL(46, 796, 18), // "WALLET_FILE_EXISTS"
QT_MOC_LITERAL(47, 815, 28), // "WALLET_WITH_SAME_KEYS_IN_USE"
QT_MOC_LITERAL(48, 844, 18), // "WALLETD_WRONG_ARGS"
QT_MOC_LITERAL(49, 863, 30), // "WALLETD_EXPORTKEYS_MORETHANONE"
QT_MOC_LITERAL(50, 894, 20), // "WALLETD_MNEMONIC_CRC"
QT_MOC_LITERAL(51, 915, 34) // "WALLET_FILE_HARDWARE_DECRYPT_..."

    },
    "WalletGUI::BuiltinWalletd\0"
    "daemonStandardOutputSignal\0\0data\0"
    "daemonStandardErrorSignal\0daemonStartedSignal\0"
    "daemonErrorOccurredSignal\0"
    "QProcess::ProcessError\0error\0errorString\0"
    "daemonFinishedSignal\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "stateChangedSignal\0State\0oldState\0"
    "newState\0requestPasswordSignal\0"
    "requestPasswordWithConfirmationSignal\0"
    "requestPasswordForExportSignal\0QProcess*\0"
    "walletd\0QString*\0pass\0requestMnemonic\0"
    "daemonStandardOutputReady\0"
    "daemonStandardErrorReady\0daemonStarted\0"
    "daemonErrorOccurred\0daemonFinished\0"
    "STOPPED\0STARTING\0RUNNING\0CRASHED\0"
    "FINISHING\0ReturnCodes\0BYTECOIND_DATABASE_ERROR\0"
    "BYTECOIND_ALREADY_RUNNING\0"
    "WALLETD_BIND_PORT_IN_USE\0"
    "BYTECOIND_BIND_PORT_IN_USE\0"
    "BYTECOIND_WRONG_ARGS\0WALLET_FILE_READ_ERROR\0"
    "WALLET_FILE_UNKNOWN_VERSION\0"
    "WALLET_FILE_DECRYPT_ERROR\0"
    "WALLET_FILE_WRITE_ERROR\0WALLET_FILE_EXISTS\0"
    "WALLET_WITH_SAME_KEYS_IN_USE\0"
    "WALLETD_WRONG_ARGS\0WALLETD_EXPORTKEYS_MORETHANONE\0"
    "WALLETD_MNEMONIC_CRC\0"
    "WALLET_FILE_HARDWARE_DECRYPT_ERROR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__BuiltinWalletd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    0,   95,    2, 0x06 /* Public */,
       6,    2,   96,    2, 0x06 /* Public */,
      10,    2,  101,    2, 0x06 /* Public */,
      14,    2,  106,    2, 0x06 /* Public */,
      18,    0,  111,    2, 0x06 /* Public */,
      19,    0,  112,    2, 0x06 /* Public */,
      20,    2,  113,    2, 0x06 /* Public */,
      25,    0,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  119,    2, 0x08 /* Private */,
      27,    0,  120,    2, 0x08 /* Private */,
      28,    0,  121,    2, 0x08 /* Private */,
      29,    1,  122,    2, 0x08 /* Private */,
      30,    2,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23,   22,   24,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,

 // enums: name, alias, flags, count, data
      15,   15, 0x2,    5,  140,
      36,   36, 0x2,   15,  150,

 // enum data: key, value
      31, uint(WalletGUI::BuiltinWalletd::State::STOPPED),
      32, uint(WalletGUI::BuiltinWalletd::State::STARTING),
      33, uint(WalletGUI::BuiltinWalletd::State::RUNNING),
      34, uint(WalletGUI::BuiltinWalletd::State::CRASHED),
      35, uint(WalletGUI::BuiltinWalletd::State::FINISHING),
      37, uint(WalletGUI::BuiltinWalletd::ReturnCodes::BYTECOIND_DATABASE_ERROR),
      38, uint(WalletGUI::BuiltinWalletd::ReturnCodes::BYTECOIND_ALREADY_RUNNING),
      39, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLETD_BIND_PORT_IN_USE),
      40, uint(WalletGUI::BuiltinWalletd::ReturnCodes::BYTECOIND_BIND_PORT_IN_USE),
      41, uint(WalletGUI::BuiltinWalletd::ReturnCodes::BYTECOIND_WRONG_ARGS),
      42, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_READ_ERROR),
      43, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_UNKNOWN_VERSION),
      44, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_DECRYPT_ERROR),
      45, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_WRITE_ERROR),
      46, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_EXISTS),
      47, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_WITH_SAME_KEYS_IN_USE),
      48, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLETD_WRONG_ARGS),
      49, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLETD_EXPORTKEYS_MORETHANONE),
      50, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLETD_MNEMONIC_CRC),
      51, uint(WalletGUI::BuiltinWalletd::ReturnCodes::WALLET_FILE_HARDWARE_DECRYPT_ERROR),

       0        // eod
};

void WalletGUI::BuiltinWalletd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BuiltinWalletd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->daemonStandardOutputSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->daemonStandardErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->daemonStartedSignal(); break;
        case 3: _t->daemonErrorOccurredSignal((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->daemonFinishedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->stateChangedSignal((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        case 6: _t->requestPasswordSignal(); break;
        case 7: _t->requestPasswordWithConfirmationSignal(); break;
        case 8: _t->requestPasswordForExportSignal((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 9: _t->requestMnemonic(); break;
        case 10: _t->daemonStandardOutputReady(); break;
        case 11: _t->daemonStandardErrorReady(); break;
        case 12: _t->daemonStarted(); break;
        case 13: _t->daemonErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 14: _t->daemonFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProcess* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BuiltinWalletd::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::daemonStandardOutputSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::daemonStandardErrorSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::daemonStartedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)(QProcess::ProcessError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::daemonErrorOccurredSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::daemonFinishedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)(State , State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::stateChangedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::requestPasswordSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::requestPasswordWithConfirmationSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)(QProcess * , QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::requestPasswordForExportSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BuiltinWalletd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuiltinWalletd::requestMnemonic)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::BuiltinWalletd::staticMetaObject = { {
    &RemoteWalletd::staticMetaObject,
    qt_meta_stringdata_WalletGUI__BuiltinWalletd.data,
    qt_meta_data_WalletGUI__BuiltinWalletd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::BuiltinWalletd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::BuiltinWalletd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__BuiltinWalletd.stringdata0))
        return static_cast<void*>(this);
    return RemoteWalletd::qt_metacast(_clname);
}

int WalletGUI::BuiltinWalletd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteWalletd::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::BuiltinWalletd::daemonStandardOutputSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::BuiltinWalletd::daemonStandardErrorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGUI::BuiltinWalletd::daemonStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGUI::BuiltinWalletd::daemonErrorOccurredSignal(QProcess::ProcessError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::BuiltinWalletd::daemonFinishedSignal(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::BuiltinWalletd::stateChangedSignal(State _t1, State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::BuiltinWalletd::requestPasswordSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WalletGUI::BuiltinWalletd::requestPasswordWithConfirmationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WalletGUI::BuiltinWalletd::requestPasswordForExportSignal(QProcess * _t1, QString * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGUI::BuiltinWalletd::requestMnemonic()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
