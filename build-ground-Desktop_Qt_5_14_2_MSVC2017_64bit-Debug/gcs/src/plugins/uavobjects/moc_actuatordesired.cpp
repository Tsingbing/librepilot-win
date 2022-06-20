/****************************************************************************
** Meta object code from reading C++ file 'actuatordesired.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "actuatordesired.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actuatordesired.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorDesiredConstants_t {
    QByteArrayData data[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorDesiredConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorDesiredConstants_t qt_meta_stringdata_ActuatorDesiredConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ActuatorDesiredConstants"
QT_MOC_LITERAL(1, 25, 4) // "Enum"

    },
    "ActuatorDesiredConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorDesiredConstants[] = {

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

void ActuatorDesiredConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorDesiredConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorDesiredConstants.data,
    qt_meta_data_ActuatorDesiredConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorDesiredConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorDesiredConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorDesiredConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorDesiredConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorDesired_t {
    QByteArrayData data[40];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorDesired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorDesired_t qt_meta_stringdata_ActuatorDesired = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ActuatorDesired"
QT_MOC_LITERAL(1, 16, 11), // "rollChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 11), // "RollChanged"
QT_MOC_LITERAL(5, 47, 12), // "pitchChanged"
QT_MOC_LITERAL(6, 60, 12), // "PitchChanged"
QT_MOC_LITERAL(7, 73, 10), // "yawChanged"
QT_MOC_LITERAL(8, 84, 10), // "YawChanged"
QT_MOC_LITERAL(9, 95, 13), // "thrustChanged"
QT_MOC_LITERAL(10, 109, 13), // "ThrustChanged"
QT_MOC_LITERAL(11, 123, 17), // "updateTimeChanged"
QT_MOC_LITERAL(12, 141, 17), // "UpdateTimeChanged"
QT_MOC_LITERAL(13, 159, 21), // "numLongUpdatesChanged"
QT_MOC_LITERAL(14, 181, 21), // "NumLongUpdatesChanged"
QT_MOC_LITERAL(15, 203, 7), // "setRoll"
QT_MOC_LITERAL(16, 211, 8), // "setPitch"
QT_MOC_LITERAL(17, 220, 6), // "setYaw"
QT_MOC_LITERAL(18, 227, 9), // "setThrust"
QT_MOC_LITERAL(19, 237, 13), // "setUpdateTime"
QT_MOC_LITERAL(20, 251, 17), // "setNumLongUpdates"
QT_MOC_LITERAL(21, 269, 17), // "emitNotifications"
QT_MOC_LITERAL(22, 287, 7), // "getRoll"
QT_MOC_LITERAL(23, 295, 8), // "getPitch"
QT_MOC_LITERAL(24, 304, 6), // "getYaw"
QT_MOC_LITERAL(25, 311, 9), // "getThrust"
QT_MOC_LITERAL(26, 321, 13), // "getUpdateTime"
QT_MOC_LITERAL(27, 335, 17), // "getNumLongUpdates"
QT_MOC_LITERAL(28, 353, 4), // "roll"
QT_MOC_LITERAL(29, 358, 5), // "pitch"
QT_MOC_LITERAL(30, 364, 3), // "yaw"
QT_MOC_LITERAL(31, 368, 6), // "thrust"
QT_MOC_LITERAL(32, 375, 10), // "updateTime"
QT_MOC_LITERAL(33, 386, 14), // "numLongUpdates"
QT_MOC_LITERAL(34, 401, 4), // "Roll"
QT_MOC_LITERAL(35, 406, 5), // "Pitch"
QT_MOC_LITERAL(36, 412, 3), // "Yaw"
QT_MOC_LITERAL(37, 416, 6), // "Thrust"
QT_MOC_LITERAL(38, 423, 10), // "UpdateTime"
QT_MOC_LITERAL(39, 434, 14) // "NumLongUpdates"

    },
    "ActuatorDesired\0rollChanged\0\0value\0"
    "RollChanged\0pitchChanged\0PitchChanged\0"
    "yawChanged\0YawChanged\0thrustChanged\0"
    "ThrustChanged\0updateTimeChanged\0"
    "UpdateTimeChanged\0numLongUpdatesChanged\0"
    "NumLongUpdatesChanged\0setRoll\0setPitch\0"
    "setYaw\0setThrust\0setUpdateTime\0"
    "setNumLongUpdates\0emitNotifications\0"
    "getRoll\0getPitch\0getYaw\0getThrust\0"
    "getUpdateTime\0getNumLongUpdates\0roll\0"
    "pitch\0yaw\0thrust\0updateTime\0numLongUpdates\0"
    "Roll\0Pitch\0Yaw\0Thrust\0UpdateTime\0"
    "NumLongUpdates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorDesired[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      12,  200, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       4,    1,  142,    2, 0x06 /* Public */,
       5,    1,  145,    2, 0x06 /* Public */,
       6,    1,  148,    2, 0x06 /* Public */,
       7,    1,  151,    2, 0x06 /* Public */,
       8,    1,  154,    2, 0x06 /* Public */,
       9,    1,  157,    2, 0x06 /* Public */,
      10,    1,  160,    2, 0x06 /* Public */,
      11,    1,  163,    2, 0x06 /* Public */,
      12,    1,  166,    2, 0x06 /* Public */,
      13,    1,  169,    2, 0x06 /* Public */,
      14,    1,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  175,    2, 0x0a /* Public */,
      16,    1,  178,    2, 0x0a /* Public */,
      17,    1,  181,    2, 0x0a /* Public */,
      18,    1,  184,    2, 0x0a /* Public */,
      19,    1,  187,    2, 0x0a /* Public */,
      20,    1,  190,    2, 0x0a /* Public */,
      21,    0,  193,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  194,    2, 0x02 /* Public */,
      23,    0,  195,    2, 0x02 /* Public */,
      24,    0,  196,    2, 0x02 /* Public */,
      25,    0,  197,    2, 0x02 /* Public */,
      26,    0,  198,    2, 0x02 /* Public */,
      27,    0,  199,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
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
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      28, QMetaType::Float, 0x00495103,
      29, QMetaType::Float, 0x00495103,
      30, QMetaType::Float, 0x00495103,
      31, QMetaType::Float, 0x00495103,
      32, QMetaType::Float, 0x00495103,
      33, QMetaType::Float, 0x00495103,
      34, QMetaType::Float, 0x00495103,
      35, QMetaType::Float, 0x00495103,
      36, QMetaType::Float, 0x00495103,
      37, QMetaType::Float, 0x00495103,
      38, QMetaType::Float, 0x00495103,
      39, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
       1,
       3,
       5,
       7,
       9,
      11,

       0        // eod
};

