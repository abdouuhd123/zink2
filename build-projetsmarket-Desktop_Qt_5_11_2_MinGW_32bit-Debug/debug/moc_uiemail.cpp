/****************************************************************************
** Meta object code from reading C++ file 'uiemail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet_smarket2/appsecurity/uiemail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiemail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_uiemail_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_uiemail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_uiemail_t qt_meta_stringdata_uiemail = {
    {
QT_MOC_LITERAL(0, 0, 7), // "uiemail"
QT_MOC_LITERAL(1, 8, 8), // "sendMail"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "mailSent"
QT_MOC_LITERAL(4, 27, 6), // "status"
QT_MOC_LITERAL(5, 34, 6), // "browse"
QT_MOC_LITERAL(6, 41, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(7, 60, 17), // "on_sendPB_clicked"
QT_MOC_LITERAL(8, 78, 24), // "on_pushButton_34_clicked"
QT_MOC_LITERAL(9, 103, 24) // "on_pushButton_16_clicked"

    },
    "uiemail\0sendMail\0\0mailSent\0status\0"
    "browse\0on_exitBtn_clicked\0on_sendPB_clicked\0"
    "on_pushButton_34_clicked\0"
    "on_pushButton_16_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uiemail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void uiemail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uiemail *_t = static_cast<uiemail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMail(); break;
        case 1: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->browse(); break;
        case 3: _t->on_exitBtn_clicked(); break;
        case 4: _t->on_sendPB_clicked(); break;
        case 5: _t->on_pushButton_34_clicked(); break;
        case 6: _t->on_pushButton_16_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject uiemail::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_uiemail.data,
      qt_meta_data_uiemail,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *uiemail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uiemail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_uiemail.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int uiemail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
