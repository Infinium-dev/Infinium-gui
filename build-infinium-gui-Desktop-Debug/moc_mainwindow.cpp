/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__MainWindow_t {
    QByteArrayData data[72];
    char stringdata0[1035];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__MainWindow_t qt_meta_stringdata_WalletGUI__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WalletGUI::MainWindow"
QT_MOC_LITERAL(1, 22, 14), // "createTxSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 34), // "RpcApi::CreateTransaction::Re..."
QT_MOC_LITERAL(4, 73, 3), // "req"
QT_MOC_LITERAL(5, 77, 12), // "sendTxSignal"
QT_MOC_LITERAL(6, 90, 32), // "RpcApi::SendTransaction::Request"
QT_MOC_LITERAL(7, 123, 17), // "createProofSignal"
QT_MOC_LITERAL(8, 141, 6), // "txHash"
QT_MOC_LITERAL(9, 148, 9), // "addresses"
QT_MOC_LITERAL(10, 158, 10), // "needToFind"
QT_MOC_LITERAL(11, 169, 16), // "checkProofSignal"
QT_MOC_LITERAL(12, 186, 23), // "showWalletdParamsSignal"
QT_MOC_LITERAL(13, 210, 24), // "exportViewOnlyKeysSignal"
QT_MOC_LITERAL(14, 235, 10), // "isAmethyst"
QT_MOC_LITERAL(15, 246, 16), // "exportKeysSignal"
QT_MOC_LITERAL(16, 263, 13), // "restartDaemon"
QT_MOC_LITERAL(17, 277, 24), // "createLegacyWalletSignal"
QT_MOC_LITERAL(18, 302, 8), // "QWidget*"
QT_MOC_LITERAL(19, 311, 6), // "parent"
QT_MOC_LITERAL(20, 318, 18), // "createWalletSignal"
QT_MOC_LITERAL(21, 337, 16), // "openWalletSignal"
QT_MOC_LITERAL(22, 354, 31), // "restoreWalletFromMnemonicSignal"
QT_MOC_LITERAL(23, 386, 18), // "remoteWalletSignal"
QT_MOC_LITERAL(24, 405, 19), // "encryptWalletSignal"
QT_MOC_LITERAL(25, 425, 16), // "importKeysSignal"
QT_MOC_LITERAL(26, 442, 17), // "setConnectedState"
QT_MOC_LITERAL(27, 460, 20), // "setDisconnectedState"
QT_MOC_LITERAL(28, 481, 10), // "builtinRun"
QT_MOC_LITERAL(29, 492, 17), // "jsonErrorResponse"
QT_MOC_LITERAL(30, 510, 2), // "id"
QT_MOC_LITERAL(31, 513, 14), // "JsonRpc::Error"
QT_MOC_LITERAL(32, 528, 5), // "error"
QT_MOC_LITERAL(33, 534, 16), // "createTxReceived"
QT_MOC_LITERAL(34, 551, 17), // "RpcApi::CreatedTx"
QT_MOC_LITERAL(35, 569, 2), // "tx"
QT_MOC_LITERAL(36, 572, 8), // "createTx"
QT_MOC_LITERAL(37, 581, 19), // "RpcApi::Transaction"
QT_MOC_LITERAL(38, 601, 3), // "fee"
QT_MOC_LITERAL(39, 605, 11), // "subtractFee"
QT_MOC_LITERAL(40, 617, 17), // "copiedToClipboard"
QT_MOC_LITERAL(41, 635, 14), // "openDataFolder"
QT_MOC_LITERAL(42, 650, 9), // "splashMsg"
QT_MOC_LITERAL(43, 660, 3), // "msg"
QT_MOC_LITERAL(44, 664, 15), // "addDaemonOutput"
QT_MOC_LITERAL(45, 680, 14), // "addDaemonError"
QT_MOC_LITERAL(46, 695, 7), // "showLog"
QT_MOC_LITERAL(47, 703, 10), // "packetSent"
QT_MOC_LITERAL(48, 714, 4), // "data"
QT_MOC_LITERAL(49, 719, 14), // "packetReceived"
QT_MOC_LITERAL(50, 734, 10), // "importKeys"
QT_MOC_LITERAL(51, 745, 18), // "exportViewOnlyKeys"
QT_MOC_LITERAL(52, 764, 10), // "exportKeys"
QT_MOC_LITERAL(53, 775, 13), // "updateIsReady"
QT_MOC_LITERAL(54, 789, 10), // "newVersion"
QT_MOC_LITERAL(55, 800, 10), // "netChanged"
QT_MOC_LITERAL(56, 811, 3), // "net"
QT_MOC_LITERAL(57, 815, 7), // "aboutQt"
QT_MOC_LITERAL(58, 823, 5), // "about"
QT_MOC_LITERAL(59, 829, 11), // "copyAddress"
QT_MOC_LITERAL(60, 841, 11), // "copyBalance"
QT_MOC_LITERAL(61, 853, 23), // "communityForumTriggered"
QT_MOC_LITERAL(62, 877, 20), // "reportIssueTriggered"
QT_MOC_LITERAL(63, 898, 18), // "createLegacyWallet"
QT_MOC_LITERAL(64, 917, 12), // "createWallet"
QT_MOC_LITERAL(65, 930, 10), // "openWallet"
QT_MOC_LITERAL(66, 941, 25), // "restoreWalletFromMnemonic"
QT_MOC_LITERAL(67, 967, 12), // "remoteWallet"
QT_MOC_LITERAL(68, 980, 13), // "encryptWallet"
QT_MOC_LITERAL(69, 994, 11), // "createProof"
QT_MOC_LITERAL(70, 1006, 10), // "checkProof"
QT_MOC_LITERAL(71, 1017, 17) // "showWalletdParams"

    },
    "WalletGUI::MainWindow\0createTxSignal\0"
    "\0RpcApi::CreateTransaction::Request\0"
    "req\0sendTxSignal\0RpcApi::SendTransaction::Request\0"
    "createProofSignal\0txHash\0addresses\0"
    "needToFind\0checkProofSignal\0"
    "showWalletdParamsSignal\0"
    "exportViewOnlyKeysSignal\0isAmethyst\0"
    "exportKeysSignal\0restartDaemon\0"
    "createLegacyWalletSignal\0QWidget*\0"
    "parent\0createWalletSignal\0openWalletSignal\0"
    "restoreWalletFromMnemonicSignal\0"
    "remoteWalletSignal\0encryptWalletSignal\0"
    "importKeysSignal\0setConnectedState\0"
    "setDisconnectedState\0builtinRun\0"
    "jsonErrorResponse\0id\0JsonRpc::Error\0"
    "error\0createTxReceived\0RpcApi::CreatedTx\0"
    "tx\0createTx\0RpcApi::Transaction\0fee\0"
    "subtractFee\0copiedToClipboard\0"
    "openDataFolder\0splashMsg\0msg\0"
    "addDaemonOutput\0addDaemonError\0showLog\0"
    "packetSent\0data\0packetReceived\0"
    "importKeys\0exportViewOnlyKeys\0exportKeys\0"
    "updateIsReady\0newVersion\0netChanged\0"
    "net\0aboutQt\0about\0copyAddress\0copyBalance\0"
    "communityForumTriggered\0reportIssueTriggered\0"
    "createLegacyWallet\0createWallet\0"
    "openWallet\0restoreWalletFromMnemonic\0"
    "remoteWallet\0encryptWallet\0createProof\0"
    "checkProof\0showWalletdParams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,
       5,    1,  262,    2, 0x06 /* Public */,
       7,    3,  265,    2, 0x06 /* Public */,
      11,    0,  272,    2, 0x06 /* Public */,
      12,    0,  273,    2, 0x06 /* Public */,
      13,    1,  274,    2, 0x06 /* Public */,
      15,    1,  277,    2, 0x06 /* Public */,
      16,    0,  280,    2, 0x06 /* Public */,
      17,    1,  281,    2, 0x06 /* Public */,
      20,    1,  284,    2, 0x06 /* Public */,
      21,    1,  287,    2, 0x06 /* Public */,
      22,    1,  290,    2, 0x06 /* Public */,
      23,    1,  293,    2, 0x06 /* Public */,
      24,    1,  296,    2, 0x06 /* Public */,
      25,    1,  299,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  302,    2, 0x0a /* Public */,
      27,    0,  303,    2, 0x0a /* Public */,
      28,    0,  304,    2, 0x0a /* Public */,
      29,    2,  305,    2, 0x0a /* Public */,
      33,    1,  310,    2, 0x0a /* Public */,
      36,    3,  313,    2, 0x0a /* Public */,
      40,    0,  320,    2, 0x0a /* Public */,
      41,    0,  321,    2, 0x0a /* Public */,
      42,    1,  322,    2, 0x0a /* Public */,
      44,    1,  325,    2, 0x0a /* Public */,
      45,    1,  328,    2, 0x0a /* Public */,
      46,    0,  331,    2, 0x0a /* Public */,
      47,    1,  332,    2, 0x0a /* Public */,
      49,    1,  335,    2, 0x0a /* Public */,
      50,    0,  338,    2, 0x0a /* Public */,
      51,    0,  339,    2, 0x0a /* Public */,
      52,    0,  340,    2, 0x0a /* Public */,
      53,    1,  341,    2, 0x0a /* Public */,
      55,    1,  344,    2, 0x0a /* Public */,
      57,    0,  347,    2, 0x08 /* Private */,
      58,    0,  348,    2, 0x08 /* Private */,
      59,    0,  349,    2, 0x08 /* Private */,
      60,    0,  350,    2, 0x08 /* Private */,
      61,    0,  351,    2, 0x08 /* Private */,
      62,    0,  352,    2, 0x08 /* Private */,
      63,    0,  353,    2, 0x08 /* Private */,
      64,    0,  354,    2, 0x08 /* Private */,
      65,    0,  355,    2, 0x08 /* Private */,
      66,    0,  356,    2, 0x08 /* Private */,
      67,    0,  357,    2, 0x08 /* Private */,
      68,    0,  358,    2, 0x08 /* Private */,
      69,    3,  359,    2, 0x08 /* Private */,
      70,    0,  366,    2, 0x08 /* Private */,
      71,    0,  367,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 31,   30,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37, QMetaType::ULongLong, QMetaType::Bool,   35,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   48,
    QMetaType::Void, QMetaType::QByteArray,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createTxSignal((*reinterpret_cast< const RpcApi::CreateTransaction::Request(*)>(_a[1])), QPrivateSignal()); break;
        case 1: _t->sendTxSignal((*reinterpret_cast< const RpcApi::SendTransaction::Request(*)>(_a[1])), QPrivateSignal()); break;
        case 2: _t->createProofSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->checkProofSignal(); break;
        case 4: _t->showWalletdParamsSignal(); break;
        case 5: _t->exportViewOnlyKeysSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->exportKeysSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->restartDaemon(QPrivateSignal()); break;
        case 8: _t->createLegacyWalletSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: _t->createWalletSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 10: _t->openWalletSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 11: _t->restoreWalletFromMnemonicSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 12: _t->remoteWalletSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 13: _t->encryptWalletSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->importKeysSignal((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 15: _t->setConnectedState(); break;
        case 16: _t->setDisconnectedState(); break;
        case 17: _t->builtinRun(); break;
        case 18: _t->jsonErrorResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const JsonRpc::Error(*)>(_a[2]))); break;
        case 19: _t->createTxReceived((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 20: _t->createTx((*reinterpret_cast< const RpcApi::Transaction(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->copiedToClipboard(); break;
        case 22: _t->openDataFolder(); break;
        case 23: _t->splashMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->addDaemonOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->addDaemonError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->showLog(); break;
        case 27: _t->packetSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 28: _t->packetReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 29: _t->importKeys(); break;
        case 30: _t->exportViewOnlyKeys(); break;
        case 31: _t->exportKeys(); break;
        case 32: _t->updateIsReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->netChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->aboutQt(); break;
        case 35: _t->about(); break;
        case 36: _t->copyAddress(); break;
        case 37: _t->copyBalance(); break;
        case 38: _t->communityForumTriggered(); break;
        case 39: _t->reportIssueTriggered(); break;
        case 40: _t->createLegacyWallet(); break;
        case 41: _t->createWallet(); break;
        case 42: _t->openWallet(); break;
        case 43: _t->restoreWalletFromMnemonic(); break;
        case 44: _t->remoteWallet(); break;
        case 45: _t->encryptWallet(); break;
        case 46: _t->createProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 47: _t->checkProof(); break;
        case 48: _t->showWalletdParams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const RpcApi::CreateTransaction::Request & , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::createTxSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const RpcApi::SendTransaction::Request & , QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendTxSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QStringList & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::createProofSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::checkProofSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showWalletdParamsSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::exportViewOnlyKeysSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::exportKeysSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::restartDaemon)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::createLegacyWalletSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::createWalletSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::openWalletSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::restoreWalletFromMnemonicSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::remoteWalletSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::encryptWalletSignal)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::importKeysSignal)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_WalletGUI__MainWindow.data,
    qt_meta_data_WalletGUI__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WalletGUI::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::MainWindow::createTxSignal(const RpcApi::CreateTransaction::Request & _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::MainWindow::sendTxSignal(const RpcApi::SendTransaction::Request & _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGUI::MainWindow::createProofSignal(const QString & _t1, const QStringList & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGUI::MainWindow::checkProofSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WalletGUI::MainWindow::showWalletdParamsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WalletGUI::MainWindow::exportViewOnlyKeysSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::MainWindow::exportKeysSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGUI::MainWindow::restartDaemon(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGUI::MainWindow::createLegacyWalletSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGUI::MainWindow::createWalletSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGUI::MainWindow::openWalletSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGUI::MainWindow::restoreWalletFromMnemonicSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGUI::MainWindow::remoteWalletSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WalletGUI::MainWindow::encryptWalletSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGUI::MainWindow::importKeysSignal(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
