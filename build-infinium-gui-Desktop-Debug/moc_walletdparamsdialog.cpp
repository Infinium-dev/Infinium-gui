/****************************************************************************
** Meta object code from reading C++ file 'walletdparamsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/walletdparamsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletdparamsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__WalletdParamsDialog_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__WalletdParamsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__WalletdParamsDialog_t qt_meta_stringdata_WalletGUI__WalletdParamsDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGUI::WalletdParamsDialog"
QT_MOC_LITERAL(1, 31, 14), // "restartWalletd"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "saveParams"
QT_MOC_LITERAL(4, 58, 11), // "applyParams"
QT_MOC_LITERAL(5, 70, 11), // "hostChanged"
QT_MOC_LITERAL(6, 82, 24), // "externalBytecoindToggled"
QT_MOC_LITERAL(7, 107, 7) // "checked"

    },
    "WalletGUI::WalletdParamsDialog\0"
    "restartWalletd\0\0saveParams\0applyParams\0"
    "hostChanged\0externalBytecoindToggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__WalletdParamsDialog[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void WalletGUI::WalletdParamsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletdParamsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restartWalletd(); break;
        case 1: _t->saveParams(); break;
        case 2: _t->applyParams(); break;
        case 3: _t->hostChanged(); break;
        case 4: _t->externalBytecoindToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletdParamsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletdParamsDialog::restartWalletd)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::WalletdParamsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_WalletGUI__WalletdParamsDialog.data,
    qt_meta_data_WalletGUI__WalletdParamsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::WalletdParamsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::WalletdParamsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__WalletdParamsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WalletGUI::WalletdParamsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGUI::WalletdParamsDialog::restartWalletd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE