/****************************************************************************
** Meta object code from reading C++ file 'logfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../ground/gcs/src/libs/utils/logfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogFile_t {
    QByteArrayData data[15];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogFile_t qt_meta_stringdata_LogFile = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LogFile"
QT_MOC_LITERAL(1, 8, 13), // "replayStarted"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "replayFinished"
QT_MOC_LITERAL(4, 38, 15), // "replayCompleted"
QT_MOC_LITERAL(5, 54, 23), // "playbackPositionChanged"
QT_MOC_LITERAL(6, 78, 12), // "timesChanged"
QT_MOC_LITERAL(7, 91, 14), // "setReplaySpeed"
QT_MOC_LITERAL(8, 106, 3), // "val"
QT_MOC_LITERAL(9, 110, 11), // "startReplay"
QT_MOC_LITERAL(10, 122, 10), // "stopReplay"
QT_MOC_LITERAL(11, 133, 12), // "resumeReplay"
QT_MOC_LITERAL(12, 146, 11), // "pauseReplay"
QT_MOC_LITERAL(13, 158, 27), // "pauseReplayAndResetPosition"
QT_MOC_LITERAL(14, 186, 10) // "timerFired"

    },
    "LogFile\0replayStarted\0\0replayFinished\0"
    "replayCompleted\0playbackPositionChanged\0"
    "timesChanged\0setReplaySpeed\0val\0"
    "startReplay\0stopReplay\0resumeReplay\0"
    "pauseReplay\0pauseReplayAndResetPosition\0"
    "timerFired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   85,    2, 0x0a /* Public */,
       9,    0,   88,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    0,   93,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::UInt,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void LogFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replayStarted(); break;
        case 1: _t->replayFinished(); break;
        case 2: _t->replayCompleted(); break;
        case 3: _t->playbackPositionChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->timesChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 5: _t->setReplaySpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: { bool _r = _t->startReplay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->stopReplay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->resumeReplay((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->pauseReplay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->pauseReplayAndResetPosition();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->timerFired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogFile::replayStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogFile::replayFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogFile::replayCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogFile::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogFile::playbackPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LogFile::*)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogFile::timesChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_LogFile.data,
    qt_meta_data_LogFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogFile.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int LogFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void LogFile::replayStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LogFile::replayFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogFile::replayCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogFile::playbackPositionChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LogFile::timesChanged(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
