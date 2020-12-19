/****************************************************************************
** Meta object code from reading C++ file 'createproofdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/createproofdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createproofdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__CreateProofDialog_t {
    QByteArrayData data[13];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__CreateProofDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__CreateProofDialog_t qt_meta_stringdata_WalletGUI__CreateProofDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGUI::CreateProofDialog"
QT_MOC_LITERAL(1, 29, 19), // "generateProofSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "txHash"
QT_MOC_LITERAL(4, 57, 7), // "address"
QT_MOC_LITERAL(5, 65, 7), // "message"
QT_MOC_LITERAL(6, 73, 9), // "addProofs"
QT_MOC_LITERAL(7, 83, 6), // "proofs"
QT_MOC_LITERAL(8, 90, 15), // "copyToClipboard"
QT_MOC_LITERAL(9, 106, 14), // "addressChanged"
QT_MOC_LITERAL(10, 121, 5), // "index"
QT_MOC_LITERAL(11, 127, 21), // "currentAddressChanged"
QT_MOC_LITERAL(12, 149, 13) // "generateProof"

    },
    "WalletGUI::CreateProofDialog\0"
    "generateProofSignal\0\0txHash\0address\0"
    "message\0addProofs\0proofs\0copyToClipboard\0"
    "addressChanged\0index\0currentAddressChanged\0"
    "generateProof"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__CreateProofDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,
      11,    0,   58,    2, 0x0a /* Public */,
      12,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::CreateProofDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateProofDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generateProofSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->addProofs((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->copyToClipboard(); break;
        case 3: _t->addressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->currentAddressChanged(); break;
        case 5: _t->generateProof(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateProofDialog::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateProofDialog::generateProofSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::CreateProofDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_WalletGUI__CreateProofDialog.data,
    qt_meta_data_WalletGUI__CreateProofDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::CreateProofDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::CreateProofDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__CreateProofDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WalletGUI::CreateProofDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::CreateProofDialog::generateProofSignal(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
