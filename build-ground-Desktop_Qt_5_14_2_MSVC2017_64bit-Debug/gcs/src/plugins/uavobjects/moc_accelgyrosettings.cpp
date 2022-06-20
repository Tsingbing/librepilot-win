/****************************************************************************
** Meta object code from reading C++ file 'accelgyrosettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "accelgyrosettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accelgyrosettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccelGyroSettingsConstants_t {
    QByteArrayData data[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccelGyroSettingsConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccelGyroSettingsConstants_t qt_meta_stringdata_AccelGyroSettingsConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AccelGyroSettingsConstants"
QT_MOC_LITERAL(1, 27, 4) // "Enum"

    },
    "AccelGyroSettingsConstants\0Enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccelGyroSettingsConstants[] = {

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

void AccelGyroSettingsConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AccelGyroSettingsConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AccelGyroSettingsConstants.data,
    qt_meta_data_AccelGyroSettingsConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccelGyroSettingsConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccelGyroSettingsConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccelGyroSettingsConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccelGyroSettingsConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AccelGyroSettings_t {
    QByteArrayData data[208];
    char stringdata0[3784];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccelGyroSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccelGyroSettings_t qt_meta_stringdata_AccelGyroSettings = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AccelGyroSettings"
QT_MOC_LITERAL(1, 18, 16), // "accelBiasChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 5), // "value"
QT_MOC_LITERAL(5, 48, 17), // "accel_biasChanged"
QT_MOC_LITERAL(6, 66, 17), // "accelBiasXChanged"
QT_MOC_LITERAL(7, 84, 19), // "accel_bias_XChanged"
QT_MOC_LITERAL(8, 104, 17), // "accelBiasYChanged"
QT_MOC_LITERAL(9, 122, 19), // "accel_bias_YChanged"
QT_MOC_LITERAL(10, 142, 17), // "accelBiasZChanged"
QT_MOC_LITERAL(11, 160, 19), // "accel_bias_ZChanged"
QT_MOC_LITERAL(12, 180, 17), // "accelScaleChanged"
QT_MOC_LITERAL(13, 198, 18), // "accel_scaleChanged"
QT_MOC_LITERAL(14, 217, 18), // "accelScaleXChanged"
QT_MOC_LITERAL(15, 236, 20), // "accel_scale_XChanged"
QT_MOC_LITERAL(16, 257, 18), // "accelScaleYChanged"
QT_MOC_LITERAL(17, 276, 20), // "accel_scale_YChanged"
QT_MOC_LITERAL(18, 297, 18), // "accelScaleZChanged"
QT_MOC_LITERAL(19, 316, 20), // "accel_scale_ZChanged"
QT_MOC_LITERAL(20, 337, 21), // "accelTempCoeffChanged"
QT_MOC_LITERAL(21, 359, 23), // "accel_temp_coeffChanged"
QT_MOC_LITERAL(22, 383, 22), // "accelTempCoeffXChanged"
QT_MOC_LITERAL(23, 406, 25), // "accel_temp_coeff_XChanged"
QT_MOC_LITERAL(24, 432, 22), // "accelTempCoeffYChanged"
QT_MOC_LITERAL(25, 455, 25), // "accel_temp_coeff_YChanged"
QT_MOC_LITERAL(26, 481, 22), // "accelTempCoeffZChanged"
QT_MOC_LITERAL(27, 504, 25), // "accel_temp_coeff_ZChanged"
QT_MOC_LITERAL(28, 530, 15), // "gyroBiasChanged"
QT_MOC_LITERAL(29, 546, 16), // "gyro_biasChanged"
QT_MOC_LITERAL(30, 563, 16), // "gyroBiasXChanged"
QT_MOC_LITERAL(31, 580, 18), // "gyro_bias_XChanged"
QT_MOC_LITERAL(32, 599, 16), // "gyroBiasYChanged"
QT_MOC_LITERAL(33, 616, 18), // "gyro_bias_YChanged"
QT_MOC_LITERAL(34, 635, 16), // "gyroBiasZChanged"
QT_MOC_LITERAL(35, 652, 18), // "gyro_bias_ZChanged"
QT_MOC_LITERAL(36, 671, 16), // "gyroScaleChanged"
QT_MOC_LITERAL(37, 688, 17), // "gyro_scaleChanged"
QT_MOC_LITERAL(38, 706, 17), // "gyroScaleXChanged"
QT_MOC_LITERAL(39, 724, 19), // "gyro_scale_XChanged"
QT_MOC_LITERAL(40, 744, 17), // "gyroScaleYChanged"
QT_MOC_LITERAL(41, 762, 19), // "gyro_scale_YChanged"
QT_MOC_LITERAL(42, 782, 17), // "gyroScaleZChanged"
QT_MOC_LITERAL(43, 800, 19), // "gyro_scale_ZChanged"
QT_MOC_LITERAL(44, 820, 20), // "gyroTempCoeffChanged"
QT_MOC_LITERAL(45, 841, 22), // "gyro_temp_coeffChanged"
QT_MOC_LITERAL(46, 864, 21), // "gyroTempCoeffXChanged"
QT_MOC_LITERAL(47, 886, 24), // "gyro_temp_coeff_XChanged"
QT_MOC_LITERAL(48, 911, 22), // "gyroTempCoeffX2Changed"
QT_MOC_LITERAL(49, 934, 25), // "gyro_temp_coeff_X2Changed"
QT_MOC_LITERAL(50, 960, 21), // "gyroTempCoeffYChanged"
QT_MOC_LITERAL(51, 982, 24), // "gyro_temp_coeff_YChanged"
QT_MOC_LITERAL(52, 1007, 22), // "gyroTempCoeffY2Changed"
QT_MOC_LITERAL(53, 1030, 25), // "gyro_temp_coeff_Y2Changed"
QT_MOC_LITERAL(54, 1056, 21), // "gyroTempCoeffZChanged"
QT_MOC_LITERAL(55, 1078, 24), // "gyro_temp_coeff_ZChanged"
QT_MOC_LITERAL(56, 1103, 22), // "gyroTempCoeffZ2Changed"
QT_MOC_LITERAL(57, 1126, 25), // "gyro_temp_coeff_Z2Changed"
QT_MOC_LITERAL(58, 1152, 27), // "tempCalibratedExtentChanged"
QT_MOC_LITERAL(59, 1180, 29), // "temp_calibrated_extentChanged"
QT_MOC_LITERAL(60, 1210, 30), // "tempCalibratedExtentminChanged"
QT_MOC_LITERAL(61, 1241, 33), // "temp_calibrated_extent_minCha..."
QT_MOC_LITERAL(62, 1275, 30), // "tempCalibratedExtentmaxChanged"
QT_MOC_LITERAL(63, 1306, 33), // "temp_calibrated_extent_maxCha..."
QT_MOC_LITERAL(64, 1340, 12), // "setAccelBias"
QT_MOC_LITERAL(65, 1353, 13), // "setaccel_bias"
QT_MOC_LITERAL(66, 1367, 13), // "setAccelBiasX"
QT_MOC_LITERAL(67, 1381, 15), // "setaccel_bias_X"
QT_MOC_LITERAL(68, 1397, 13), // "setAccelBiasY"
QT_MOC_LITERAL(69, 1411, 15), // "setaccel_bias_Y"
QT_MOC_LITERAL(70, 1427, 13), // "setAccelBiasZ"
QT_MOC_LITERAL(71, 1441, 15), // "setaccel_bias_Z"
QT_MOC_LITERAL(72, 1457, 13), // "setAccelScale"
QT_MOC_LITERAL(73, 1471, 14), // "setaccel_scale"
QT_MOC_LITERAL(74, 1486, 14), // "setAccelScaleX"
QT_MOC_LITERAL(75, 1501, 16), // "setaccel_scale_X"
QT_MOC_LITERAL(76, 1518, 14), // "setAccelScaleY"
QT_MOC_LITERAL(77, 1533, 16), // "setaccel_scale_Y"
QT_MOC_LITERAL(78, 1550, 14), // "setAccelScaleZ"
QT_MOC_LITERAL(79, 1565, 16), // "setaccel_scale_Z"
QT_MOC_LITERAL(80, 1582, 17), // "setAccelTempCoeff"
QT_MOC_LITERAL(81, 1600, 19), // "setaccel_temp_coeff"
QT_MOC_LITERAL(82, 1620, 18), // "setAccelTempCoeffX"
QT_MOC_LITERAL(83, 1639, 21), // "setaccel_temp_coeff_X"
QT_MOC_LITERAL(84, 1661, 18), // "setAccelTempCoeffY"
QT_MOC_LITERAL(85, 1680, 21), // "setaccel_temp_coeff_Y"
QT_MOC_LITERAL(86, 1702, 18), // "setAccelTempCoeffZ"
QT_MOC_LITERAL(87, 1721, 21), // "setaccel_temp_coeff_Z"
QT_MOC_LITERAL(88, 1743, 11), // "setGyroBias"
QT_MOC_LITERAL(89, 1755, 12), // "setgyro_bias"
QT_MOC_LITERAL(90, 1768, 12), // "setGyroBiasX"
QT_MOC_LITERAL(91, 1781, 14), // "setgyro_bias_X"
QT_MOC_LITERAL(92, 1796, 12), // "setGyroBiasY"
QT_MOC_LITERAL(93, 1809, 14), // "setgyro_bias_Y"
QT_MOC_LITERAL(94, 1824, 12), // "setGyroBiasZ"
QT_MOC_LITERAL(95, 1837, 14), // "setgyro_bias_Z"
QT_MOC_LITERAL(96, 1852, 12), // "setGyroScale"
QT_MOC_LITERAL(97, 1865, 13), // "setgyro_scale"
QT_MOC_LITERAL(98, 1879, 13), // "setGyroScaleX"
QT_MOC_LITERAL(99, 1893, 15), // "setgyro_scale_X"
QT_MOC_LITERAL(100, 1909, 13), // "setGyroScaleY"
QT_MOC_LITERAL(101, 1923, 15), // "setgyro_scale_Y"
QT_MOC_LITERAL(102, 1939, 13), // "setGyroScaleZ"
QT_MOC_LITERAL(103, 1953, 15), // "setgyro_scale_Z"
QT_MOC_LITERAL(104, 1969, 16), // "setGyroTempCoeff"
QT_MOC_LITERAL(105, 1986, 18), // "setgyro_temp_coeff"
QT_MOC_LITERAL(106, 2005, 17), // "setGyroTempCoeffX"
QT_MOC_LITERAL(107, 2023, 20), // "setgyro_temp_coeff_X"
QT_MOC_LITERAL(108, 2044, 18), // "setGyroTempCoeffX2"
QT_MOC_LITERAL(109, 2063, 21), // "setgyro_temp_coeff_X2"
QT_MOC_LITERAL(110, 2085, 17), // "setGyroTempCoeffY"
QT_MOC_LITERAL(111, 2103, 20), // "setgyro_temp_coeff_Y"
QT_MOC_LITERAL(112, 2124, 18), // "setGyroTempCoeffY2"
QT_MOC_LITERAL(113, 2143, 21), // "setgyro_temp_coeff_Y2"
QT_MOC_LITERAL(114, 2165, 17), // "setGyroTempCoeffZ"
QT_MOC_LITERAL(115, 2183, 20), // "setgyro_temp_coeff_Z"
QT_MOC_LITERAL(116, 2204, 18), // "setGyroTempCoeffZ2"
QT_MOC_LITERAL(117, 2223, 21), // "setgyro_temp_coeff_Z2"
QT_MOC_LITERAL(118, 2245, 23), // "setTempCalibratedExtent"
QT_MOC_LITERAL(119, 2269, 25), // "settemp_calibrated_extent"
QT_MOC_LITERAL(120, 2295, 26), // "setTempCalibratedExtentmin"
QT_MOC_LITERAL(121, 2322, 29), // "settemp_calibrated_extent_min"
QT_MOC_LITERAL(122, 2352, 26), // "setTempCalibratedExtentmax"
QT_MOC_LITERAL(123, 2379, 29), // "settemp_calibrated_extent_max"
QT_MOC_LITERAL(124, 2409, 17), // "emitNotifications"
QT_MOC_LITERAL(125, 2427, 9), // "accelBias"
QT_MOC_LITERAL(126, 2437, 13), // "getaccel_bias"
QT_MOC_LITERAL(127, 2451, 15), // "getaccel_bias_X"
QT_MOC_LITERAL(128, 2467, 15), // "getaccel_bias_Y"
QT_MOC_LITERAL(129, 2483, 15), // "getaccel_bias_Z"
QT_MOC_LITERAL(130, 2499, 10), // "accelScale"
QT_MOC_LITERAL(131, 2510, 14), // "getaccel_scale"
QT_MOC_LITERAL(132, 2525, 16), // "getaccel_scale_X"
QT_MOC_LITERAL(133, 2542, 16), // "getaccel_scale_Y"
QT_MOC_LITERAL(134, 2559, 16), // "getaccel_scale_Z"
QT_MOC_LITERAL(135, 2576, 14), // "accelTempCoeff"
QT_MOC_LITERAL(136, 2591, 19), // "getaccel_temp_coeff"
QT_MOC_LITERAL(137, 2611, 21), // "getaccel_temp_coeff_X"
QT_MOC_LITERAL(138, 2633, 21), // "getaccel_temp_coeff_Y"
QT_MOC_LITERAL(139, 2655, 21), // "getaccel_temp_coeff_Z"
QT_MOC_LITERAL(140, 2677, 8), // "gyroBias"
QT_MOC_LITERAL(141, 2686, 12), // "getgyro_bias"
QT_MOC_LITERAL(142, 2699, 14), // "getgyro_bias_X"
QT_MOC_LITERAL(143, 2714, 14), // "getgyro_bias_Y"
QT_MOC_LITERAL(144, 2729, 14), // "getgyro_bias_Z"
QT_MOC_LITERAL(145, 2744, 9), // "gyroScale"
QT_MOC_LITERAL(146, 2754, 13), // "getgyro_scale"
QT_MOC_LITERAL(147, 2768, 15), // "getgyro_scale_X"
QT_MOC_LITERAL(148, 2784, 15), // "getgyro_scale_Y"
QT_MOC_LITERAL(149, 2800, 15), // "getgyro_scale_Z"
QT_MOC_LITERAL(150, 2816, 13), // "gyroTempCoeff"
QT_MOC_LITERAL(151, 2830, 18), // "getgyro_temp_coeff"
QT_MOC_LITERAL(152, 2849, 20), // "getgyro_temp_coeff_X"
QT_MOC_LITERAL(153, 2870, 21), // "getgyro_temp_coeff_X2"
QT_MOC_LITERAL(154, 2892, 20), // "getgyro_temp_coeff_Y"
QT_MOC_LITERAL(155, 2913, 21), // "getgyro_temp_coeff_Y2"
QT_MOC_LITERAL(156, 2935, 20), // "getgyro_temp_coeff_Z"
QT_MOC_LITERAL(157, 2956, 21), // "getgyro_temp_coeff_Z2"
QT_MOC_LITERAL(158, 2978, 20), // "tempCalibratedExtent"
QT_MOC_LITERAL(159, 2999, 25), // "gettemp_calibrated_extent"
QT_MOC_LITERAL(160, 3025, 29), // "gettemp_calibrated_extent_min"
QT_MOC_LITERAL(161, 3055, 29), // "gettemp_calibrated_extent_max"
QT_MOC_LITERAL(162, 3085, 10), // "accelBiasX"
QT_MOC_LITERAL(163, 3096, 10), // "accelBiasY"
QT_MOC_LITERAL(164, 3107, 10), // "accelBiasZ"
QT_MOC_LITERAL(165, 3118, 11), // "accelScaleX"
QT_MOC_LITERAL(166, 3130, 11), // "accelScaleY"
QT_MOC_LITERAL(167, 3142, 11), // "accelScaleZ"
QT_MOC_LITERAL(168, 3154, 15), // "accelTempCoeffX"
QT_MOC_LITERAL(169, 3170, 15), // "accelTempCoeffY"
QT_MOC_LITERAL(170, 3186, 15), // "accelTempCoeffZ"
QT_MOC_LITERAL(171, 3202, 9), // "gyroBiasX"
QT_MOC_LITERAL(172, 3212, 9), // "gyroBiasY"
QT_MOC_LITERAL(173, 3222, 9), // "gyroBiasZ"
QT_MOC_LITERAL(174, 3232, 10), // "gyroScaleX"
QT_MOC_LITERAL(175, 3243, 10), // "gyroScaleY"
QT_MOC_LITERAL(176, 3254, 10), // "gyroScaleZ"
QT_MOC_LITERAL(177, 3265, 14), // "gyroTempCoeffX"
QT_MOC_LITERAL(178, 3280, 15), // "gyroTempCoeffX2"
QT_MOC_LITERAL(179, 3296, 14), // "gyroTempCoeffY"
QT_MOC_LITERAL(180, 3311, 15), // "gyroTempCoeffY2"
QT_MOC_LITERAL(181, 3327, 14), // "gyroTempCoeffZ"
QT_MOC_LITERAL(182, 3342, 15), // "gyroTempCoeffZ2"
QT_MOC_LITERAL(183, 3358, 23), // "tempCalibratedExtentmin"
QT_MOC_LITERAL(184, 3382, 23), // "tempCalibratedExtentmax"
QT_MOC_LITERAL(185, 3406, 12), // "accel_bias_X"
QT_MOC_LITERAL(186, 3419, 12), // "accel_bias_Y"
QT_MOC_LITERAL(187, 3432, 12), // "accel_bias_Z"
QT_MOC_LITERAL(188, 3445, 13), // "accel_scale_X"
QT_MOC_LITERAL(189, 3459, 13), // "accel_scale_Y"
QT_MOC_LITERAL(190, 3473, 13), // "accel_scale_Z"
QT_MOC_LITERAL(191, 3487, 18), // "accel_temp_coeff_X"
QT_MOC_LITERAL(192, 3506, 18), // "accel_temp_coeff_Y"
QT_MOC_LITERAL(193, 3525, 18), // "accel_temp_coeff_Z"
QT_MOC_LITERAL(194, 3544, 11), // "gyro_bias_X"
QT_MOC_LITERAL(195, 3556, 11), // "gyro_bias_Y"
QT_MOC_LITERAL(196, 3568, 11), // "gyro_bias_Z"
QT_MOC_LITERAL(197, 3580, 12), // "gyro_scale_X"
QT_MOC_LITERAL(198, 3593, 12), // "gyro_scale_Y"
QT_MOC_LITERAL(199, 3606, 12), // "gyro_scale_Z"
QT_MOC_LITERAL(200, 3619, 17), // "gyro_temp_coeff_X"
QT_MOC_LITERAL(201, 3637, 18), // "gyro_temp_coeff_X2"
QT_MOC_LITERAL(202, 3656, 17), // "gyro_temp_coeff_Y"
QT_MOC_LITERAL(203, 3674, 18), // "gyro_temp_coeff_Y2"
QT_MOC_LITERAL(204, 3693, 17), // "gyro_temp_coeff_Z"
QT_MOC_LITERAL(205, 3711, 18), // "gyro_temp_coeff_Z2"
QT_MOC_LITERAL(206, 3730, 26), // "temp_calibrated_extent_min"
QT_MOC_LITERAL(207, 3757, 26) // "temp_calibrated_extent_max"

    },
    "AccelGyroSettings\0accelBiasChanged\0\0"
    "index\0value\0accel_biasChanged\0"
    "accelBiasXChanged\0accel_bias_XChanged\0"
    "accelBiasYChanged\0accel_bias_YChanged\0"
    "accelBiasZChanged\0accel_bias_ZChanged\0"
    "accelScaleChanged\0accel_scaleChanged\0"
    "accelScaleXChanged\0accel_scale_XChanged\0"
    "accelScaleYChanged\0accel_scale_YChanged\0"
    "accelScaleZChanged\0accel_scale_ZChanged\0"
    "accelTempCoeffChanged\0accel_temp_coeffChanged\0"
    "accelTempCoeffXChanged\0accel_temp_coeff_XChanged\0"
    "accelTempCoeffYChanged\0accel_temp_coeff_YChanged\0"
    "accelTempCoeffZChanged\0accel_temp_coeff_ZChanged\0"
    "gyroBiasChanged\0gyro_biasChanged\0"
    "gyroBiasXChanged\0gyro_bias_XChanged\0"
    "gyroBiasYChanged\0gyro_bias_YChanged\0"
    "gyroBiasZChanged\0gyro_bias_ZChanged\0"
    "gyroScaleChanged\0gyro_scaleChanged\0"
    "gyroScaleXChanged\0gyro_scale_XChanged\0"
    "gyroScaleYChanged\0gyro_scale_YChanged\0"
    "gyroScaleZChanged\0gyro_scale_ZChanged\0"
    "gyroTempCoeffChanged\0gyro_temp_coeffChanged\0"
    "gyroTempCoeffXChanged\0gyro_temp_coeff_XChanged\0"
    "gyroTempCoeffX2Changed\0gyro_temp_coeff_X2Changed\0"
    "gyroTempCoeffYChanged\0gyro_temp_coeff_YChanged\0"
    "gyroTempCoeffY2Changed\0gyro_temp_coeff_Y2Changed\0"
    "gyroTempCoeffZChanged\0gyro_temp_coeff_ZChanged\0"
    "gyroTempCoeffZ2Changed\0gyro_temp_coeff_Z2Changed\0"
    "tempCalibratedExtentChanged\0"
    "temp_calibrated_extentChanged\0"
    "tempCalibratedExtentminChanged\0"
    "temp_calibrated_extent_minChanged\0"
    "tempCalibratedExtentmaxChanged\0"
    "temp_calibrated_extent_maxChanged\0"
    "setAccelBias\0setaccel_bias\0setAccelBiasX\0"
    "setaccel_bias_X\0setAccelBiasY\0"
    "setaccel_bias_Y\0setAccelBiasZ\0"
    "setaccel_bias_Z\0setAccelScale\0"
    "setaccel_scale\0setAccelScaleX\0"
    "setaccel_scale_X\0setAccelScaleY\0"
    "setaccel_scale_Y\0setAccelScaleZ\0"
    "setaccel_scale_Z\0setAccelTempCoeff\0"
    "setaccel_temp_coeff\0setAccelTempCoeffX\0"
    "setaccel_temp_coeff_X\0setAccelTempCoeffY\0"
    "setaccel_temp_coeff_Y\0setAccelTempCoeffZ\0"
    "setaccel_temp_coeff_Z\0setGyroBias\0"
    "setgyro_bias\0setGyroBiasX\0setgyro_bias_X\0"
    "setGyroBiasY\0setgyro_bias_Y\0setGyroBiasZ\0"
    "setgyro_bias_Z\0setGyroScale\0setgyro_scale\0"
    "setGyroScaleX\0setgyro_scale_X\0"
    "setGyroScaleY\0setgyro_scale_Y\0"
    "setGyroScaleZ\0setgyro_scale_Z\0"
    "setGyroTempCoeff\0setgyro_temp_coeff\0"
    "setGyroTempCoeffX\0setgyro_temp_coeff_X\0"
    "setGyroTempCoeffX2\0setgyro_temp_coeff_X2\0"
    "setGyroTempCoeffY\0setgyro_temp_coeff_Y\0"
    "setGyroTempCoeffY2\0setgyro_temp_coeff_Y2\0"
    "setGyroTempCoeffZ\0setgyro_temp_coeff_Z\0"
    "setGyroTempCoeffZ2\0setgyro_temp_coeff_Z2\0"
    "setTempCalibratedExtent\0"
    "settemp_calibrated_extent\0"
    "setTempCalibratedExtentmin\0"
    "settemp_calibrated_extent_min\0"
    "setTempCalibratedExtentmax\0"
    "settemp_calibrated_extent_max\0"
    "emitNotifications\0accelBias\0getaccel_bias\0"
    "getaccel_bias_X\0getaccel_bias_Y\0"
    "getaccel_bias_Z\0accelScale\0getaccel_scale\0"
    "getaccel_scale_X\0getaccel_scale_Y\0"
    "getaccel_scale_Z\0accelTempCoeff\0"
    "getaccel_temp_coeff\0getaccel_temp_coeff_X\0"
    "getaccel_temp_coeff_Y\0getaccel_temp_coeff_Z\0"
    "gyroBias\0getgyro_bias\0getgyro_bias_X\0"
    "getgyro_bias_Y\0getgyro_bias_Z\0gyroScale\0"
    "getgyro_scale\0getgyro_scale_X\0"
    "getgyro_scale_Y\0getgyro_scale_Z\0"
    "gyroTempCoeff\0getgyro_temp_coeff\0"
    "getgyro_temp_coeff_X\0getgyro_temp_coeff_X2\0"
    "getgyro_temp_coeff_Y\0getgyro_temp_coeff_Y2\0"
    "getgyro_temp_coeff_Z\0getgyro_temp_coeff_Z2\0"
    "tempCalibratedExtent\0gettemp_calibrated_extent\0"
    "gettemp_calibrated_extent_min\0"
    "gettemp_calibrated_extent_max\0accelBiasX\0"
    "accelBiasY\0accelBiasZ\0accelScaleX\0"
    "accelScaleY\0accelScaleZ\0accelTempCoeffX\0"
    "accelTempCoeffY\0accelTempCoeffZ\0"
    "gyroBiasX\0gyroBiasY\0gyroBiasZ\0gyroScaleX\0"
    "gyroScaleY\0gyroScaleZ\0gyroTempCoeffX\0"
    "gyroTempCoeffX2\0gyroTempCoeffY\0"
    "gyroTempCoeffY2\0gyroTempCoeffZ\0"
    "gyroTempCoeffZ2\0tempCalibratedExtentmin\0"
    "tempCalibratedExtentmax\0accel_bias_X\0"
    "accel_bias_Y\0accel_bias_Z\0accel_scale_X\0"
    "accel_scale_Y\0accel_scale_Z\0"
    "accel_temp_coeff_X\0accel_temp_coeff_Y\0"
    "accel_temp_coeff_Z\0gyro_bias_X\0"
    "gyro_bias_Y\0gyro_bias_Z\0gyro_scale_X\0"
    "gyro_scale_Y\0gyro_scale_Z\0gyro_temp_coeff_X\0"
    "gyro_temp_coeff_X2\0gyro_temp_coeff_Y\0"
    "gyro_temp_coeff_Y2\0gyro_temp_coeff_Z\0"
    "gyro_temp_coeff_Z2\0temp_calibrated_extent_min\0"
    "temp_calibrated_extent_max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccelGyroSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     158,   14, // methods
      46, 1286, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      60,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  804,    2, 0x06 /* Public */,
       5,    2,  809,    2, 0x06 /* Public */,
       6,    1,  814,    2, 0x06 /* Public */,
       7,    1,  817,    2, 0x06 /* Public */,
       8,    1,  820,    2, 0x06 /* Public */,
       9,    1,  823,    2, 0x06 /* Public */,
      10,    1,  826,    2, 0x06 /* Public */,
      11,    1,  829,    2, 0x06 /* Public */,
      12,    2,  832,    2, 0x06 /* Public */,
      13,    2,  837,    2, 0x06 /* Public */,
      14,    1,  842,    2, 0x06 /* Public */,
      15,    1,  845,    2, 0x06 /* Public */,
      16,    1,  848,    2, 0x06 /* Public */,
      17,    1,  851,    2, 0x06 /* Public */,
      18,    1,  854,    2, 0x06 /* Public */,
      19,    1,  857,    2, 0x06 /* Public */,
      20,    2,  860,    2, 0x06 /* Public */,
      21,    2,  865,    2, 0x06 /* Public */,
      22,    1,  870,    2, 0x06 /* Public */,
      23,    1,  873,    2, 0x06 /* Public */,
      24,    1,  876,    2, 0x06 /* Public */,
      25,    1,  879,    2, 0x06 /* Public */,
      26,    1,  882,    2, 0x06 /* Public */,
      27,    1,  885,    2, 0x06 /* Public */,
      28,    2,  888,    2, 0x06 /* Public */,
      29,    2,  893,    2, 0x06 /* Public */,
      30,    1,  898,    2, 0x06 /* Public */,
      31,    1,  901,    2, 0x06 /* Public */,
      32,    1,  904,    2, 0x06 /* Public */,
      33,    1,  907,    2, 0x06 /* Public */,
      34,    1,  910,    2, 0x06 /* Public */,
      35,    1,  913,    2, 0x06 /* Public */,
      36,    2,  916,    2, 0x06 /* Public */,
      37,    2,  921,    2, 0x06 /* Public */,
      38,    1,  926,    2, 0x06 /* Public */,
      39,    1,  929,    2, 0x06 /* Public */,
      40,    1,  932,    2, 0x06 /* Public */,
      41,    1,  935,    2, 0x06 /* Public */,
      42,    1,  938,    2, 0x06 /* Public */,
      43,    1,  941,    2, 0x06 /* Public */,
      44,    2,  944,    2, 0x06 /* Public */,
      45,    2,  949,    2, 0x06 /* Public */,
      46,    1,  954,    2, 0x06 /* Public */,
      47,    1,  957,    2, 0x06 /* Public */,
      48,    1,  960,    2, 0x06 /* Public */,
      49,    1,  963,    2, 0x06 /* Public */,
      50,    1,  966,    2, 0x06 /* Public */,
      51,    1,  969,    2, 0x06 /* Public */,
      52,    1,  972,    2, 0x06 /* Public */,
      53,    1,  975,    2, 0x06 /* Public */,
      54,    1,  978,    2, 0x06 /* Public */,
      55,    1,  981,    2, 0x06 /* Public */,
      56,    1,  984,    2, 0x06 /* Public */,
      57,    1,  987,    2, 0x06 /* Public */,
      58,    2,  990,    2, 0x06 /* Public */,
      59,    2,  995,    2, 0x06 /* Public */,
      60,    1, 1000,    2, 0x06 /* Public */,
      61,    1, 1003,    2, 0x06 /* Public */,
      62,    1, 1006,    2, 0x06 /* Public */,
      63,    1, 1009,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    2, 1012,    2, 0x0a /* Public */,
      65,    2, 1017,    2, 0x0a /* Public */,
      66,    1, 1022,    2, 0x0a /* Public */,
      67,    1, 1025,    2, 0x0a /* Public */,
      68,    1, 1028,    2, 0x0a /* Public */,
      69,    1, 1031,    2, 0x0a /* Public */,
      70,    1, 1034,    2, 0x0a /* Public */,
      71,    1, 1037,    2, 0x0a /* Public */,
      72,    2, 1040,    2, 0x0a /* Public */,
      73,    2, 1045,    2, 0x0a /* Public */,
      74,    1, 1050,    2, 0x0a /* Public */,
      75,    1, 1053,    2, 0x0a /* Public */,
      76,    1, 1056,    2, 0x0a /* Public */,
      77,    1, 1059,    2, 0x0a /* Public */,
      78,    1, 1062,    2, 0x0a /* Public */,
      79,    1, 1065,    2, 0x0a /* Public */,
      80,    2, 1068,    2, 0x0a /* Public */,
      81,    2, 1073,    2, 0x0a /* Public */,
      82,    1, 1078,    2, 0x0a /* Public */,
      83,    1, 1081,    2, 0x0a /* Public */,
      84,    1, 1084,    2, 0x0a /* Public */,
      85,    1, 1087,    2, 0x0a /* Public */,
      86,    1, 1090,    2, 0x0a /* Public */,
      87,    1, 1093,    2, 0x0a /* Public */,
      88,    2, 1096,    2, 0x0a /* Public */,
      89,    2, 1101,    2, 0x0a /* Public */,
      90,    1, 1106,    2, 0x0a /* Public */,
      91,    1, 1109,    2, 0x0a /* Public */,
      92,    1, 1112,    2, 0x0a /* Public */,
      93,    1, 1115,    2, 0x0a /* Public */,
      94,    1, 1118,    2, 0x0a /* Public */,
      95,    1, 1121,    2, 0x0a /* Public */,
      96,    2, 1124,    2, 0x0a /* Public */,
      97,    2, 1129,    2, 0x0a /* Public */,
      98,    1, 1134,    2, 0x0a /* Public */,
      99,    1, 1137,    2, 0x0a /* Public */,
     100,    1, 1140,    2, 0x0a /* Public */,
     101,    1, 1143,    2, 0x0a /* Public */,
     102,    1, 1146,    2, 0x0a /* Public */,
     103,    1, 1149,    2, 0x0a /* Public */,
     104,    2, 1152,    2, 0x0a /* Public */,
     105,    2, 1157,    2, 0x0a /* Public */,
     106,    1, 1162,    2, 0x0a /* Public */,
     107,    1, 1165,    2, 0x0a /* Public */,
     108,    1, 1168,    2, 0x0a /* Public */,
     109,    1, 1171,    2, 0x0a /* Public */,
     110,    1, 1174,    2, 0x0a /* Public */,
     111,    1, 1177,    2, 0x0a /* Public */,
     112,    1, 1180,    2, 0x0a /* Public */,
     113,    1, 1183,    2, 0x0a /* Public */,
     114,    1, 1186,    2, 0x0a /* Public */,
     115,    1, 1189,    2, 0x0a /* Public */,
     116,    1, 1192,    2, 0x0a /* Public */,
     117,    1, 1195,    2, 0x0a /* Public */,
     118,    2, 1198,    2, 0x0a /* Public */,
     119,    2, 1203,    2, 0x0a /* Public */,
     120,    1, 1208,    2, 0x0a /* Public */,
     121,    1, 1211,    2, 0x0a /* Public */,
     122,    1, 1214,    2, 0x0a /* Public */,
     123,    1, 1217,    2, 0x0a /* Public */,
     124,    0, 1220,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     125,    1, 1221,    2, 0x02 /* Public */,
     126,    1, 1224,    2, 0x02 /* Public */,
     127,    0, 1227,    2, 0x02 /* Public */,
     128,    0, 1228,    2, 0x02 /* Public */,
     129,    0, 1229,    2, 0x02 /* Public */,
     130,    1, 1230,    2, 0x02 /* Public */,
     131,    1, 1233,    2, 0x02 /* Public */,
     132,    0, 1236,    2, 0x02 /* Public */,
     133,    0, 1237,    2, 0x02 /* Public */,
     134,    0, 1238,    2, 0x02 /* Public */,
     135,    1, 1239,    2, 0x02 /* Public */,
     136,    1, 1242,    2, 0x02 /* Public */,
     137,    0, 1245,    2, 0x02 /* Public */,
     138,    0, 1246,    2, 0x02 /* Public */,
     139,    0, 1247,    2, 0x02 /* Public */,
     140,    1, 1248,    2, 0x02 /* Public */,
     141,    1, 1251,    2, 0x02 /* Public */,
     142,    0, 1254,    2, 0x02 /* Public */,
     143,    0, 1255,    2, 0x02 /* Public */,
     144,    0, 1256,    2, 0x02 /* Public */,
     145,    1, 1257,    2, 0x02 /* Public */,
     146,    1, 1260,    2, 0x02 /* Public */,
     147,    0, 1263,    2, 0x02 /* Public */,
     148,    0, 1264,    2, 0x02 /* Public */,
     149,    0, 1265,    2, 0x02 /* Public */,
     150,    1, 1266,    2, 0x02 /* Public */,
     151,    1, 1269,    2, 0x02 /* Public */,
     152,    0, 1272,    2, 0x02 /* Public */,
     153,    0, 1273,    2, 0x02 /* Public */,
     154,    0, 1274,    2, 0x02 /* Public */,
     155,    0, 1275,    2, 0x02 /* Public */,
     156,    0, 1276,    2, 0x02 /* Public */,
     157,    0, 1277,    2, 0x02 /* Public */,
     158,    1, 1278,    2, 0x02 /* Public */,
     159,    1, 1281,    2, 0x02 /* Public */,
     160,    0, 1284,    2, 0x02 /* Public */,
     161,    0, 1285,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float, QMetaType::UInt,    3,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
     162, QMetaType::Float, 0x00495103,
     163, QMetaType::Float, 0x00495103,
     164, QMetaType::Float, 0x00495103,
     165, QMetaType::Float, 0x00495103,
     166, QMetaType::Float, 0x00495103,
     167, QMetaType::Float, 0x00495103,
     168, QMetaType::Float, 0x00495103,
     169, QMetaType::Float, 0x00495103,
     170, QMetaType::Float, 0x00495103,
     171, QMetaType::Float, 0x00495103,
     172, QMetaType::Float, 0x00495103,
     173, QMetaType::Float, 0x00495103,
     174, QMetaType::Float, 0x00495103,
     175, QMetaType::Float, 0x00495103,
     176, QMetaType::Float, 0x00495103,
     177, QMetaType::Float, 0x00495103,
     178, QMetaType::Float, 0x00495103,
     179, QMetaType::Float, 0x00495103,
     180, QMetaType::Float, 0x00495103,
     181, QMetaType::Float, 0x00495103,
     182, QMetaType::Float, 0x00495103,
     183, QMetaType::Float, 0x00495103,
     184, QMetaType::Float, 0x00495103,
     185, QMetaType::Float, 0x00495003,
     186, QMetaType::Float, 0x00495003,
     187, QMetaType::Float, 0x00495003,
     188, QMetaType::Float, 0x00495003,
     189, QMetaType::Float, 0x00495003,
     190, QMetaType::Float, 0x00495003,
     191, QMetaType::Float, 0x00495003,
     192, QMetaType::Float, 0x00495003,
     193, QMetaType::Float, 0x00495003,
     194, QMetaType::Float, 0x00495003,
     195, QMetaType::Float, 0x00495003,
     196, QMetaType::Float, 0x00495003,
     197, QMetaType::Float, 0x00495003,
     198, QMetaType::Float, 0x00495003,
     199, QMetaType::Float, 0x00495003,
     200, QMetaType::Float, 0x00495003,
     201, QMetaType::Float, 0x00495003,
     202, QMetaType::Float, 0x00495003,
     203, QMetaType::Float, 0x00495003,
     204, QMetaType::Float, 0x00495003,
     205, QMetaType::Float, 0x00495003,
     206, QMetaType::Float, 0x00495003,
     207, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       2,
       4,
       6,
      10,
      12,
      14,
      18,
      20,
      22,
      26,
      28,
      30,
      34,
      36,
      38,
      42,
      44,
      46,
      48,
      50,
      52,
      56,
      58,
       3,
       5,
       7,
      11,
      13,
      15,
      19,
      21,
      23,
      27,
      29,
      31,
      35,
      37,
      39,
      43,
      45,
      47,
      49,
      51,
      53,
      57,
      59,

       0        // eod
};

void AccelGyroSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccelGyroSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelBiasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->accel_biasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->accelBiasXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->accel_bias_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->accelBiasYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 5: _t->accel_bias_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->accelBiasZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 7: _t->accel_bias_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->accelScaleChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 9: _t->accel_scaleChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: _t->accelScaleXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->accel_scale_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->accelScaleYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->accel_scale_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->accelScaleZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 15: _t->accel_scale_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->accelTempCoeffChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 17: _t->accel_temp_coeffChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 18: _t->accelTempCoeffXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 19: _t->accel_temp_coeff_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->accelTempCoeffYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 21: _t->accel_temp_coeff_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->accelTempCoeffZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 23: _t->accel_temp_coeff_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 24: _t->gyroBiasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 25: _t->gyro_biasChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 26: _t->gyroBiasXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 27: _t->gyro_bias_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->gyroBiasYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 29: _t->gyro_bias_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->gyroBiasZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 31: _t->gyro_bias_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->gyroScaleChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 33: _t->gyro_scaleChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 34: _t->gyroScaleXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 35: _t->gyro_scale_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 36: _t->gyroScaleYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 37: _t->gyro_scale_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->gyroScaleZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 39: _t->gyro_scale_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->gyroTempCoeffChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 41: _t->gyro_temp_coeffChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 42: _t->gyroTempCoeffXChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 43: _t->gyro_temp_coeff_XChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->gyroTempCoeffX2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 45: _t->gyro_temp_coeff_X2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->gyroTempCoeffYChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 47: _t->gyro_temp_coeff_YChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 48: _t->gyroTempCoeffY2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 49: _t->gyro_temp_coeff_Y2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 50: _t->gyroTempCoeffZChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 51: _t->gyro_temp_coeff_ZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->gyroTempCoeffZ2Changed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 53: _t->gyro_temp_coeff_Z2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->tempCalibratedExtentChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 55: _t->temp_calibrated_extentChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 56: _t->tempCalibratedExtentminChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 57: _t->temp_calibrated_extent_minChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->tempCalibratedExtentmaxChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 59: _t->temp_calibrated_extent_maxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->setAccelBias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 61: _t->setaccel_bias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 62: _t->setAccelBiasX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 63: _t->setaccel_bias_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 64: _t->setAccelBiasY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 65: _t->setaccel_bias_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 66: _t->setAccelBiasZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 67: _t->setaccel_bias_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 68: _t->setAccelScale((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 69: _t->setaccel_scale((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 70: _t->setAccelScaleX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 71: _t->setaccel_scale_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 72: _t->setAccelScaleY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 73: _t->setaccel_scale_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 74: _t->setAccelScaleZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 75: _t->setaccel_scale_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 76: _t->setAccelTempCoeff((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 77: _t->setaccel_temp_coeff((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 78: _t->setAccelTempCoeffX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 79: _t->setaccel_temp_coeff_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 80: _t->setAccelTempCoeffY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 81: _t->setaccel_temp_coeff_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 82: _t->setAccelTempCoeffZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 83: _t->setaccel_temp_coeff_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 84: _t->setGyroBias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 85: _t->setgyro_bias((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 86: _t->setGyroBiasX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 87: _t->setgyro_bias_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 88: _t->setGyroBiasY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 89: _t->setgyro_bias_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 90: _t->setGyroBiasZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 91: _t->setgyro_bias_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 92: _t->setGyroScale((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 93: _t->setgyro_scale((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 94: _t->setGyroScaleX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 95: _t->setgyro_scale_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 96: _t->setGyroScaleY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 97: _t->setgyro_scale_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 98: _t->setGyroScaleZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 99: _t->setgyro_scale_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 100: _t->setGyroTempCoeff((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 101: _t->setgyro_temp_coeff((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 102: _t->setGyroTempCoeffX((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 103: _t->setgyro_temp_coeff_X((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 104: _t->setGyroTempCoeffX2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 105: _t->setgyro_temp_coeff_X2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 106: _t->setGyroTempCoeffY((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 107: _t->setgyro_temp_coeff_Y((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 108: _t->setGyroTempCoeffY2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 109: _t->setgyro_temp_coeff_Y2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 110: _t->setGyroTempCoeffZ((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 111: _t->setgyro_temp_coeff_Z((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 112: _t->setGyroTempCoeffZ2((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 113: _t->setgyro_temp_coeff_Z2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 114: _t->setTempCalibratedExtent((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 115: _t->settemp_calibrated_extent((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 116: _t->setTempCalibratedExtentmin((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 117: _t->settemp_calibrated_extent_min((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 118: _t->setTempCalibratedExtentmax((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 119: _t->settemp_calibrated_extent_max((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 120: _t->emitNotifications(); break;
        case 121: { float _r = _t->accelBias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 122: { float _r = _t->getaccel_bias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 123: { float _r = _t->getaccel_bias_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 124: { float _r = _t->getaccel_bias_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 125: { float _r = _t->getaccel_bias_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 126: { float _r = _t->accelScale((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 127: { float _r = _t->getaccel_scale((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 128: { float _r = _t->getaccel_scale_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 129: { float _r = _t->getaccel_scale_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 130: { float _r = _t->getaccel_scale_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 131: { float _r = _t->accelTempCoeff((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 132: { float _r = _t->getaccel_temp_coeff((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 133: { float _r = _t->getaccel_temp_coeff_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 134: { float _r = _t->getaccel_temp_coeff_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 135: { float _r = _t->getaccel_temp_coeff_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 136: { float _r = _t->gyroBias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 137: { float _r = _t->getgyro_bias((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 138: { float _r = _t->getgyro_bias_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 139: { float _r = _t->getgyro_bias_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 140: { float _r = _t->getgyro_bias_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 141: { float _r = _t->gyroScale((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 142: { float _r = _t->getgyro_scale((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 143: { float _r = _t->getgyro_scale_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 144: { float _r = _t->getgyro_scale_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 145: { float _r = _t->getgyro_scale_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 146: { float _r = _t->gyroTempCoeff((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 147: { float _r = _t->getgyro_temp_coeff((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 148: { float _r = _t->getgyro_temp_coeff_X();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 149: { float _r = _t->getgyro_temp_coeff_X2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 150: { float _r = _t->getgyro_temp_coeff_Y();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 151: { float _r = _t->getgyro_temp_coeff_Y2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 152: { float _r = _t->getgyro_temp_coeff_Z();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 153: { float _r = _t->getgyro_temp_coeff_Z2();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 154: { float _r = _t->tempCalibratedExtent((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 155: { float _r = _t->gettemp_calibrated_extent((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 156: { float _r = _t->gettemp_calibrated_extent_min();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 157: { float _r = _t->gettemp_calibrated_extent_max();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelBiasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_biasChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelBiasXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_bias_XChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelBiasYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_bias_YChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelBiasZChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_bias_ZChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelScaleChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_scaleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelScaleXChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_scale_XChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelScaleYChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_scale_YChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelScaleZChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_scale_ZChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelTempCoeffChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_temp_coeffChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelTempCoeffXChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_temp_coeff_XChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelTempCoeffYChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_temp_coeff_YChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accelTempCoeffZChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::accel_temp_coeff_ZChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroBiasChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_biasChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroBiasXChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_bias_XChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroBiasYChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_bias_YChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroBiasZChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_bias_ZChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroScaleChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_scaleChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroScaleXChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_scale_XChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroScaleYChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_scale_YChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroScaleZChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_scale_ZChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeffChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffXChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_XChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffX2Changed)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_X2Changed)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffYChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_YChanged)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffY2Changed)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_Y2Changed)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffZChanged)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_ZChanged)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyroTempCoeffZ2Changed)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::gyro_temp_coeff_Z2Changed)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::tempCalibratedExtentChanged)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(quint32 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::temp_calibrated_extentChanged)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::tempCalibratedExtentminChanged)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::temp_calibrated_extent_minChanged)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(const float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::tempCalibratedExtentmaxChanged)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (AccelGyroSettings::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccelGyroSettings::temp_calibrated_extent_maxChanged)) {
                *result = 59;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccelGyroSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->accelBiasX(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->accelBiasY(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->accelBiasZ(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->accelScaleX(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->accelScaleY(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->accelScaleZ(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->accelTempCoeffX(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->accelTempCoeffY(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->accelTempCoeffZ(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->gyroBiasX(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->gyroBiasY(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->gyroBiasZ(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->gyroScaleX(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->gyroScaleY(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->gyroScaleZ(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffX(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffX2(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffY(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffY2(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffZ(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->gyroTempCoeffZ2(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->tempCalibratedExtentmin(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->tempCalibratedExtentmax(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->getaccel_bias_X(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->getaccel_bias_Y(); break;
        case 25: *reinterpret_cast< float*>(_v) = _t->getaccel_bias_Z(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getaccel_scale_X(); break;
        case 27: *reinterpret_cast< float*>(_v) = _t->getaccel_scale_Y(); break;
        case 28: *reinterpret_cast< float*>(_v) = _t->getaccel_scale_Z(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getaccel_temp_coeff_X(); break;
        case 30: *reinterpret_cast< float*>(_v) = _t->getaccel_temp_coeff_Y(); break;
        case 31: *reinterpret_cast< float*>(_v) = _t->getaccel_temp_coeff_Z(); break;
        case 32: *reinterpret_cast< float*>(_v) = _t->getgyro_bias_X(); break;
        case 33: *reinterpret_cast< float*>(_v) = _t->getgyro_bias_Y(); break;
        case 34: *reinterpret_cast< float*>(_v) = _t->getgyro_bias_Z(); break;
        case 35: *reinterpret_cast< float*>(_v) = _t->getgyro_scale_X(); break;
        case 36: *reinterpret_cast< float*>(_v) = _t->getgyro_scale_Y(); break;
        case 37: *reinterpret_cast< float*>(_v) = _t->getgyro_scale_Z(); break;
        case 38: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_X(); break;
        case 39: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_X2(); break;
        case 40: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_Y(); break;
        case 41: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_Y2(); break;
        case 42: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_Z(); break;
        case 43: *reinterpret_cast< float*>(_v) = _t->getgyro_temp_coeff_Z2(); break;
        case 44: *reinterpret_cast< float*>(_v) = _t->gettemp_calibrated_extent_min(); break;
        case 45: *reinterpret_cast< float*>(_v) = _t->gettemp_calibrated_extent_max(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccelGyroSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccelBiasX(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAccelBiasY(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAccelBiasZ(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAccelScaleX(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAccelScaleY(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setAccelScaleZ(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setAccelTempCoeffX(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setAccelTempCoeffY(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setAccelTempCoeffZ(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setGyroBiasX(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setGyroBiasY(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setGyroBiasZ(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setGyroScaleX(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setGyroScaleY(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setGyroScaleZ(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setGyroTempCoeffX(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setGyroTempCoeffX2(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setGyroTempCoeffY(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setGyroTempCoeffY2(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setGyroTempCoeffZ(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setGyroTempCoeffZ2(*reinterpret_cast< float*>(_v)); break;
        case 21: _t->setTempCalibratedExtentmin(*reinterpret_cast< float*>(_v)); break;
        case 22: _t->setTempCalibratedExtentmax(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setaccel_bias_X(*reinterpret_cast< float*>(_v)); break;
        case 24: _t->setaccel_bias_Y(*reinterpret_cast< float*>(_v)); break;
        case 25: _t->setaccel_bias_Z(*reinterpret_cast< float*>(_v)); break;
        case 26: _t->setaccel_scale_X(*reinterpret_cast< float*>(_v)); break;
        case 27: _t->setaccel_scale_Y(*reinterpret_cast< float*>(_v)); break;
        case 28: _t->setaccel_scale_Z(*reinterpret_cast< float*>(_v)); break;
        case 29: _t->setaccel_temp_coeff_X(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setaccel_temp_coeff_Y(*reinterpret_cast< float*>(_v)); break;
        case 31: _t->setaccel_temp_coeff_Z(*reinterpret_cast< float*>(_v)); break;
        case 32: _t->setgyro_bias_X(*reinterpret_cast< float*>(_v)); break;
        case 33: _t->setgyro_bias_Y(*reinterpret_cast< float*>(_v)); break;
        case 34: _t->setgyro_bias_Z(*reinterpret_cast< float*>(_v)); break;
        case 35: _t->setgyro_scale_X(*reinterpret_cast< float*>(_v)); break;
        case 36: _t->setgyro_scale_Y(*reinterpret_cast< float*>(_v)); break;
        case 37: _t->setgyro_scale_Z(*reinterpret_cast< float*>(_v)); break;
        case 38: _t->setgyro_temp_coeff_X(*reinterpret_cast< float*>(_v)); break;
        case 39: _t->setgyro_temp_coeff_X2(*reinterpret_cast< float*>(_v)); break;
        case 40: _t->setgyro_temp_coeff_Y(*reinterpret_cast< float*>(_v)); break;
        case 41: _t->setgyro_temp_coeff_Y2(*reinterpret_cast< float*>(_v)); break;
        case 42: _t->setgyro_temp_coeff_Z(*reinterpret_cast< float*>(_v)); break;
        case 43: _t->setgyro_temp_coeff_Z2(*reinterpret_cast< float*>(_v)); break;
        case 44: _t->settemp_calibrated_extent_min(*reinterpret_cast< float*>(_v)); break;
        case 45: _t->settemp_calibrated_extent_max(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AccelGyroSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_AccelGyroSettings.data,
    qt_meta_data_AccelGyroSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccelGyroSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccelGyroSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccelGyroSettings.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int AccelGyroSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 158)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 158;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 158)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 158;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 46;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 46;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AccelGyroSettings::accelBiasChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccelGyroSettings::accel_biasChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccelGyroSettings::accelBiasXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccelGyroSettings::accel_bias_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AccelGyroSettings::accelBiasYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AccelGyroSettings::accel_bias_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AccelGyroSettings::accelBiasZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AccelGyroSettings::accel_bias_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AccelGyroSettings::accelScaleChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AccelGyroSettings::accel_scaleChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AccelGyroSettings::accelScaleXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AccelGyroSettings::accel_scale_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AccelGyroSettings::accelScaleYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AccelGyroSettings::accel_scale_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AccelGyroSettings::accelScaleZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AccelGyroSettings::accel_scale_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AccelGyroSettings::accelTempCoeffChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AccelGyroSettings::accel_temp_coeffChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AccelGyroSettings::accelTempCoeffXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AccelGyroSettings::accel_temp_coeff_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AccelGyroSettings::accelTempCoeffYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AccelGyroSettings::accel_temp_coeff_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void AccelGyroSettings::accelTempCoeffZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void AccelGyroSettings::accel_temp_coeff_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void AccelGyroSettings::gyroBiasChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void AccelGyroSettings::gyro_biasChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void AccelGyroSettings::gyroBiasXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void AccelGyroSettings::gyro_bias_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void AccelGyroSettings::gyroBiasYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void AccelGyroSettings::gyro_bias_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void AccelGyroSettings::gyroBiasZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void AccelGyroSettings::gyro_bias_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void AccelGyroSettings::gyroScaleChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void AccelGyroSettings::gyro_scaleChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void AccelGyroSettings::gyroScaleXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void AccelGyroSettings::gyro_scale_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void AccelGyroSettings::gyroScaleYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void AccelGyroSettings::gyro_scale_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void AccelGyroSettings::gyroScaleZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void AccelGyroSettings::gyro_scale_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void AccelGyroSettings::gyroTempCoeffChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void AccelGyroSettings::gyro_temp_coeffChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void AccelGyroSettings::gyroTempCoeffXChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void AccelGyroSettings::gyro_temp_coeff_XChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void AccelGyroSettings::gyroTempCoeffX2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void AccelGyroSettings::gyro_temp_coeff_X2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void AccelGyroSettings::gyroTempCoeffYChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void AccelGyroSettings::gyro_temp_coeff_YChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void AccelGyroSettings::gyroTempCoeffY2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void AccelGyroSettings::gyro_temp_coeff_Y2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void AccelGyroSettings::gyroTempCoeffZChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void AccelGyroSettings::gyro_temp_coeff_ZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void AccelGyroSettings::gyroTempCoeffZ2Changed(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void AccelGyroSettings::gyro_temp_coeff_Z2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void AccelGyroSettings::tempCalibratedExtentChanged(quint32 _t1, const float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void AccelGyroSettings::temp_calibrated_extentChanged(quint32 _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void AccelGyroSettings::tempCalibratedExtentminChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void AccelGyroSettings::temp_calibrated_extent_minChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void AccelGyroSettings::tempCalibratedExtentmaxChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void AccelGyroSettings::temp_calibrated_extent_maxChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
