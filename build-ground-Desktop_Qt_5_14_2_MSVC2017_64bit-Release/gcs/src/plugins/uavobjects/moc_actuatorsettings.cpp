/****************************************************************************
** Meta object code from reading C++ file 'actuatorsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "actuatorsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actuatorsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorSettingsConstants_t {
    QByteArrayData data[6];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettingsConstants_t qt_meta_stringdata_ActuatorSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ActuatorSettingsConstants"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 13), // "BankModeCount"
QT_MOC_LITERAL(3, 45, 16), // "ChannelTypeCount"
QT_MOC_LITERAL(4, 62, 25), // "MotorsSpinWhileArmedCount"
QT_MOC_LITERAL(5, 88, 24) // "LowThrottleZeroAxisCount"

    },
    "ActuatorSettingsConstants\0Enum\0"
    "BankModeCount\0ChannelTypeCount\0"
    "MotorsSpinWhileArmedCount\0"
    "LowThrottleZeroAxisCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettingsConstants[] = {

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
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(ActuatorSettingsConstants::BankModeCount),
       3, uint(ActuatorSettingsConstants::ChannelTypeCount),
       4, uint(ActuatorSettingsConstants::MotorsSpinWhileArmedCount),
       5, uint(ActuatorSettingsConstants::LowThrottleZeroAxisCount),

       0        // eod
};

void ActuatorSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorSettingsConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettingsConstants.data,
    qt_meta_data_ActuatorSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorSettings_BankMode_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettings_BankMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettings_BankMode_t qt_meta_stringdata_ActuatorSettings_BankMode = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ActuatorSettings_BankMode"
QT_MOC_LITERAL(1, 26, 4), // "Enum"
QT_MOC_LITERAL(2, 31, 3), // "PWM"
QT_MOC_LITERAL(3, 35, 7), // "PWMSync"
QT_MOC_LITERAL(4, 43, 10), // "OneShot125"
QT_MOC_LITERAL(5, 54, 9), // "OneShot42"
QT_MOC_LITERAL(6, 64, 9), // "MultiShot"
QT_MOC_LITERAL(7, 74, 5) // "DShot"

    },
    "ActuatorSettings_BankMode\0Enum\0PWM\0"
    "PWMSync\0OneShot125\0OneShot42\0MultiShot\0"
    "DShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettings_BankMode[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(ActuatorSettings_BankMode::PWM),
       3, uint(ActuatorSettings_BankMode::PWMSync),
       4, uint(ActuatorSettings_BankMode::OneShot125),
       5, uint(ActuatorSettings_BankMode::OneShot42),
       6, uint(ActuatorSettings_BankMode::MultiShot),
       7, uint(ActuatorSettings_BankMode::DShot),

       0        // eod
};

void ActuatorSettings_BankMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorSettings_BankMode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettings_BankMode.data,
    qt_meta_data_ActuatorSettings_BankMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorSettings_BankMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettings_BankMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettings_BankMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorSettings_BankMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorSettings_ChannelType_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettings_ChannelType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettings_ChannelType_t qt_meta_stringdata_ActuatorSettings_ChannelType = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ActuatorSettings_ChannelType"
QT_MOC_LITERAL(1, 29, 4), // "Enum"
QT_MOC_LITERAL(2, 34, 3), // "PWM"
QT_MOC_LITERAL(3, 38, 2), // "MK"
QT_MOC_LITERAL(4, 41, 6), // "ASTEC4"
QT_MOC_LITERAL(5, 48, 14), // "PWMAlarmBuzzer"
QT_MOC_LITERAL(6, 63, 9), // "Armingled"
QT_MOC_LITERAL(7, 73, 7) // "Infoled"

    },
    "ActuatorSettings_ChannelType\0Enum\0PWM\0"
    "MK\0ASTEC4\0PWMAlarmBuzzer\0Armingled\0"
    "Infoled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettings_ChannelType[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(ActuatorSettings_ChannelType::PWM),
       3, uint(ActuatorSettings_ChannelType::MK),
       4, uint(ActuatorSettings_ChannelType::ASTEC4),
       5, uint(ActuatorSettings_ChannelType::PWMAlarmBuzzer),
       6, uint(ActuatorSettings_ChannelType::Armingled),
       7, uint(ActuatorSettings_ChannelType::Infoled),

       0        // eod
};

void ActuatorSettings_ChannelType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorSettings_ChannelType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettings_ChannelType.data,
    qt_meta_data_ActuatorSettings_ChannelType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorSettings_ChannelType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettings_ChannelType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettings_ChannelType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorSettings_ChannelType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed_t qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed = {
    {
QT_MOC_LITERAL(0, 0, 37), // "ActuatorSettings_MotorsSpinWh..."
QT_MOC_LITERAL(1, 38, 4), // "Enum"
QT_MOC_LITERAL(2, 43, 5), // "False"
QT_MOC_LITERAL(3, 49, 4) // "True"

    },
    "ActuatorSettings_MotorsSpinWhileArmed\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettings_MotorsSpinWhileArmed[] = {

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
       2, uint(ActuatorSettings_MotorsSpinWhileArmed::False),
       3, uint(ActuatorSettings_MotorsSpinWhileArmed::True),

       0        // eod
};

void ActuatorSettings_MotorsSpinWhileArmed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorSettings_MotorsSpinWhileArmed::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed.data,
    qt_meta_data_ActuatorSettings_MotorsSpinWhileArmed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorSettings_MotorsSpinWhileArmed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettings_MotorsSpinWhileArmed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettings_MotorsSpinWhileArmed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorSettings_MotorsSpinWhileArmed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis_t qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis = {
    {
QT_MOC_LITERAL(0, 0, 36), // "ActuatorSettings_LowThrottleZ..."
QT_MOC_LITERAL(1, 37, 4), // "Enum"
QT_MOC_LITERAL(2, 42, 5), // "False"
QT_MOC_LITERAL(3, 48, 4) // "True"

    },
    "ActuatorSettings_LowThrottleZeroAxis\0"
    "Enum\0False\0True"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettings_LowThrottleZeroAxis[] = {

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
       2, uint(ActuatorSettings_LowThrottleZeroAxis::False),
       3, uint(ActuatorSettings_LowThrottleZeroAxis::True),

       0        // eod
};

void ActuatorSettings_LowThrottleZeroAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorSettings_LowThrottleZeroAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis.data,
    qt_meta_data_ActuatorSettings_LowThrottleZeroAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorSettings_LowThrottleZeroAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettings_LowThrottleZeroAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettings_LowThrottleZeroAxis.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorSettings_LowThrottleZeroAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorSettings_t {
    QByteArrayData data[586];
    char stringdata0[10348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorSettings_t qt_meta_stringdata_ActuatorSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ActuatorSettings"
QT_MOC_LITERAL(1, 17, 21), // "bankUpdateFreqChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "index"
QT_MOC_LITERAL(4, 46, 5), // "value"
QT_MOC_LITERAL(5, 52, 21), // "BankUpdateFreqChanged"
QT_MOC_LITERAL(6, 74, 22), // "bankUpdateFreq0Changed"
QT_MOC_LITERAL(7, 97, 23), // "BankUpdateFreq_0Changed"
QT_MOC_LITERAL(8, 121, 22), // "bankUpdateFreq1Changed"
QT_MOC_LITERAL(9, 144, 23), // "BankUpdateFreq_1Changed"
QT_MOC_LITERAL(10, 168, 22), // "bankUpdateFreq2Changed"
QT_MOC_LITERAL(11, 191, 23), // "BankUpdateFreq_2Changed"
QT_MOC_LITERAL(12, 215, 22), // "bankUpdateFreq3Changed"
QT_MOC_LITERAL(13, 238, 23), // "BankUpdateFreq_3Changed"
QT_MOC_LITERAL(14, 262, 22), // "bankUpdateFreq4Changed"
QT_MOC_LITERAL(15, 285, 23), // "BankUpdateFreq_4Changed"
QT_MOC_LITERAL(16, 309, 22), // "bankUpdateFreq5Changed"
QT_MOC_LITERAL(17, 332, 23), // "BankUpdateFreq_5Changed"
QT_MOC_LITERAL(18, 356, 16), // "dShotModeChanged"
QT_MOC_LITERAL(19, 373, 16), // "DShotModeChanged"
QT_MOC_LITERAL(20, 390, 17), // "channelMaxChanged"
QT_MOC_LITERAL(21, 408, 17), // "ChannelMaxChanged"
QT_MOC_LITERAL(22, 426, 18), // "channelMax0Changed"
QT_MOC_LITERAL(23, 445, 19), // "ChannelMax_0Changed"
QT_MOC_LITERAL(24, 465, 18), // "channelMax1Changed"
QT_MOC_LITERAL(25, 484, 19), // "ChannelMax_1Changed"
QT_MOC_LITERAL(26, 504, 18), // "channelMax2Changed"
QT_MOC_LITERAL(27, 523, 19), // "ChannelMax_2Changed"
QT_MOC_LITERAL(28, 543, 18), // "channelMax3Changed"
QT_MOC_LITERAL(29, 562, 19), // "ChannelMax_3Changed"
QT_MOC_LITERAL(30, 582, 18), // "channelMax4Changed"
QT_MOC_LITERAL(31, 601, 19), // "ChannelMax_4Changed"
QT_MOC_LITERAL(32, 621, 18), // "channelMax5Changed"
QT_MOC_LITERAL(33, 640, 19), // "ChannelMax_5Changed"
QT_MOC_LITERAL(34, 660, 18), // "channelMax6Changed"
QT_MOC_LITERAL(35, 679, 19), // "ChannelMax_6Changed"
QT_MOC_LITERAL(36, 699, 18), // "channelMax7Changed"
QT_MOC_LITERAL(37, 718, 19), // "ChannelMax_7Changed"
QT_MOC_LITERAL(38, 738, 18), // "channelMax8Changed"
QT_MOC_LITERAL(39, 757, 19), // "ChannelMax_8Changed"
QT_MOC_LITERAL(40, 777, 18), // "channelMax9Changed"
QT_MOC_LITERAL(41, 796, 19), // "ChannelMax_9Changed"
QT_MOC_LITERAL(42, 816, 19), // "channelMax10Changed"
QT_MOC_LITERAL(43, 836, 20), // "ChannelMax_10Changed"
QT_MOC_LITERAL(44, 857, 19), // "channelMax11Changed"
QT_MOC_LITERAL(45, 877, 20), // "ChannelMax_11Changed"
QT_MOC_LITERAL(46, 898, 21), // "channelNeutralChanged"
QT_MOC_LITERAL(47, 920, 21), // "ChannelNeutralChanged"
QT_MOC_LITERAL(48, 942, 22), // "channelNeutral0Changed"
QT_MOC_LITERAL(49, 965, 23), // "ChannelNeutral_0Changed"
QT_MOC_LITERAL(50, 989, 22), // "channelNeutral1Changed"
QT_MOC_LITERAL(51, 1012, 23), // "ChannelNeutral_1Changed"
QT_MOC_LITERAL(52, 1036, 22), // "channelNeutral2Changed"
QT_MOC_LITERAL(53, 1059, 23), // "ChannelNeutral_2Changed"
QT_MOC_LITERAL(54, 1083, 22), // "channelNeutral3Changed"
QT_MOC_LITERAL(55, 1106, 23), // "ChannelNeutral_3Changed"
QT_MOC_LITERAL(56, 1130, 22), // "channelNeutral4Changed"
QT_MOC_LITERAL(57, 1153, 23), // "ChannelNeutral_4Changed"
QT_MOC_LITERAL(58, 1177, 22), // "channelNeutral5Changed"
QT_MOC_LITERAL(59, 1200, 23), // "ChannelNeutral_5Changed"
QT_MOC_LITERAL(60, 1224, 22), // "channelNeutral6Changed"
QT_MOC_LITERAL(61, 1247, 23), // "ChannelNeutral_6Changed"
QT_MOC_LITERAL(62, 1271, 22), // "channelNeutral7Changed"
QT_MOC_LITERAL(63, 1294, 23), // "ChannelNeutral_7Changed"
QT_MOC_LITERAL(64, 1318, 22), // "channelNeutral8Changed"
QT_MOC_LITERAL(65, 1341, 23), // "ChannelNeutral_8Changed"
QT_MOC_LITERAL(66, 1365, 22), // "channelNeutral9Changed"
QT_MOC_LITERAL(67, 1388, 23), // "ChannelNeutral_9Changed"
QT_MOC_LITERAL(68, 1412, 23), // "channelNeutral10Changed"
QT_MOC_LITERAL(69, 1436, 24), // "ChannelNeutral_10Changed"
QT_MOC_LITERAL(70, 1461, 23), // "channelNeutral11Changed"
QT_MOC_LITERAL(71, 1485, 24), // "ChannelNeutral_11Changed"
QT_MOC_LITERAL(72, 1510, 17), // "channelMinChanged"
QT_MOC_LITERAL(73, 1528, 17), // "ChannelMinChanged"
QT_MOC_LITERAL(74, 1546, 18), // "channelMin0Changed"
QT_MOC_LITERAL(75, 1565, 19), // "ChannelMin_0Changed"
QT_MOC_LITERAL(76, 1585, 18), // "channelMin1Changed"
QT_MOC_LITERAL(77, 1604, 19), // "ChannelMin_1Changed"
QT_MOC_LITERAL(78, 1624, 18), // "channelMin2Changed"
QT_MOC_LITERAL(79, 1643, 19), // "ChannelMin_2Changed"
QT_MOC_LITERAL(80, 1663, 18), // "channelMin3Changed"
QT_MOC_LITERAL(81, 1682, 19), // "ChannelMin_3Changed"
QT_MOC_LITERAL(82, 1702, 18), // "channelMin4Changed"
QT_MOC_LITERAL(83, 1721, 19), // "ChannelMin_4Changed"
QT_MOC_LITERAL(84, 1741, 18), // "channelMin5Changed"
QT_MOC_LITERAL(85, 1760, 19), // "ChannelMin_5Changed"
QT_MOC_LITERAL(86, 1780, 18), // "channelMin6Changed"
QT_MOC_LITERAL(87, 1799, 19), // "ChannelMin_6Changed"
QT_MOC_LITERAL(88, 1819, 18), // "channelMin7Changed"
QT_MOC_LITERAL(89, 1838, 19), // "ChannelMin_7Changed"
QT_MOC_LITERAL(90, 1858, 18), // "channelMin8Changed"
QT_MOC_LITERAL(91, 1877, 19), // "ChannelMin_8Changed"
QT_MOC_LITERAL(92, 1897, 18), // "channelMin9Changed"
QT_MOC_LITERAL(93, 1916, 19), // "ChannelMin_9Changed"
QT_MOC_LITERAL(94, 1936, 19), // "channelMin10Changed"
QT_MOC_LITERAL(95, 1956, 20), // "ChannelMin_10Changed"
QT_MOC_LITERAL(96, 1977, 19), // "channelMin11Changed"
QT_MOC_LITERAL(97, 1997, 20), // "ChannelMin_11Changed"
QT_MOC_LITERAL(98, 2018, 15), // "bankModeChanged"
QT_MOC_LITERAL(99, 2034, 31), // "ActuatorSettings_BankMode::Enum"
QT_MOC_LITERAL(100, 2066, 15), // "BankModeChanged"
QT_MOC_LITERAL(101, 2082, 16), // "bankMode0Changed"
QT_MOC_LITERAL(102, 2099, 17), // "BankMode_0Changed"
QT_MOC_LITERAL(103, 2117, 16), // "bankMode1Changed"
QT_MOC_LITERAL(104, 2134, 17), // "BankMode_1Changed"
QT_MOC_LITERAL(105, 2152, 16), // "bankMode2Changed"
QT_MOC_LITERAL(106, 2169, 17), // "BankMode_2Changed"
QT_MOC_LITERAL(107, 2187, 16), // "bankMode3Changed"
QT_MOC_LITERAL(108, 2204, 17), // "BankMode_3Changed"
QT_MOC_LITERAL(109, 2222, 16), // "bankMode4Changed"
QT_MOC_LITERAL(110, 2239, 17), // "BankMode_4Changed"
QT_MOC_LITERAL(111, 2257, 16), // "bankMode5Changed"
QT_MOC_LITERAL(112, 2274, 17), // "BankMode_5Changed"
QT_MOC_LITERAL(113, 2292, 18), // "channelTypeChanged"
QT_MOC_LITERAL(114, 2311, 34), // "ActuatorSettings_ChannelType:..."
QT_MOC_LITERAL(115, 2346, 18), // "ChannelTypeChanged"
QT_MOC_LITERAL(116, 2365, 19), // "channelType0Changed"
QT_MOC_LITERAL(117, 2385, 20), // "ChannelType_0Changed"
QT_MOC_LITERAL(118, 2406, 19), // "channelType1Changed"
QT_MOC_LITERAL(119, 2426, 20), // "ChannelType_1Changed"
QT_MOC_LITERAL(120, 2447, 19), // "channelType2Changed"
QT_MOC_LITERAL(121, 2467, 20), // "ChannelType_2Changed"
QT_MOC_LITERAL(122, 2488, 19), // "channelType3Changed"
QT_MOC_LITERAL(123, 2508, 20), // "ChannelType_3Changed"
QT_MOC_LITERAL(124, 2529, 19), // "channelType4Changed"
QT_MOC_LITERAL(125, 2549, 20), // "ChannelType_4Changed"
QT_MOC_LITERAL(126, 2570, 19), // "channelType5Changed"
QT_MOC_LITERAL(127, 2590, 20), // "ChannelType_5Changed"
QT_MOC_LITERAL(128, 2611, 19), // "channelType6Changed"
QT_MOC_LITERAL(129, 2631, 20), // "ChannelType_6Changed"
QT_MOC_LITERAL(130, 2652, 19), // "channelType7Changed"
QT_MOC_LITERAL(131, 2672, 20), // "ChannelType_7Changed"
QT_MOC_LITERAL(132, 2693, 19), // "channelType8Changed"
QT_MOC_LITERAL(133, 2713, 20), // "ChannelType_8Changed"
QT_MOC_LITERAL(134, 2734, 19), // "channelType9Changed"
QT_MOC_LITERAL(135, 2754, 20), // "ChannelType_9Changed"
QT_MOC_LITERAL(136, 2775, 20), // "channelType10Changed"
QT_MOC_LITERAL(137, 2796, 21), // "ChannelType_10Changed"
QT_MOC_LITERAL(138, 2818, 20), // "channelType11Changed"
QT_MOC_LITERAL(139, 2839, 21), // "ChannelType_11Changed"
QT_MOC_LITERAL(140, 2861, 18), // "channelAddrChanged"
QT_MOC_LITERAL(141, 2880, 18), // "ChannelAddrChanged"
QT_MOC_LITERAL(142, 2899, 19), // "channelAddr0Changed"
QT_MOC_LITERAL(143, 2919, 20), // "ChannelAddr_0Changed"
QT_MOC_LITERAL(144, 2940, 19), // "channelAddr1Changed"
QT_MOC_LITERAL(145, 2960, 20), // "ChannelAddr_1Changed"
QT_MOC_LITERAL(146, 2981, 19), // "channelAddr2Changed"
QT_MOC_LITERAL(147, 3001, 20), // "ChannelAddr_2Changed"
QT_MOC_LITERAL(148, 3022, 19), // "channelAddr3Changed"
QT_MOC_LITERAL(149, 3042, 20), // "ChannelAddr_3Changed"
QT_MOC_LITERAL(150, 3063, 19), // "channelAddr4Changed"
QT_MOC_LITERAL(151, 3083, 20), // "ChannelAddr_4Changed"
QT_MOC_LITERAL(152, 3104, 19), // "channelAddr5Changed"
QT_MOC_LITERAL(153, 3124, 20), // "ChannelAddr_5Changed"
QT_MOC_LITERAL(154, 3145, 19), // "channelAddr6Changed"
QT_MOC_LITERAL(155, 3165, 20), // "ChannelAddr_6Changed"
QT_MOC_LITERAL(156, 3186, 19), // "channelAddr7Changed"
QT_MOC_LITERAL(157, 3206, 20), // "ChannelAddr_7Changed"
QT_MOC_LITERAL(158, 3227, 19), // "channelAddr8Changed"
QT_MOC_LITERAL(159, 3247, 20), // "ChannelAddr_8Changed"
QT_MOC_LITERAL(160, 3268, 19), // "channelAddr9Changed"
QT_MOC_LITERAL(161, 3288, 20), // "ChannelAddr_9Changed"
QT_MOC_LITERAL(162, 3309, 20), // "channelAddr10Changed"
QT_MOC_LITERAL(163, 3330, 21), // "ChannelAddr_10Changed"
QT_MOC_LITERAL(164, 3352, 20), // "channelAddr11Changed"
QT_MOC_LITERAL(165, 3373, 21), // "ChannelAddr_11Changed"
QT_MOC_LITERAL(166, 3395, 27), // "motorsSpinWhileArmedChanged"
QT_MOC_LITERAL(167, 3423, 43), // "ActuatorSettings_MotorsSpinWh..."
QT_MOC_LITERAL(168, 3467, 27), // "MotorsSpinWhileArmedChanged"
QT_MOC_LITERAL(169, 3495, 26), // "lowThrottleZeroAxisChanged"
QT_MOC_LITERAL(170, 3522, 42), // "ActuatorSettings_LowThrottleZ..."
QT_MOC_LITERAL(171, 3565, 26), // "LowThrottleZeroAxisChanged"
QT_MOC_LITERAL(172, 3592, 30), // "lowThrottleZeroAxisRollChanged"
QT_MOC_LITERAL(173, 3623, 31), // "LowThrottleZeroAxis_RollChanged"
QT_MOC_LITERAL(174, 3655, 31), // "lowThrottleZeroAxisPitchChanged"
QT_MOC_LITERAL(175, 3687, 32), // "LowThrottleZeroAxis_PitchChanged"
QT_MOC_LITERAL(176, 3720, 29), // "lowThrottleZeroAxisYawChanged"
QT_MOC_LITERAL(177, 3750, 30), // "LowThrottleZeroAxis_YawChanged"
QT_MOC_LITERAL(178, 3781, 17), // "setBankUpdateFreq"
QT_MOC_LITERAL(179, 3799, 18), // "setBankUpdateFreq0"
QT_MOC_LITERAL(180, 3818, 19), // "setBankUpdateFreq_0"
QT_MOC_LITERAL(181, 3838, 18), // "setBankUpdateFreq1"
QT_MOC_LITERAL(182, 3857, 19), // "setBankUpdateFreq_1"
QT_MOC_LITERAL(183, 3877, 18), // "setBankUpdateFreq2"
QT_MOC_LITERAL(184, 3896, 19), // "setBankUpdateFreq_2"
QT_MOC_LITERAL(185, 3916, 18), // "setBankUpdateFreq3"
QT_MOC_LITERAL(186, 3935, 19), // "setBankUpdateFreq_3"
QT_MOC_LITERAL(187, 3955, 18), // "setBankUpdateFreq4"
QT_MOC_LITERAL(188, 3974, 19), // "setBankUpdateFreq_4"
QT_MOC_LITERAL(189, 3994, 18), // "setBankUpdateFreq5"
QT_MOC_LITERAL(190, 4013, 19), // "setBankUpdateFreq_5"
QT_MOC_LITERAL(191, 4033, 12), // "setDShotMode"
QT_MOC_LITERAL(192, 4046, 13), // "setChannelMax"
QT_MOC_LITERAL(193, 4060, 14), // "setChannelMax0"
QT_MOC_LITERAL(194, 4075, 15), // "setChannelMax_0"
QT_MOC_LITERAL(195, 4091, 14), // "setChannelMax1"
QT_MOC_LITERAL(196, 4106, 15), // "setChannelMax_1"
QT_MOC_LITERAL(197, 4122, 14), // "setChannelMax2"
QT_MOC_LITERAL(198, 4137, 15), // "setChannelMax_2"
QT_MOC_LITERAL(199, 4153, 14), // "setChannelMax3"
QT_MOC_LITERAL(200, 4168, 15), // "setChannelMax_3"
QT_MOC_LITERAL(201, 4184, 14), // "setChannelMax4"
QT_MOC_LITERAL(202, 4199, 15), // "setChannelMax_4"
QT_MOC_LITERAL(203, 4215, 14), // "setChannelMax5"
QT_MOC_LITERAL(204, 4230, 15), // "setChannelMax_5"
QT_MOC_LITERAL(205, 4246, 14), // "setChannelMax6"
QT_MOC_LITERAL(206, 4261, 15), // "setChannelMax_6"
QT_MOC_LITERAL(207, 4277, 14), // "setChannelMax7"
QT_MOC_LITERAL(208, 4292, 15), // "setChannelMax_7"
QT_MOC_LITERAL(209, 4308, 14), // "setChannelMax8"
QT_MOC_LITERAL(210, 4323, 15), // "setChannelMax_8"
QT_MOC_LITERAL(211, 4339, 14), // "setChannelMax9"
QT_MOC_LITERAL(212, 4354, 15), // "setChannelMax_9"
QT_MOC_LITERAL(213, 4370, 15), // "setChannelMax10"
QT_MOC_LITERAL(214, 4386, 16), // "setChannelMax_10"
QT_MOC_LITERAL(215, 4403, 15), // "setChannelMax11"
QT_MOC_LITERAL(216, 4419, 16), // "setChannelMax_11"
QT_MOC_LITERAL(217, 4436, 17), // "setChannelNeutral"
QT_MOC_LITERAL(218, 4454, 18), // "setChannelNeutral0"
QT_MOC_LITERAL(219, 4473, 19), // "setChannelNeutral_0"
QT_MOC_LITERAL(220, 4493, 18), // "setChannelNeutral1"
QT_MOC_LITERAL(221, 4512, 19), // "setChannelNeutral_1"
QT_MOC_LITERAL(222, 4532, 18), // "setChannelNeutral2"
QT_MOC_LITERAL(223, 4551, 19), // "setChannelNeutral_2"
QT_MOC_LITERAL(224, 4571, 18), // "setChannelNeutral3"
QT_MOC_LITERAL(225, 4590, 19), // "setChannelNeutral_3"
QT_MOC_LITERAL(226, 4610, 18), // "setChannelNeutral4"
QT_MOC_LITERAL(227, 4629, 19), // "setChannelNeutral_4"
QT_MOC_LITERAL(228, 4649, 18), // "setChannelNeutral5"
QT_MOC_LITERAL(229, 4668, 19), // "setChannelNeutral_5"
QT_MOC_LITERAL(230, 4688, 18), // "setChannelNeutral6"
QT_MOC_LITERAL(231, 4707, 19), // "setChannelNeutral_6"
QT_MOC_LITERAL(232, 4727, 18), // "setChannelNeutral7"
QT_MOC_LITERAL(233, 4746, 19), // "setChannelNeutral_7"
QT_MOC_LITERAL(234, 4766, 18), // "setChannelNeutral8"
QT_MOC_LITERAL(235, 4785, 19), // "setChannelNeutral_8"
QT_MOC_LITERAL(236, 4805, 18), // "setChannelNeutral9"
QT_MOC_LITERAL(237, 4824, 19), // "setChannelNeutral_9"
QT_MOC_LITERAL(238, 4844, 19), // "setChannelNeutral10"
QT_MOC_LITERAL(239, 4864, 20), // "setChannelNeutral_10"
QT_MOC_LITERAL(240, 4885, 19), // "setChannelNeutral11"
QT_MOC_LITERAL(241, 4905, 20), // "setChannelNeutral_11"
QT_MOC_LITERAL(242, 4926, 13), // "setChannelMin"
QT_MOC_LITERAL(243, 4940, 14), // "setChannelMin0"
QT_MOC_LITERAL(244, 4955, 15), // "setChannelMin_0"
QT_MOC_LITERAL(245, 4971, 14), // "setChannelMin1"
QT_MOC_LITERAL(246, 4986, 15), // "setChannelMin_1"
QT_MOC_LITERAL(247, 5002, 14), // "setChannelMin2"
QT_MOC_LITERAL(248, 5017, 15), // "setChannelMin_2"
QT_MOC_LITERAL(249, 5033, 14), // "setChannelMin3"
QT_MOC_LITERAL(250, 5048, 15), // "setChannelMin_3"
QT_MOC_LITERAL(251, 5064, 14), // "setChannelMin4"
QT_MOC_LITERAL(252, 5079, 15), // "setChannelMin_4"
QT_MOC_LITERAL(253, 5095, 14), // "setChannelMin5"
QT_MOC_LITERAL(254, 5110, 15), // "setChannelMin_5"
QT_MOC_LITERAL(255, 5126, 14), // "setChannelMin6"
QT_MOC_LITERAL(256, 5141, 15), // "setChannelMin_6"
QT_MOC_LITERAL(257, 5157, 14), // "setChannelMin7"
QT_MOC_LITERAL(258, 5172, 15), // "setChannelMin_7"
QT_MOC_LITERAL(259, 5188, 14), // "setChannelMin8"
QT_MOC_LITERAL(260, 5203, 15), // "setChannelMin_8"
QT_MOC_LITERAL(261, 5219, 14), // "setChannelMin9"
QT_MOC_LITERAL(262, 5234, 15), // "setChannelMin_9"
QT_MOC_LITERAL(263, 5250, 15), // "setChannelMin10"
QT_MOC_LITERAL(264, 5266, 16), // "setChannelMin_10"
QT_MOC_LITERAL(265, 5283, 15), // "setChannelMin11"
QT_MOC_LITERAL(266, 5299, 16), // "setChannelMin_11"
QT_MOC_LITERAL(267, 5316, 11), // "setBankMode"
QT_MOC_LITERAL(268, 5328, 12), // "setBankMode0"
QT_MOC_LITERAL(269, 5341, 13), // "setBankMode_0"
QT_MOC_LITERAL(270, 5355, 12), // "setBankMode1"
QT_MOC_LITERAL(271, 5368, 13), // "setBankMode_1"
QT_MOC_LITERAL(272, 5382, 12), // "setBankMode2"
QT_MOC_LITERAL(273, 5395, 13), // "setBankMode_2"
QT_MOC_LITERAL(274, 5409, 12), // "setBankMode3"
QT_MOC_LITERAL(275, 5422, 13), // "setBankMode_3"
QT_MOC_LITERAL(276, 5436, 12), // "setBankMode4"
QT_MOC_LITERAL(277, 5449, 13), // "setBankMode_4"
QT_MOC_LITERAL(278, 5463, 12), // "setBankMode5"
QT_MOC_LITERAL(279, 5476, 13), // "setBankMode_5"
QT_MOC_LITERAL(280, 5490, 14), // "setChannelType"
QT_MOC_LITERAL(281, 5505, 15), // "setChannelType0"
QT_MOC_LITERAL(282, 5521, 16), // "setChannelType_0"
QT_MOC_LITERAL(283, 5538, 15), // "setChannelType1"
QT_MOC_LITERAL(284, 5554, 16), // "setChannelType_1"
QT_MOC_LITERAL(285, 5571, 15), // "setChannelType2"
QT_MOC_LITERAL(286, 5587, 16), // "setChannelType_2"
QT_MOC_LITERAL(287, 5604, 15), // "setChannelType3"
QT_MOC_LITERAL(288, 5620, 16), // "setChannelType_3"
QT_MOC_LITERAL(289, 5637, 15), // "setChannelType4"
QT_MOC_LITERAL(290, 5653, 16), // "setChannelType_4"
QT_MOC_LITERAL(291, 5670, 15), // "setChannelType5"
QT_MOC_LITERAL(292, 5686, 16), // "setChannelType_5"
QT_MOC_LITERAL(293, 5703, 15), // "setChannelType6"
QT_MOC_LITERAL(294, 5719, 16), // "setChannelType_6"
QT_MOC_LITERAL(295, 5736, 15), // "setChannelType7"
QT_MOC_LITERAL(296, 5752, 16), // "setChannelType_7"
QT_MOC_LITERAL(297, 5769, 15), // "setChannelType8"
QT_MOC_LITERAL(298, 5785, 16), // "setChannelType_8"
QT_MOC_LITERAL(299, 5802, 15), // "setChannelType9"
QT_MOC_LITERAL(300, 5818, 16), // "setChannelType_9"
QT_MOC_LITERAL(301, 5835, 16), // "setChannelType10"
QT_MOC_LITERAL(302, 5852, 17), // "setChannelType_10"
QT_MOC_LITERAL(303, 5870, 16), // "setChannelType11"
QT_MOC_LITERAL(304, 5887, 17), // "setChannelType_11"
QT_MOC_LITERAL(305, 5905, 14), // "setChannelAddr"
QT_MOC_LITERAL(306, 5920, 15), // "setChannelAddr0"
QT_MOC_LITERAL(307, 5936, 16), // "setChannelAddr_0"
QT_MOC_LITERAL(308, 5953, 15), // "setChannelAddr1"
QT_MOC_LITERAL(309, 5969, 16), // "setChannelAddr_1"
QT_MOC_LITERAL(310, 5986, 15), // "setChannelAddr2"
QT_MOC_LITERAL(311, 6002, 16), // "setChannelAddr_2"
QT_MOC_LITERAL(312, 6019, 15), // "setChannelAddr3"
QT_MOC_LITERAL(313, 6035, 16), // "setChannelAddr_3"
QT_MOC_LITERAL(314, 6052, 15), // "setChannelAddr4"
QT_MOC_LITERAL(315, 6068, 16), // "setChannelAddr_4"
QT_MOC_LITERAL(316, 6085, 15), // "setChannelAddr5"
QT_MOC_LITERAL(317, 6101, 16), // "setChannelAddr_5"
QT_MOC_LITERAL(318, 6118, 15), // "setChannelAddr6"
QT_MOC_LITERAL(319, 6134, 16), // "setChannelAddr_6"
QT_MOC_LITERAL(320, 6151, 15), // "setChannelAddr7"
QT_MOC_LITERAL(321, 6167, 16), // "setChannelAddr_7"
QT_MOC_LITERAL(322, 6184, 15), // "setChannelAddr8"
QT_MOC_LITERAL(323, 6200, 16), // "setChannelAddr_8"
QT_MOC_LITERAL(324, 6217, 15), // "setChannelAddr9"
QT_MOC_LITERAL(325, 6233, 16), // "setChannelAddr_9"
QT_MOC_LITERAL(326, 6250, 16), // "setChannelAddr10"
QT_MOC_LITERAL(327, 6267, 17), // "setChannelAddr_10"
QT_MOC_LITERAL(328, 6285, 16), // "setChannelAddr11"
QT_MOC_LITERAL(329, 6302, 17), // "setChannelAddr_11"
QT_MOC_LITERAL(330, 6320, 23), // "setMotorsSpinWhileArmed"
QT_MOC_LITERAL(331, 6344, 22), // "setLowThrottleZeroAxis"
QT_MOC_LITERAL(332, 6367, 26), // "setLowThrottleZeroAxisRoll"
QT_MOC_LITERAL(333, 6394, 27), // "setLowThrottleZeroAxis_Roll"
QT_MOC_LITERAL(334, 6422, 27), // "setLowThrottleZeroAxisPitch"
QT_MOC_LITERAL(335, 6450, 28), // "setLowThrottleZeroAxis_Pitch"
QT_MOC_LITERAL(336, 6479, 25), // "setLowThrottleZeroAxisYaw"
QT_MOC_LITERAL(337, 6505, 26), // "setLowThrottleZeroAxis_Yaw"
QT_MOC_LITERAL(338, 6532, 17), // "emitNotifications"
QT_MOC_LITERAL(339, 6550, 14), // "bankUpdateFreq"
QT_MOC_LITERAL(340, 6565, 17), // "getBankUpdateFreq"
QT_MOC_LITERAL(341, 6583, 19), // "getBankUpdateFreq_0"
QT_MOC_LITERAL(342, 6603, 19), // "getBankUpdateFreq_1"
QT_MOC_LITERAL(343, 6623, 19), // "getBankUpdateFreq_2"
QT_MOC_LITERAL(344, 6643, 19), // "getBankUpdateFreq_3"
QT_MOC_LITERAL(345, 6663, 19), // "getBankUpdateFreq_4"
QT_MOC_LITERAL(346, 6683, 19), // "getBankUpdateFreq_5"
QT_MOC_LITERAL(347, 6703, 12), // "getDShotMode"
QT_MOC_LITERAL(348, 6716, 10), // "channelMax"
QT_MOC_LITERAL(349, 6727, 13), // "getChannelMax"
QT_MOC_LITERAL(350, 6741, 15), // "getChannelMax_0"
QT_MOC_LITERAL(351, 6757, 15), // "getChannelMax_1"
QT_MOC_LITERAL(352, 6773, 15), // "getChannelMax_2"
QT_MOC_LITERAL(353, 6789, 15), // "getChannelMax_3"
QT_MOC_LITERAL(354, 6805, 15), // "getChannelMax_4"
QT_MOC_LITERAL(355, 6821, 15), // "getChannelMax_5"
QT_MOC_LITERAL(356, 6837, 15), // "getChannelMax_6"
QT_MOC_LITERAL(357, 6853, 15), // "getChannelMax_7"
QT_MOC_LITERAL(358, 6869, 15), // "getChannelMax_8"
QT_MOC_LITERAL(359, 6885, 15), // "getChannelMax_9"
QT_MOC_LITERAL(360, 6901, 16), // "getChannelMax_10"
QT_MOC_LITERAL(361, 6918, 16), // "getChannelMax_11"
QT_MOC_LITERAL(362, 6935, 14), // "channelNeutral"
QT_MOC_LITERAL(363, 6950, 17), // "getChannelNeutral"
QT_MOC_LITERAL(364, 6968, 19), // "getChannelNeutral_0"
QT_MOC_LITERAL(365, 6988, 19), // "getChannelNeutral_1"
QT_MOC_LITERAL(366, 7008, 19), // "getChannelNeutral_2"
QT_MOC_LITERAL(367, 7028, 19), // "getChannelNeutral_3"
QT_MOC_LITERAL(368, 7048, 19), // "getChannelNeutral_4"
QT_MOC_LITERAL(369, 7068, 19), // "getChannelNeutral_5"
QT_MOC_LITERAL(370, 7088, 19), // "getChannelNeutral_6"
QT_MOC_LITERAL(371, 7108, 19), // "getChannelNeutral_7"
QT_MOC_LITERAL(372, 7128, 19), // "getChannelNeutral_8"
QT_MOC_LITERAL(373, 7148, 19), // "getChannelNeutral_9"
QT_MOC_LITERAL(374, 7168, 20), // "getChannelNeutral_10"
QT_MOC_LITERAL(375, 7189, 20), // "getChannelNeutral_11"
QT_MOC_LITERAL(376, 7210, 10), // "channelMin"
QT_MOC_LITERAL(377, 7221, 13), // "getChannelMin"
QT_MOC_LITERAL(378, 7235, 15), // "getChannelMin_0"
QT_MOC_LITERAL(379, 7251, 15), // "getChannelMin_1"
QT_MOC_LITERAL(380, 7267, 15), // "getChannelMin_2"
QT_MOC_LITERAL(381, 7283, 15), // "getChannelMin_3"
QT_MOC_LITERAL(382, 7299, 15), // "getChannelMin_4"
QT_MOC_LITERAL(383, 7315, 15), // "getChannelMin_5"
QT_MOC_LITERAL(384, 7331, 15), // "getChannelMin_6"
QT_MOC_LITERAL(385, 7347, 15), // "getChannelMin_7"
QT_MOC_LITERAL(386, 7363, 15), // "getChannelMin_8"
QT_MOC_LITERAL(387, 7379, 15), // "getChannelMin_9"
QT_MOC_LITERAL(388, 7395, 16), // "getChannelMin_10"
QT_MOC_LITERAL(389, 7412, 16), // "getChannelMin_11"
QT_MOC_LITERAL(390, 7429, 8), // "bankMode"
QT_MOC_LITERAL(391, 7438, 11), // "getBankMode"
QT_MOC_LITERAL(392, 7450, 13), // "getBankMode_0"
QT_MOC_LITERAL(393, 7464, 13), // "getBankMode_1"
QT_MOC_LITERAL(394, 7478, 13), // "getBankMode_2"
QT_MOC_LITERAL(395, 7492, 13), // "getBankMode_3"
QT_MOC_LITERAL(396, 7506, 13), // "getBankMode_4"
QT_MOC_LITERAL(397, 7520, 13), // "getBankMode_5"
QT_MOC_LITERAL(398, 7534, 11), // "channelType"
QT_MOC_LITERAL(399, 7546, 14), // "getChannelType"
QT_MOC_LITERAL(400, 7561, 16), // "getChannelType_0"
QT_MOC_LITERAL(401, 7578, 16), // "getChannelType_1"
QT_MOC_LITERAL(402, 7595, 16), // "getChannelType_2"
QT_MOC_LITERAL(403, 7612, 16), // "getChannelType_3"
QT_MOC_LITERAL(404, 7629, 16), // "getChannelType_4"
QT_MOC_LITERAL(405, 7646, 16), // "getChannelType_5"
QT_MOC_LITERAL(406, 7663, 16), // "getChannelType_6"
QT_MOC_LITERAL(407, 7680, 16), // "getChannelType_7"
QT_MOC_LITERAL(408, 7697, 16), // "getChannelType_8"
QT_MOC_LITERAL(409, 7714, 16), // "getChannelType_9"
QT_MOC_LITERAL(410, 7731, 17), // "getChannelType_10"
QT_MOC_LITERAL(411, 7749, 17), // "getChannelType_11"
QT_MOC_LITERAL(412, 7767, 11), // "channelAddr"
QT_MOC_LITERAL(413, 7779, 14), // "getChannelAddr"
QT_MOC_LITERAL(414, 7794, 16), // "getChannelAddr_0"
QT_MOC_LITERAL(415, 7811, 16), // "getChannelAddr_1"
QT_MOC_LITERAL(416, 7828, 16), // "getChannelAddr_2"
QT_MOC_LITERAL(417, 7845, 16), // "getChannelAddr_3"
QT_MOC_LITERAL(418, 7862, 16), // "getChannelAddr_4"
QT_MOC_LITERAL(419, 7879, 16), // "getChannelAddr_5"
QT_MOC_LITERAL(420, 7896, 16), // "getChannelAddr_6"
QT_MOC_LITERAL(421, 7913, 16), // "getChannelAddr_7"
QT_MOC_LITERAL(422, 7930, 16), // "getChannelAddr_8"
QT_MOC_LITERAL(423, 7947, 16), // "getChannelAddr_9"
QT_MOC_LITERAL(424, 7964, 17), // "getChannelAddr_10"
QT_MOC_LITERAL(425, 7982, 17), // "getChannelAddr_11"
QT_MOC_LITERAL(426, 8000, 23), // "getMotorsSpinWhileArmed"
QT_MOC_LITERAL(427, 8024, 19), // "lowThrottleZeroAxis"
QT_MOC_LITERAL(428, 8044, 22), // "getLowThrottleZeroAxis"
QT_MOC_LITERAL(429, 8067, 27), // "getLowThrottleZeroAxis_Roll"
QT_MOC_LITERAL(430, 8095, 28), // "getLowThrottleZeroAxis_Pitch"
QT_MOC_LITERAL(431, 8124, 26), // "getLowThrottleZeroAxis_Yaw"
QT_MOC_LITERAL(432, 8151, 15), // "bankUpdateFreq0"
QT_MOC_LITERAL(433, 8167, 15), // "bankUpdateFreq1"
QT_MOC_LITERAL(434, 8183, 15), // "bankUpdateFreq2"
QT_MOC_LITERAL(435, 8199, 15), // "bankUpdateFreq3"
QT_MOC_LITERAL(436, 8215, 15), // "bankUpdateFreq4"
QT_MOC_LITERAL(437, 8231, 15), // "bankUpdateFreq5"
QT_MOC_LITERAL(438, 8247, 9), // "dShotMode"
QT_MOC_LITERAL(439, 8257, 11), // "channelMax0"
QT_MOC_LITERAL(440, 8269, 11), // "channelMax1"
QT_MOC_LITERAL(441, 8281, 11), // "channelMax2"
QT_MOC_LITERAL(442, 8293, 11), // "channelMax3"
QT_MOC_LITERAL(443, 8305, 11), // "channelMax4"
QT_MOC_LITERAL(444, 8317, 11), // "channelMax5"
QT_MOC_LITERAL(445, 8329, 11), // "channelMax6"
QT_MOC_LITERAL(446, 8341, 11), // "channelMax7"
QT_MOC_LITERAL(447, 8353, 11), // "channelMax8"
QT_MOC_LITERAL(448, 8365, 11), // "channelMax9"
QT_MOC_LITERAL(449, 8377, 12), // "channelMax10"
QT_MOC_LITERAL(450, 8390, 12), // "channelMax11"
QT_MOC_LITERAL(451, 8403, 15), // "channelNeutral0"
QT_MOC_LITERAL(452, 8419, 15), // "channelNeutral1"
QT_MOC_LITERAL(453, 8435, 15), // "channelNeutral2"
QT_MOC_LITERAL(454, 8451, 15), // "channelNeutral3"
QT_MOC_LITERAL(455, 8467, 15), // "channelNeutral4"
QT_MOC_LITERAL(456, 8483, 15), // "channelNeutral5"
QT_MOC_LITERAL(457, 8499, 15), // "channelNeutral6"
QT_MOC_LITERAL(458, 8515, 15), // "channelNeutral7"
QT_MOC_LITERAL(459, 8531, 15), // "channelNeutral8"
QT_MOC_LITERAL(460, 8547, 15), // "channelNeutral9"
QT_MOC_LITERAL(461, 8563, 16), // "channelNeutral10"
QT_MOC_LITERAL(462, 8580, 16), // "channelNeutral11"
QT_MOC_LITERAL(463, 8597, 11), // "channelMin0"
QT_MOC_LITERAL(464, 8609, 11), // "channelMin1"
QT_MOC_LITERAL(465, 8621, 11), // "channelMin2"
QT_MOC_LITERAL(466, 8633, 11), // "channelMin3"
QT_MOC_LITERAL(467, 8645, 11), // "channelMin4"
QT_MOC_LITERAL(468, 8657, 11), // "channelMin5"
QT_MOC_LITERAL(469, 8669, 11), // "channelMin6"
QT_MOC_LITERAL(470, 8681, 11), // "channelMin7"
QT_MOC_LITERAL(471, 8693, 11), // "channelMin8"
QT_MOC_LITERAL(472, 8705, 11), // "channelMin9"
QT_MOC_LITERAL(473, 8717, 12), // "channelMin10"
QT_MOC_LITERAL(474, 8730, 12), // "channelMin11"
QT_MOC_LITERAL(475, 8743, 9), // "bankMode0"
QT_MOC_LITERAL(476, 8753, 9), // "bankMode1"
QT_MOC_LITERAL(477, 8763, 9), // "bankMode2"
QT_MOC_LITERAL(478, 8773, 9), // "bankMode3"
QT_MOC_LITERAL(479, 8783, 9), // "bankMode4"
QT_MOC_LITERAL(480, 8793, 9), // "bankMode5"
QT_MOC_LITERAL(481, 8803, 12), // "channelType0"
QT_MOC_LITERAL(482, 8816, 12), // "channelType1"
QT_MOC_LITERAL(483, 8829, 12), // "channelType2"
QT_MOC_LITERAL(484, 8842, 12), // "channelType3"
QT_MOC_LITERAL(485, 8855, 12), // "channelType4"
QT_MOC_LITERAL(486, 8868, 12), // "channelType5"
QT_MOC_LITERAL(487, 8881, 12), // "channelType6"
QT_MOC_LITERAL(488, 8894, 12), // "channelType7"
QT_MOC_LITERAL(489, 8907, 12), // "channelType8"
QT_MOC_LITERAL(490, 8920, 12), // "channelType9"
QT_MOC_LITERAL(491, 8933, 13), // "channelType10"
QT_MOC_LITERAL(492, 8947, 13), // "channelType11"
QT_MOC_LITERAL(493, 8961, 12), // "channelAddr0"
QT_MOC_LITERAL(494, 8974, 12), // "channelAddr1"
QT_MOC_LITERAL(495, 8987, 12), // "channelAddr2"
QT_MOC_LITERAL(496, 9000, 12), // "channelAddr3"
QT_MOC_LITERAL(497, 9013, 12), // "channelAddr4"
QT_MOC_LITERAL(498, 9026, 12), // "channelAddr5"
QT_MOC_LITERAL(499, 9039, 12), // "channelAddr6"
QT_MOC_LITERAL(500, 9052, 12), // "channelAddr7"
QT_MOC_LITERAL(501, 9065, 12), // "channelAddr8"
QT_MOC_LITERAL(502, 9078, 12), // "channelAddr9"
QT_MOC_LITERAL(503, 9091, 13), // "channelAddr10"
QT_MOC_LITERAL(504, 9105, 13), // "channelAddr11"
QT_MOC_LITERAL(505, 9119, 20), // "motorsSpinWhileArmed"
QT_MOC_LITERAL(506, 9140, 23), // "lowThrottleZeroAxisRoll"
QT_MOC_LITERAL(507, 9164, 24), // "lowThrottleZeroAxisPitch"
QT_MOC_LITERAL(508, 9189, 22), // "lowThrottleZeroAxisYaw"
QT_MOC_LITERAL(509, 9212, 16), // "BankUpdateFreq_0"
QT_MOC_LITERAL(510, 9229, 16), // "BankUpdateFreq_1"
QT_MOC_LITERAL(511, 9246, 16), // "BankUpdateFreq_2"
QT_MOC_LITERAL(512, 9263, 16), // "BankUpdateFreq_3"
QT_MOC_LITERAL(513, 9280, 16), // "BankUpdateFreq_4"
QT_MOC_LITERAL(514, 9297, 16), // "BankUpdateFreq_5"
QT_MOC_LITERAL(515, 9314, 9), // "DShotMode"
QT_MOC_LITERAL(516, 9324, 12), // "ChannelMax_0"
QT_MOC_LITERAL(517, 9337, 12), // "ChannelMax_1"
QT_MOC_LITERAL(518, 9350, 12), // "ChannelMax_2"
QT_MOC_LITERAL(519, 9363, 12), // "ChannelMax_3"
QT_MOC_LITERAL(520, 9376, 12), // "ChannelMax_4"
QT_MOC_LITERAL(521, 9389, 12), // "ChannelMax_5"
QT_MOC_LITERAL(522, 9402, 12), // "ChannelMax_6"
QT_MOC_LITERAL(523, 9415, 12), // "ChannelMax_7"
QT_MOC_LITERAL(524, 9428, 12), // "ChannelMax_8"
QT_MOC_LITERAL(525, 9441, 12), // "ChannelMax_9"
QT_MOC_LITERAL(526, 9454, 13), // "ChannelMax_10"
QT_MOC_LITERAL(527, 9468, 13), // "ChannelMax_11"
QT_MOC_LITERAL(528, 9482, 16), // "ChannelNeutral_0"
QT_MOC_LITERAL(529, 9499, 16), // "ChannelNeutral_1"
QT_MOC_LITERAL(530, 9516, 16), // "ChannelNeutral_2"
QT_MOC_LITERAL(531, 9533, 16), // "ChannelNeutral_3"
QT_MOC_LITERAL(532, 9550, 16), // "ChannelNeutral_4"
QT_MOC_LITERAL(533, 9567, 16), // "ChannelNeutral_5"
QT_MOC_LITERAL(534, 9584, 16), // "ChannelNeutral_6"
QT_MOC_LITERAL(535, 9601, 16), // "ChannelNeutral_7"
QT_MOC_LITERAL(536, 9618, 16), // "ChannelNeutral_8"
QT_MOC_LITERAL(537, 9635, 16), // "ChannelNeutral_9"
QT_MOC_LITERAL(538, 9652, 17), // "ChannelNeutral_10"
QT_MOC_LITERAL(539, 9670, 17), // "ChannelNeutral_11"
QT_MOC_LITERAL(540, 9688, 12), // "ChannelMin_0"
QT_MOC_LITERAL(541, 9701, 12), // "ChannelMin_1"
QT_MOC_LITERAL(542, 9714, 12), // "ChannelMin_2"
QT_MOC_LITERAL(543, 9727, 12), // "ChannelMin_3"
QT_MOC_LITERAL(544, 9740, 12), // "ChannelMin_4"
QT_MOC_LITERAL(545, 9753, 12), // "ChannelMin_5"
QT_MOC_LITERAL(546, 9766, 12), // "ChannelMin_6"
QT_MOC_LITERAL(547, 9779, 12), // "ChannelMin_7"
QT_MOC_LITERAL(548, 9792, 12), // "ChannelMin_8"
QT_MOC_LITERAL(549, 9805, 12), // "ChannelMin_9"
QT_MOC_LITERAL(550, 9818, 13), // "ChannelMin_10"
QT_MOC_LITERAL(551, 9832, 13), // "ChannelMin_11"
QT_MOC_LITERAL(552, 9846, 10), // "BankMode_0"
QT_MOC_LITERAL(553, 9857, 10), // "BankMode_1"
QT_MOC_LITERAL(554, 9868, 10), // "BankMode_2"
QT_MOC_LITERAL(555, 9879, 10), // "BankMode_3"
QT_MOC_LITERAL(556, 9890, 10), // "BankMode_4"
QT_MOC_LITERAL(557, 9901, 10), // "BankMode_5"
QT_MOC_LITERAL(558, 9912, 13), // "ChannelType_0"
QT_MOC_LITERAL(559, 9926, 13), // "ChannelType_1"
QT_MOC_LITERAL(560, 9940, 13), // "ChannelType_2"
QT_MOC_LITERAL(561, 9954, 13), // "ChannelType_3"
QT_MOC_LITERAL(562, 9968, 13), // "ChannelType_4"
QT_MOC_LITERAL(563, 9982, 13), // "ChannelType_5"
QT_MOC_LITERAL(564, 9996, 13), // "ChannelType_6"
QT_MOC_LITERAL(565, 10010, 13), // "ChannelType_7"
QT_MOC_LITERAL(566, 10024, 13), // "ChannelType_8"
QT_MOC_LITERAL(567, 10038, 13), // "ChannelType_9"
QT_MOC_LITERAL(568, 10052, 14), // "ChannelType_10"
QT_MOC_LITERAL(569, 10067, 14), // "ChannelType_11"
QT_MOC_LITERAL(570, 10082, 13), // "ChannelAddr_0"
QT_MOC_LITERAL(571, 10096, 13), // "ChannelAddr_1"
QT_MOC_LITERAL(572, 10110, 13), // "ChannelAddr_2"
QT_MOC_LITERAL(573, 10124, 13), // "ChannelAddr_3"
QT_MOC_LITERAL(574, 10138, 13), // "ChannelAddr_4"
QT_MOC_LITERAL(575, 10152, 13), // "ChannelAddr_5"
QT_MOC_LITERAL(576, 10166, 13), // "ChannelAddr_6"
QT_MOC_LITERAL(577, 10180, 13), // "ChannelAddr_7"
QT_MOC_LITERAL(578, 10194, 13), // "ChannelAddr_8"
QT_MOC_LITERAL(579, 10208, 13), // "ChannelAddr_9"
QT_MOC_LITERAL(580, 10222, 14), // "ChannelAddr_10"
QT_MOC_LITERAL(581, 10237, 14), // "ChannelAddr_11"
QT_MOC_LITERAL(582, 10252, 20), // "MotorsSpinWhileArmed"
QT_MOC_LITERAL(583, 10273, 24), // "LowThrottleZeroAxis_Roll"
QT_MOC_LITERAL(584, 10298, 25), // "LowThrottleZeroAxis_Pitch"
QT_MOC_LITERAL(585, 10324, 23) // "LowThrottleZeroAxis_Yaw"

    },
    "ActuatorSettings\0bankUpdateFreqChanged\0"
    "\0index\0value\0BankUpdateFreqChanged\0"
    "bankUpdateFreq0Changed\0BankUpdateFreq_0Changed\0"
    "bankUpdateFreq1Changed\0BankUpdateFreq_1Changed\0"
    "bankUpdateFreq2Changed\0BankUpdateFreq_2Changed\0"
    "bankUpdateFreq3Changed\0BankUpdateFreq_3Changed\0"
    "bankUpdateFreq4Changed\0BankUpdateFreq_4Changed\0"
    "bankUpdateFreq5Changed\0BankUpdateFreq_5Changed\0"
    "dShotModeChanged\0DShotModeChanged\0"
    "channelMaxChanged\0ChannelMaxChanged\0"
    "channelMax0Changed\0ChannelMax_0Changed\0"
    "channelMax1Changed\0ChannelMax_1Changed\0"
    "channelMax2Changed\0ChannelMax_2Changed\0"
    "channelMax3Changed\0ChannelMax_3Changed\0"
    "channelMax4Changed\0ChannelMax_4Changed\0"
    "channelMax5Changed\0ChannelMax_5Changed\0"
    "channelMax6Changed\0ChannelMax_6Changed\0"
    "channelMax7Changed\0ChannelMax_7Changed\0"
    "channelMax8Changed\0ChannelMax_8Changed\0"
    "channelMax9Changed\0ChannelMax_9Changed\0"
    "channelMax10Changed\0ChannelMax_10Changed\0"
    "channelMax11Changed\0ChannelMax_11Changed\0"
    "channelNeutralChanged\0ChannelNeutralChanged\0"
    "channelNeutral0Changed\0ChannelNeutral_0Changed\0"
    "channelNeutral1Changed\0ChannelNeutral_1Changed\0"
    "channelNeutral2Changed\0ChannelNeutral_2Changed\0"
    "channelNeutral3Changed\0ChannelNeutral_3Changed\0"
    "channelNeutral4Changed\0ChannelNeutral_4Changed\0"
    "channelNeutral5Changed\0ChannelNeutral_5Changed\0"
    "channelNeutral6Changed\0ChannelNeutral_6Changed\0"
    "channelNeutral7Changed\0ChannelNeutral_7Changed\0"
    "channelNeutral8Changed\0ChannelNeutral_8Changed\0"
    "channelNeutral9Changed\0ChannelNeutral_9Changed\0"
    "channelNeutral10Changed\0"
    "ChannelNeutral_10Changed\0"
    "channelNeutral11Changed\0"
    "ChannelNeutral_11Changed\0channelMinChanged\0"
    "ChannelMinChanged\0channelMin0Changed\0"
    "ChannelMin_0Changed\0channelMin1Changed\0"
    "ChannelMin_1Changed\0channelMin2Changed\0"
    "ChannelMin_2Changed\0channelMin3Changed\0"
    "ChannelMin_3Changed\0channelMin4Changed\0"
    "ChannelMin_4Changed\0channelMin5Changed\0"
    "ChannelMin_5Changed\0channelMin6Changed\0"
    "ChannelMin_6Changed\0channelMin7Changed\0"
    "ChannelMin_7Changed\0channelMin8Changed\0"
    "ChannelMin_8Changed\0channelMin9Changed\0"
    "ChannelMin_9Changed\0channelMin10Changed\0"
    "ChannelMin_10Changed\0channelMin11Changed\0"
    "ChannelMin_11Changed\0bankModeChanged\0"
    "ActuatorSettings_BankMode::Enum\0"
    "BankModeChanged\0bankMode0Changed\0"
    "BankMode_0Changed\0bankMode1Changed\0"
    "BankMode_1Changed\0bankMode2Changed\0"
    "BankMode_2Changed\0bankMode3Changed\0"
    "BankMode_3Changed\0bankMode4Changed\0"
    "BankMode_4Changed\0bankMode5Changed\0"
    "BankMode_5Changed\0channelTypeChanged\0"
    "ActuatorSettings_ChannelType::Enum\0"
    "ChannelTypeChanged\0channelType0Changed\0"
    "ChannelType_0Changed\0channelType1Changed\0"
    "ChannelType_1Changed\0channelType2Changed\0"
    "ChannelType_2Changed\0channelType3Changed\0"
    "ChannelType_3Changed\0channelType4Changed\0"
    "ChannelType_4Changed\0channelType5Changed\0"
    "ChannelType_5Changed\0channelType6Changed\0"
    "ChannelType_6Changed\0channelType7Changed\0"
    "ChannelType_7Changed\0channelType8Changed\0"
    "ChannelType_8Changed\0channelType9Changed\0"
    "ChannelType_9Changed\0channelType10Changed\0"
    "ChannelType_10Changed\0channelType11Changed\0"
    "ChannelType_11Changed\0channelAddrChanged\0"
    "ChannelAddrChanged\0channelAddr0Changed\0"
    "ChannelAddr_0Changed\0channelAddr1Changed\0"
    "ChannelAddr_1Changed\0channelAddr2Changed\0"
    "ChannelAddr_2Changed\0channelAddr3Changed\0"
    "ChannelAddr_3Changed\0channelAddr4Changed\0"
    "ChannelAddr_4Changed\0channelAddr5Changed\0"
    "ChannelAddr_5Changed\0channelAddr6Changed\0"
    "ChannelAddr_6Changed\0channelAddr7Changed\0"
    "ChannelAddr_7Changed\0channelAddr8Changed\0"
    "ChannelAddr_8Changed\0channelAddr9Changed\0"
    "ChannelAddr_9Changed\0channelAddr10Changed\0"
    "ChannelAddr_10Changed\0channelAddr11Changed\0"
    "ChannelAddr_11Changed\0motorsSpinWhileArmedChanged\0"
    "ActuatorSettings_MotorsSpinWhileArmed::Enum\0"
    "MotorsSpinWhileArmedChanged\0"
    "lowThrottleZeroAxisChanged\0"
    "ActuatorSettings_LowThrottleZeroAxis::Enum\0"
    "LowThrottleZeroAxisChanged\0"
    "lowThrottleZeroAxisRollChanged\0"
    "LowThrottleZeroAxis_RollChanged\0"
    "lowThrottleZeroAxisPitchChanged\0"
    "LowThrottleZeroAxis_PitchChanged\0"
    "lowThrottleZeroAxisYawChanged\0"
    "LowThrottleZeroAxis_YawChanged\0"
    "setBankUpdateFreq\0setBankUpdateFreq0\0"
    "setBankUpdateFreq_0\0setBankUpdateFreq1\0"
    "setBankUpdateFreq_1\0setBankUpdateFreq2\0"
    "setBankUpdateFreq_2\0setBankUpdateFreq3\0"
    "setBankUpdateFreq_3\0setBankUpdateFreq4\0"
    "setBankUpdateFreq_4\0setBankUpdateFreq5\0"
    "setBankUpdateFreq_5\0setDShotMode\0"
    "setChannelMax\0setChannelMax0\0"
    "setChannelMax_0\0setChannelMax1\0"
    "setChannelMax_1\0setChannelMax2\0"
    "setChannelMax_2\0setChannelMax3\0"
    "setChannelMax_3\0setChannelMax4\0"
    "setChannelMax_4\0setChannelMax5\0"
    "setChannelMax_5\0setChannelMax6\0"
    "setChannelMax_6\0setChannelMax7\0"
    "setChannelMax_7\0setChannelMax8\0"
    "setChannelMax_8\0setChannelMax9\0"
    "setChannelMax_9\0setChannelMax10\0"
    "setChannelMax_10\0setChannelMax11\0"
    "setChannelMax_11\0setChannelNeutral\0"
    "setChannelNeutral0\0setChannelNeutral_0\0"
    "setChannelNeutral1\0setChannelNeutral_1\0"
    "setChannelNeutral2\0setChannelNeutral_2\0"
    "setChannelNeutral3\0setChannelNeutral_3\0"
    "setChannelNeutral4\0setChannelNeutral_4\0"
    "setChannelNeutral5\0setChannelNeutral_5\0"
    "setChannelNeutral6\0setChannelNeutral_6\0"
    "setChannelNeutral7\0setChannelNeutral_7\0"
    "setChannelNeutral8\0setChannelNeutral_8\0"
    "setChannelNeutral9\0setChannelNeutral_9\0"
    "setChannelNeutral10\0setChannelNeutral_10\0"
    "setChannelNeutral11\0setChannelNeutral_11\0"
    "setChannelMin\0setChannelMin0\0"
    "setChannelMin_0\0setChannelMin1\0"
    "setChannelMin_1\0setChannelMin2\0"
    "setChannelMin_2\0setChannelMin3\0"
    "setChannelMin_3\0setChannelMin4\0"
    "setChannelMin_4\0setChannelMin5\0"
    "setChannelMin_5\0setChannelMin6\0"
    "setChannelMin_6\0setChannelMin7\0"
    "setChannelMin_7\0setChannelMin8\0"
    "setChannelMin_8\0setChannelMin9\0"
    "setChannelMin_9\0setChannelMin10\0"
    "setChannelMin_10\0setChannelMin11\0"
    "setChannelMin_11\0setBankMode\0setBankMode0\0"
    "setBankMode_0\0setBankMode1\0setBankMode_1\0"
    "setBankMode2\0setBankMode_2\0setBankMode3\0"
    "setBankMode_3\0setBankMode4\0setBankMode_4\0"
    "setBankMode5\0setBankMode_5\0setChannelType\0"
    "setChannelType0\0setChannelType_0\0"
    "setChannelType1\0setChannelType_1\0"
    "setChannelType2\0setChannelType_2\0"
    "setChannelType3\0setChannelType_3\0"
    "setChannelType4\0setChannelType_4\0"
    "setChannelType5\0setChannelType_5\0"
    "setChannelType6\0setChannelType_6\0"
    "setChannelType7\0setChannelType_7\0"
    "setChannelType8\0setChannelType_8\0"
    "setChannelType9\0setChannelType_9\0"
    "setChannelType10\0setChannelType_10\0"
    "setChannelType11\0setChannelType_11\0"
    "setChannelAddr\0setChannelAddr0\0"
    "setChannelAddr_0\0setChannelAddr1\0"
    "setChannelAddr_1\0setChannelAddr2\0"
    "setChannelAddr_2\0setChannelAddr3\0"
    "setChannelAddr_3\0setChannelAddr4\0"
    "setChannelAddr_4\0setChannelAddr5\0"
    "setChannelAddr_5\0setChannelAddr6\0"
    "setChannelAddr_6\0setChannelAddr7\0"
    "setChannelAddr_7\0setChannelAddr8\0"
    "setChannelAddr_8\0setChannelAddr9\0"
    "setChannelAddr_9\0setChannelAddr10\0"
    "setChannelAddr_10\0setChannelAddr11\0"
    "setChannelAddr_11\0setMotorsSpinWhileArmed\0"
    "setLowThrottleZeroAxis\0"
    "setLowThrottleZeroAxisRoll\0"
    "setLowThrottleZeroAxis_Roll\0"
    "setLowThrottleZeroAxisPitch\0"
    "setLowThrottleZeroAxis_Pitch\0"
    "setLowThrottleZeroAxisYaw\0"
    "setLowThrottleZeroAxis_Yaw\0emitNotifications\0"
    "bankUpdateFreq\0getBankUpdateFreq\0"
    "getBankUpdateFreq_0\0getBankUpdateFreq_1\0"
    "getBankUpdateFreq_2\0getBankUpdateFreq_3\0"
    "getBankUpdateFreq_4\0getBankUpdateFreq_5\0"
    "getDShotMode\0channelMax\0getChannelMax\0"
    "getChannelMax_0\0getChannelMax_1\0"
    "getChannelMax_2\0getChannelMax_3\0"
    "getChannelMax_4\0getChannelMax_5\0"
    "getChannelMax_6\0getChannelMax_7\0"
    "getChannelMax_8\0getChannelMax_9\0"
    "getChannelMax_10\0getChannelMax_11\0"
    "channelNeutral\0getChannelNeutral\0"
    "getChannelNeutral_0\0getChannelNeutral_1\0"
    "getChannelNeutral_2\0getChannelNeutral_3\0"
    "getChannelNeutral_4\0getChannelNeutral_5\0"
    "getChannelNeutral_6\0getChannelNeutral_7\0"
    "getChannelNeutral_8\0getChannelNeutral_9\0"
    "getChannelNeutral_10\0getChannelNeutral_11\0"
    "channelMin\0getChannelMin\0getChannelMin_0\0"
    "getChannelMin_1\0getChannelMin_2\0"
    "getChannelMin_3\0getChannelMin_4\0"
    "getChannelMin_5\0getChannelMin_6\0"
    "getChannelMin_7\0getChannelMin_8\0"
    "getChannelMin_9\0getChannelMin_10\0"
    "getChannelMin_11\0bankMode\0getBankMode\0"
    "getBankMode_0\0getBankMode_1\0getBankMode_2\0"
    "getBankMode_3\0getBankMode_4\0getBankMode_5\0"
    "channelType\0getChannelType\0getChannelType_0\0"
    "getChannelType_1\0getChannelType_2\0"
    "getChannelType_3\0getChannelType_4\0"
    "getChannelType_5\0getChannelType_6\0"
    "getChannelType_7\0getChannelType_8\0"
    "getChannelType_9\0getChannelType_10\0"
    "getChannelType_11\0channelAddr\0"
    "getChannelAddr\0getChannelAddr_0\0"
    "getChannelAddr_1\0getChannelAddr_2\0"
    "getChannelAddr_3\0getChannelAddr_4\0"
    "getChannelAddr_5\0getChannelAddr_6\0"
    "getChannelAddr_7\0getChannelAddr_8\0"
    "getChannelAddr_9\0getChannelAddr_10\0"
    "getChannelAddr_11\0getMotorsSpinWhileArmed\0"
    "lowThrottleZeroAxis\0getLowThrottleZeroAxis\0"
    "getLowThrottleZeroAxis_Roll\0"
    "getLowThrottleZeroAxis_Pitch\0"
    "getLowThrottleZeroAxis_Yaw\0bankUpdateFreq0\0"
    "bankUpdateFreq1\0bankUpdateFreq2\0"
    "bankUpdateFreq3\0bankUpdateFreq4\0"
    "bankUpdateFreq5\0dShotMode\0channelMax0\0"
    "channelMax1\0channelMax2\0channelMax3\0"
    "channelMax4\0channelMax5\0channelMax6\0"
    "channelMax7\0channelMax8\0channelMax9\0"
    "channelMax10\0channelMax11\0channelNeutral0\0"
    "channelNeutral1\0channelNeutral2\0"
    "channelNeutral3\0channelNeutral4\0"
    "channelNeutral5\0channelNeutral6\0"
    "channelNeutral7\0channelNeutral8\0"
    "channelNeutral9\0channelNeutral10\0"
    "channelNeutral11\0channelMin0\0channelMin1\0"
    "channelMin2\0channelMin3\0channelMin4\0"
    "channelMin5\0channelMin6\0channelMin7\0"
    "channelMin8\0channelMin9\0channelMin10\0"
    "channelMin11\0bankMode0\0bankMode1\0"
    "bankMode2\0bankMode3\0bankMode4\0bankMode5\0"
    "channelType0\0channelType1\0channelType2\0"
    "channelType3\0channelType4\0channelType5\0"
    "channelType6\0channelType7\0channelType8\0"
    "channelType9\0channelType10\0channelType11\0"
    "channelAddr0\0channelAddr1\0channelAddr2\0"
    "channelAddr3\0channelAddr4\0channelAddr5\0"
    "channelAddr6\0channelAddr7\0channelAddr8\0"
    "channelAddr9\0channelAddr10\0channelAddr11\0"
    "motorsSpinWhileArmed\0lowThrottleZeroAxisRoll\0"
    "lowThrottleZeroAxisPitch\0"
    "lowThrottleZeroAxisYaw\0BankUpdateFreq_0\0"
    "BankUpdateFreq_1\0BankUpdateFreq_2\0"
    "BankUpdateFreq_3\0BankUpdateFreq_4\0"
    "BankUpdateFreq_5\0DShotMode\0ChannelMax_0\0"
    "ChannelMax_1\0ChannelMax_2\0ChannelMax_3\0"
    "ChannelMax_4\0ChannelMax_5\0ChannelMax_6\0"
    "ChannelMax_7\0ChannelMax_8\0ChannelMax_9\0"
    "ChannelMax_10\0ChannelMax_11\0"
    "ChannelNeutral_0\0ChannelNeutral_1\0"
    "ChannelNeutral_2\0ChannelNeutral_3\0"
    "ChannelNeutral_4\0ChannelNeutral_5\0"
    "ChannelNeutral_6\0ChannelNeutral_7\0"
    "ChannelNeutral_8\0ChannelNeutral_9\0"
    "ChannelNeutral_10\0ChannelNeutral_11\0"
    "ChannelMin_0\0ChannelMin_1\0ChannelMin_2\0"
    "ChannelMin_3\0ChannelMin_4\0ChannelMin_5\0"
    "ChannelMin_6\0ChannelMin_7\0ChannelMin_8\0"
    "ChannelMin_9\0ChannelMin_10\0ChannelMin_11\0"
    "BankMode_0\0BankMode_1\0BankMode_2\0"
    "BankMode_3\0BankMode_4\0BankMode_5\0"
    "ChannelType_0\0ChannelType_1\0ChannelType_2\0"
    "ChannelType_3\0ChannelType_4\0ChannelType_5\0"
    "ChannelType_6\0ChannelType_7\0ChannelType_8\0"
    "ChannelType_9\0ChannelType_10\0"
    "ChannelType_11\0ChannelAddr_0\0ChannelAddr_1\0"
    "ChannelAddr_2\0ChannelAddr_3\0ChannelAddr_4\0"
    "ChannelAddr_5\0ChannelAddr_6\0ChannelAddr_7\0"
    "ChannelAddr_8\0ChannelAddr_9\0ChannelAddr_10\0"
    "ChannelAddr_11\0MotorsSpinWhileArmed\0"
    "LowThrottleZeroAxis_Roll\0"
    "LowThrottleZeroAxis_Pitch\0"
    "LowThrottleZeroAxis_Yaw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     429,   14, // methods
     154, 3346, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     170,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2, 2159,    2, 0x06 /* Public */,
       5,    2, 2164,    2, 0x06 /* Public */,
       6,    1, 2169,    2, 0x06 /* Public */,
       7,    1, 2172,    2, 0x06 /* Public */,
       8,    1, 2175,    2, 0x06 /* Public */,
       9,    1, 2178,    2, 0x06 /* Public */,
      10,    1, 2181,    2, 0x06 /* Public */,
      11,    1, 2184,    2, 0x06 /* Public */,
      12,    1, 2187,    2, 0x06 /* Public */,
      13,    1, 2190,    2, 0x06 /* Public */,
      14,    1, 2193,    2, 0x06 /* Public */,
      15,    1, 2196,    2, 0x06 /* Public */,
      16,    1, 2199,    2, 0x06 /* Public */,
      17,    1, 2202,    2, 0x06 /* Public */,
      18,    1, 2205,    2, 0x06 /* Public */,
      19,    1, 2208,    2, 0x06 /* Public */,
      20,    2, 2211,    2, 0x06 /* Public */,
      21,    2, 2216,    2, 0x06 /* Public */,
      22,    1, 2221,    2, 0x06 /* Public */,
      23,    1, 2224,    2, 0x06 /* Public */,
      24,    1, 2227,    2, 0x06 /* Public */,
      25,    1, 2230,    2, 0x06 /* Public */,
      26,    1, 2233,    2, 0x06 /* Public */,
      27,    1, 2236,    2, 0x06 /* Public */,
      28,    1, 2239,    2, 0x06 /* Public */,
      29,    1, 2242,    2, 0x06 /* Public */,
      30,    1, 2245,    2, 0x06 /* Public */,
      31,    1, 2248,    2, 0x06 /* Public */,
      32,    1, 2251,    2, 0x06 /* Public */,
      33,    1, 2254,    2, 0x06 /* Public */,
      34,    1, 2257,    2, 0x06 /* Public */,
      35,    1, 2260,    2, 0x06 /* Public */,
      36,    1, 2263,    2, 0x06 /* Public */,
      37,    1, 2266,    2, 0x06 /* Public */,
      38,    1, 2269,    2, 0x06 /* Public */,
      39,    1, 2272,    2, 0x06 /* Public */,
      40,    1, 2275,    2, 0x06 /* Public */,
      41,    1, 2278,    2, 0x06 /* Public */,
      42,    1, 2281,    2, 0x06 /* Public */,
      43,    1, 2284,    2, 0x06 /* Public */,
      44,    1, 2287,    2, 0x06 /* Public */,
      45,    1, 2290,    2, 0x06 /* Public */,
      46,    2, 2293,    2, 0x06 /* Public */,
      47,    2, 2298,    2, 0x06 /* Public */,
      48,    1, 2303,    2, 0x06 /* Public */,
      49,    1, 2306,    2, 0x06 /* Public */,
      50,    1, 2309,    2, 0x06 /* Public */,
      51,    1, 2312,    2, 0x06 /* Public */,
      52,    1, 2315,    2, 0x06 /* Public */,
      53,    1, 2318,    2, 0x06 /* Public */,
      54,    1, 2321,    2, 0x06 /* Public */,
      55,    1, 2324,    2, 0x06 /* Public */,
      56,    1, 2327,    2, 0x06 /* Public */,
      57,    1, 2330,    2, 0x06 /* Public */,
      58,    1, 2333,    2, 0x06 /* Public */,
      59,    1, 2336,    2, 0x06 /* Public */,
      60,    1, 2339,    2, 0x06 /* Public */,
      61,    1, 2342,    2, 0x06 /* Public */,
      62,    1, 2345,    2, 0x06 /* Public */,
      63,    1, 2348,    2, 0x06 /* Public */,
      64,    1, 2351,    2, 0x06 /* Public */,
      65,    1, 2354,    2, 0x06 /* Public */,
      66,    1, 2357,    2, 0x06 /* Public */,
      67,    1, 2360,    2, 0x06 /* Public */,
      68,    1, 2363,    2, 0x06 /* Public */,
      69,    1, 2366,    2, 0x06 /* Public */,
      70,    1, 2369,    2, 0x06 /* Public */,
      71,    1, 2372,    2, 0x06 /* Public */,
      72,    2, 2375,    2, 0x06 /* Public */,
      73,    2, 2380,    2, 0x06 /* Public */,
      74,    1, 2385,    2, 0x06 /* Public */,
      75,    1, 2388,    2, 0x06 /* Public */,
      76,    1, 2391,    2, 0x06 /* Public */,
      77,    1, 2394,    2, 0x06 /* Public */,
      78,    1, 2397,    2, 0x06 /* Public */,
      79,    1, 2400,    2, 0x06 /* Public */,
      80,    1, 2403,    2, 0x06 /* Public */,
      81,    1, 2406,    2, 0x06 /* Public */,
      82,    1, 2409,    2, 0x06 /* Public */,
      83,    1, 2412,    2, 0x06 /* Public */,
      84,    1, 2415,    2, 0x06 /* Public */,
      85,    1, 2418,    2, 0x06 /* Public */,
      86,    1, 2421,    2, 0x06 /* Public */,
      87,    1, 2424,    2, 0x06 /* Public */,
      88,    1, 2427,    2, 0x06 /* Public */,
      89,    1, 2430,    2, 0x06 /* Public */,
      90,    1, 2433,    2, 0x06 /* Public */,
      91,    1, 2436,    2, 0x06 /* Public */,
      92,    1, 2439,    2, 0x06 /* Public */,
      93,    1, 2442,    2, 0x06 /* Public */,
      94,    1, 2445,    2, 0x06 /* Public */,
      95,    1, 2448,    2, 0x06 /* Public */,
      96,    1, 2451,    2, 0x06 /* Public */,
      97,    1, 2454,    2, 0x06 /* Public */,
      98,    2, 2457,    2, 0x06 /* Public */,
     100,    2, 2462,    2, 0x06 /* Public */,
     101,    1, 2467,    2, 0x06 /* Public */,
     102,    1, 2470,    2, 0x06 /* Public */,
     103,    1, 2473,    2, 0x06 /* Public */,
     104,    1, 2476,    2, 0x06 /* Public */,
     105,    1, 2479,    2, 0x06 /* Public */,
     106,    1, 2482,    2, 0x06 /* Public */,
     107,    1, 2485,    2, 0x06 /* Public */,
     108,    1, 2488,    2, 0x06 /* Public */,
     109,    1, 2491,    2, 0x06 /* Public */,
     110,    1, 2494,    2, 0x06 /* Public */,
     111,    1, 2497,    2, 0x06 /* Public */,
     112,    1, 2500,    2, 0x06 /* Public */,
     113,    2, 2503,    2, 0x06 /* Public */,
     115,    2, 2508,    2, 0x06 /* Public */,
     116,    1, 2513,    2, 0x06 /* Public */,
     117,    1, 2516,    2, 0x06 /* Public */,
     118,    1, 2519,    2, 0x06 /* Public */,
     119,    1, 2522,    2, 0x06 /* Public */,
     120,    1, 2525,    2, 0x06 /* Public */,
     121,    1, 2528,    2, 0x06 /* Public */,
     122,    1, 2531,    2, 0x06 /* Public */,
     123,    1, 2534,    2, 0x06 /* Public */,
     124,    1, 2537,    2, 0x06 /* Public */,
     125,    1, 2540,    2, 0x06 /* Public */,
     126,    1, 2543,    2, 0x06 /* Public */,
     127,    1, 2546,    2, 0x06 /* Public */,
     128,    1, 2549,    2, 0x06 /* Public */,
     129,    1, 2552,    2, 0x06 /* Public */,
     130,    1, 2555,    2, 0x06 /* Public */,
     131,    1, 2558,    2, 0x06 /* Public */,
     132,    1, 2561,    2, 0x06 /* Public */,
     133,    1, 2564,    2, 0x06 /* Public */,
     134,    1, 2567,    2, 0x06 /* Public */,
     135,    1, 2570,    2, 0x06 /* Public */,
     136,    1, 2573,    2, 0x06 /* Public */,
     137,    1, 2576,    2, 0x06 /* Public */,
     138,    1, 2579,    2, 0x06 /* Public */,
     139,    1, 2582,    2, 0x06 /* Public */,
     140,    2, 2585,    2, 0x06 /* Public */,
     141,    2, 2590,    2, 0x06 /* Public */,
     142,    1, 2595,    2, 0x06 /* Public */,
     143,    1, 2598,    2, 0x06 /* Public */,
     144,    1, 2601,    2, 0x06 /* Public */,
     145,    1, 2604,    2, 0x06 /* Public */,
     146,    1, 2607,    2, 0x06 /* Public */,
     147,    1, 2610,    2, 0x06 /* Public */,
     148,    1, 2613,    2, 0x06 /* Public */,
     149,    1, 2616,    2, 0x06 /* Public */,
     150,    1, 2619,    2, 0x06 /* Public */,
     151,    1, 2622,    2, 0x06 /* Public */,
     152,    1, 2625,    2, 0x06 /* Public */,
     153,    1, 2628,    2, 0x06 /* Public */,
     154,    1, 2631,    2, 0x06 /* Public */,
     155,    1, 2634,    2, 0x06 /* Public */,
     156,    1, 2637,    2, 0x06 /* Public */,
     157,    1, 2640,    2, 0x06 /* Public */,
     158,    1, 2643,    2, 0x06 /* Public */,
     159,    1, 2646,    2, 0x06 /* Public */,
     160,    1, 2649,    2, 0x06 /* Public */,
     161,    1, 2652,    2, 0x06 /* Public */,
     162,    1, 2655,    2, 0x06 /* Public */,
     163,    1, 2658,    2, 0x06 /* Public */,
     164,    1, 2661,    2, 0x06 /* Public */,
     165,    1, 2664,    2, 0x06 /* Public */,
     166,    1, 2667,    2, 0x06 /* Public */,
     168,    1, 2670,    2, 0x06 /* Public */,
     169,    2, 2673,    2, 0x06 /* Public */,
     171,    2, 2678,    2, 0x06 /* Public */,
     172,    1, 2683,    2, 0x06 /* Public */,
     173,    1, 2686,    2, 0x06 /* Public */,
     174,    1, 2689,    2, 0x06 /* Public */,
     175,    1, 2692,    2, 0x06 /* Public */,
     176,    1, 2695,    2, 0x06 /* Public */,
     177,    1, 2698,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     178,    2, 2701,    2, 0x0a /* Public */,
     179,    1, 2706,    2, 0x0a /* Public */,
     180,    1, 2709,    2, 0x0a /* Public */,
     181,    1, 2712,    2, 0x0a /* Public */,
     182,    1, 2715,    2, 0x0a /* Public */,
     183,    1, 2718,    2, 0x0a /* Public */,
     184,    1, 2721,    2, 0x0a /* Public */,
     185,    1, 2724,    2, 0x0a /* Public */,
     186,    1, 2727,    2, 0x0a /* Public */,
     187,    1, 2730,    2, 0x0a /* Public */,
     188,    1, 2733,    2, 0x0a /* Public */,
     189,    1, 2736,    2, 0x0a /* Public */,
     190,    1, 2739,    2, 0x0a /* Public */,
     191,    1, 2742,    2, 0x0a /* Public */,
     192,    2, 2745,    2, 0x0a /* Public */,
     193,    1, 2750,    2, 0x0a /* Public */,
     194,    1, 2753,    2, 0x0a /* Public */,
     195,    1, 2756,    2, 0x0a /* Public */,
     196,    1, 2759,    2, 0x0a /* Public */,
     197,    1, 2762,    2, 0x0a /* Public */,
     198,    1, 2765,    2, 0x0a /* Public */,
     199,    1, 2768,    2, 0x0a /* Public */,
     200,    1, 2771,    2, 0x0a /* Public */,
     201,    1, 2774,    2, 0x0a /* Public */,
     202,    1, 2777,    2, 0x0a /* Public */,
     203,    1, 2780,    2, 0x0a /* Public */,
     204,    1, 2783,    2, 0x0a /* Public */,
     205,    1, 2786,    2, 0x0a /* Public */,
     206,    1, 2789,    2, 0x0a /* Public */,
     207,    1, 2792,    2, 0x0a /* Public */,
     208,    1, 2795,    2, 0x0a /* Public */,
     209,    1, 2798,    2, 0x0a /* Public */,
     210,    1, 2801,    2, 0x0a /* Public */,
     211,    1, 2804,    2, 0x0a /* Public */,
     212,    1, 2807,    2, 0x0a /* Public */,
     213,    1, 2810,    2, 0x0a /* Public */,
     214,    1, 2813,    2, 0x0a /* Public */,
     215,    1, 2816,    2, 0x0a /* Public */,
     216,    1, 2819,    2, 0x0a /* Public */,
     217,    2, 2822,    2, 0x0a /* Public */,
     218,    1, 2827,    2, 0x0a /* Public */,
     219,    1, 2830,    2, 0x0a /* Public */,
     220,    1, 2833,    2, 0x0a /* Public */,
     221,    1, 2836,    2, 0x0a /* Public */,
     222,    1, 2839,    2, 0x0a /* Public */,
     223,    1, 2842,    2, 0x0a /* Public */,
     224,    1, 2845,    2, 0x0a /* Public */,
     225,    1, 2848,    2, 0x0a /* Public */,
     226,    1, 2851,    2, 0x0a /* Public */,
     227,    1, 2854,    2, 0x0a /* Public */,
     228,    1, 2857,    2, 0x0a /* Public */,
     229,    1, 2860,    2, 0x0a /* Public */,
     230,    1, 2863,    2, 0x0a /* Public */,
     231,    1, 2866,    2, 0x0a /* Public */,
     232,    1, 2869,    2, 0x0a /* Public */,
     233,    1, 2872,    2, 0x0a /* Public */,
     234,    1, 2875,    2, 0x0a /* Public */,
     235,    1, 2878,    2, 0x0a /* Public */,
     236,    1, 2881,    2, 0x0a /* Public */,
     237,    1, 2884,    2, 0x0a /* Public */,
     238,    1, 2887,    2, 0x0a /* Public */,
     239,    1, 2890,    2, 0x0a /* Public */,
     240,    1, 2893,    2, 0x0a /* Public */,
     241,    1, 2896,    2, 0x0a /* Public */,
     242,    2, 2899,    2, 0x0a /* Public */,
     243,    1, 2904,    2, 0x0a /* Public */,
     244,    1, 2907,    2, 0x0a /* Public */,
     245,    1, 2910,    2, 0x0a /* Public */,
     246,    1, 2913,    2, 0x0a /* Public */,
     247,    1, 2916,    2, 0x0a /* Public */,
     248,    1, 2919,    2, 0x0a /* Public */,
     249,    1, 2922,    2, 0x0a /* Public */,
     250,    1, 2925,    2, 0x0a /* Public */,
     251,    1, 2928,    2, 0x0a /* Public */,
     252,    1, 2931,    2, 0x0a /* Public */,
     253,    1, 2934,    2, 0x0a /* Public */,
     254,    1, 2937,    2, 0x0a /* Public */,
     255,    1, 2940,    2, 0x0a /* Public */,
     256,    1, 2943,    2, 0x0a /* Public */,
     257,    1, 2946,    2, 0x0a /* Public */,
     258,    1, 2949,    2, 0x0a /* Public */,
     259,    1, 2952,    2, 0x0a /* Public */,
     260,    1, 2955,    2, 0x0a /* Public */,
     261,    1, 2958,    2, 0x0a /* Public */,
     262,    1, 2961,    2, 0x0a /* Public */,
     263,    1, 2964,    2, 0x0a /* Public */,
     264,    1, 2967,    2, 0x0a /* Public */,
     265,    1, 2970,    2, 0x0a /* Public */,
     266,    1, 2973,    2, 0x0a /* Public */,
     267,    2, 2976,    2, 0x0a /* Public */,
     267,    2, 2981,    2, 0x0a /* Public */,
     268,    1, 2986,    2, 0x0a /* Public */,
     269,    1, 2989,    2, 0x0a /* Public */,
     270,    1, 2992,    2, 0x0a /* Public */,
     271,    1, 2995,    2, 0x0a /* Public */,
     272,    1, 2998,    2, 0x0a /* Public */,
     273,    1, 3001,    2, 0x0a /* Public */,
     274,    1, 3004,    2, 0x0a /* Public */,
     275,    1, 3007,    2, 0x0a /* Public */,
     276,    1, 3010,    2, 0x0a /* Public */,
     277,    1, 3013,    2, 0x0a /* Public */,
     278,    1, 3016,    2, 0x0a /* Public */,
     279,    1, 3019,    2, 0x0a /* Public */,
     280,    2, 3022,    2, 0x0a /* Public */,
     280,    2, 3027,    2, 0x0a /* Public */,
     281,    1, 3032,    2, 0x0a /* Public */,
     282,    1, 3035,    2, 0x0a /* Public */,
     283,    1, 3038,    2, 0x0a /* Public */,
     284,    1, 3041,    2, 0x0a /* Public */,
     285,    1, 3044,    2, 0x0a /* Public */,
     286,    1, 3047,    2, 0x0a /* Public */,
     287,    1, 3050,    2, 0x0a /* Public */,
     288,    1, 3053,    2, 0x0a /* Public */,
     289,    1, 3056,    2, 0x0a /* Public */,
     290,    1, 3059,    2, 0x0a /* Public */,
     291,    1, 3062,    2, 0x0a /* Public */,
     292,    1, 3065,    2, 0x0a /* Public */,
     293,    1, 3068,    2, 0x0a /* Public */,
     294,    1, 3071,    2, 0x0a /* Public */,
     295,    1, 3074,    2, 0x0a /* Public */,
     296,    1, 3077,    2, 0x0a /* Public */,
     297,    1, 3080,    2, 0x0a /* Public */,
     298,    1, 3083,    2, 0x0a /* Public */,
     299,    1, 3086,    2, 0x0a /* Public */,
     300,    1, 3089,    2, 0x0a /* Public */,
     301,    1, 3092,    2, 0x0a /* Public */,
     302,    1, 3095,    2, 0x0a /* Public */,
     303,    1, 3098,    2, 0x0a /* Public */,
     304,    1, 3101,    2, 0x0a /* Public */,
     305,    2, 3104,    2, 0x0a /* Public */,
     305,    2, 3109,    2, 0x0a /* Public */,
     306,    1, 3114,    2, 0x0a /* Public */,
     307,    1, 3117,    2, 0x0a /* Public */,
     308,    1, 3120,    2, 0x0a /* Public */,
     309,    1, 3123,    2, 0x0a /* Public */,
     310,    1, 3126,    2, 0x0a /* Public */,
     311,    1, 3129,    2, 0x0a /* Public */,
     312,    1, 3132,    2, 0x0a /* Public */,
     313,    1, 3135,    2, 0x0a /* Public */,
     314,    1, 3138,    2, 0x0a /* Public */,
     315,    1, 3141,    2, 0x0a /* Public */,
     316,    1, 3144,    2, 0x0a /* Public */,
     317,    1, 3147,    2, 0x0a /* Public */,
     318,    1, 3150,    2, 0x0a /* Public */,
     319,    1, 3153,    2, 0x0a /* Public */,
     320,    1, 3156,    2, 0x0a /* Public */,
     321,    1, 3159,    2, 0x0a /* Public */,
     322,    1, 3162,    2, 0x0a /* Public */,
     323,    1, 3165,    2, 0x0a /* Public */,
     324,    1, 3168,    2, 0x0a /* Public */,
     325,    1, 3171,    2, 0x0a /* Public */,
     326,    1, 3174,    2, 0x0a /* Public */,
     327,    1, 3177,    2, 0x0a /* Public */,
     328,    1, 3180,    2, 0x0a /* Public */,
     329,    1, 3183,    2, 0x0a /* Public */,
     330,    1, 3186,    2, 0x0a /* Public */,
     330,    1, 3189,    2, 0x0a /* Public */,
     331,    2, 3192,    2, 0x0a /* Public */,
     331,    2, 3197,    2, 0x0a /* Public */,
     332,    1, 3202,    2, 0x0a /* Public */,
     333,    1, 3205,    2, 0x0a /* Public */,
     334,    1, 3208,    2, 0x0a /* Public */,
     335,    1, 3211,    2, 0x0a /* Public */,
     336,    1, 3214,    2, 0x0a /* Public */,
     337,    1, 3217,    2, 0x0a /* Public */,
     338,    0, 3220,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     339,    1, 3221,    2, 0x02 /* Public */,
     340,    1, 3224,    2, 0x02 /* Public */,
     341,    0, 3227,    2, 0x02 /* Public */,
     342,    0, 3228,    2, 0x02 /* Public */,
     343,    0, 3229,    2, 0x02 /* Public */,
     344,    0, 3230,    2, 0x02 /* Public */,
     345,    0, 3231,    2, 0x02 /* Public */,
     346,    0, 3232,    2, 0x02 /* Public */,
     347,    0, 3233,    2, 0x02 /* Public */,
     348,    1, 3234,    2, 0x02 /* Public */,
     349,    1, 3237,    2, 0x02 /* Public */,
     350,    0, 3240,    2, 0x02 /* Public */,
     351,    0, 3241,    2, 0x02 /* Public */,
     352,    0, 3242,    2, 0x02 /* Public */,
     353,    0, 3243,    2, 0x02 /* Public */,
     354,    0, 3244,    2, 0x02 /* Public */,
     355,    0, 3245,    2, 0x02 /* Public */,
     356,    0, 3246,    2, 0x02 /* Public */,
     357,    0, 3247,    2, 0x02 /* Public */,
     358,    0, 3248,    2, 0x02 /* Public */,
     359,    0, 3249,    2, 0x02 /* Public */,
     360,    0, 3250,    2, 0x02 /* Public */,
     361,    0, 3251,    2, 0x02 /* Public */,
     362,    1, 3252,    2, 0x02 /* Public */,
     363,    1, 3255,    2, 0x02 /* Public */,
     364,    0, 3258,    2, 0x02 /* Public */,
     365,    0, 3259,    2, 0x02 /* Public */,
     366,    0, 3260,    2, 0x02 /* Public */,
     367,    0, 3261,    2, 0x02 /* Public */,
     368,    0, 3262,    2, 0x02 /* Public */,
     369,    0, 3263,    2, 0x02 /* Public */,
     370,    0, 3264,    2, 0x02 /* Public */,
     371,    0, 3265,    2, 0x02 /* Public */,
     372,    0, 3266,    2, 0x02 /* Public */,
     373,    0, 3267,    2, 0x02 /* Public */,
     374,    0, 3268,    2, 0x02 /* Public */,
     375,    0, 3269,    2, 0x02 /* Public */,
     376,    1, 3270,    2, 0x02 /* Public */,
     377,    1, 3273,    2, 0x02 /* Public */,
     378,    0, 3276,    2, 0x02 /* Public */,
     379,    0, 3277,    2, 0x02 /* Public */,
     380,    0, 3278,    2, 0x02 /* Public */,
     381,    0, 3279,    2, 0x02 /* Public */,
     382,    0, 3280,    2, 0x02 /* Public */,
     383,    0, 3281,    2, 0x02 /* Public */,
     384,    0, 3282,    2, 0x02 /* Public */,
     385,    0, 3283,    2, 0x02 /* Public */,
     386,    0, 3284,    2, 0x02 /* Public */,
     387,    0, 3285,    2, 0x02 /* Public */,
     388,    0, 3286,    2, 0x02 /* Public */,
     389,    0, 3287,    2, 0x02 /* Public */,
     390,    1, 3288,    2, 0x02 /* Public */,
     391,    1, 3291,    2, 0x02 /* Public */,
     392,    0, 3294,    2, 0x02 /* Public */,
     393,    0, 3295,    2, 0x02 /* Public */,
     394,    0, 3296,    2, 0x02 /* Public */,
     395,    0, 3297,    2, 0x02 /* Public */,
     396,    0, 3298,    2, 0x02 /* Public */,
     397,    0, 3299,    2, 0x02 /* Public */,
     398,    1, 3300,    2, 0x02 /* Public */,
     399,    1, 3303,    2, 0x02 /* Public */,
     400,    0, 3306,    2, 0x02 /* Public */,
     401,    0, 3307,    2, 0x02 /* Public */,
     402,    0, 3308,    2, 0x02 /* Public */,
     403,    0, 3309,    2, 0x02 /* Public */,
     404,    0, 3310,    2, 0x02 /* Public */,
     405,    0, 3311,    2, 0x02 /* Public */,
     406,    0, 3312,    2, 0x02 /* Public */,
     407,    0, 3313,    2, 0x02 /* Public */,
     408,    0, 3314,    2, 0x02 /* Public */,
     409,    0, 3315,    2, 0x02 /* Public */,
     410,    0, 3316,    2, 0x02 /* Public */,
     411,    0, 3317,    2, 0x02 /* Public */,
     412,    1, 3318,    2, 0x02 /* Public */,
     413,    1, 3321,    2, 0x02 /* Public */,
     414,    0, 3324,    2, 0x02 /* Public */,
     415,    0, 3325,    2, 0x02 /* Public */,
     416,    0, 3326,    2, 0x02 /* Public */,
     417,    0, 3327,    2, 0x02 /* Public */,
     418,    0, 3328,    2, 0x02 /* Public */,
     419,    0, 3329,    2, 0x02 /* Public */,
     420,    0, 3330,    2, 0x02 /* Public */,
     421,    0, 3331,    2, 0x02 /* Public */,
     422,    0, 3332,    2, 0x02 /* Public */,
     423,    0, 3333,    2, 0x02 /* Public */,
     424,    0, 3334,    2, 0x02 /* Public */,
     425,    0, 3335,    2, 0x02 /* Public */,
     426,    0, 3336,    2, 0x02 /* Public */,
     427,    1, 3337,    2, 0x02 /* Public */,
     428,    1, 3340,    2, 0x02 /* Public */,
     429,    0, 3343,    2, 0x02 /* Public */,
     430,    0, 3344,    2, 0x02 /* Public */,
     431,    0, 3345,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 99,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 114,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 167,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 170,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Short,    3,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::Short,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 99,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 99,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 114,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 114,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 167,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 170,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,    3,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, 0x80000000 | 170,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short, QMetaType::UInt,    3,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    QMetaType::Short,
    0x80000000 | 99, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 114, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UShort, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,
    0x80000000 | 170, QMetaType::UInt,    3,
    QMetaType::UChar, QMetaType::UInt,    3,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
     432, QMetaType::UShort, 0x00495103,
     433, QMetaType::UShort, 0x00495103,
     434, QMetaType::UShort, 0x00495103,
     435, QMetaType::UShort, 0x00495103,
     436, QMetaType::UShort, 0x00495103,
     437, QMetaType::UShort, 0x00495103,
     438, QMetaType::UShort, 0x00495103,
     439, QMetaType::Short, 0x00495103,
     440, QMetaType::Short, 0x00495103,
     441, QMetaType::Short, 0x00495103,
     442, QMetaType::Short, 0x00495103,
     443, QMetaType::Short, 0x00495103,
     444, QMetaType::Short, 0x00495103,
     445, QMetaType::Short, 0x00495103,
     446, QMetaType::Short, 0x00495103,
     447, QMetaType::Short, 0x00495103,
     448, QMetaType::Short, 0x00495103,
     449, QMetaType::Short, 0x00495103,
     450, QMetaType::Short, 0x00495103,
     451, QMetaType::Short, 0x00495103,
     452, QMetaType::Short, 0x00495103,
     453, QMetaType::Short, 0x00495103,
     454, QMetaType::Short, 0x00495103,
     455, QMetaType::Short, 0x00495103,
     456, QMetaType::Short, 0x00495103,
     457, QMetaType::Short, 0x00495103,
     458, QMetaType::Short, 0x00495103,
     459, QMetaType::Short, 0x00495103,
     460, QMetaType::Short, 0x00495103,
     461, QMetaType::Short, 0x00495103,
     462, QMetaType::Short, 0x00495103,
     463, QMetaType::Short, 0x00495103,
     464, QMetaType::Short, 0x00495103,
     465, QMetaType::Short, 0x00495103,
     466, QMetaType::Short, 0x00495103,
     467, QMetaType::Short, 0x00495103,
     468, QMetaType::Short, 0x00495103,
     469, QMetaType::Short, 0x00495103,
     470, QMetaType::Short, 0x00495103,
     471, QMetaType::Short, 0x00495103,
     472, QMetaType::Short, 0x00495103,
     473, QMetaType::Short, 0x00495103,
     474, QMetaType::Short, 0x00495103,
     475, 0x80000000 | 99, 0x0049510b,
     476, 0x80000000 | 99, 0x0049510b,
     477, 0x80000000 | 99, 0x0049510b,
     478, 0x80000000 | 99, 0x0049510b,
     479, 0x80000000 | 99, 0x0049510b,
     480, 0x80000000 | 99, 0x0049510b,
     481, 0x80000000 | 114, 0x0049510b,
     482, 0x80000000 | 114, 0x0049510b,
     483, 0x80000000 | 114, 0x0049510b,
     484, 0x80000000 | 114, 0x0049510b,
     485, 0x80000000 | 114, 0x0049510b,
     486, 0x80000000 | 114, 0x0049510b,
     487, 0x80000000 | 114, 0x0049510b,
     488, 0x80000000 | 114, 0x0049510b,
     489, 0x80000000 | 114, 0x0049510b,
     490, 0x80000000 | 114, 0x0049510b,
     491, 0x80000000 | 114, 0x0049510b,
     492, 0x80000000 | 114, 0x0049510b,
     493, QMetaType::UShort, 0x00495103,
     494, QMetaType::UShort, 0x00495103,
     495, QMetaType::UShort, 0x00495103,
     496, QMetaType::UShort, 0x00495103,
     497, QMetaType::UShort, 0x00495103,
     498, QMetaType::UShort, 0x00495103,
     499, QMetaType::UShort, 0x00495103,
     500, QMetaType::UShort, 0x00495103,
     501, QMetaType::UShort, 0x00495103,
     502, QMetaType::UShort, 0x00495103,
     503, QMetaType::UShort, 0x00495103,
     504, QMetaType::UShort, 0x00495103,
     505, 0x80000000 | 167, 0x0049510b,
     506, 0x80000000 | 170, 0x0049510b,
     507, 0x80000000 | 170, 0x0049510b,
     508, 0x80000000 | 170, 0x0049510b,
     509, QMetaType::UShort, 0x00495103,
     510, QMetaType::UShort, 0x00495103,
     511, QMetaType::UShort, 0x00495103,
     512, QMetaType::UShort, 0x00495103,
     513, QMetaType::UShort, 0x00495103,
     514, QMetaType::UShort, 0x00495103,
     515, QMetaType::UShort, 0x00495103,
     516, QMetaType::Short, 0x00495103,
     517, QMetaType::Short, 0x00495103,
     518, QMetaType::Short, 0x00495103,
     519, QMetaType::Short, 0x00495103,
     520, QMetaType::Short, 0x00495103,
     521, QMetaType::Short, 0x00495103,
     522, QMetaType::Short, 0x00495103,
     523, QMetaType::Short, 0x00495103,
     524, QMetaType::Short, 0x00495103,
     525, QMetaType::Short, 0x00495103,
     526, QMetaType::Short, 0x00495103,
     527, QMetaType::Short, 0x00495103,
     528, QMetaType::Short, 0x00495103,
     529, QMetaType::Short, 0x00495103,
     530, QMetaType::Short, 0x00495103,
     531, QMetaType::Short, 0x00495103,
     532, QMetaType::Short, 0x00495103,
     533, QMetaType::Short, 0x00495103,
     534, QMetaType::Short, 0x00495103,
     535, QMetaType::Short, 0x00495103,
     536, QMetaType::Short, 0x00495103,
     537, QMetaType::Short, 0x00495103,
     538, QMetaType::Short, 0x00495103,
     539, QMetaType::Short, 0x00495103,
     540, QMetaType::Short, 0x00495103,
     541, QMetaType::Short, 0x00495103,
     542, QMetaType::Short, 0x00495103,
     543, QMetaType::Short, 0x00495103,
     544, QMetaType::Short, 0x00495103,
     545, QMetaType::Short, 0x00495103,
     546, QMetaType::Short, 0x00495103,
     547, QMetaType::Short, 0x00495103,
     548, QMetaType::Short, 0x00495103,
     549, QMetaType::Short, 0x00495103,
     550, QMetaType::Short, 0x00495103,
     551, QMetaType::Short, 0x00495103,
     552, QMetaType::UChar, 0x00495103,
     553, QMetaType::UChar, 0x00495103,
     554, QMetaType::UChar, 0x00495103,
     555, QMetaType::UChar, 0x00495103,
     556, QMetaType::UChar, 0x00495103,
     557, QMetaType::UChar, 0x00495103,
     558, QMetaType::UChar, 0x00495103,
     559, QMetaType::UChar, 0x00495103,
     560, QMetaType::UChar, 0x00495103,
     561, QMetaType::UChar, 0x00495103,
     562, QMetaType::UChar, 0x00495103,
     563, QMetaType::UChar, 0x00495103,
     564, QMetaType::UChar, 0x00495103,
     565, QMetaType::UChar, 0x00495103,
     566, QMetaType::UChar, 0x00495103,
     567, QMetaType::UChar, 0x00495103,
     568, QMetaType::UChar, 0x00495103,
     569, QMetaType::UChar, 0x00495103,
     570, QMetaType::UChar, 0x00495103,
     571, QMetaType::UChar, 0x00495103,
     572, QMetaType::UChar, 0x00495103,
     573, QMetaType::UChar, 0x00495103,
     574, QMetaType::UChar, 0x00495103,
     575, QMetaType::UChar, 0x00495103,
     576, QMetaType::UChar, 0x00495103,
     577, QMetaType::UChar, 0x00495103,
     578, QMetaType::UChar, 0x00495103,
     579, QMetaType::UChar, 0x00495103,
     580, QMetaType::UChar, 0x00495103,
     581, QMetaType::UChar, 0x00495103,
     582, QMetaType::UChar, 0x00495103,
     583, QMetaType::UChar, 0x00495103,
     584, QMetaType::UChar, 0x00495103,
     585, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      18,
      20,
      22,
      24,
      26,
      28,
      30,
      32,
      34,
      36,
      38,
      40,
      44,
      46,
      48,
      50,
      52,
      54,
      56,
      58,
      60,
      62,
      64,
      66,
      70,
      72,
      74,
      76,
      78,
      80,
      82,
      84,
      86,
      88,
      90,
      92,
      96,
      98,
     100,
     102,
     104,
     106,
     110,
     112,
     114,
     116,
     118,
     120,
     122,
     124,
     126,
     128,
     130,
     132,
     136,
     138,
     140,
     142,
     144,
     146,
     148,
     150,
     152,
     154,
     156,
     158,
     160,
     164,
     166,
     168,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      19,
      21,
      23,
      25,
      27,
      29,
      31,
      33,
      35,
      37,
      39,
      41,
      45,
      47,
      49,
      51,
      53,
      55,
      57,
      59,
      61,
      63,
      65,
      67,
      71,
      73,
      75,
      77,
      79,
      81,
      83,
      85,
      87,
      89,
      91,
      93,
      97,
      99,
     101,
     103,
     105,
     107,
     111,
     113,
     115,
     117,
     119,
     121,
     123,
     125,
     127,
     129,
     131,
     133,
     137,
     139,
     141,
     143,
     145,
     147,
     149,
     151,
     153,
     155,
     157,
     159,
     161,
     165,
     167,
     169,

       0        // eod
};

void ActuatorSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bankUpdateFreqChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 1: _t->BankUpdateFreqChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 2: _t->bankUpdateFreq0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 3: _t->BankUpdateFreq_0Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->bankUpdateFreq1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 5: _t->BankUpdateFreq_1Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: _t->bankUpdateFreq2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 7: _t->BankUpdateFreq_2Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->bankUpdateFreq3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 9: _t->BankUpdateFreq_3Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->bankUpdateFreq4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 11: _t->BankUpdateFreq_4Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->bankUpdateFreq5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 13: _t->BankUpdateFreq_5Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: _t->dShotModeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 15: _t->DShotModeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->channelMaxChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 17: _t->ChannelMaxChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 18: _t->channelMax0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 19: _t->ChannelMax_0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 20: _t->channelMax1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->ChannelMax_1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 22: _t->channelMax2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->ChannelMax_2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 24: _t->channelMax3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->ChannelMax_3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 26: _t->channelMax4Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 27: _t->ChannelMax_4Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 28: _t->channelMax5Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 29: _t->ChannelMax_5Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 30: _t->channelMax6Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 31: _t->ChannelMax_6Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 32: _t->channelMax7Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 33: _t->ChannelMax_7Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 34: _t->channelMax8Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 35: _t->ChannelMax_8Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 36: _t->channelMax9Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 37: _t->ChannelMax_9Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 38: _t->channelMax10Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 39: _t->ChannelMax_10Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 40: _t->channelMax11Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 41: _t->ChannelMax_11Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 42: _t->channelNeutralChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 43: _t->ChannelNeutralChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 44: _t->channelNeutral0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 45: _t->ChannelNeutral_0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 46: _t->channelNeutral1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 47: _t->ChannelNeutral_1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 48: _t->channelNeutral2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->ChannelNeutral_2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 50: _t->channelNeutral3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 51: _t->ChannelNeutral_3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 52: _t->channelNeutral4Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 53: _t->ChannelNeutral_4Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 54: _t->channelNeutral5Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 55: _t->ChannelNeutral_5Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 56: _t->channelNeutral6Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 57: _t->ChannelNeutral_6Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 58: _t->channelNeutral7Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 59: _t->ChannelNeutral_7Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 60: _t->channelNeutral8Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 61: _t->ChannelNeutral_8Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 62: _t->channelNeutral9Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 63: _t->ChannelNeutral_9Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 64: _t->channelNeutral10Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 65: _t->ChannelNeutral_10Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 66: _t->channelNeutral11Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 67: _t->ChannelNeutral_11Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 68: _t->channelMinChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 69: _t->ChannelMinChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 70: _t->channelMin0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 71: _t->ChannelMin_0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 72: _t->channelMin1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 73: _t->ChannelMin_1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 74: _t->channelMin2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 75: _t->ChannelMin_2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 76: _t->channelMin3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 77: _t->ChannelMin_3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 78: _t->channelMin4Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 79: _t->ChannelMin_4Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 80: _t->channelMin5Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 81: _t->ChannelMin_5Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 82: _t->channelMin6Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 83: _t->ChannelMin_6Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 84: _t->channelMin7Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 85: _t->ChannelMin_7Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 86: _t->channelMin8Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 87: _t->ChannelMin_8Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 88: _t->channelMin9Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 89: _t->ChannelMin_9Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 90: _t->channelMin10Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 91: _t->ChannelMin_10Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 92: _t->channelMin11Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 93: _t->ChannelMin_11Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 94: _t->bankModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[2]))); break;
        case 95: _t->BankModeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 96: _t->bankMode0Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 97: _t->BankMode_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 98: _t->bankMode1Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 99: _t->BankMode_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 100: _t->bankMode2Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 101: _t->BankMode_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 102: _t->bankMode3Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 103: _t->BankMode_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 104: _t->bankMode4Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 105: _t->BankMode_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 106: _t->bankMode5Changed((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 107: _t->BankMode_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 108: _t->channelTypeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[2]))); break;
        case 109: _t->ChannelTypeChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 110: _t->channelType0Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 111: _t->ChannelType_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 112: _t->channelType1Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 113: _t->ChannelType_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 114: _t->channelType2Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 115: _t->ChannelType_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 116: _t->channelType3Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 117: _t->ChannelType_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 118: _t->channelType4Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 119: _t->ChannelType_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 120: _t->channelType5Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 121: _t->ChannelType_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 122: _t->channelType6Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 123: _t->ChannelType_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 124: _t->channelType7Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 125: _t->ChannelType_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 126: _t->channelType8Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 127: _t->ChannelType_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 128: _t->channelType9Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 129: _t->ChannelType_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 130: _t->channelType10Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 131: _t->ChannelType_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 132: _t->channelType11Changed((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 133: _t->ChannelType_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 134: _t->channelAddrChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 135: _t->ChannelAddrChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 136: _t->channelAddr0Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 137: _t->ChannelAddr_0Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 138: _t->channelAddr1Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 139: _t->ChannelAddr_1Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 140: _t->channelAddr2Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 141: _t->ChannelAddr_2Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 142: _t->channelAddr3Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 143: _t->ChannelAddr_3Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 144: _t->channelAddr4Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 145: _t->ChannelAddr_4Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 146: _t->channelAddr5Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 147: _t->ChannelAddr_5Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 148: _t->channelAddr6Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 149: _t->ChannelAddr_6Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 150: _t->channelAddr7Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 151: _t->ChannelAddr_7Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 152: _t->channelAddr8Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 153: _t->ChannelAddr_8Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 154: _t->channelAddr9Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 155: _t->ChannelAddr_9Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 156: _t->channelAddr10Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 157: _t->ChannelAddr_10Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 158: _t->channelAddr11Changed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 159: _t->ChannelAddr_11Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 160: _t->motorsSpinWhileArmedChanged((*reinterpret_cast< const ActuatorSettings_MotorsSpinWhileArmed::Enum(*)>(_a[1]))); break;
        case 161: _t->MotorsSpinWhileArmedChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 162: _t->lowThrottleZeroAxisChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[2]))); break;
        case 163: _t->LowThrottleZeroAxisChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 164: _t->lowThrottleZeroAxisRollChanged((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 165: _t->LowThrottleZeroAxis_RollChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 166: _t->lowThrottleZeroAxisPitchChanged((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 167: _t->LowThrottleZeroAxis_PitchChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 168: _t->lowThrottleZeroAxisYawChanged((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 169: _t->LowThrottleZeroAxis_YawChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 170: _t->setBankUpdateFreq((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 171: _t->setBankUpdateFreq0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 172: _t->setBankUpdateFreq_0((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 173: _t->setBankUpdateFreq1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 174: _t->setBankUpdateFreq_1((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 175: _t->setBankUpdateFreq2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 176: _t->setBankUpdateFreq_2((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 177: _t->setBankUpdateFreq3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 178: _t->setBankUpdateFreq_3((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 179: _t->setBankUpdateFreq4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 180: _t->setBankUpdateFreq_4((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 181: _t->setBankUpdateFreq5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 182: _t->setBankUpdateFreq_5((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 183: _t->setDShotMode((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 184: _t->setChannelMax((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 185: _t->setChannelMax0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 186: _t->setChannelMax_0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 187: _t->setChannelMax1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 188: _t->setChannelMax_1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 189: _t->setChannelMax2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 190: _t->setChannelMax_2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 191: _t->setChannelMax3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 192: _t->setChannelMax_3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 193: _t->setChannelMax4((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 194: _t->setChannelMax_4((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 195: _t->setChannelMax5((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 196: _t->setChannelMax_5((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 197: _t->setChannelMax6((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 198: _t->setChannelMax_6((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 199: _t->setChannelMax7((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 200: _t->setChannelMax_7((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 201: _t->setChannelMax8((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 202: _t->setChannelMax_8((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 203: _t->setChannelMax9((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 204: _t->setChannelMax_9((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 205: _t->setChannelMax10((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 206: _t->setChannelMax_10((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 207: _t->setChannelMax11((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 208: _t->setChannelMax_11((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 209: _t->setChannelNeutral((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 210: _t->setChannelNeutral0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 211: _t->setChannelNeutral_0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 212: _t->setChannelNeutral1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 213: _t->setChannelNeutral_1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 214: _t->setChannelNeutral2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 215: _t->setChannelNeutral_2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 216: _t->setChannelNeutral3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 217: _t->setChannelNeutral_3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 218: _t->setChannelNeutral4((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 219: _t->setChannelNeutral_4((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 220: _t->setChannelNeutral5((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 221: _t->setChannelNeutral_5((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 222: _t->setChannelNeutral6((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 223: _t->setChannelNeutral_6((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 224: _t->setChannelNeutral7((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 225: _t->setChannelNeutral_7((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 226: _t->setChannelNeutral8((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 227: _t->setChannelNeutral_8((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 228: _t->setChannelNeutral9((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 229: _t->setChannelNeutral_9((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 230: _t->setChannelNeutral10((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 231: _t->setChannelNeutral_10((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 232: _t->setChannelNeutral11((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 233: _t->setChannelNeutral_11((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 234: _t->setChannelMin((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 235: _t->setChannelMin0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 236: _t->setChannelMin_0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 237: _t->setChannelMin1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 238: _t->setChannelMin_1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 239: _t->setChannelMin2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 240: _t->setChannelMin_2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 241: _t->setChannelMin3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 242: _t->setChannelMin_3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 243: _t->setChannelMin4((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 244: _t->setChannelMin_4((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 245: _t->setChannelMin5((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 246: _t->setChannelMin_5((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 247: _t->setChannelMin6((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 248: _t->setChannelMin_6((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 249: _t->setChannelMin7((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 250: _t->setChannelMin_7((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 251: _t->setChannelMin8((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 252: _t->setChannelMin_8((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 253: _t->setChannelMin9((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 254: _t->setChannelMin_9((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 255: _t->setChannelMin10((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 256: _t->setChannelMin_10((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 257: _t->setChannelMin11((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 258: _t->setChannelMin_11((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 259: _t->setBankMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[2]))); break;
        case 260: _t->setBankMode((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 261: _t->setBankMode0((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 262: _t->setBankMode_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 263: _t->setBankMode1((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 264: _t->setBankMode_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 265: _t->setBankMode2((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 266: _t->setBankMode_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 267: _t->setBankMode3((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 268: _t->setBankMode_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 269: _t->setBankMode4((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 270: _t->setBankMode_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 271: _t->setBankMode5((*reinterpret_cast< const ActuatorSettings_BankMode::Enum(*)>(_a[1]))); break;
        case 272: _t->setBankMode_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 273: _t->setChannelType((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[2]))); break;
        case 274: _t->setChannelType((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 275: _t->setChannelType0((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 276: _t->setChannelType_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 277: _t->setChannelType1((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 278: _t->setChannelType_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 279: _t->setChannelType2((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 280: _t->setChannelType_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 281: _t->setChannelType3((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 282: _t->setChannelType_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 283: _t->setChannelType4((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 284: _t->setChannelType_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 285: _t->setChannelType5((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 286: _t->setChannelType_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 287: _t->setChannelType6((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 288: _t->setChannelType_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 289: _t->setChannelType7((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 290: _t->setChannelType_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 291: _t->setChannelType8((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 292: _t->setChannelType_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 293: _t->setChannelType9((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 294: _t->setChannelType_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 295: _t->setChannelType10((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 296: _t->setChannelType_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 297: _t->setChannelType11((*reinterpret_cast< const ActuatorSettings_ChannelType::Enum(*)>(_a[1]))); break;
        case 298: _t->setChannelType_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 299: _t->setChannelAddr((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 300: _t->setChannelAddr((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 301: _t->setChannelAddr0((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 302: _t->setChannelAddr_0((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 303: _t->setChannelAddr1((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 304: _t->setChannelAddr_1((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 305: _t->setChannelAddr2((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 306: _t->setChannelAddr_2((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 307: _t->setChannelAddr3((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 308: _t->setChannelAddr_3((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 309: _t->setChannelAddr4((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 310: _t->setChannelAddr_4((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 311: _t->setChannelAddr5((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 312: _t->setChannelAddr_5((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 313: _t->setChannelAddr6((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 314: _t->setChannelAddr_6((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 315: _t->setChannelAddr7((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 316: _t->setChannelAddr_7((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 317: _t->setChannelAddr8((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 318: _t->setChannelAddr_8((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 319: _t->setChannelAddr9((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 320: _t->setChannelAddr_9((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 321: _t->setChannelAddr10((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 322: _t->setChannelAddr_10((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 323: _t->setChannelAddr11((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 324: _t->setChannelAddr_11((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 325: _t->setMotorsSpinWhileArmed((*reinterpret_cast< const ActuatorSettings_MotorsSpinWhileArmed::Enum(*)>(_a[1]))); break;
        case 326: _t->setMotorsSpinWhileArmed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 327: _t->setLowThrottleZeroAxis((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[2]))); break;
        case 328: _t->setLowThrottleZeroAxis((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 329: _t->setLowThrottleZeroAxisRoll((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 330: _t->setLowThrottleZeroAxis_Roll((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 331: _t->setLowThrottleZeroAxisPitch((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 332: _t->setLowThrottleZeroAxis_Pitch((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 333: _t->setLowThrottleZeroAxisYaw((*reinterpret_cast< const ActuatorSettings_LowThrottleZeroAxis::Enum(*)>(_a[1]))); break;
        case 334: _t->setLowThrottleZeroAxis_Yaw((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 335: _t->emitNotifications(); break;
        case 336: { quint16 _r = _t->bankUpdateFreq((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 337: { quint16 _r = _t->getBankUpdateFreq((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 338: { quint16 _r = _t->getBankUpdateFreq_0();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 339: { quint16 _r = _t->getBankUpdateFreq_1();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 340: { quint16 _r = _t->getBankUpdateFreq_2();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 341: { quint16 _r = _t->getBankUpdateFreq_3();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 342: { quint16 _r = _t->getBankUpdateFreq_4();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 343: { quint16 _r = _t->getBankUpdateFreq_5();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 344: { quint16 _r = _t->getDShotMode();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 345: { qint16 _r = _t->channelMax((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 346: { qint16 _r = _t->getChannelMax((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 347: { qint16 _r = _t->getChannelMax_0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 348: { qint16 _r = _t->getChannelMax_1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 349: { qint16 _r = _t->getChannelMax_2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 350: { qint16 _r = _t->getChannelMax_3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 351: { qint16 _r = _t->getChannelMax_4();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 352: { qint16 _r = _t->getChannelMax_5();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 353: { qint16 _r = _t->getChannelMax_6();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 354: { qint16 _r = _t->getChannelMax_7();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 355: { qint16 _r = _t->getChannelMax_8();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 356: { qint16 _r = _t->getChannelMax_9();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 357: { qint16 _r = _t->getChannelMax_10();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 358: { qint16 _r = _t->getChannelMax_11();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 359: { qint16 _r = _t->channelNeutral((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 360: { qint16 _r = _t->getChannelNeutral((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 361: { qint16 _r = _t->getChannelNeutral_0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 362: { qint16 _r = _t->getChannelNeutral_1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 363: { qint16 _r = _t->getChannelNeutral_2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 364: { qint16 _r = _t->getChannelNeutral_3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 365: { qint16 _r = _t->getChannelNeutral_4();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 366: { qint16 _r = _t->getChannelNeutral_5();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 367: { qint16 _r = _t->getChannelNeutral_6();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 368: { qint16 _r = _t->getChannelNeutral_7();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 369: { qint16 _r = _t->getChannelNeutral_8();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 370: { qint16 _r = _t->getChannelNeutral_9();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 371: { qint16 _r = _t->getChannelNeutral_10();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 372: { qint16 _r = _t->getChannelNeutral_11();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 373: { qint16 _r = _t->channelMin((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 374: { qint16 _r = _t->getChannelMin((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 375: { qint16 _r = _t->getChannelMin_0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 376: { qint16 _r = _t->getChannelMin_1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 377: { qint16 _r = _t->getChannelMin_2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 378: { qint16 _r = _t->getChannelMin_3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 379: { qint16 _r = _t->getChannelMin_4();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 380: { qint16 _r = _t->getChannelMin_5();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 381: { qint16 _r = _t->getChannelMin_6();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 382: { qint16 _r = _t->getChannelMin_7();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 383: { qint16 _r = _t->getChannelMin_8();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 384: { qint16 _r = _t->getChannelMin_9();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 385: { qint16 _r = _t->getChannelMin_10();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 386: { qint16 _r = _t->getChannelMin_11();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 387: { ActuatorSettings_BankMode::Enum _r = _t->bankMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_a[0]) = std::move(_r); }  break;
        case 388: { quint8 _r = _t->getBankMode((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 389: { quint8 _r = _t->getBankMode_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 390: { quint8 _r = _t->getBankMode_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 391: { quint8 _r = _t->getBankMode_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 392: { quint8 _r = _t->getBankMode_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 393: { quint8 _r = _t->getBankMode_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 394: { quint8 _r = _t->getBankMode_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 395: { ActuatorSettings_ChannelType::Enum _r = _t->channelType((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_a[0]) = std::move(_r); }  break;
        case 396: { quint8 _r = _t->getChannelType((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 397: { quint8 _r = _t->getChannelType_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 398: { quint8 _r = _t->getChannelType_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 399: { quint8 _r = _t->getChannelType_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 400: { quint8 _r = _t->getChannelType_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 401: { quint8 _r = _t->getChannelType_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 402: { quint8 _r = _t->getChannelType_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 403: { quint8 _r = _t->getChannelType_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 404: { quint8 _r = _t->getChannelType_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 405: { quint8 _r = _t->getChannelType_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 406: { quint8 _r = _t->getChannelType_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 407: { quint8 _r = _t->getChannelType_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 408: { quint8 _r = _t->getChannelType_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 409: { quint16 _r = _t->channelAddr((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 410: { quint8 _r = _t->getChannelAddr((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 411: { quint8 _r = _t->getChannelAddr_0();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 412: { quint8 _r = _t->getChannelAddr_1();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 413: { quint8 _r = _t->getChannelAddr_2();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 414: { quint8 _r = _t->getChannelAddr_3();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 415: { quint8 _r = _t->getChannelAddr_4();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 416: { quint8 _r = _t->getChannelAddr_5();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 417: { quint8 _r = _t->getChannelAddr_6();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 418: { quint8 _r = _t->getChannelAddr_7();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 419: { quint8 _r = _t->getChannelAddr_8();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 420: { quint8 _r = _t->getChannelAddr_9();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 421: { quint8 _r = _t->getChannelAddr_10();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 422: { quint8 _r = _t->getChannelAddr_11();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 423: { quint8 _r = _t->getMotorsSpinWhileArmed();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 424: { ActuatorSettings_LowThrottleZeroAxis::Enum _r = _t->lowThrottleZeroAxis((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_a[0]) = std::move(_r); }  break;
        case 425: { quint8 _r = _t->getLowThrottleZeroAxis((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 426: { quint8 _r = _t->getLowThrottleZeroAxis_Roll();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 427: { quint8 _r = _t->getLowThrottleZeroAxis_Pitch();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 428: { quint8 _r = _t->getLowThrottleZeroAxis_Yaw();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreqChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreqChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankUpdateFreq5Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankUpdateFreq_5Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::dShotModeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::DShotModeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMaxChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMaxChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax0Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_0Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax1Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_1Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax2Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_2Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax3Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_3Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax4Changed)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_4Changed)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax5Changed)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_5Changed)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax6Changed)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_6Changed)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax7Changed)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_7Changed)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax8Changed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_8Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax9Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_9Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax10Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_10Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMax11Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMax_11Changed)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutralChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutralChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral0Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_0Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral1Changed)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_1Changed)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral2Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_2Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral3Changed)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_3Changed)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral4Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_4Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral5Changed)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_5Changed)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral6Changed)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_6Changed)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral7Changed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_7Changed)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral8Changed)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_8Changed)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral9Changed)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_9Changed)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral10Changed)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_10Changed)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelNeutral11Changed)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelNeutral_11Changed)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMinChanged)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMinChanged)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin0Changed)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_0Changed)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin1Changed)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_1Changed)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin2Changed)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_2Changed)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin3Changed)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_3Changed)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin4Changed)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_4Changed)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin5Changed)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_5Changed)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin6Changed)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_6Changed)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin7Changed)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_7Changed)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin8Changed)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_8Changed)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin9Changed)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_9Changed)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin10Changed)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_10Changed)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelMin11Changed)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelMin_11Changed)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankModeChanged)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankModeChanged)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode0Changed)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_0Changed)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode1Changed)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_1Changed)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode2Changed)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_2Changed)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode3Changed)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_3Changed)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode4Changed)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_4Changed)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_BankMode::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::bankMode5Changed)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::BankMode_5Changed)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelTypeChanged)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelTypeChanged)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType0Changed)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_0Changed)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType1Changed)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_1Changed)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType2Changed)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_2Changed)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType3Changed)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_3Changed)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType4Changed)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_4Changed)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType5Changed)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_5Changed)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType6Changed)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_6Changed)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType7Changed)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_7Changed)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType8Changed)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_8Changed)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType9Changed)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_9Changed)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType10Changed)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_10Changed)) {
                *result = 131;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_ChannelType::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelType11Changed)) {
                *result = 132;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelType_11Changed)) {
                *result = 133;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddrChanged)) {
                *result = 134;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddrChanged)) {
                *result = 135;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr0Changed)) {
                *result = 136;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_0Changed)) {
                *result = 137;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr1Changed)) {
                *result = 138;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_1Changed)) {
                *result = 139;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr2Changed)) {
                *result = 140;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_2Changed)) {
                *result = 141;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr3Changed)) {
                *result = 142;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_3Changed)) {
                *result = 143;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr4Changed)) {
                *result = 144;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_4Changed)) {
                *result = 145;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr5Changed)) {
                *result = 146;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_5Changed)) {
                *result = 147;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr6Changed)) {
                *result = 148;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_6Changed)) {
                *result = 149;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr7Changed)) {
                *result = 150;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_7Changed)) {
                *result = 151;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr8Changed)) {
                *result = 152;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_8Changed)) {
                *result = 153;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr9Changed)) {
                *result = 154;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_9Changed)) {
                *result = 155;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr10Changed)) {
                *result = 156;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_10Changed)) {
                *result = 157;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::channelAddr11Changed)) {
                *result = 158;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::ChannelAddr_11Changed)) {
                *result = 159;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_MotorsSpinWhileArmed::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::motorsSpinWhileArmedChanged)) {
                *result = 160;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::MotorsSpinWhileArmedChanged)) {
                *result = 161;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , const ActuatorSettings_LowThrottleZeroAxis::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::lowThrottleZeroAxisChanged)) {
                *result = 162;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint32 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::LowThrottleZeroAxisChanged)) {
                *result = 163;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_LowThrottleZeroAxis::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::lowThrottleZeroAxisRollChanged)) {
                *result = 164;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::LowThrottleZeroAxis_RollChanged)) {
                *result = 165;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_LowThrottleZeroAxis::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::lowThrottleZeroAxisPitchChanged)) {
                *result = 166;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::LowThrottleZeroAxis_PitchChanged)) {
                *result = 167;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(const ActuatorSettings_LowThrottleZeroAxis::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::lowThrottleZeroAxisYawChanged)) {
                *result = 168;
                return;
            }
        }
        {
            using _t = void (ActuatorSettings::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorSettings::LowThrottleZeroAxis_YawChanged)) {
                *result = 169;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq0(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq1(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq2(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq3(); break;
        case 4: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq4(); break;
        case 5: *reinterpret_cast< quint16*>(_v) = _t->bankUpdateFreq5(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->dShotMode(); break;
        case 7: *reinterpret_cast< qint16*>(_v) = _t->channelMax0(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->channelMax1(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->channelMax2(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->channelMax3(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->channelMax4(); break;
        case 12: *reinterpret_cast< qint16*>(_v) = _t->channelMax5(); break;
        case 13: *reinterpret_cast< qint16*>(_v) = _t->channelMax6(); break;
        case 14: *reinterpret_cast< qint16*>(_v) = _t->channelMax7(); break;
        case 15: *reinterpret_cast< qint16*>(_v) = _t->channelMax8(); break;
        case 16: *reinterpret_cast< qint16*>(_v) = _t->channelMax9(); break;
        case 17: *reinterpret_cast< qint16*>(_v) = _t->channelMax10(); break;
        case 18: *reinterpret_cast< qint16*>(_v) = _t->channelMax11(); break;
        case 19: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral0(); break;
        case 20: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral1(); break;
        case 21: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral2(); break;
        case 22: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral3(); break;
        case 23: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral4(); break;
        case 24: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral5(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral6(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral7(); break;
        case 27: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral8(); break;
        case 28: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral9(); break;
        case 29: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral10(); break;
        case 30: *reinterpret_cast< qint16*>(_v) = _t->channelNeutral11(); break;
        case 31: *reinterpret_cast< qint16*>(_v) = _t->channelMin0(); break;
        case 32: *reinterpret_cast< qint16*>(_v) = _t->channelMin1(); break;
        case 33: *reinterpret_cast< qint16*>(_v) = _t->channelMin2(); break;
        case 34: *reinterpret_cast< qint16*>(_v) = _t->channelMin3(); break;
        case 35: *reinterpret_cast< qint16*>(_v) = _t->channelMin4(); break;
        case 36: *reinterpret_cast< qint16*>(_v) = _t->channelMin5(); break;
        case 37: *reinterpret_cast< qint16*>(_v) = _t->channelMin6(); break;
        case 38: *reinterpret_cast< qint16*>(_v) = _t->channelMin7(); break;
        case 39: *reinterpret_cast< qint16*>(_v) = _t->channelMin8(); break;
        case 40: *reinterpret_cast< qint16*>(_v) = _t->channelMin9(); break;
        case 41: *reinterpret_cast< qint16*>(_v) = _t->channelMin10(); break;
        case 42: *reinterpret_cast< qint16*>(_v) = _t->channelMin11(); break;
        case 43: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode0(); break;
        case 44: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode1(); break;
        case 45: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode2(); break;
        case 46: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode3(); break;
        case 47: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode4(); break;
        case 48: *reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v) = _t->bankMode5(); break;
        case 49: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType0(); break;
        case 50: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType1(); break;
        case 51: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType2(); break;
        case 52: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType3(); break;
        case 53: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType4(); break;
        case 54: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType5(); break;
        case 55: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType6(); break;
        case 56: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType7(); break;
        case 57: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType8(); break;
        case 58: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType9(); break;
        case 59: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType10(); break;
        case 60: *reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v) = _t->channelType11(); break;
        case 61: *reinterpret_cast< quint16*>(_v) = _t->channelAddr0(); break;
        case 62: *reinterpret_cast< quint16*>(_v) = _t->channelAddr1(); break;
        case 63: *reinterpret_cast< quint16*>(_v) = _t->channelAddr2(); break;
        case 64: *reinterpret_cast< quint16*>(_v) = _t->channelAddr3(); break;
        case 65: *reinterpret_cast< quint16*>(_v) = _t->channelAddr4(); break;
        case 66: *reinterpret_cast< quint16*>(_v) = _t->channelAddr5(); break;
        case 67: *reinterpret_cast< quint16*>(_v) = _t->channelAddr6(); break;
        case 68: *reinterpret_cast< quint16*>(_v) = _t->channelAddr7(); break;
        case 69: *reinterpret_cast< quint16*>(_v) = _t->channelAddr8(); break;
        case 70: *reinterpret_cast< quint16*>(_v) = _t->channelAddr9(); break;
        case 71: *reinterpret_cast< quint16*>(_v) = _t->channelAddr10(); break;
        case 72: *reinterpret_cast< quint16*>(_v) = _t->channelAddr11(); break;
        case 73: *reinterpret_cast< ActuatorSettings_MotorsSpinWhileArmed::Enum*>(_v) = _t->motorsSpinWhileArmed(); break;
        case 74: *reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v) = _t->lowThrottleZeroAxisRoll(); break;
        case 75: *reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v) = _t->lowThrottleZeroAxisPitch(); break;
        case 76: *reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v) = _t->lowThrottleZeroAxisYaw(); break;
        case 77: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_0(); break;
        case 78: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_1(); break;
        case 79: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_2(); break;
        case 80: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_3(); break;
        case 81: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_4(); break;
        case 82: *reinterpret_cast< quint16*>(_v) = _t->getBankUpdateFreq_5(); break;
        case 83: *reinterpret_cast< quint16*>(_v) = _t->getDShotMode(); break;
        case 84: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_0(); break;
        case 85: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_1(); break;
        case 86: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_2(); break;
        case 87: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_3(); break;
        case 88: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_4(); break;
        case 89: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_5(); break;
        case 90: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_6(); break;
        case 91: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_7(); break;
        case 92: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_8(); break;
        case 93: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_9(); break;
        case 94: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_10(); break;
        case 95: *reinterpret_cast< qint16*>(_v) = _t->getChannelMax_11(); break;
        case 96: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_0(); break;
        case 97: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_1(); break;
        case 98: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_2(); break;
        case 99: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_3(); break;
        case 100: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_4(); break;
        case 101: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_5(); break;
        case 102: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_6(); break;
        case 103: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_7(); break;
        case 104: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_8(); break;
        case 105: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_9(); break;
        case 106: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_10(); break;
        case 107: *reinterpret_cast< qint16*>(_v) = _t->getChannelNeutral_11(); break;
        case 108: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_0(); break;
        case 109: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_1(); break;
        case 110: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_2(); break;
        case 111: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_3(); break;
        case 112: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_4(); break;
        case 113: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_5(); break;
        case 114: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_6(); break;
        case 115: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_7(); break;
        case 116: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_8(); break;
        case 117: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_9(); break;
        case 118: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_10(); break;
        case 119: *reinterpret_cast< qint16*>(_v) = _t->getChannelMin_11(); break;
        case 120: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_0(); break;
        case 121: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_1(); break;
        case 122: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_2(); break;
        case 123: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_3(); break;
        case 124: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_4(); break;
        case 125: *reinterpret_cast< quint8*>(_v) = _t->getBankMode_5(); break;
        case 126: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_0(); break;
        case 127: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_1(); break;
        case 128: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_2(); break;
        case 129: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_3(); break;
        case 130: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_4(); break;
        case 131: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_5(); break;
        case 132: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_6(); break;
        case 133: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_7(); break;
        case 134: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_8(); break;
        case 135: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_9(); break;
        case 136: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_10(); break;
        case 137: *reinterpret_cast< quint8*>(_v) = _t->getChannelType_11(); break;
        case 138: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_0(); break;
        case 139: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_1(); break;
        case 140: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_2(); break;
        case 141: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_3(); break;
        case 142: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_4(); break;
        case 143: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_5(); break;
        case 144: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_6(); break;
        case 145: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_7(); break;
        case 146: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_8(); break;
        case 147: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_9(); break;
        case 148: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_10(); break;
        case 149: *reinterpret_cast< quint8*>(_v) = _t->getChannelAddr_11(); break;
        case 150: *reinterpret_cast< quint8*>(_v) = _t->getMotorsSpinWhileArmed(); break;
        case 151: *reinterpret_cast< quint8*>(_v) = _t->getLowThrottleZeroAxis_Roll(); break;
        case 152: *reinterpret_cast< quint8*>(_v) = _t->getLowThrottleZeroAxis_Pitch(); break;
        case 153: *reinterpret_cast< quint8*>(_v) = _t->getLowThrottleZeroAxis_Yaw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActuatorSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBankUpdateFreq0(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setBankUpdateFreq1(*reinterpret_cast< quint16*>(_v)); break;
        case 2: _t->setBankUpdateFreq2(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setBankUpdateFreq3(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setBankUpdateFreq4(*reinterpret_cast< quint16*>(_v)); break;
        case 5: _t->setBankUpdateFreq5(*reinterpret_cast< quint16*>(_v)); break;
        case 6: _t->setDShotMode(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setChannelMax0(*reinterpret_cast< qint16*>(_v)); break;
        case 8: _t->setChannelMax1(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setChannelMax2(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setChannelMax3(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setChannelMax4(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setChannelMax5(*reinterpret_cast< qint16*>(_v)); break;
        case 13: _t->setChannelMax6(*reinterpret_cast< qint16*>(_v)); break;
        case 14: _t->setChannelMax7(*reinterpret_cast< qint16*>(_v)); break;
        case 15: _t->setChannelMax8(*reinterpret_cast< qint16*>(_v)); break;
        case 16: _t->setChannelMax9(*reinterpret_cast< qint16*>(_v)); break;
        case 17: _t->setChannelMax10(*reinterpret_cast< qint16*>(_v)); break;
        case 18: _t->setChannelMax11(*reinterpret_cast< qint16*>(_v)); break;
        case 19: _t->setChannelNeutral0(*reinterpret_cast< qint16*>(_v)); break;
        case 20: _t->setChannelNeutral1(*reinterpret_cast< qint16*>(_v)); break;
        case 21: _t->setChannelNeutral2(*reinterpret_cast< qint16*>(_v)); break;
        case 22: _t->setChannelNeutral3(*reinterpret_cast< qint16*>(_v)); break;
        case 23: _t->setChannelNeutral4(*reinterpret_cast< qint16*>(_v)); break;
        case 24: _t->setChannelNeutral5(*reinterpret_cast< qint16*>(_v)); break;
        case 25: _t->setChannelNeutral6(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setChannelNeutral7(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setChannelNeutral8(*reinterpret_cast< qint16*>(_v)); break;
        case 28: _t->setChannelNeutral9(*reinterpret_cast< qint16*>(_v)); break;
        case 29: _t->setChannelNeutral10(*reinterpret_cast< qint16*>(_v)); break;
        case 30: _t->setChannelNeutral11(*reinterpret_cast< qint16*>(_v)); break;
        case 31: _t->setChannelMin0(*reinterpret_cast< qint16*>(_v)); break;
        case 32: _t->setChannelMin1(*reinterpret_cast< qint16*>(_v)); break;
        case 33: _t->setChannelMin2(*reinterpret_cast< qint16*>(_v)); break;
        case 34: _t->setChannelMin3(*reinterpret_cast< qint16*>(_v)); break;
        case 35: _t->setChannelMin4(*reinterpret_cast< qint16*>(_v)); break;
        case 36: _t->setChannelMin5(*reinterpret_cast< qint16*>(_v)); break;
        case 37: _t->setChannelMin6(*reinterpret_cast< qint16*>(_v)); break;
        case 38: _t->setChannelMin7(*reinterpret_cast< qint16*>(_v)); break;
        case 39: _t->setChannelMin8(*reinterpret_cast< qint16*>(_v)); break;
        case 40: _t->setChannelMin9(*reinterpret_cast< qint16*>(_v)); break;
        case 41: _t->setChannelMin10(*reinterpret_cast< qint16*>(_v)); break;
        case 42: _t->setChannelMin11(*reinterpret_cast< qint16*>(_v)); break;
        case 43: _t->setBankMode0(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 44: _t->setBankMode1(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 45: _t->setBankMode2(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 46: _t->setBankMode3(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 47: _t->setBankMode4(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 48: _t->setBankMode5(*reinterpret_cast< ActuatorSettings_BankMode::Enum*>(_v)); break;
        case 49: _t->setChannelType0(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 50: _t->setChannelType1(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 51: _t->setChannelType2(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 52: _t->setChannelType3(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 53: _t->setChannelType4(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 54: _t->setChannelType5(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 55: _t->setChannelType6(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 56: _t->setChannelType7(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 57: _t->setChannelType8(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 58: _t->setChannelType9(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 59: _t->setChannelType10(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 60: _t->setChannelType11(*reinterpret_cast< ActuatorSettings_ChannelType::Enum*>(_v)); break;
        case 61: _t->setChannelAddr0(*reinterpret_cast< quint16*>(_v)); break;
        case 62: _t->setChannelAddr1(*reinterpret_cast< quint16*>(_v)); break;
        case 63: _t->setChannelAddr2(*reinterpret_cast< quint16*>(_v)); break;
        case 64: _t->setChannelAddr3(*reinterpret_cast< quint16*>(_v)); break;
        case 65: _t->setChannelAddr4(*reinterpret_cast< quint16*>(_v)); break;
        case 66: _t->setChannelAddr5(*reinterpret_cast< quint16*>(_v)); break;
        case 67: _t->setChannelAddr6(*reinterpret_cast< quint16*>(_v)); break;
        case 68: _t->setChannelAddr7(*reinterpret_cast< quint16*>(_v)); break;
        case 69: _t->setChannelAddr8(*reinterpret_cast< quint16*>(_v)); break;
        case 70: _t->setChannelAddr9(*reinterpret_cast< quint16*>(_v)); break;
        case 71: _t->setChannelAddr10(*reinterpret_cast< quint16*>(_v)); break;
        case 72: _t->setChannelAddr11(*reinterpret_cast< quint16*>(_v)); break;
        case 73: _t->setMotorsSpinWhileArmed(*reinterpret_cast< ActuatorSettings_MotorsSpinWhileArmed::Enum*>(_v)); break;
        case 74: _t->setLowThrottleZeroAxisRoll(*reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v)); break;
        case 75: _t->setLowThrottleZeroAxisPitch(*reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v)); break;
        case 76: _t->setLowThrottleZeroAxisYaw(*reinterpret_cast< ActuatorSettings_LowThrottleZeroAxis::Enum*>(_v)); break;
        case 77: _t->setBankUpdateFreq_0(*reinterpret_cast< quint16*>(_v)); break;
        case 78: _t->setBankUpdateFreq_1(*reinterpret_cast< quint16*>(_v)); break;
        case 79: _t->setBankUpdateFreq_2(*reinterpret_cast< quint16*>(_v)); break;
        case 80: _t->setBankUpdateFreq_3(*reinterpret_cast< quint16*>(_v)); break;
        case 81: _t->setBankUpdateFreq_4(*reinterpret_cast< quint16*>(_v)); break;
        case 82: _t->setBankUpdateFreq_5(*reinterpret_cast< quint16*>(_v)); break;
        case 83: _t->setDShotMode(*reinterpret_cast< quint16*>(_v)); break;
        case 84: _t->setChannelMax_0(*reinterpret_cast< qint16*>(_v)); break;
        case 85: _t->setChannelMax_1(*reinterpret_cast< qint16*>(_v)); break;
        case 86: _t->setChannelMax_2(*reinterpret_cast< qint16*>(_v)); break;
        case 87: _t->setChannelMax_3(*reinterpret_cast< qint16*>(_v)); break;
        case 88: _t->setChannelMax_4(*reinterpret_cast< qint16*>(_v)); break;
        case 89: _t->setChannelMax_5(*reinterpret_cast< qint16*>(_v)); break;
        case 90: _t->setChannelMax_6(*reinterpret_cast< qint16*>(_v)); break;
        case 91: _t->setChannelMax_7(*reinterpret_cast< qint16*>(_v)); break;
        case 92: _t->setChannelMax_8(*reinterpret_cast< qint16*>(_v)); break;
        case 93: _t->setChannelMax_9(*reinterpret_cast< qint16*>(_v)); break;
        case 94: _t->setChannelMax_10(*reinterpret_cast< qint16*>(_v)); break;
        case 95: _t->setChannelMax_11(*reinterpret_cast< qint16*>(_v)); break;
        case 96: _t->setChannelNeutral_0(*reinterpret_cast< qint16*>(_v)); break;
        case 97: _t->setChannelNeutral_1(*reinterpret_cast< qint16*>(_v)); break;
        case 98: _t->setChannelNeutral_2(*reinterpret_cast< qint16*>(_v)); break;
        case 99: _t->setChannelNeutral_3(*reinterpret_cast< qint16*>(_v)); break;
        case 100: _t->setChannelNeutral_4(*reinterpret_cast< qint16*>(_v)); break;
        case 101: _t->setChannelNeutral_5(*reinterpret_cast< qint16*>(_v)); break;
        case 102: _t->setChannelNeutral_6(*reinterpret_cast< qint16*>(_v)); break;
        case 103: _t->setChannelNeutral_7(*reinterpret_cast< qint16*>(_v)); break;
        case 104: _t->setChannelNeutral_8(*reinterpret_cast< qint16*>(_v)); break;
        case 105: _t->setChannelNeutral_9(*reinterpret_cast< qint16*>(_v)); break;
        case 106: _t->setChannelNeutral_10(*reinterpret_cast< qint16*>(_v)); break;
        case 107: _t->setChannelNeutral_11(*reinterpret_cast< qint16*>(_v)); break;
        case 108: _t->setChannelMin_0(*reinterpret_cast< qint16*>(_v)); break;
        case 109: _t->setChannelMin_1(*reinterpret_cast< qint16*>(_v)); break;
        case 110: _t->setChannelMin_2(*reinterpret_cast< qint16*>(_v)); break;
        case 111: _t->setChannelMin_3(*reinterpret_cast< qint16*>(_v)); break;
        case 112: _t->setChannelMin_4(*reinterpret_cast< qint16*>(_v)); break;
        case 113: _t->setChannelMin_5(*reinterpret_cast< qint16*>(_v)); break;
        case 114: _t->setChannelMin_6(*reinterpret_cast< qint16*>(_v)); break;
        case 115: _t->setChannelMin_7(*reinterpret_cast< qint16*>(_v)); break;
        case 116: _t->setChannelMin_8(*reinterpret_cast< qint16*>(_v)); break;
        case 117: _t->setChannelMin_9(*reinterpret_cast< qint16*>(_v)); break;
        case 118: _t->setChannelMin_10(*reinterpret_cast< qint16*>(_v)); break;
        case 119: _t->setChannelMin_11(*reinterpret_cast< qint16*>(_v)); break;
        case 120: _t->setBankMode_0(*reinterpret_cast< quint8*>(_v)); break;
        case 121: _t->setBankMode_1(*reinterpret_cast< quint8*>(_v)); break;
        case 122: _t->setBankMode_2(*reinterpret_cast< quint8*>(_v)); break;
        case 123: _t->setBankMode_3(*reinterpret_cast< quint8*>(_v)); break;
        case 124: _t->setBankMode_4(*reinterpret_cast< quint8*>(_v)); break;
        case 125: _t->setBankMode_5(*reinterpret_cast< quint8*>(_v)); break;
        case 126: _t->setChannelType_0(*reinterpret_cast< quint8*>(_v)); break;
        case 127: _t->setChannelType_1(*reinterpret_cast< quint8*>(_v)); break;
        case 128: _t->setChannelType_2(*reinterpret_cast< quint8*>(_v)); break;
        case 129: _t->setChannelType_3(*reinterpret_cast< quint8*>(_v)); break;
        case 130: _t->setChannelType_4(*reinterpret_cast< quint8*>(_v)); break;
        case 131: _t->setChannelType_5(*reinterpret_cast< quint8*>(_v)); break;
        case 132: _t->setChannelType_6(*reinterpret_cast< quint8*>(_v)); break;
        case 133: _t->setChannelType_7(*reinterpret_cast< quint8*>(_v)); break;
        case 134: _t->setChannelType_8(*reinterpret_cast< quint8*>(_v)); break;
        case 135: _t->setChannelType_9(*reinterpret_cast< quint8*>(_v)); break;
        case 136: _t->setChannelType_10(*reinterpret_cast< quint8*>(_v)); break;
        case 137: _t->setChannelType_11(*reinterpret_cast< quint8*>(_v)); break;
        case 138: _t->setChannelAddr_0(*reinterpret_cast< quint8*>(_v)); break;
        case 139: _t->setChannelAddr_1(*reinterpret_cast< quint8*>(_v)); break;
        case 140: _t->setChannelAddr_2(*reinterpret_cast< quint8*>(_v)); break;
        case 141: _t->setChannelAddr_3(*reinterpret_cast< quint8*>(_v)); break;
        case 142: _t->setChannelAddr_4(*reinterpret_cast< quint8*>(_v)); break;
        case 143: _t->setChannelAddr_5(*reinterpret_cast< quint8*>(_v)); break;
        case 144: _t->setChannelAddr_6(*reinterpret_cast< quint8*>(_v)); break;
        case 145: _t->setChannelAddr_7(*reinterpret_cast< quint8*>(_v)); break;
        case 146: _t->setChannelAddr_8(*reinterpret_cast< quint8*>(_v)); break;
        case 147: _t->setChannelAddr_9(*reinterpret_cast< quint8*>(_v)); break;
        case 148: _t->setChannelAddr_10(*reinterpret_cast< quint8*>(_v)); break;
        case 149: _t->setChannelAddr_11(*reinterpret_cast< quint8*>(_v)); break;
        case 150: _t->setMotorsSpinWhileArmed(*reinterpret_cast< quint8*>(_v)); break;
        case 151: _t->setLowThrottleZeroAxis_Roll(*reinterpret_cast< quint8*>(_v)); break;
        case 152: _t->setLowThrottleZeroAxis_Pitch(*reinterpret_cast< quint8*>(_v)); break;
        case 153: _t->setLowThrottleZeroAxis_Yaw(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ActuatorSettings[] = {
    QMetaObject::SuperData::link<ActuatorSettings_BankMode::staticMetaObject>(),
    QMetaObject::SuperData::link<ActuatorSettings_ChannelType::staticMetaObject>(),
    QMetaObject::SuperData::link<ActuatorSettings_MotorsSpinWhileArmed::staticMetaObject>(),
    QMetaObject::SuperData::link<ActuatorSettings_LowThrottleZeroAxis::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ActuatorSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorSettings.data,
    qt_meta_data_ActuatorSettings,
    qt_static_metacall,
    qt_meta_extradata_ActuatorSettings,
    nullptr
} };


const QMetaObject *ActuatorSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ActuatorSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 429)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 429;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 429)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 429;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 154;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 154;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActuatorSettings::bankUpdateFreqChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActuatorSettings::BankUpdateFreqChanged(quint32 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActuatorSettings::bankUpdateFreq0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ActuatorSettings::BankUpdateFreq_0Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ActuatorSettings::bankUpdateFreq1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ActuatorSettings::BankUpdateFreq_1Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ActuatorSettings::bankUpdateFreq2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ActuatorSettings::BankUpdateFreq_2Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ActuatorSettings::bankUpdateFreq3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ActuatorSettings::BankUpdateFreq_3Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ActuatorSettings::bankUpdateFreq4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ActuatorSettings::BankUpdateFreq_4Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ActuatorSettings::bankUpdateFreq5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ActuatorSettings::BankUpdateFreq_5Changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ActuatorSettings::dShotModeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ActuatorSettings::DShotModeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ActuatorSettings::channelMaxChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ActuatorSettings::ChannelMaxChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ActuatorSettings::channelMax0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ActuatorSettings::ChannelMax_0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ActuatorSettings::channelMax1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ActuatorSettings::ChannelMax_1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ActuatorSettings::channelMax2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ActuatorSettings::ChannelMax_2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ActuatorSettings::channelMax3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ActuatorSettings::ChannelMax_3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void ActuatorSettings::channelMax4Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void ActuatorSettings::ChannelMax_4Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void ActuatorSettings::channelMax5Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void ActuatorSettings::ChannelMax_5Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void ActuatorSettings::channelMax6Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void ActuatorSettings::ChannelMax_6Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void ActuatorSettings::channelMax7Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void ActuatorSettings::ChannelMax_7Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void ActuatorSettings::channelMax8Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void ActuatorSettings::ChannelMax_8Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void ActuatorSettings::channelMax9Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void ActuatorSettings::ChannelMax_9Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void ActuatorSettings::channelMax10Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void ActuatorSettings::ChannelMax_10Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void ActuatorSettings::channelMax11Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void ActuatorSettings::ChannelMax_11Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void ActuatorSettings::channelNeutralChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void ActuatorSettings::ChannelNeutralChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void ActuatorSettings::channelNeutral0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void ActuatorSettings::ChannelNeutral_0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void ActuatorSettings::channelNeutral1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void ActuatorSettings::ChannelNeutral_1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void ActuatorSettings::channelNeutral2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void ActuatorSettings::ChannelNeutral_2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void ActuatorSettings::channelNeutral3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void ActuatorSettings::ChannelNeutral_3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void ActuatorSettings::channelNeutral4Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void ActuatorSettings::ChannelNeutral_4Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void ActuatorSettings::channelNeutral5Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void ActuatorSettings::ChannelNeutral_5Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void ActuatorSettings::channelNeutral6Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void ActuatorSettings::ChannelNeutral_6Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void ActuatorSettings::channelNeutral7Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void ActuatorSettings::ChannelNeutral_7Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void ActuatorSettings::channelNeutral8Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void ActuatorSettings::ChannelNeutral_8Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void ActuatorSettings::channelNeutral9Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void ActuatorSettings::ChannelNeutral_9Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void ActuatorSettings::channelNeutral10Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void ActuatorSettings::ChannelNeutral_10Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void ActuatorSettings::channelNeutral11Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void ActuatorSettings::ChannelNeutral_11Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void ActuatorSettings::channelMinChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void ActuatorSettings::ChannelMinChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void ActuatorSettings::channelMin0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void ActuatorSettings::ChannelMin_0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void ActuatorSettings::channelMin1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void ActuatorSettings::ChannelMin_1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void ActuatorSettings::channelMin2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void ActuatorSettings::ChannelMin_2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void ActuatorSettings::channelMin3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void ActuatorSettings::ChannelMin_3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void ActuatorSettings::channelMin4Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void ActuatorSettings::ChannelMin_4Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void ActuatorSettings::channelMin5Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void ActuatorSettings::ChannelMin_5Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void ActuatorSettings::channelMin6Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void ActuatorSettings::ChannelMin_6Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void ActuatorSettings::channelMin7Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void ActuatorSettings::ChannelMin_7Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void ActuatorSettings::channelMin8Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void ActuatorSettings::ChannelMin_8Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void ActuatorSettings::channelMin9Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void ActuatorSettings::ChannelMin_9Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void ActuatorSettings::channelMin10Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void ActuatorSettings::ChannelMin_10Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void ActuatorSettings::channelMin11Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void ActuatorSettings::ChannelMin_11Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void ActuatorSettings::bankModeChanged(quint32 _t1, const ActuatorSettings_BankMode::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void ActuatorSettings::BankModeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void ActuatorSettings::bankMode0Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void ActuatorSettings::BankMode_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void ActuatorSettings::bankMode1Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void ActuatorSettings::BankMode_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void ActuatorSettings::bankMode2Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void ActuatorSettings::BankMode_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void ActuatorSettings::bankMode3Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void ActuatorSettings::BankMode_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void ActuatorSettings::bankMode4Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void ActuatorSettings::BankMode_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void ActuatorSettings::bankMode5Changed(const ActuatorSettings_BankMode::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void ActuatorSettings::BankMode_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void ActuatorSettings::channelTypeChanged(quint32 _t1, const ActuatorSettings_ChannelType::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void ActuatorSettings::ChannelTypeChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void ActuatorSettings::channelType0Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void ActuatorSettings::ChannelType_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void ActuatorSettings::channelType1Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void ActuatorSettings::ChannelType_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void ActuatorSettings::channelType2Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void ActuatorSettings::ChannelType_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void ActuatorSettings::channelType3Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void ActuatorSettings::ChannelType_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 117, _a);
}

// SIGNAL 118
void ActuatorSettings::channelType4Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 118, _a);
}

// SIGNAL 119
void ActuatorSettings::ChannelType_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void ActuatorSettings::channelType5Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 120, _a);
}

// SIGNAL 121
void ActuatorSettings::ChannelType_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 121, _a);
}

// SIGNAL 122
void ActuatorSettings::channelType6Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 122, _a);
}

// SIGNAL 123
void ActuatorSettings::ChannelType_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 123, _a);
}

// SIGNAL 124
void ActuatorSettings::channelType7Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void ActuatorSettings::ChannelType_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 125, _a);
}

// SIGNAL 126
void ActuatorSettings::channelType8Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void ActuatorSettings::ChannelType_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void ActuatorSettings::channelType9Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 128, _a);
}

// SIGNAL 129
void ActuatorSettings::ChannelType_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void ActuatorSettings::channelType10Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 130, _a);
}

// SIGNAL 131
void ActuatorSettings::ChannelType_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}

// SIGNAL 132
void ActuatorSettings::channelType11Changed(const ActuatorSettings_ChannelType::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 132, _a);
}

// SIGNAL 133
void ActuatorSettings::ChannelType_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 133, _a);
}

// SIGNAL 134
void ActuatorSettings::channelAddrChanged(quint32 _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 134, _a);
}

// SIGNAL 135
void ActuatorSettings::ChannelAddrChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 135, _a);
}

// SIGNAL 136
void ActuatorSettings::channelAddr0Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 136, _a);
}

// SIGNAL 137
void ActuatorSettings::ChannelAddr_0Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 137, _a);
}

// SIGNAL 138
void ActuatorSettings::channelAddr1Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 138, _a);
}

// SIGNAL 139
void ActuatorSettings::ChannelAddr_1Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 139, _a);
}

// SIGNAL 140
void ActuatorSettings::channelAddr2Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 140, _a);
}

// SIGNAL 141
void ActuatorSettings::ChannelAddr_2Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 141, _a);
}

// SIGNAL 142
void ActuatorSettings::channelAddr3Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 142, _a);
}

// SIGNAL 143
void ActuatorSettings::ChannelAddr_3Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 143, _a);
}

// SIGNAL 144
void ActuatorSettings::channelAddr4Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 144, _a);
}

// SIGNAL 145
void ActuatorSettings::ChannelAddr_4Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 145, _a);
}

// SIGNAL 146
void ActuatorSettings::channelAddr5Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 146, _a);
}

// SIGNAL 147
void ActuatorSettings::ChannelAddr_5Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 147, _a);
}

// SIGNAL 148
void ActuatorSettings::channelAddr6Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 148, _a);
}

// SIGNAL 149
void ActuatorSettings::ChannelAddr_6Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 149, _a);
}

// SIGNAL 150
void ActuatorSettings::channelAddr7Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 150, _a);
}

// SIGNAL 151
void ActuatorSettings::ChannelAddr_7Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 151, _a);
}

// SIGNAL 152
void ActuatorSettings::channelAddr8Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 152, _a);
}

// SIGNAL 153
void ActuatorSettings::ChannelAddr_8Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 153, _a);
}

// SIGNAL 154
void ActuatorSettings::channelAddr9Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 154, _a);
}

// SIGNAL 155
void ActuatorSettings::ChannelAddr_9Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 155, _a);
}

// SIGNAL 156
void ActuatorSettings::channelAddr10Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 156, _a);
}

// SIGNAL 157
void ActuatorSettings::ChannelAddr_10Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 157, _a);
}

// SIGNAL 158
void ActuatorSettings::channelAddr11Changed(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 158, _a);
}

// SIGNAL 159
void ActuatorSettings::ChannelAddr_11Changed(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 159, _a);
}

// SIGNAL 160
void ActuatorSettings::motorsSpinWhileArmedChanged(const ActuatorSettings_MotorsSpinWhileArmed::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 160, _a);
}

// SIGNAL 161
void ActuatorSettings::MotorsSpinWhileArmedChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 161, _a);
}

// SIGNAL 162
void ActuatorSettings::lowThrottleZeroAxisChanged(quint32 _t1, const ActuatorSettings_LowThrottleZeroAxis::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 162, _a);
}

// SIGNAL 163
void ActuatorSettings::LowThrottleZeroAxisChanged(quint32 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 163, _a);
}

// SIGNAL 164
void ActuatorSettings::lowThrottleZeroAxisRollChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 164, _a);
}

// SIGNAL 165
void ActuatorSettings::LowThrottleZeroAxis_RollChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 165, _a);
}

// SIGNAL 166
void ActuatorSettings::lowThrottleZeroAxisPitchChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 166, _a);
}

// SIGNAL 167
void ActuatorSettings::LowThrottleZeroAxis_PitchChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 167, _a);
}

// SIGNAL 168
void ActuatorSettings::lowThrottleZeroAxisYawChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 168, _a);
}

// SIGNAL 169
void ActuatorSettings::LowThrottleZeroAxis_YawChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 169, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
