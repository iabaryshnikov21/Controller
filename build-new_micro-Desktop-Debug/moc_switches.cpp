/****************************************************************************
** Meta object code from reading C++ file 'switches.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_micro/switches.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switches.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Switches_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Switches_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Switches_t qt_meta_stringdata_Switches = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Switches"
QT_MOC_LITERAL(1, 9, 14), // "signalCheckbox"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "int*"
QT_MOC_LITERAL(4, 30, 5), // "state"
QT_MOC_LITERAL(5, 36, 15) // "slotChangeState"

    },
    "Switches\0signalCheckbox\0\0int*\0state\0"
    "slotChangeState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Switches[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Switches::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Switches *_t = static_cast<Switches *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCheckbox((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 1: _t->slotChangeState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Switches::*_t)(int * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Switches::signalCheckbox)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Switches::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Switches.data,
      qt_meta_data_Switches,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Switches::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Switches::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Switches.stringdata0))
        return static_cast<void*>(const_cast< Switches*>(this));
    return QWidget::qt_metacast(_clname);
}

int Switches::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Switches::signalCheckbox(int * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
