/****************************************************************************
** Meta object code from reading C++ file 'mcu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_micro/mcu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mcu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MCU_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MCU_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MCU_t qt_meta_stringdata_MCU = {
    {
QT_MOC_LITERAL(0, 0, 3), // "MCU"
QT_MOC_LITERAL(1, 4, 19), // "signalButtonsChange"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "int**"
QT_MOC_LITERAL(4, 31, 17), // "slotButtonsChange"
QT_MOC_LITERAL(5, 49, 13), // "slotSW1Change"
QT_MOC_LITERAL(6, 63, 4), // "int*"
QT_MOC_LITERAL(7, 68, 13), // "slotSW2Change"
QT_MOC_LITERAL(8, 82, 13), // "slotSW3Change"
QT_MOC_LITERAL(9, 96, 13) // "slotSW4Change"

    },
    "MCU\0signalButtonsChange\0\0int**\0"
    "slotButtonsChange\0slotSW1Change\0int*\0"
    "slotSW2Change\0slotSW3Change\0slotSW4Change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MCU[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void MCU::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MCU *_t = static_cast<MCU *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalButtonsChange((*reinterpret_cast< int**(*)>(_a[1]))); break;
        case 1: _t->slotButtonsChange((*reinterpret_cast< int**(*)>(_a[1]))); break;
        case 2: _t->slotSW1Change((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 3: _t->slotSW2Change((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 4: _t->slotSW3Change((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 5: _t->slotSW4Change((*reinterpret_cast< int*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MCU::*_t)(int * * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MCU::signalButtonsChange)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MCU::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MCU.data,
      qt_meta_data_MCU,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MCU::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MCU::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MCU.stringdata0))
        return static_cast<void*>(const_cast< MCU*>(this));
    return QWidget::qt_metacast(_clname);
}

int MCU::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void MCU::signalButtonsChange(int * * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
