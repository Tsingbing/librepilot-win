/****************************************************************************
** Meta object code from reading C++ file 'accessorydesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "accessorydesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessorydesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccessoryDesiredConstants_t {
    QByteArrayData data[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessoryDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessoryDesiredConstants_t qt_meta_stringdata_AccessoryDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AccessoryDesiredConstants"
QT_MOC_LITERAL(1, 26, 4) // "Enum"

    },
    "AccessoryDesiredConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessoryDesiredConstants[] = {

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

void AccessoryDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AccessoryDesiredConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AccessoryDesiredConstants.data,
    qt_meta_data_AccessoryDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccessoryDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessoryDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessoryDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccessoryDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AccessoryDesired_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessoryDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessoryDesired_t qt_meta_stringdata_AccessoryDesired = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AccessoryDesired"
QT_MOC_LITERAL(1, 17, 19), // "accessoryValChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 19), // "AccessoryValChanged"
QT_MOC_LITERAL(5, 64, 15), // "setAccessoryVal"
QT_MOC_LITERAL(6, 80, 17), // "emitNotifications"
QT_MOC_LITERAL(7, 98, 15), // "getAccessoryVal"
QT_MOC_LITERAL(8, 114, 12), // "accessoryVal"
QT_MOC_LITERAL(9, 127, 12) // "AccessoryVal"

    },
    "AccessoryDesired\0accessoryValChanged\0"
    "\0value\0AccessoryValChanged\0setAccessoryVal\0"
    "emitNotifications\0getAccessoryVal\0"
    "accessoryVal\0AccessoryVal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessoryDesired[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AccessoryDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccessoryDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accessoryValChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->AccessoryValChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setAccessoryVal((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->emitNotifications(); break;
        case 4: { float _r = _t->getAccessoryVal();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccessoryDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessoryDesired::accessoryValChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccessoryDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessoryDesired::AccessoryValChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccessoryDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->accessoryVal(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getAccessoryVal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccessoryDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccessoryVal(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAccessoryVal(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccessoryDesired::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_AccessoryDesired.data,
    qt_meta_data_AccessoryDesired,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccessoryDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessoryDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessoryDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AccessoryDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccessoryDesired::accessoryValChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccessoryDesired::AccessoryValChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
