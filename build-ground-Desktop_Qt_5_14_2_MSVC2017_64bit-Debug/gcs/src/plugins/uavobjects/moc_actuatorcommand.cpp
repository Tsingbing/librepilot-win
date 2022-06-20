/****************************************************************************
** Meta object code from reading C++ file 'actuatorcommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "actuatorcommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actuatorcommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActuatorCommandConstants_t {
    QByteArrayData data[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorCommandConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorCommandConstants_t qt_meta_stringdata_ActuatorCommandConstants = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ActuatorCommandConstants"
QT_MOC_LITERAL(1, 25, 4) // "Enum"

    },
    "ActuatorCommandConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorCommandConstants[] = {

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

void ActuatorCommandConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ActuatorCommandConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorCommandConstants.data,
    qt_meta_data_ActuatorCommandConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorCommandConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorCommandConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorCommandConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorCommandConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ActuatorCommand_t {
    QByteArrayData data[112];
    char stringdata0[1513];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActuatorCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActuatorCommand_t qt_meta_stringdata_ActuatorCommand = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ActuatorCommand"
QT_MOC_LITERAL(1, 16, 14), // "channelChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 5), // "value"
QT_MOC_LITERAL(5, 44, 14), // "ChannelChanged"
QT_MOC_LITERAL(6, 59, 15), // "channel0Changed"
QT_MOC_LITERAL(7, 75, 16), // "Channel_0Changed"
QT_MOC_LITERAL(8, 92, 15), // "channel1Changed"
QT_MOC_LITERAL(9, 108, 16), // "Channel_1Changed"
QT_MOC_LITERAL(10, 125, 15), // "channel2Changed"
QT_MOC_LITERAL(11, 141, 16), // "Channel_2Changed"
QT_MOC_LITERAL(12, 158, 15), // "channel3Changed"
QT_MOC_LITERAL(13, 174, 16), // "Channel_3Changed"
QT_MOC_LITERAL(14, 191, 15), // "channel4Changed"
QT_MOC_LITERAL(15, 207, 16), // "Channel_4Changed"
QT_MOC_LITERAL(16, 224, 15), // "channel5Changed"
QT_MOC_LITERAL(17, 240, 16), // "Channel_5Changed"
QT_MOC_LITERAL(18, 257, 15), // "channel6Changed"
QT_MOC_LITERAL(19, 273, 16), // "Channel_6Changed"
QT_MOC_LITERAL(20, 290, 15), // "channel7Changed"
QT_MOC_LITERAL(21, 306, 16), // "Channel_7Changed"
QT_MOC_LITERAL(22, 323, 15), // "channel8Changed"
QT_MOC_LITERAL(23, 339, 16), // "Channel_8Changed"
QT_MOC_LITERAL(24, 356, 15), // "channel9Changed"
QT_MOC_LITERAL(25, 372, 16), // "Channel_9Changed"
QT_MOC_LITERAL(26, 389, 16), // "channel10Changed"
QT_MOC_LITERAL(27, 406, 17), // "Channel_10Changed"
QT_MOC_LITERAL(28, 424, 16), // "channel11Changed"
QT_MOC_LITERAL(29, 441, 17), // "Channel_11Changed"
QT_MOC_LITERAL(30, 459, 17), // "updateTimeChanged"
QT_MOC_LITERAL(31, 477, 17), // "UpdateTimeChanged"
QT_MOC_LITERAL(32, 495, 20), // "maxUpdateTimeChanged"
QT_MOC_LITERAL(33, 516, 20), // "MaxUpdateTimeChanged"
QT_MOC_LITERAL(34, 537, 23), // "numFailedUpdatesChanged"
QT_MOC_LITERAL(35, 561, 23), // "NumFailedUpdatesChanged"
QT_MOC_LITERAL(36, 585, 10), // "setChannel"
QT_MOC_LITERAL(37, 596, 11), // "setChannel0"
QT_MOC_LITERAL(38, 608, 12), // "setChannel_0"
QT_MOC_LITERAL(39, 621, 11), // "setChannel1"
QT_MOC_LITERAL(40, 633, 12), // "setChannel_1"
QT_MOC_LITERAL(41, 646, 11), // "setChannel2"
QT_MOC_LITERAL(42, 658, 12), // "setChannel_2"
QT_MOC_LITERAL(43, 671, 11), // "setChannel3"
QT_MOC_LITERAL(44, 683, 12), // "setChannel_3"
QT_MOC_LITERAL(45, 696, 11), // "setChannel4"
QT_MOC_LITERAL(46, 708, 12), // "setChannel_4"
QT_MOC_LITERAL(47, 721, 11), // "setChannel5"
QT_MOC_LITERAL(48, 733, 12), // "setChannel_5"
QT_MOC_LITERAL(49, 746, 11), // "setChannel6"
QT_MOC_LITERAL(50, 758, 12), // "setChannel_6"
QT_MOC_LITERAL(51, 771, 11), // "setChannel7"
QT_MOC_LITERAL(52, 783, 12), // "setChannel_7"
QT_MOC_LITERAL(53, 796, 11), // "setChannel8"
QT_MOC_LITERAL(54, 808, 12), // "setChannel_8"
QT_MOC_LITERAL(55, 821, 11), // "setChannel9"
QT_MOC_LITERAL(56, 833, 12), // "setChannel_9"
QT_MOC_LITERAL(57, 846, 12), // "setChannel10"
QT_MOC_LITERAL(58, 859, 13), // "setChannel_10"
QT_MOC_LITERAL(59, 873, 12), // "setChannel11"
QT_MOC_LITERAL(60, 886, 13), // "setChannel_11"
QT_MOC_LITERAL(61, 900, 13), // "setUpdateTime"
QT_MOC_LITERAL(62, 914, 16), // "setMaxUpdateTime"
QT_MOC_LITERAL(63, 931, 19), // "setNumFailedUpdates"
QT_MOC_LITERAL(64, 951, 17), // "emitNotifications"
QT_MOC_LITERAL(65, 969, 7), // "channel"
QT_MOC_LITERAL(66, 977, 10), // "getChannel"
QT_MOC_LITERAL(67, 988, 12), // "getChannel_0"
QT_MOC_LITERAL(68, 1001, 12), // "getChannel_1"
QT_MOC_LITERAL(69, 1014, 12), // "getChannel_2"
QT_MOC_LITERAL(70, 1027, 12), // "getChannel_3"
QT_MOC_LITERAL(71, 1040, 12), // "getChannel_4"
QT_MOC_LITERAL(72, 1053, 12), // "getChannel_5"
QT_MOC_LITERAL(73, 1066, 12), // "getChannel_6"
QT_MOC_LITERAL(74, 1079, 12), // "getChannel_7"
QT_MOC_LITERAL(75, 1092, 12), // "getChannel_8"
QT_MOC_LITERAL(76, 1105, 12), // "getChannel_9"
QT_MOC_LITERAL(77, 1118, 13), // "getChannel_10"
QT_MOC_LITERAL(78, 1132, 13), // "getChannel_11"
QT_MOC_LITERAL(79, 1146, 13), // "getUpdateTime"
QT_MOC_LITERAL(80, 1160, 16), // "getMaxUpdateTime"
QT_MOC_LITERAL(81, 1177, 19), // "getNumFailedUpdates"
QT_MOC_LITERAL(82, 1197, 8), // "channel0"
QT_MOC_LITERAL(83, 1206, 8), // "channel1"
QT_MOC_LITERAL(84, 1215, 8), // "channel2"
QT_MOC_LITERAL(85, 1224, 8), // "channel3"
QT_MOC_LITERAL(86, 1233, 8), // "channel4"
QT_MOC_LITERAL(87, 1242, 8), // "channel5"
QT_MOC_LITERAL(88, 1251, 8), // "channel6"
QT_MOC_LITERAL(89, 1260, 8), // "channel7"
QT_MOC_LITERAL(90, 1269, 8), // "channel8"
QT_MOC_LITERAL(91, 1278, 8), // "channel9"
QT_MOC_LITERAL(92, 1287, 9), // "channel10"
QT_MOC_LITERAL(93, 1297, 9), // "channel11"
QT_MOC_LITERAL(94, 1307, 10), // "updateTime"
QT_MOC_LITERAL(95, 1318, 13), // "maxUpdateTime"
QT_MOC_LITERAL(96, 1332, 16), // "numFailedUpdates"
QT_MOC_LITERAL(97, 1349, 9), // "Channel_0"
QT_MOC_LITERAL(98, 1359, 9), // "Channel_1"
QT_MOC_LITERAL(99, 1369, 9), // "Channel_2"
QT_MOC_LITERAL(100, 1379, 9), // "Channel_3"
QT_MOC_LITERAL(101, 1389, 9), // "Channel_4"
QT_MOC_LITERAL(102, 1399, 9), // "Channel_5"
QT_MOC_LITERAL(103, 1409, 9), // "Channel_6"
QT_MOC_LITERAL(104, 1419, 9), // "Channel_7"
QT_MOC_LITERAL(105, 1429, 9), // "Channel_8"
QT_MOC_LITERAL(106, 1439, 9), // "Channel_9"
QT_MOC_LITERAL(107, 1449, 10), // "Channel_10"
QT_MOC_LITERAL(108, 1460, 10), // "Channel_11"
QT_MOC_LITERAL(109, 1471, 10), // "UpdateTime"
QT_MOC_LITERAL(110, 1482, 13), // "MaxUpdateTime"
QT_MOC_LITERAL(111, 1496, 16) // "NumFailedUpdates"

    },
    "ActuatorCommand\0channelChanged\0\0index\0"
    "value\0ChannelChanged\0channel0Changed\0"
    "Channel_0Changed\0channel1Changed\0"
    "Channel_1Changed\0channel2Changed\0"
    "Channel_2Changed\0channel3Changed\0"
    "Channel_3Changed\0channel4Changed\0"
    "Channel_4Changed\0channel5Changed\0"
    "Channel_5Changed\0channel6Changed\0"
    "Channel_6Changed\0channel7Changed\0"
    "Channel_7Changed\0channel8Changed\0"
    "Channel_8Changed\0channel9Changed\0"
    "Channel_9Changed\0channel10Changed\0"
    "Channel_10Changed\0channel11Changed\0"
    "Channel_11Changed\0updateTimeChanged\0"
    "UpdateTimeChanged\0maxUpdateTimeChanged\0"
    "MaxUpdateTimeChanged\0numFailedUpdatesChanged\0"
    "NumFailedUpdatesChanged\0setChannel\0"
    "setChannel0\0setChannel_0\0setChannel1\0"
    "setChannel_1\0setChannel2\0setChannel_2\0"
    "setChannel3\0setChannel_3\0setChannel4\0"
    "setChannel_4\0setChannel5\0setChannel_5\0"
    "setChannel6\0setChannel_6\0setChannel7\0"
    "setChannel_7\0setChannel8\0setChannel_8\0"
    "setChannel9\0setChannel_9\0setChannel10\0"
    "setChannel_10\0setChannel11\0setChannel_11\0"
    "setUpdateTime\0setMaxUpdateTime\0"
    "setNumFailedUpdates\0emitNotifications\0"
    "channel\0getChannel\0getChannel_0\0"
    "getChannel_1\0getChannel_2\0getChannel_3\0"
    "getChannel_4\0getChannel_5\0getChannel_6\0"
    "getChannel_7\0getChannel_8\0getChannel_9\0"
    "getChannel_10\0getChannel_11\0getUpdateTime\0"
    "getMaxUpdateTime\0getNumFailedUpdates\0"
    "channel0\0channel1\0channel2\0channel3\0"
    "channel4\0channel5\0channel6\0channel7\0"
    "channel8\0channel9\0channel10\0channel11\0"
    "updateTime\0maxUpdateTime\0numFailedUpdates\0"
    "Channel_0\0Channel_1\0Channel_2\0Channel_3\0"
    "Channel_4\0Channel_5\0Channel_6\0Channel_7\0"
    "Channel_8\0Channel_9\0Channel_10\0"
    "Channel_11\0UpdateTime\0MaxUpdateTime\0"
    "NumFailedUpdates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActuatorCommand[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      79,   14, // methods
      30,  620, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  409,    2, 0x06 /* Public */,
       5,    2,  414,    2, 0x06 /* Public */,
       6,    1,  419,    2, 0x06 /* Public */,
       7,    1,  422,    2, 0x06 /* Public */,
       8,    1,  425,    2, 0x06 /* Public */,
       9,    1,  428,    2, 0x06 /* Public */,
      10,    1,  431,    2, 0x06 /* Public */,
      11,    1,  434,    2, 0x06 /* Public */,
      12,    1,  437,    2, 0x06 /* Public */,
      13,    1,  440,    2, 0x06 /* Public */,
      14,    1,  443,    2, 0x06 /* Public */,
      15,    1,  446,    2, 0x06 /* Public */,
      16,    1,  449,    2, 0x06 /* Public */,
      17,    1,  452,    2, 0x06 /* Public */,
      18,    1,  455,    2, 0x06 /* Public */,
      19,    1,  458,    2, 0x06 /* Public */,
      20,    1,  461,    2, 0x06 /* Public */,
      21,    1,  464,    2, 0x06 /* Public */,
      22,    1,  467,    2, 0x06 /* Public */,
      23,    1,  470,    2, 0x06 /* Public */,
      24,    1,  473,    2, 0x06 /* Public */,
      25,    1,  476,    2, 0x06 /* Public */,
      26,    1,  479,    2, 0x06 /* Public */,
      27,    1,  482,    2, 0x06 /* Public */,
      28,    1,  485,    2, 0x06 /* Public */,
      29,    1,  488,    2, 0x06 /* Public */,
      30,    1,  491,    2, 0x06 /* Public */,
      31,    1,  494,    2, 0x06 /* Public */,
      32,    1,  497,    2, 0x06 /* Public */,
      33,    1,  500,    2, 0x06 /* Public */,
      34,    1,  503,    2, 0x06 /* Public */,
      35,    1,  506,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    2,  509,    2, 0x0a /* Public */,
      37,    1,  514,    2, 0x0a /* Public */,
      38,    1,  517,    2, 0x0a /* Public */,
      39,    1,  520,    2, 0x0a /* Public */,
      40,    1,  523,    2, 0x0a /* Public */,
      41,    1,  526,    2, 0x0a /* Public */,
      42,    1,  529,    2, 0x0a /* Public */,
      43,    1,  532,    2, 0x0a /* Public */,
      44,    1,  535,    2, 0x0a /* Public */,
      45,    1,  538,    2, 0x0a /* Public */,
      46,    1,  541,    2, 0x0a /* Public */,
      47,    1,  544,    2, 0x0a /* Public */,
      48,    1,  547,    2, 0x0a /* Public */,
      49,    1,  550,    2, 0x0a /* Public */,
      50,    1,  553,    2, 0x0a /* Public */,
      51,    1,  556,    2, 0x0a /* Public */,
      52,    1,  559,    2, 0x0a /* Public */,
      53,    1,  562,    2, 0x0a /* Public */,
      54,    1,  565,    2, 0x0a /* Public */,
      55,    1,  568,    2, 0x0a /* Public */,
      56,    1,  571,    2, 0x0a /* Public */,
      57,    1,  574,    2, 0x0a /* Public */,
      58,    1,  577,    2, 0x0a /* Public */,
      59,    1,  580,    2, 0x0a /* Public */,
      60,    1,  583,    2, 0x0a /* Public */,
      61,    1,  586,    2, 0x0a /* Public */,
      62,    1,  589,    2, 0x0a /* Public */,
      63,    1,  592,    2, 0x0a /* Public */,
      63,    1,  595,    2, 0x0a /* Public */,
      64,    0,  598,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      65,    1,  599,    2, 0x02 /* Public */,
      66,    1,  602,    2, 0x02 /* Public */,
      67,    0,  605,    2, 0x02 /* Public */,
      68,    0,  606,    2, 0x02 /* Public */,
      69,    0,  607,    2, 0x02 /* Public */,
      70,    0,  608,    2, 0x02 /* Public */,
      71,    0,  609,    2, 0x02 /* Public */,
      72,    0,  610,    2, 0x02 /* Public */,
      73,    0,  611,    2, 0x02 /* Public */,
      74,    0,  612,    2, 0x02 /* Public */,
      75,    0,  613,    2, 0x02 /* Public */,
      76,    0,  614,    2, 0x02 /* Public */,
      77,    0,  615,    2, 0x02 /* Public */,
      78,    0,  616,    2, 0x02 /* Public */,
      79,    0,  617,    2, 0x02 /* Public */,
      80,    0,  618,    2, 0x02 /* Public */,
      81,    0,  619,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
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
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void,

 // methods: parameters
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
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UChar,

 // properties: name, type, flags
      82, QMetaType::Short, 0x00495103,
      83, QMetaType::Short, 0x00495103,
      84, QMetaType::Short, 0x00495103,
      85, QMetaType::Short, 0x00495103,
      86, QMetaType::Short, 0x00495103,
      87, QMetaType::Short, 0x00495103,
      88, QMetaType::Short, 0x00495103,
      89, QMetaType::Short, 0x00495103,
      90, QMetaType::Short, 0x00495103,
      91, QMetaType::Short, 0x00495103,
      92, QMetaType::Short, 0x00495103,
      93, QMetaType::Short, 0x00495103,
      94, QMetaType::UShort, 0x00495103,
      95, QMetaType::UShort, 0x00495103,
      96, QMetaType::UShort, 0x00495103,
      97, QMetaType::Short, 0x00495103,
      98, QMetaType::Short, 0x00495103,
      99, QMetaType::Short, 0x00495103,
     100, QMetaType::Short, 0x00495103,
     101, QMetaType::Short, 0x00495103,
     102, QMetaType::Short, 0x00495103,
     103, QMetaType::Short, 0x00495103,
     104, QMetaType::Short, 0x00495103,
     105, QMetaType::Short, 0x00495103,
     106, QMetaType::Short, 0x00495103,
     107, QMetaType::Short, 0x00495103,
     108, QMetaType::Short, 0x00495103,
     109, QMetaType::UShort, 0x00495103,
     110, QMetaType::UShort, 0x00495103,
     111, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       6,
       8,
      10,
      12,
      14,
      16,
      18,
      20,
      22,
      24,
      26,
      28,
      30,
       3,
       5,
       7,
       9,
      11,
      13,
      15,
      17,
      19,
      21,
      23,
      25,
      27,
      29,
      31,

       0        // eod
};

void ActuatorCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorCommand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 1: _t->ChannelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2]))); break;
        case 2: _t->channel0Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 3: _t->Channel_0Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 4: _t->channel1Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 5: _t->Channel_1Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 6: _t->channel2Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 7: _t->Channel_2Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 8: _t->channel3Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 9: _t->Channel_3Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 10: _t->channel4Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 11: _t->Channel_4Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 12: _t->channel5Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 13: _t->Channel_5Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 14: _t->channel6Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 15: _t->Channel_6Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 16: _t->channel7Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 17: _t->Channel_7Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 18: _t->channel8Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 19: _t->Channel_8Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 20: _t->channel9Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 21: _t->Channel_9Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 22: _t->channel10Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 23: _t->Channel_10Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 24: _t->channel11Changed((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 25: _t->Channel_11Changed((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 26: _t->updateTimeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 27: _t->UpdateTimeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 28: _t->maxUpdateTimeChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 29: _t->MaxUpdateTimeChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 30: _t->numFailedUpdatesChanged((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 31: _t->NumFailedUpdatesChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->setChannel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const qint16(*)>(_a[2]))); break;
        case 33: _t->setChannel0((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 34: _t->setChannel_0((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 35: _t->setChannel1((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 36: _t->setChannel_1((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 37: _t->setChannel2((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 38: _t->setChannel_2((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 39: _t->setChannel3((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 40: _t->setChannel_3((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 41: _t->setChannel4((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 42: _t->setChannel_4((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 43: _t->setChannel5((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 44: _t->setChannel_5((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 45: _t->setChannel6((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 46: _t->setChannel_6((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 47: _t->setChannel7((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 48: _t->setChannel_7((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 49: _t->setChannel8((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 50: _t->setChannel_8((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 51: _t->setChannel9((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 52: _t->setChannel_9((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 53: _t->setChannel10((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 54: _t->setChannel_10((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 55: _t->setChannel11((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 56: _t->setChannel_11((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 57: _t->setUpdateTime((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 58: _t->setMaxUpdateTime((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 59: _t->setNumFailedUpdates((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 60: _t->setNumFailedUpdates((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 61: _t->emitNotifications(); break;
        case 62: { qint16 _r = _t->channel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 63: { qint16 _r = _t->getChannel((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 64: { qint16 _r = _t->getChannel_0();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 65: { qint16 _r = _t->getChannel_1();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 66: { qint16 _r = _t->getChannel_2();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 67: { qint16 _r = _t->getChannel_3();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 68: { qint16 _r = _t->getChannel_4();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 69: { qint16 _r = _t->getChannel_5();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 70: { qint16 _r = _t->getChannel_6();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 71: { qint16 _r = _t->getChannel_7();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 72: { qint16 _r = _t->getChannel_8();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 73: { qint16 _r = _t->getChannel_9();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 74: { qint16 _r = _t->getChannel_10();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 75: { qint16 _r = _t->getChannel_11();
            if (_a[0]) *reinterpret_cast< qint16*>(_a[0]) = std::move(_r); }  break;
        case 76: { quint16 _r = _t->getUpdateTime();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 77: { quint16 _r = _t->getMaxUpdateTime();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 78: { quint8 _r = _t->getNumFailedUpdates();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorCommand::*)(quint32 , const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(quint32 , qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::ChannelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_0Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_2Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel3Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_3Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel4Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_4Changed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel5Changed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_5Changed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel6Changed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_6Changed)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel7Changed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_7Changed)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel8Changed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_8Changed)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel9Changed)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_9Changed)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel10Changed)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_10Changed)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::channel11Changed)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::Channel_11Changed)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::updateTimeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::UpdateTimeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::maxUpdateTimeChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::MaxUpdateTimeChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::numFailedUpdatesChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (ActuatorCommand::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActuatorCommand::NumFailedUpdatesChanged)) {
                *result = 31;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint16*>(_v) = _t->channel0(); break;
        case 1: *reinterpret_cast< qint16*>(_v) = _t->channel1(); break;
        case 2: *reinterpret_cast< qint16*>(_v) = _t->channel2(); break;
        case 3: *reinterpret_cast< qint16*>(_v) = _t->channel3(); break;
        case 4: *reinterpret_cast< qint16*>(_v) = _t->channel4(); break;
        case 5: *reinterpret_cast< qint16*>(_v) = _t->channel5(); break;
        case 6: *reinterpret_cast< qint16*>(_v) = _t->channel6(); break;
        case 7: *reinterpret_cast< qint16*>(_v) = _t->channel7(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->channel8(); break;
        case 9: *reinterpret_cast< qint16*>(_v) = _t->channel9(); break;
        case 10: *reinterpret_cast< qint16*>(_v) = _t->channel10(); break;
        case 11: *reinterpret_cast< qint16*>(_v) = _t->channel11(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->updateTime(); break;
        case 13: *reinterpret_cast< quint16*>(_v) = _t->maxUpdateTime(); break;
        case 14: *reinterpret_cast< quint16*>(_v) = _t->numFailedUpdates(); break;
        case 15: *reinterpret_cast< qint16*>(_v) = _t->getChannel_0(); break;
        case 16: *reinterpret_cast< qint16*>(_v) = _t->getChannel_1(); break;
        case 17: *reinterpret_cast< qint16*>(_v) = _t->getChannel_2(); break;
        case 18: *reinterpret_cast< qint16*>(_v) = _t->getChannel_3(); break;
        case 19: *reinterpret_cast< qint16*>(_v) = _t->getChannel_4(); break;
        case 20: *reinterpret_cast< qint16*>(_v) = _t->getChannel_5(); break;
        case 21: *reinterpret_cast< qint16*>(_v) = _t->getChannel_6(); break;
        case 22: *reinterpret_cast< qint16*>(_v) = _t->getChannel_7(); break;
        case 23: *reinterpret_cast< qint16*>(_v) = _t->getChannel_8(); break;
        case 24: *reinterpret_cast< qint16*>(_v) = _t->getChannel_9(); break;
        case 25: *reinterpret_cast< qint16*>(_v) = _t->getChannel_10(); break;
        case 26: *reinterpret_cast< qint16*>(_v) = _t->getChannel_11(); break;
        case 27: *reinterpret_cast< quint16*>(_v) = _t->getUpdateTime(); break;
        case 28: *reinterpret_cast< quint16*>(_v) = _t->getMaxUpdateTime(); break;
        case 29: *reinterpret_cast< quint8*>(_v) = _t->getNumFailedUpdates(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActuatorCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChannel0(*reinterpret_cast< qint16*>(_v)); break;
        case 1: _t->setChannel1(*reinterpret_cast< qint16*>(_v)); break;
        case 2: _t->setChannel2(*reinterpret_cast< qint16*>(_v)); break;
        case 3: _t->setChannel3(*reinterpret_cast< qint16*>(_v)); break;
        case 4: _t->setChannel4(*reinterpret_cast< qint16*>(_v)); break;
        case 5: _t->setChannel5(*reinterpret_cast< qint16*>(_v)); break;
        case 6: _t->setChannel6(*reinterpret_cast< qint16*>(_v)); break;
        case 7: _t->setChannel7(*reinterpret_cast< qint16*>(_v)); break;
        case 8: _t->setChannel8(*reinterpret_cast< qint16*>(_v)); break;
        case 9: _t->setChannel9(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setChannel10(*reinterpret_cast< qint16*>(_v)); break;
        case 11: _t->setChannel11(*reinterpret_cast< qint16*>(_v)); break;
        case 12: _t->setUpdateTime(*reinterpret_cast< quint16*>(_v)); break;
        case 13: _t->setMaxUpdateTime(*reinterpret_cast< quint16*>(_v)); break;
        case 14: _t->setNumFailedUpdates(*reinterpret_cast< quint16*>(_v)); break;
        case 15: _t->setChannel_0(*reinterpret_cast< qint16*>(_v)); break;
        case 16: _t->setChannel_1(*reinterpret_cast< qint16*>(_v)); break;
        case 17: _t->setChannel_2(*reinterpret_cast< qint16*>(_v)); break;
        case 18: _t->setChannel_3(*reinterpret_cast< qint16*>(_v)); break;
        case 19: _t->setChannel_4(*reinterpret_cast< qint16*>(_v)); break;
        case 20: _t->setChannel_5(*reinterpret_cast< qint16*>(_v)); break;
        case 21: _t->setChannel_6(*reinterpret_cast< qint16*>(_v)); break;
        case 22: _t->setChannel_7(*reinterpret_cast< qint16*>(_v)); break;
        case 23: _t->setChannel_8(*reinterpret_cast< qint16*>(_v)); break;
        case 24: _t->setChannel_9(*reinterpret_cast< qint16*>(_v)); break;
        case 25: _t->setChannel_10(*reinterpret_cast< qint16*>(_v)); break;
        case 26: _t->setChannel_11(*reinterpret_cast< qint16*>(_v)); break;
        case 27: _t->setUpdateTime(*reinterpret_cast< quint16*>(_v)); break;
        case 28: _t->setMaxUpdateTime(*reinterpret_cast< quint16*>(_v)); break;
        case 29: _t->setNumFailedUpdates(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ActuatorCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_ActuatorCommand.data,
    qt_meta_data_ActuatorCommand,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActuatorCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActuatorCommand.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ActuatorCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 79;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActuatorCommand::channelChanged(quint32 _t1, const qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActuatorCommand::ChannelChanged(quint32 _t1, qint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActuatorCommand::channel0Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ActuatorCommand::Channel_0Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ActuatorCommand::channel1Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ActuatorCommand::Channel_1Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ActuatorCommand::channel2Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ActuatorCommand::Channel_2Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ActuatorCommand::channel3Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ActuatorCommand::Channel_3Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ActuatorCommand::channel4Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ActuatorCommand::Channel_4Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ActuatorCommand::channel5Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ActuatorCommand::Channel_5Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ActuatorCommand::channel6Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ActuatorCommand::Channel_6Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ActuatorCommand::channel7Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ActuatorCommand::Channel_7Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ActuatorCommand::channel8Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ActuatorCommand::Channel_8Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ActuatorCommand::channel9Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ActuatorCommand::Channel_9Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ActuatorCommand::channel10Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ActuatorCommand::Channel_10Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ActuatorCommand::channel11Changed(const qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ActuatorCommand::Channel_11Changed(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void ActuatorCommand::updateTimeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void ActuatorCommand::UpdateTimeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void ActuatorCommand::maxUpdateTimeChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void ActuatorCommand::MaxUpdateTimeChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void ActuatorCommand::numFailedUpdatesChanged(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void ActuatorCommand::NumFailedUpdatesChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
