/****************************************************************************
** Meta object code from reading C++ file 'checkproofdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/checkproofdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkproofdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__CheckProofDialog_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__CheckProofDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__CheckProofDialog_t qt_meta_stringdata_WalletGUI__CheckProofDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGUI::CheckProofDialog"
QT_MOC_LITERAL(1, 28, 16), // "checkProofSignal"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "proof"
QT_MOC_LITERAL(4, 52, 15), // "showCheckResult"
QT_MOC_LITERAL(5, 68, 18), // "RpcApi::ProofCheck"
QT_MOC_LITERAL(6, 87, 6), // "result"
QT_MOC_LITERAL(7, 94, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(8, 113, 12), // "proofChanged"
QT_MOC_LITERAL(9, 126, 10) // "checkProof"

    },
    "WalletGUI::CheckProofDialog\0"
    "checkProofSignal\0\0proof\0showCheckResult\0"
    "RpcApi::ProofCheck\0result\0pasteFromClipboard\0"
    "proofChanged\0checkProof"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__CheckProofDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::CheckProofDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckProofDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkProofSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showCheckResult((*reinterpret_cast< const RpcApi::ProofCheck(*)>(_a[1]))); break;
        case 2: _t->pasteFromClipboard(); break;
        case 3: _t->proofChanged(); break;
        case 4: _t->checkProof(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckProofDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckProofDialog::checkProofSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::CheckProofDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_WalletGUI__CheckProofDialog.data,
    qt_meta_data_WalletGUI__CheckProofDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::CheckProofDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::CheckProofDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__CheckProofDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WalletGUI::CheckProofDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::CheckProofDialog::checkProofSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
