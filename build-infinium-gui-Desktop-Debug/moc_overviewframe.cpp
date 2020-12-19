/****************************************************************************
** Meta object code from reading C++ file 'overviewframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/overviewframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__OverviewFrame_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__OverviewFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__OverviewFrame_t qt_meta_stringdata_WalletGUI__OverviewFrame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::OverviewFrame"
QT_MOC_LITERAL(1, 25, 23), // "copiedToClipboardSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "createProofSignal"
QT_MOC_LITERAL(4, 68, 6), // "txHash"
QT_MOC_LITERAL(5, 75, 9), // "addresses"
QT_MOC_LITERAL(6, 85, 10), // "needToFind"
QT_MOC_LITERAL(7, 96, 11) // "exportToCSV"

    },
    "WalletGUI::OverviewFrame\0"
    "copiedToClipboardSignal\0\0createProofSignal\0"
    "txHash\0addresses\0needToFind\0exportToCSV"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__OverviewFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    3,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGUI::OverviewFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverviewFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copiedToClipboardSignal(); break;
        case 1: _t->createProofSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->exportToCSV(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewFrame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewFrame::copiedToClipboardSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OverviewFrame::*)(const QString & , const QStringList & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewFrame::createProofSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::OverviewFrame::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_WalletGUI__OverviewFrame.data,
    qt_meta_data_WalletGUI__OverviewFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::OverviewFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::OverviewFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__OverviewFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::OverviewFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::OverviewFrame::copiedToClipboardSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGUI::OverviewFrame::createProofSignal(const QString & _t1, const QStringList & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WalletGUI__CSVTransactionsExporter_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__CSVTransactionsExporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__CSVTransactionsExporter_t qt_meta_stringdata_WalletGUI__CSVTransactionsExporter = {
    {
QT_MOC_LITERAL(0, 0, 34) // "WalletGUI::CSVTransactionsExp..."

    },
    "WalletGUI::CSVTransactionsExporter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__CSVTransactionsExporter[] = {

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

void WalletGUI::CSVTransactionsExporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::CSVTransactionsExporter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WalletGUI__CSVTransactionsExporter.data,
    qt_meta_data_WalletGUI__CSVTransactionsExporter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::CSVTransactionsExporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::CSVTransactionsExporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__CSVTransactionsExporter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGUI::CSVTransactionsExporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