void ActuatorDesired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorDesired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->RollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->pitchChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->PitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->yawChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->YawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->thrustChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->ThrustChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->updateTimeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->UpdateTimeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->numLongUpdatesChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->NumLongUpdatesChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setRoll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setPitch((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setYaw((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->setThrust((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->setUpdateTime((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->setNumLongUpdates((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 18: _t->emitNotifications(); break;
        case 19: { float _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: { float _r = _t->getPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 21: { float _r = _t->getYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 22: { float _r = _t->getThrust();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 23: { float _r = _t->getUpdateTime();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: { float _r = _t->getNumLongUpdates();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::rollChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::RollChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::pitchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::PitchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::yawChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::YawChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::thrustChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::ThrustChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::updateTimeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::UpdateTimeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::numLongUpdatesChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ActuatorDesired::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorDesired::NumLongUpdatesChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->roll(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->pitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->thrust(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->updateTime(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->numLongUpdates(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getRoll(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getPitch(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getYaw(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getThrust(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getUpdateTime(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getNumLongUpdates(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActuatorDesired *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setUpdateTime(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setNumLongUpdates(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRoll(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setPitch(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setYaw(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setThrust(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setUpdateTime(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setNumLongUpdates(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorDesired::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorDesired.data,
    qt_meta_data_ActuatorDesired,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorDesired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorDesired::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorDesired.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ActuatorDesired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActuatorDesired::rollChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActuatorDesired::RollChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActuatorDesired::pitchChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ActuatorDesired::PitchChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ActuatorDesired::yawChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ActuatorDesired::YawChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ActuatorDesired::thrustChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ActuatorDesired::ThrustChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ActuatorDesired::updateTimeChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ActuatorDesired::UpdateTimeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ActuatorDesired::numLongUpdatesChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ActuatorDesired::NumLongUpdatesChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
