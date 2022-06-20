/****************************************************************************
** Meta object code from reading C++ file 'airspeedsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "airspeedsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airspeedsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspeedSensorConstants_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSensorConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSensorConstants_t qt_meta_stringdata_AirspeedSensorConstants = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AirspeedSensorConstants"
QT_MOC_LITERAL(1, 24, 4), // "Enum"
QT_MOC_LITERAL(2, 29, 20) // "SensorConnectedCount"

    },
    "AirspeedSensorConstants\0Enum\0"
    "SensorConnectedCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSensorConstants[] = {

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
       1,    1, 0x0,    1,   19,

 // enum data: key, value
       2, uint(AirspeedSensorConstants::SensorConnectedCount),

       0        // eod
};

void AirspeedSensorConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirspeedSensorConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSensorConstants.data,
    qt_meta_data_AirspeedSensorConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedSensorConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSensorConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSensorConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirspeedSensorConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirspeedSensor_SensorConnected_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSensor_SensorConnected_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSensor_SensorConnected_t qt_meta_stringdata_AirspeedSensor_SensorConnected = {
    {
QT_MOC_LITERAL(0, 0, 30), // "AirspeedSensor_SensorConnected"
QT_MOC_LITERAL(1, 31, 4), // "Enum"
QT_MOC_LITERAL(2, 36, 5), // "False"
QT_MOC_LITERAL(3, 42, 4) // "True"

    },
    "AirspeedSensor_SensorConnected\0Enum\0"
    "False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSensor_SensorConnected[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(AirspeedSensor_SensorConnected::False),
       3, uint(AirspeedSensor_SensorConnected::True),

       0        // eod
};

void AirspeedSensor_SensorConnected::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirspeedSensor_SensorConnected::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSensor_SensorConnected.data,
    qt_meta_data_AirspeedSensor_SensorConnected,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedSensor_SensorConnected::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSensor_SensorConnected::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSensor_SensorConnected.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirspeedSensor_SensorConnected::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirspeedSensor_t {
    QByteArrayData data[47];
    char stringdata0[913];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSensor_t qt_meta_stringdata_AirspeedSensor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AirspeedSensor"
QT_MOC_LITERAL(1, 15, 27), // "differentialPressureChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 27), // "DifferentialPressureChanged"
QT_MOC_LITERAL(5, 78, 18), // "temperatureChanged"
QT_MOC_LITERAL(6, 97, 18), // "TemperatureChanged"
QT_MOC_LITERAL(7, 116, 25), // "calibratedAirspeedChanged"
QT_MOC_LITERAL(8, 142, 25), // "CalibratedAirspeedChanged"
QT_MOC_LITERAL(9, 168, 19), // "trueAirspeedChanged"
QT_MOC_LITERAL(10, 188, 19), // "TrueAirspeedChanged"
QT_MOC_LITERAL(11, 208, 18), // "sensorValueChanged"
QT_MOC_LITERAL(12, 227, 18), // "SensorValueChanged"
QT_MOC_LITERAL(13, 246, 29), // "sensorValueTemperatureChanged"
QT_MOC_LITERAL(14, 276, 29), // "SensorValueTemperatureChanged"
QT_MOC_LITERAL(15, 306, 22), // "sensorConnectedChanged"
QT_MOC_LITERAL(16, 329, 36), // "AirspeedSensor_SensorConnecte..."
QT_MOC_LITERAL(17, 366, 22), // "SensorConnectedChanged"
QT_MOC_LITERAL(18, 389, 23), // "setDifferentialPressure"
QT_MOC_LITERAL(19, 413, 14), // "setTemperature"
QT_MOC_LITERAL(20, 428, 21), // "setCalibratedAirspeed"
QT_MOC_LITERAL(21, 450, 15), // "setTrueAirspeed"
QT_MOC_LITERAL(22, 466, 14), // "setSensorValue"
QT_MOC_LITERAL(23, 481, 25), // "setSensorValueTemperature"
QT_MOC_LITERAL(24, 507, 18), // "setSensorConnected"
QT_MOC_LITERAL(25, 526, 17), // "emitNotifications"
QT_MOC_LITERAL(26, 544, 23), // "getDifferentialPressure"
QT_MOC_LITERAL(27, 568, 14), // "getTemperature"
QT_MOC_LITERAL(28, 583, 21), // "getCalibratedAirspeed"
QT_MOC_LITERAL(29, 605, 15), // "getTrueAirspeed"
QT_MOC_LITERAL(30, 621, 14), // "getSensorValue"
QT_MOC_LITERAL(31, 636, 25), // "getSensorValueTemperature"
QT_MOC_LITERAL(32, 662, 18), // "getSensorConnected"
QT_MOC_LITERAL(33, 681, 20), // "differentialPressure"
QT_MOC_LITERAL(34, 702, 11), // "temperature"
QT_MOC_LITERAL(35, 714, 18), // "calibratedAirspeed"
QT_MOC_LITERAL(36, 733, 12), // "trueAirspeed"
QT_MOC_LITERAL(37, 746, 11), // "sensorValue"
QT_MOC_LITERAL(38, 758, 22), // "sensorValueTemperature"
QT_MOC_LITERAL(39, 781, 15), // "sensorConnected"
QT_MOC_LITERAL(40, 797, 20), // "DifferentialPressure"
QT_MOC_LITERAL(41, 818, 11), // "Temperature"
QT_MOC_LITERAL(42, 830, 18), // "CalibratedAirspeed"
QT_MOC_LITERAL(43, 849, 12), // "TrueAirspeed"
QT_MOC_LITERAL(44, 862, 11), // "SensorValue"
QT_MOC_LITERAL(45, 874, 22), // "SensorValueTemperature"
QT_MOC_LITERAL(46, 897, 15) // "SensorConnected"

    },
    "AirspeedSensor\0differentialPressureChanged\0"
    "\0value\0DifferentialPressureChanged\0"
    "temperatureChanged\0TemperatureChanged\0"
    "calibratedAirspeedChanged\0"
    "CalibratedAirspeedChanged\0trueAirspeedChanged\0"
    "TrueAirspeedChanged\0sensorValueChanged\0"
    "SensorValueChanged\0sensorValueTemperatureChanged\0"
    "SensorValueTemperatureChanged\0"
    "sensorConnectedChanged\0"
    "AirspeedSensor_SensorConnected::Enum\0"
    "SensorConnectedChanged\0setDifferentialPressure\0"
    "setTemperature\0setCalibratedAirspeed\0"
    "setTrueAirspeed\0setSensorValue\0"
    "setSensorValueTemperature\0setSensorConnected\0"
    "emitNotifications\0getDifferentialPressure\0"
    "getTemperature\0getCalibratedAirspeed\0"
    "getTrueAirspeed\0getSensorValue\0"
    "getSensorValueTemperature\0getSensorConnected\0"
    "differentialPressure\0temperature\0"
    "calibratedAirspeed\0trueAirspeed\0"
    "sensorValue\0sensorValueTemperature\0"
    "sensorConnected\0DifferentialPressure\0"
    "Temperature\0CalibratedAirspeed\0"
    "TrueAirspeed\0SensorValue\0"
    "SensorValueTemperature\0SensorConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      14,  238, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    1,  167,    2, 0x06 /* Public */,
       5,    1,  170,    2, 0x06 /* Public */,
       6,    1,  173,    2, 0x06 /* Public */,
       7,    1,  176,    2, 0x06 /* Public */,
       8,    1,  179,    2, 0x06 /* Public */,
       9,    1,  182,    2, 0x06 /* Public */,
      10,    1,  185,    2, 0x06 /* Public */,
      11,    1,  188,    2, 0x06 /* Public */,
      12,    1,  191,    2, 0x06 /* Public */,
      13,    1,  194,    2, 0x06 /* Public */,
      14,    1,  197,    2, 0x06 /* Public */,
      15,    1,  200,    2, 0x06 /* Public */,
      17,    1,  203,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  206,    2, 0x0a /* Public */,
      19,    1,  209,    2, 0x0a /* Public */,
      20,    1,  212,    2, 0x0a /* Public */,
      21,    1,  215,    2, 0x0a /* Public */,
      22,    1,  218,    2, 0x0a /* Public */,
      23,    1,  221,    2, 0x0a /* Public */,
      24,    1,  224,    2, 0x0a /* Public */,
      24,    1,  227,    2, 0x0a /* Public */,
      25,    0,  230,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  231,    2, 0x02 /* Public */,
      27,    0,  232,    2, 0x02 /* Public */,
      28,    0,  233,    2, 0x02 /* Public */,
      29,    0,  234,    2, 0x02 /* Public */,
      30,    0,  235,    2, 0x02 /* Public */,
      31,    0,  236,    2, 0x02 /* Public */,
      32,    0,  237,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, 0x80000000 | 16,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,

 // properties: name, type, flags
      33, QMetaType::Float, 0x00495103,
      34, QMetaType::Float, 0x00495103,
      35, QMetaType::Float, 0x00495103,
      36, QMetaType::Float, 0x00495103,
      37, QMetaType::UShort, 0x00495103,
      38, QMetaType::UShort, 0x00495103,
      39, 0x80000000 | 16, 0x0049510b,
      40, QMetaType::Float, 0x00495103,
      41, QMetaType::Float, 0x00495103,
      42, QMetaType::Float, 0x00495103,
      43, QMetaType::Float, 0x00495103,
      44, QMetaType::UShort, 0x00495103,
      45, QMetaType::UShort, 0x00495103,
      46, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       8,
      10,
      12,
       1,
       3,
       5,
       7,
       9,
      11,
      13,

       0        // eod
};

void AirspeedSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirspeedSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->differentialPressureChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->DifferentialPressureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->temperatureChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->TemperatureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->calibratedAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->CalibratedAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->trueAirspeedChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->TrueAirspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->sensorValueChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->SensorValueChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->sensorValueTemperatureChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->SensorValueTemperatureChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->sensorConnectedChanged((*reinterpret_cast< const AirspeedSensor_SensorConnected::Enum(*)>(_a[1]))); break;
        case 13: _t->SensorConnectedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->setDifferentialPressure((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->setTemperature((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->setCalibratedAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 17: _t->setTrueAirspeed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 18: _t->setSensorValue((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 19: _t->setSensorValueTemperature((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 20: _t->setSensorConnected((*reinterpret_cast< const AirspeedSensor_SensorConnected::Enum(*)>(_a[1]))); break;
        case 21: _t->setSensorConnected((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: _t->emitNotifications(); break;
        case 23: { float _r = _t->getDifferentialPressure();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: { float _r = _t->getTemperature();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 25: { float _r = _t->getCalibratedAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 26: { float _r = _t->getTrueAirspeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 27: { quint16 _r = _t->getSensorValue();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 28: { quint16 _r = _t->getSensorValueTemperature();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint8 _r = _t->getSensorConnected();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirspeedSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::differentialPressureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::DifferentialPressureChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::temperatureChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::TemperatureChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::calibratedAirspeedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::CalibratedAirspeedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::trueAirspeedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::TrueAirspeedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::sensorValueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::SensorValueChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::sensorValueTemperatureChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::SensorValueTemperatureChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(const AirspeedSensor_SensorConnected::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::sensorConnectedChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AirspeedSensor::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSensor::SensorConnectedChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirspeedSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->differentialPressure(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->temperature(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->calibratedAirspeed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->trueAirspeed(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->sensorValue(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->sensorValueTemperature(); break;
        case 6: *reinterpret_cast< AirspeedSensor_SensorConnected::Enum*>(_v) = _t->sensorConnected(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getDifferentialPressure(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getTemperature(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getCalibratedAirspeed(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getTrueAirspeed(); break;
        case 11: *reinterpret_cast< quint16*>(_v) = _t->getSensorValue(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->getSensorValueTemperature(); break;
        case 13: *reinterpret_cast< quint8*>(_v) = _t->getSensorConnected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirspeedSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDifferentialPressure(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setSensorValue(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setSensorValueTemperature(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setSensorConnected(*reinterpret_cast< AirspeedSensor_SensorConnected::Enum*>(_v)); break;
        case 7: _t->setDifferentialPressure(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setCalibratedAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setTrueAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setSensorValue(*reinterpret_cast< quint16*>(_v)); break;
        case 12: _t->setSensorValueTemperature(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setSensorConnected(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_AirspeedSensor[] = {
    QMetaObject::SuperData::link<AirspeedSensor_SensorConnected::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AirspeedSensor::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSensor.data,
    qt_meta_data_AirspeedSensor,
    qt_static_metacall,
    qt_meta_extradata_AirspeedSensor,
    nullptr
} };


const QMetaObject *AirspeedSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSensor.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AirspeedSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AirspeedSensor::differentialPressureChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirspeedSensor::DifferentialPressureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AirspeedSensor::temperatureChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AirspeedSensor::TemperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AirspeedSensor::calibratedAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AirspeedSensor::CalibratedAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AirspeedSensor::trueAirspeedChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AirspeedSensor::TrueAirspeedChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AirspeedSensor::sensorValueChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AirspeedSensor::SensorValueChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AirspeedSensor::sensorValueTemperatureChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AirspeedSensor::SensorValueTemperatureChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AirspeedSensor::sensorConnectedChanged(const AirspeedSensor_SensorConnected::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AirspeedSensor::SensorConnectedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
