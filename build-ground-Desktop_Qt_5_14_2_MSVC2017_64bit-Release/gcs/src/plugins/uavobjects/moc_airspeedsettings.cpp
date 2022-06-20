/****************************************************************************
** Meta object code from reading C++ file 'airspeedsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "airspeedsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airspeedsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspeedSettingsConstants_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSettingsConstants_t qt_meta_stringdata_AirspeedSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AirspeedSettingsConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 23) // "AirspeedSensorTypeCount"

    },
    "AirspeedSettingsConstants\0Enum\0"
    "AirspeedSensorTypeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSettingsConstants[] = {

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
       2, uint(AirspeedSettingsConstants::AirspeedSensorTypeCount),

       0        // eod
};

void AirspeedSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirspeedSettingsConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSettingsConstants.data,
    qt_meta_data_AirspeedSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirspeedSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirspeedSettings_AirspeedSensorType_t {
    QByteArrayData data[9];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSettings_AirspeedSensorType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSettings_AirspeedSensorType_t qt_meta_stringdata_AirspeedSettings_AirspeedSensorType = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AirspeedSettings_AirspeedSens..."
QT_MOC_LITERAL(1, 36, 4), // "Enum"
QT_MOC_LITERAL(2, 41, 23), // "PixHawkAirspeedMS4525DO"
QT_MOC_LITERAL(3, 65, 19), // "EagleTreeAirspeedV3"
QT_MOC_LITERAL(4, 85, 5), // "SDP3x"
QT_MOC_LITERAL(5, 91, 17), // "DIYDronesMPXV5004"
QT_MOC_LITERAL(6, 109, 17), // "DIYDronesMPXV7002"
QT_MOC_LITERAL(7, 127, 30), // "GroundSpeedBasedWindEstimation"
QT_MOC_LITERAL(8, 158, 4) // "None"

    },
    "AirspeedSettings_AirspeedSensorType\0"
    "Enum\0PixHawkAirspeedMS4525DO\0"
    "EagleTreeAirspeedV3\0SDP3x\0DIYDronesMPXV5004\0"
    "DIYDronesMPXV7002\0GroundSpeedBasedWindEstimation\0"
    "None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSettings_AirspeedSensorType[] = {

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
       1,    1, 0x0,    7,   19,

 // enum data: key, value
       2, uint(AirspeedSettings_AirspeedSensorType::PixHawkAirspeedMS4525DO),
       3, uint(AirspeedSettings_AirspeedSensorType::EagleTreeAirspeedV3),
       4, uint(AirspeedSettings_AirspeedSensorType::SDP3x),
       5, uint(AirspeedSettings_AirspeedSensorType::DIYDronesMPXV5004),
       6, uint(AirspeedSettings_AirspeedSensorType::DIYDronesMPXV7002),
       7, uint(AirspeedSettings_AirspeedSensorType::GroundSpeedBasedWindEstimation),
       8, uint(AirspeedSettings_AirspeedSensorType::None),

       0        // eod
};

void AirspeedSettings_AirspeedSensorType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AirspeedSettings_AirspeedSensorType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSettings_AirspeedSensorType.data,
    qt_meta_data_AirspeedSettings_AirspeedSensorType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedSettings_AirspeedSensorType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSettings_AirspeedSensorType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSettings_AirspeedSensorType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirspeedSettings_AirspeedSensorType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AirspeedSettings_t {
    QByteArrayData data[41];
    char stringdata0[888];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedSettings_t qt_meta_stringdata_AirspeedSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AirspeedSettings"
QT_MOC_LITERAL(1, 17, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 12), // "ScaleChanged"
QT_MOC_LITERAL(5, 50, 39), // "imuBasedEstimationLowPassPeri..."
QT_MOC_LITERAL(6, 90, 39), // "IMUBasedEstimationLowPassPeri..."
QT_MOC_LITERAL(7, 130, 39), // "imuBasedEstimationLowPassPeri..."
QT_MOC_LITERAL(8, 170, 39), // "IMUBasedEstimationLowPassPeri..."
QT_MOC_LITERAL(9, 210, 16), // "zeroPointChanged"
QT_MOC_LITERAL(10, 227, 16), // "ZeroPointChanged"
QT_MOC_LITERAL(11, 244, 19), // "samplePeriodChanged"
QT_MOC_LITERAL(12, 264, 19), // "SamplePeriodChanged"
QT_MOC_LITERAL(13, 284, 25), // "airspeedSensorTypeChanged"
QT_MOC_LITERAL(14, 310, 41), // "AirspeedSettings_AirspeedSens..."
QT_MOC_LITERAL(15, 352, 25), // "AirspeedSensorTypeChanged"
QT_MOC_LITERAL(16, 378, 8), // "setScale"
QT_MOC_LITERAL(17, 387, 35), // "setIMUBasedEstimationLowPassP..."
QT_MOC_LITERAL(18, 423, 35), // "setIMUBasedEstimationLowPassP..."
QT_MOC_LITERAL(19, 459, 12), // "setZeroPoint"
QT_MOC_LITERAL(20, 472, 15), // "setSamplePeriod"
QT_MOC_LITERAL(21, 488, 21), // "setAirspeedSensorType"
QT_MOC_LITERAL(22, 510, 17), // "emitNotifications"
QT_MOC_LITERAL(23, 528, 8), // "getScale"
QT_MOC_LITERAL(24, 537, 35), // "getIMUBasedEstimationLowPassP..."
QT_MOC_LITERAL(25, 573, 35), // "getIMUBasedEstimationLowPassP..."
QT_MOC_LITERAL(26, 609, 12), // "getZeroPoint"
QT_MOC_LITERAL(27, 622, 15), // "getSamplePeriod"
QT_MOC_LITERAL(28, 638, 21), // "getAirspeedSensorType"
QT_MOC_LITERAL(29, 660, 5), // "scale"
QT_MOC_LITERAL(30, 666, 32), // "imuBasedEstimationLowPassPeriod1"
QT_MOC_LITERAL(31, 699, 32), // "imuBasedEstimationLowPassPeriod2"
QT_MOC_LITERAL(32, 732, 9), // "zeroPoint"
QT_MOC_LITERAL(33, 742, 12), // "samplePeriod"
QT_MOC_LITERAL(34, 755, 18), // "airspeedSensorType"
QT_MOC_LITERAL(35, 774, 5), // "Scale"
QT_MOC_LITERAL(36, 780, 32), // "IMUBasedEstimationLowPassPeriod1"
QT_MOC_LITERAL(37, 813, 32), // "IMUBasedEstimationLowPassPeriod2"
QT_MOC_LITERAL(38, 846, 9), // "ZeroPoint"
QT_MOC_LITERAL(39, 856, 12), // "SamplePeriod"
QT_MOC_LITERAL(40, 869, 18) // "AirspeedSensorType"

    },
    "AirspeedSettings\0scaleChanged\0\0value\0"
    "ScaleChanged\0imuBasedEstimationLowPassPeriod1Changed\0"
    "IMUBasedEstimationLowPassPeriod1Changed\0"
    "imuBasedEstimationLowPassPeriod2Changed\0"
    "IMUBasedEstimationLowPassPeriod2Changed\0"
    "zeroPointChanged\0ZeroPointChanged\0"
    "samplePeriodChanged\0SamplePeriodChanged\0"
    "airspeedSensorTypeChanged\0"
    "AirspeedSettings_AirspeedSensorType::Enum\0"
    "AirspeedSensorTypeChanged\0setScale\0"
    "setIMUBasedEstimationLowPassPeriod1\0"
    "setIMUBasedEstimationLowPassPeriod2\0"
    "setZeroPoint\0setSamplePeriod\0"
    "setAirspeedSensorType\0emitNotifications\0"
    "getScale\0getIMUBasedEstimationLowPassPeriod1\0"
    "getIMUBasedEstimationLowPassPeriod2\0"
    "getZeroPoint\0getSamplePeriod\0"
    "getAirspeedSensorType\0scale\0"
    "imuBasedEstimationLowPassPeriod1\0"
    "imuBasedEstimationLowPassPeriod2\0"
    "zeroPoint\0samplePeriod\0airspeedSensorType\0"
    "Scale\0IMUBasedEstimationLowPassPeriod1\0"
    "IMUBasedEstimationLowPassPeriod2\0"
    "ZeroPoint\0SamplePeriod\0AirspeedSensorType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
      12,  216, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    1,  152,    2, 0x06 /* Public */,
       5,    1,  155,    2, 0x06 /* Public */,
       6,    1,  158,    2, 0x06 /* Public */,
       7,    1,  161,    2, 0x06 /* Public */,
       8,    1,  164,    2, 0x06 /* Public */,
       9,    1,  167,    2, 0x06 /* Public */,
      10,    1,  170,    2, 0x06 /* Public */,
      11,    1,  173,    2, 0x06 /* Public */,
      12,    1,  176,    2, 0x06 /* Public */,
      13,    1,  179,    2, 0x06 /* Public */,
      15,    1,  182,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  185,    2, 0x0a /* Public */,
      17,    1,  188,    2, 0x0a /* Public */,
      18,    1,  191,    2, 0x0a /* Public */,
      19,    1,  194,    2, 0x0a /* Public */,
      20,    1,  197,    2, 0x0a /* Public */,
      20,    1,  200,    2, 0x0a /* Public */,
      21,    1,  203,    2, 0x0a /* Public */,
      21,    1,  206,    2, 0x0a /* Public */,
      22,    0,  209,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      23,    0,  210,    2, 0x02 /* Public */,
      24,    0,  211,    2, 0x02 /* Public */,
      25,    0,  212,    2, 0x02 /* Public */,
      26,    0,  213,    2, 0x02 /* Public */,
      27,    0,  214,    2, 0x02 /* Public */,
      28,    0,  215,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 14,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 14,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UShort,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      29, QMetaType::Float, 0x00495103,
      30, QMetaType::Float, 0x00495003,
      31, QMetaType::Float, 0x00495003,
      32, QMetaType::UShort, 0x00495103,
      33, QMetaType::UShort, 0x00495103,
      34, 0x80000000 | 14, 0x0049510b,
      35, QMetaType::Float, 0x00495103,
      36, QMetaType::Float, 0x00495103,
      37, QMetaType::Float, 0x00495103,
      38, QMetaType::UShort, 0x00495103,
      39, QMetaType::UChar, 0x00495103,
      40, QMetaType::UChar, 0x00495103,

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

void AirspeedSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirspeedSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->ScaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->imuBasedEstimationLowPassPeriod1Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->IMUBasedEstimationLowPassPeriod1Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->imuBasedEstimationLowPassPeriod2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->IMUBasedEstimationLowPassPeriod2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->zeroPointChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->ZeroPointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->samplePeriodChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->SamplePeriodChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->airspeedSensorTypeChanged((*reinterpret_cast< const AirspeedSettings_AirspeedSensorType::Enum(*)>(_a[1]))); break;
        case 11: _t->AirspeedSensorTypeChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->setScale((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setIMUBasedEstimationLowPassPeriod1((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setIMUBasedEstimationLowPassPeriod2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->setZeroPoint((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 16: _t->setSamplePeriod((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 17: _t->setSamplePeriod((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 18: _t->setAirspeedSensorType((*reinterpret_cast< const AirspeedSettings_AirspeedSensorType::Enum(*)>(_a[1]))); break;
        case 19: _t->setAirspeedSensorType((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->emitNotifications(); break;
        case 21: { float _r = _t->getScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 22: { float _r = _t->getIMUBasedEstimationLowPassPeriod1();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 23: { float _r = _t->getIMUBasedEstimationLowPassPeriod2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: { quint16 _r = _t->getZeroPoint();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 25: { quint8 _r = _t->getSamplePeriod();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 26: { quint8 _r = _t->getAirspeedSensorType();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirspeedSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::scaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::ScaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::imuBasedEstimationLowPassPeriod1Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::IMUBasedEstimationLowPassPeriod1Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::imuBasedEstimationLowPassPeriod2Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::IMUBasedEstimationLowPassPeriod2Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::zeroPointChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::ZeroPointChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::samplePeriodChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::SamplePeriodChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(const AirspeedSettings_AirspeedSensorType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::airspeedSensorTypeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AirspeedSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspeedSettings::AirspeedSensorTypeChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirspeedSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->scale(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->imuBasedEstimationLowPassPeriod1(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->imuBasedEstimationLowPassPeriod2(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->zeroPoint(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->samplePeriod(); break;
        case 5: *reinterpret_cast< AirspeedSettings_AirspeedSensorType::Enum*>(_v) = _t->airspeedSensorType(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getScale(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getIMUBasedEstimationLowPassPeriod1(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getIMUBasedEstimationLowPassPeriod2(); break;
        case 9: *reinterpret_cast< quint16*>(_v) = _t->getZeroPoint(); break;
        case 10: *reinterpret_cast< quint8*>(_v) = _t->getSamplePeriod(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getAirspeedSensorType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirspeedSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setIMUBasedEstimationLowPassPeriod1(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setIMUBasedEstimationLowPassPeriod2(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setZeroPoint(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setSamplePeriod(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setAirspeedSensorType(*reinterpret_cast< AirspeedSettings_AirspeedSensorType::Enum*>(_v)); break;
        case 6: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setIMUBasedEstimationLowPassPeriod1(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setIMUBasedEstimationLowPassPeriod2(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setZeroPoint(*reinterpret_cast< quint16*>(_v)); break;
        case 10: _t->setSamplePeriod(*reinterpret_cast< quint8*>(_v)); break;
        case 11: _t->setAirspeedSensorType(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_AirspeedSettings[] = {
    QMetaObject::SuperData::link<AirspeedSettings_AirspeedSensorType::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AirspeedSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_AirspeedSettings.data,
    qt_meta_data_AirspeedSettings,
    qt_static_metacall,
    qt_meta_extradata_AirspeedSettings,
    nullptr
} };


const QMetaObject *AirspeedSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AirspeedSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
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
void AirspeedSettings::scaleChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirspeedSettings::ScaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AirspeedSettings::imuBasedEstimationLowPassPeriod1Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AirspeedSettings::IMUBasedEstimationLowPassPeriod1Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AirspeedSettings::imuBasedEstimationLowPassPeriod2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AirspeedSettings::IMUBasedEstimationLowPassPeriod2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AirspeedSettings::zeroPointChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AirspeedSettings::ZeroPointChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AirspeedSettings::samplePeriodChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AirspeedSettings::SamplePeriodChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AirspeedSettings::airspeedSensorTypeChanged(const AirspeedSettings_AirspeedSensorType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AirspeedSettings::AirspeedSensorTypeChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
