/****************************************************************************
** Meta object code from reading C++ file 'JsonRpcClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/JsonRpc/JsonRpcClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JsonRpcClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonRpc__Client_t {
    QByteArrayData data[18];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRpc__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRpc__Client_t qt_meta_stringdata_JsonRpc__Client = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JsonRpc::Client"
QT_MOC_LITERAL(1, 16, 12), // "networkError"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "errorString"
QT_MOC_LITERAL(4, 42, 16), // "jsonParsingError"
QT_MOC_LITERAL(5, 59, 7), // "message"
QT_MOC_LITERAL(6, 67, 20), // "jsonUnknownMessageId"
QT_MOC_LITERAL(7, 88, 2), // "id"
QT_MOC_LITERAL(8, 91, 10), // "packetSent"
QT_MOC_LITERAL(9, 102, 4), // "data"
QT_MOC_LITERAL(10, 107, 14), // "packetReceived"
QT_MOC_LITERAL(11, 122, 18), // "authRequiredSignal"
QT_MOC_LITERAL(12, 141, 15), // "QAuthenticator*"
QT_MOC_LITERAL(13, 157, 13), // "authenticator"
QT_MOC_LITERAL(14, 171, 13), // "replyFinished"
QT_MOC_LITERAL(15, 185, 14), // "QNetworkReply*"
QT_MOC_LITERAL(16, 200, 5), // "reply"
QT_MOC_LITERAL(17, 206, 22) // "authenticationRequired"

    },
    "JsonRpc::Client\0networkError\0\0errorString\0"
    "jsonParsingError\0message\0jsonUnknownMessageId\0"
    "id\0packetSent\0data\0packetReceived\0"
    "authRequiredSignal\0QAuthenticator*\0"
    "authenticator\0replyFinished\0QNetworkReply*\0"
    "reply\0authenticationRequired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRpc__Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,
      10,    1,   66,    2, 0x06 /* Public */,
      11,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   72,    2, 0x08 /* Private */,
      17,    2,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 12,   16,   13,

       0        // eod
};

void JsonRpc::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->jsonParsingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->jsonUnknownMessageId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->packetSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->packetReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->authRequiredSignal((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 6: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::networkError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::jsonParsingError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::jsonUnknownMessageId)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::packetSent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::packetReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)(QAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::authRequiredSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JsonRpc::Client::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_JsonRpc__Client.data,
    qt_meta_data_JsonRpc__Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JsonRpc::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRpc::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRpc__Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonRpc::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JsonRpc::Client::networkError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonRpc::Client::jsonParsingError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonRpc::Client::jsonUnknownMessageId(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JsonRpc::Client::packetSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JsonRpc::Client::packetReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JsonRpc::Client::authRequiredSignal(QAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_JsonRpc__WalletClient_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRpc__WalletClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRpc__WalletClient_t qt_meta_stringdata_JsonRpc__WalletClient = {
    {
QT_MOC_LITERAL(0, 0, 21) // "JsonRpc::WalletClient"

    },
    "JsonRpc::WalletClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRpc__WalletClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void JsonRpc::WalletClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject JsonRpc::WalletClient::staticMetaObject = { {
    &Client::staticMetaObject,
    qt_meta_stringdata_JsonRpc__WalletClient.data,
    qt_meta_data_JsonRpc__WalletClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JsonRpc::WalletClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRpc::WalletClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRpc__WalletClient.stringdata0))
        return static_cast<void*>(this);
    return Client::qt_metacast(_clname);
}

int JsonRpc::WalletClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Client::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
