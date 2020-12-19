/****************************************************************************
** Meta object code from reading C++ file 'addressbookmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addressbookmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGUI__AddressBookModel_t {
    QByteArrayData data[19];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__AddressBookModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__AddressBookModel_t qt_meta_stringdata_WalletGUI__AddressBookModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGUI::AddressBookModel"
QT_MOC_LITERAL(1, 28, 17), // "addressBookOpened"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "addressBookClosed"
QT_MOC_LITERAL(4, 65, 12), // "addressAdded"
QT_MOC_LITERAL(5, 78, 8), // "quintptr"
QT_MOC_LITERAL(6, 87, 13), // "_addressIndex"
QT_MOC_LITERAL(7, 101, 13), // "addressEdited"
QT_MOC_LITERAL(8, 115, 18), // "beginRemoveAddress"
QT_MOC_LITERAL(9, 134, 16), // "endRemoveAddress"
QT_MOC_LITERAL(10, 151, 7), // "Columns"
QT_MOC_LITERAL(11, 159, 12), // "COLUMN_LABEL"
QT_MOC_LITERAL(12, 172, 14), // "COLUMN_ADDRESS"
QT_MOC_LITERAL(13, 187, 13), // "COLUMN_ACTION"
QT_MOC_LITERAL(14, 201, 5), // "Roles"
QT_MOC_LITERAL(15, 207, 10), // "ROLE_LABEL"
QT_MOC_LITERAL(16, 218, 12), // "ROLE_ADDRESS"
QT_MOC_LITERAL(17, 231, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(18, 243, 8) // "ROLE_ROW"

    },
    "WalletGUI::AddressBookModel\0"
    "addressBookOpened\0\0addressBookClosed\0"
    "addressAdded\0quintptr\0_addressIndex\0"
    "addressEdited\0beginRemoveAddress\0"
    "endRemoveAddress\0Columns\0COLUMN_LABEL\0"
    "COLUMN_ADDRESS\0COLUMN_ACTION\0Roles\0"
    "ROLE_LABEL\0ROLE_ADDRESS\0ROLE_COLUMN\0"
    "ROLE_ROW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__AddressBookModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,   66,
      14,   14, 0x0,    4,   72,

 // enum data: key, value
      11, uint(WalletGUI::AddressBookModel::COLUMN_LABEL),
      12, uint(WalletGUI::AddressBookModel::COLUMN_ADDRESS),
      13, uint(WalletGUI::AddressBookModel::COLUMN_ACTION),
      15, uint(WalletGUI::AddressBookModel::ROLE_LABEL),
      16, uint(WalletGUI::AddressBookModel::ROLE_ADDRESS),
      17, uint(WalletGUI::AddressBookModel::ROLE_COLUMN),
      18, uint(WalletGUI::AddressBookModel::ROLE_ROW),

       0        // eod
};

void WalletGUI::AddressBookModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddressBookModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookOpened(); break;
        case 1: _t->addressBookClosed(); break;
        case 2: _t->addressAdded((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->addressEdited((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 4: _t->beginRemoveAddress((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->endRemoveAddress(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletGUI::AddressBookModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_WalletGUI__AddressBookModel.data,
    qt_meta_data_WalletGUI__AddressBookModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletGUI::AddressBookModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::AddressBookModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__AddressBookModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGUI::AddressBookModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
