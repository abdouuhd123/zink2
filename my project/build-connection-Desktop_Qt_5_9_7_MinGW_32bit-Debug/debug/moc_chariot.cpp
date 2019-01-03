/****************************************************************************
** Meta object code from reading C++ file 'chariot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../connection/chariot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chariot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chariot_t {
    QByteArrayData data[16];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chariot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chariot_t qt_meta_stringdata_chariot = {
    {
QT_MOC_LITERAL(0, 0, 7), // "chariot"
QT_MOC_LITERAL(1, 8, 8), // "showTime"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 40, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(5, 61, 5), // "index"
QT_MOC_LITERAL(6, 67, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 91, 29), // "on_radioButton_active_clicked"
QT_MOC_LITERAL(8, 121, 32), // "on_radioButton_nonactive_clicked"
QT_MOC_LITERAL(9, 154, 25), // "on_pushButton_tri_clicked"
QT_MOC_LITERAL(10, 180, 33), // "on_pushButton_statistique_cli..."
QT_MOC_LITERAL(11, 214, 33), // "on_lineEdit_recherche_textCha..."
QT_MOC_LITERAL(12, 248, 4), // "arg1"
QT_MOC_LITERAL(13, 253, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(14, 284, 31), // "on_pushButton_effectuer_clicked"
QT_MOC_LITERAL(15, 316, 28) // "on_pushButton_retour_clicked"

    },
    "chariot\0showTime\0\0on_pushButton_clicked\0"
    "on_tableView_clicked\0index\0"
    "on_pushButton_2_clicked\0"
    "on_radioButton_active_clicked\0"
    "on_radioButton_nonactive_clicked\0"
    "on_pushButton_tri_clicked\0"
    "on_pushButton_statistique_clicked\0"
    "on_lineEdit_recherche_textChanged\0"
    "arg1\0on_pushButton_modifier_clicked\0"
    "on_pushButton_effectuer_clicked\0"
    "on_pushButton_retour_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chariot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void chariot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chariot *_t = static_cast<chariot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->showTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_radioButton_active_clicked(); break;
        case 5: _t->on_radioButton_nonactive_clicked(); break;
        case 6: _t->on_pushButton_tri_clicked(); break;
        case 7: _t->on_pushButton_statistique_clicked(); break;
        case 8: _t->on_lineEdit_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_modifier_clicked(); break;
        case 10: _t->on_pushButton_effectuer_clicked(); break;
        case 11: _t->on_pushButton_retour_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject chariot::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_chariot.data,
      qt_meta_data_chariot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *chariot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chariot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chariot.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int chariot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
