/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__WalletApplication_t {
    QByteArrayData data[64];
    char stringdata0[945];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__WalletApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__WalletApplication_t qt_meta_stringdata_WalletGUI__WalletApplication = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGUI::WalletApplication"
QT_MOC_LITERAL(1, 29, 16), // "builtinRunSignal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 21), // "remoteConnectedSignal"
QT_MOC_LITERAL(4, 69, 19), // "createWalletdSignal"
QT_MOC_LITERAL(5, 89, 24), // "exportViewOnlyKeysSignal"
QT_MOC_LITERAL(6, 114, 8), // "QWidget*"
QT_MOC_LITERAL(7, 123, 6), // "parent"
QT_MOC_LITERAL(8, 130, 10), // "isAmethyst"
QT_MOC_LITERAL(9, 141, 16), // "exportKeysSignal"
QT_MOC_LITERAL(10, 158, 19), // "updateIsReadySignal"
QT_MOC_LITERAL(11, 178, 10), // "newVersion"
QT_MOC_LITERAL(12, 189, 8), // "createTx"
QT_MOC_LITERAL(13, 198, 34), // "RpcApi::CreateTransaction::Re..."
QT_MOC_LITERAL(14, 233, 3), // "req"
QT_MOC_LITERAL(15, 237, 6), // "sendTx"
QT_MOC_LITERAL(16, 244, 32), // "RpcApi::SendTransaction::Request"
QT_MOC_LITERAL(17, 277, 11), // "createProof"
QT_MOC_LITERAL(18, 289, 6), // "txHash"
QT_MOC_LITERAL(19, 296, 12), // "tx_addresses"
QT_MOC_LITERAL(20, 309, 10), // "needToFind"
QT_MOC_LITERAL(21, 320, 15), // "sendCreateProof"
QT_MOC_LITERAL(22, 336, 7), // "message"
QT_MOC_LITERAL(23, 344, 9), // "addresses"
QT_MOC_LITERAL(24, 354, 10), // "checkProof"
QT_MOC_LITERAL(25, 365, 14), // "sendCheckProof"
QT_MOC_LITERAL(26, 380, 5), // "proof"
QT_MOC_LITERAL(27, 386, 13), // "restartDaemon"
QT_MOC_LITERAL(28, 400, 17), // "showWalletdParams"
QT_MOC_LITERAL(29, 418, 22), // "connectToRemoteWalletd"
QT_MOC_LITERAL(30, 441, 18), // "createLegacyWallet"
QT_MOC_LITERAL(31, 460, 12), // "createWallet"
QT_MOC_LITERAL(32, 473, 10), // "openWallet"
QT_MOC_LITERAL(33, 484, 25), // "restoreWalletFromMnemonic"
QT_MOC_LITERAL(34, 510, 12), // "remoteWallet"
QT_MOC_LITERAL(35, 523, 13), // "encryptWallet"
QT_MOC_LITERAL(36, 537, 10), // "importKeys"
QT_MOC_LITERAL(37, 548, 9), // "splashMsg"
QT_MOC_LITERAL(38, 558, 3), // "msg"
QT_MOC_LITERAL(39, 562, 18), // "exportViewOnlyKeys"
QT_MOC_LITERAL(40, 581, 10), // "exportKeys"
QT_MOC_LITERAL(41, 592, 18), // "connectedToWalletd"
QT_MOC_LITERAL(42, 611, 23), // "disconnectedFromWalletd"
QT_MOC_LITERAL(43, 635, 8), // "detached"
QT_MOC_LITERAL(44, 644, 19), // "daemonErrorOccurred"
QT_MOC_LITERAL(45, 664, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(46, 687, 5), // "error"
QT_MOC_LITERAL(47, 693, 11), // "errorString"
QT_MOC_LITERAL(48, 705, 14), // "daemonFinished"
QT_MOC_LITERAL(49, 720, 8), // "exitCode"
QT_MOC_LITERAL(50, 729, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(51, 750, 10), // "exitStatus"
QT_MOC_LITERAL(52, 761, 15), // "requestPassword"
QT_MOC_LITERAL(53, 777, 31), // "requestPasswordWithConfirmation"
QT_MOC_LITERAL(54, 809, 24), // "requestPasswordForExport"
QT_MOC_LITERAL(55, 834, 9), // "QProcess*"
QT_MOC_LITERAL(56, 844, 7), // "walletd"
QT_MOC_LITERAL(57, 852, 8), // "QString*"
QT_MOC_LITERAL(58, 861, 4), // "pass"
QT_MOC_LITERAL(59, 866, 18), // "requestWalletdAuth"
QT_MOC_LITERAL(60, 885, 15), // "QAuthenticator*"
QT_MOC_LITERAL(61, 901, 13), // "authenticator"
QT_MOC_LITERAL(62, 915, 14), // "checkForUpdate"
QT_MOC_LITERAL(63, 930, 14) // "updateReceived"

    },
    "WalletGUI::WalletApplication\0"
    "builtinRunSignal\0\0remoteConnectedSignal\0"
    "createWalletdSignal\0exportViewOnlyKeysSignal\0"
    "QWidget*\0parent\0isAmethyst\0exportKeysSignal\0"
    "updateIsReadySignal\0newVersion\0createTx\0"
    "RpcApi::CreateTransaction::Request\0"
    "req\0sendTx\0RpcApi::SendTransaction::Request\0"
    "createProof\0txHash\0tx_addresses\0"
    "needToFind\0sendCreateProof\0message\0"
    "addresses\0checkProof\0sendCheckProof\0"
    "proof\0restartDaemon\0showWalletdParams\0"
    "connectToRemoteWalletd\0createLegacyWallet\0"
    "createWallet\0openWallet\0"
    "restoreWalletFromMnemonic\0remoteWallet\0"
    "encryptWallet\0importKeys\0splashMsg\0"
    "msg\0exportViewOnlyKeys\0exportKeys\0"
    "connectedToWalletd\0disconnectedFromWalletd\0"
    "detached\0daemonErrorOccurred\0"
    "QProcess::ProcessError\0error\0errorString\0"
    "daemonFinished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0requestPassword\0"
    "requestPasswordWithConfirmation\0"
    "requestPasswordForExport\0QProcess*\0"
    "walletd\0QString*\0pass\0requestWalletdAuth\0"
    "QAuthenticator*\0authenticator\0"
    "checkForUpdate\0updateReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__WalletApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    0,  195,    2, 0x06 /* Public */,
       4,    0,  196,    2, 0x06 /* Public */,
       5,    2,  197,    2, 0x06 /* Public */,
       9,    2,  202,    2, 0x06 /* Public */,
      10,    1,  207,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  210,    2, 0x0a /* Public */,
      15,    1,  213,    2, 0x0a /* Public */,
      17,    3,  216,    2, 0x0a /* Public */,
      21,    3,  223,    2, 0x0a /* Public */,
      24,    0,  230,    2, 0x0a /* Public */,
      25,    1,  231,    2, 0x0a /* Public */,
      27,    0,  234,    2, 0x0a /* Public */,
      28,    0,  235,    2, 0x0a /* Public */,
      29,    0,  236,    2, 0x0a /* Public */,
      30,    1,  237,    2, 0x0a /* Public */,
      31,    1,  240,    2, 0x0a /* Public */,
      32,    1,  243,    2, 0x0a /* Public */,
      33,    1,  246,    2, 0x0a /* Public */,
      34,    1,  249,    2, 0x0a /* Public */,
      35,    1,  252,    2, 0x0a /* Public */,
      36,    1,  255,    2, 0x0a /* Public */,
      37,    1,  258,    2, 0x0a /* Public */,
      39,    1,  261,    2, 0x0a /* Public */,
      40,    1,  264,    2, 0x0a /* Public */,
      41,    0,  267,    2, 0x08 /* Private */,
      42,    0,  268,    2, 0x08 /* Private */,
      43,    0,  269,    2, 0x08 /* Private */,
      44,    2,  270,    2, 0x08 /* Private */,
      48,    2,  275,    2, 0x08 /* Private */,
      52,    0,  280,    2, 0x08 /* Private */,
      53,    0,  281,    2, 0x08 /* Private */,
      54,    2,  282,    2, 0x08 /* Private */,
      59,    1,  287,    2, 0x08 /* Private */,
      62,    0,  290,    2, 0x08 /* Private */,
      63,    0,  291,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    8,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,   18,   19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   18,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45, QMetaType::QString,   46,   47,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 50,   49,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 57,   56,   58,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::WalletApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->builtinRunSignal(); break;
        case 1: _t->remoteConnectedSignal(); break;
        case 2: _t->createWalletdSignal(QPrivateSignal()); break;
        case 3: _t->exportViewOnlyKeysSignal((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])), QPrivateSignal()); break;
        case 4: _t->exportKeysSignal((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])), QPrivateSignal()); break;
        case 5: _t->updateIsReadySignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->createTx((*reinterpret_cast< const RpcApi::CreateTransaction::Request(*)>(_a[1]))); break;
        case 7: _t->sendTx((*reinterpret_cast< const RpcApi::SendTransaction::Request(*)>(_a[1]))); break;
        case 8: _t->createProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->sendCreateProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 10: _t->checkProof(); break;
        case 11: _t->sendCheckProof((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->restartDaemon(); break;
        case 13: _t->showWalletdParams(); break;
        case 14: _t->connectToRemoteWalletd(); break;
        case 15: _t->createLegacyWallet((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 16: _t->createWallet((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 17: _t->openWallet((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 18: _t->restoreWalletFromMnemonic((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 19: _t->remoteWallet((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 20: _t->encryptWallet((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 21: _t->importKeys((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 22: _t->splashMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->exportViewOnlyKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->exportKeys((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->connectedToWalletd(); break;
        case 26: _t->disconnectedFromWalletd(); break;
        case 27: _t->detached(); break;
        case 28: _t->daemonErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->daemonFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 30: _t->requestPassword(); break;
        case 31: _t->requestPasswordWithConfirmation(); break;
        case 32: _t->requestPasswordForExport((*reinterpret_cast< QProcess*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 33: _t->requestWalletdAuth((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 34: _t->checkForUpdate(); break;
        case 35: _t->updateReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 32:
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
            using _t = void (WalletApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::builtinRunSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::remoteConnectedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletApplication::*)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::createWalletdSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletApplication::*)(QWidget * , bool , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::exportViewOnlyKeysSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WalletApplication::*)(QWidget * , bool , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::exportKeysSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WalletApplication::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletApplication::updateIsReadySignal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::WalletApplication::staticMetaObject = { {
    &QApplication::staticMetaObject,
    qt_meta_stringdata_WalletGUI__WalletApplication.data,
    qt_meta_data_WalletGUI__WalletApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::WalletApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::WalletApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__WalletApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int WalletGUI::WalletApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::WalletApplication::builtinRunSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGUI::WalletApplication::remoteConnectedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGUI::WalletApplication::createWalletdSignal(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGUI::WalletApplication::exportViewOnlyKeysSignal(QWidget * _t1, bool _t2, QPrivateSignal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::WalletApplication::exportKeysSignal(QWidget * _t1, bool _t2, QPrivateSignal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::WalletApplication::updateIsReadySignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
