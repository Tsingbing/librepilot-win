/****************************************************************************
** Meta object code from reading C++ file 'accelstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "accelstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accelstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccelStateConstants_t {
    QByteArrayData data[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccelStateConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccelStateConstants_t qt_meta_stringdata_AccelStateConstants = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AccelStateConstants"
QT_MOC_LITERAL(1, 20, 4) // "Enum"

    },
    "AccelStateConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccelStateConstants[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    0,   19,

 // enum data: key, value

       0        // eod
};

void AccelStateConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AccelStateConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AccelStateConstants.data,
    qt_meta_data_AccelStateConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccelStateConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccelStateConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccelStateConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccelStateConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AccelState_t {
    QByteArrayData data[19];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccelState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccelState_t qt_meta_stringdata_AccelState = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AccelState"
QT_MOC_LITERAL(1, 11, 8), // "xChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "value"
QT_MOC_LITERAL(4, 27, 8), // "yChanged"
QT_MOC_LITERAL(5, 36, 8), // "zChanged"
QT_MOC_LITERAL(6, 45, 4), // "setX"
QT_MOC_LITERAL(7, 50, 4), // "setx"
QT_MOC_LITERAL(8, 55, 4), // "setY"
QT_MOC_LITERAL(9, 60, 4), // "sety"
QT_MOC_LITERAL(10, 65, 4), // "setZ"
QT_MOC_LITERAL(11, 70, 4), // "setz"
QT_MOC_LITERAL(12, 75, 17), // "emitNotifications"
QT_MOC_LITERAL(13, 93, 4), // "getx"
QT_MOC_LITERAL(14, 98, 4), // "gety"
QT_MOC_LITERAL(15, 103, 4), // "getz"
QT_MOC_LITERAL(16, 108, 1), // "x"
QT_MOC_LITERAL(17, 110, 1), // "y"
QT_MOC_LITERAL(18, 112, 1) // "z"

    },
    "AccelState\0xChanged\0\0value\0yChanged\0"
    "zChanged\0setX\0setx\0setY\0sety\0setZ\0"
    "setz\0emitNotifications\0getx\0gety\0getz\0"
    "x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccelState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   88,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       8,    1,   94,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,
      10,    1,  100,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    0,  107,    2, 0x02 /* Public */,
      14,    0,  108,    2, 0x02 /* Public */,
      15,    0,  109,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void AccelState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccelState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->setX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->setx((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->sety((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->setz((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->emitNotifications(); break;
        case 10: { float _r = _t->getx();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->gety();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { float _r = _t->getz();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccelState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelState::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccelState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelState::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccelState::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelState::zChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccelState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccelState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setZ(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccelState::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_AccelState.data,
    qt_meta_data_AccelState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccelState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccelState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccelState.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AccelState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccelState::xChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccelState::yChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccelState::zChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
