/****************************************************************************
** Meta object code from reading C++ file 'buttons.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_micro/buttons.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Buttons_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Buttons_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Buttons_t qt_meta_stringdata_Buttons = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Buttons"
QT_MOC_LITERAL(1, 8, 17), // "signalChangeState"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "int**"
QT_MOC_LITERAL(4, 33, 11), // "slotPressed"
QT_MOC_LITERAL(5, 45, 12), // "slotReleased"
QT_MOC_LITERAL(6, 58, 13), // "slotJ10Change"
QT_MOC_LITERAL(7, 72, 15), // "slotJ1_J9Change"
QT_MOC_LITERAL(8, 88, 4) // "int*"

    },
    "Buttons\0signalChangeState\0\0int**\0"
    "slotPressed\0slotReleased\0slotJ10Change\0"
    "slotJ1_J9Change\0int*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Buttons[] = {

 // content:
       7,       // revision
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
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void Buttons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buttons *_t = static_cast<Buttons *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalChangeState((*reinterpret_cast< int**(*)>(_a[1]))); break;
        case 1: _t->slotPressed(); break;
        case 2: _t->slotReleased(); break;
        case 3: _t->slotJ10Change(); break;
        case 4: _t->slotJ1_J9Change((*reinterpret_cast< int*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Buttons::*_t)(int * * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::signalChangeState)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Buttons::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Buttons.data,
      qt_meta_data_Buttons,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Buttons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Buttons::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Buttons.stringdata0))
        return static_cast<void*>(const_cast< Buttons*>(this));
    return QWidget::qt_metacast(_clname);
}

int Buttons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Buttons::signalChangeState(int * * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
