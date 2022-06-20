/****************************************************************************
** Meta object code from reading C++ file 'objectpersistence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "objectpersistence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectpersistence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectPersistenceConstants_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectPersistenceConstants_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectPersistenceConstants_t qt_meta_stringdata_ObjectPersistenceConstants = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ObjectPersistenceConstants"
QT_MOC_LITERAL(1, 27, 4), // "Enum"
QT_MOC_LITERAL(2, 32, 14), // "OperationCount"
QT_MOC_LITERAL(3, 47, 14) // "SelectionCount"

    },
    "ObjectPersistenceConstants\0Enum\0"
    "OperationCount\0SelectionCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectPersistenceConstants[] = {

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
       2, uint(ObjectPersistenceConstants::OperationCount),
       3, uint(ObjectPersistenceConstants::SelectionCount),

       0        // eod
};

void ObjectPersistenceConstants::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ObjectPersistenceConstants::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectPersistenceConstants.data,
    qt_meta_data_ObjectPersistenceConstants,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectPersistenceConstants::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectPersistenceConstants::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectPersistenceConstants.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectPersistenceConstants::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ObjectPersistence_Operation_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectPersistence_Operation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectPersistence_Operation_t qt_meta_stringdata_ObjectPersistence_Operation = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ObjectPersistence_Operation"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 3), // "NOP"
QT_MOC_LITERAL(3, 37, 4), // "Load"
QT_MOC_LITERAL(4, 42, 4), // "Save"
QT_MOC_LITERAL(5, 47, 6), // "Delete"
QT_MOC_LITERAL(6, 54, 9), // "FullErase"
QT_MOC_LITERAL(7, 64, 9), // "Completed"
QT_MOC_LITERAL(8, 74, 5) // "Error"

    },
    "ObjectPersistence_Operation\0Enum\0NOP\0"
    "Load\0Save\0Delete\0FullErase\0Completed\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectPersistence_Operation[] = {

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
       2, uint(ObjectPersistence_Operation::NOP),
       3, uint(ObjectPersistence_Operation::Load),
       4, uint(ObjectPersistence_Operation::Save),
       5, uint(ObjectPersistence_Operation::Delete),
       6, uint(ObjectPersistence_Operation::FullErase),
       7, uint(ObjectPersistence_Operation::Completed),
       8, uint(ObjectPersistence_Operation::Error),

       0        // eod
};

void ObjectPersistence_Operation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ObjectPersistence_Operation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectPersistence_Operation.data,
    qt_meta_data_ObjectPersistence_Operation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectPersistence_Operation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectPersistence_Operation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectPersistence_Operation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectPersistence_Operation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ObjectPersistence_Selection_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectPersistence_Selection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectPersistence_Selection_t qt_meta_stringdata_ObjectPersistence_Selection = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ObjectPersistence_Selection"
QT_MOC_LITERAL(1, 28, 4), // "Enum"
QT_MOC_LITERAL(2, 33, 12), // "SingleObject"
QT_MOC_LITERAL(3, 46, 11), // "AllSettings"
QT_MOC_LITERAL(4, 58, 14), // "AllMetaObjects"
QT_MOC_LITERAL(5, 73, 10) // "AllObjects"

    },
    "ObjectPersistence_Selection\0Enum\0"
    "SingleObject\0AllSettings\0AllMetaObjects\0"
    "AllObjects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectPersistence_Selection[] = {

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
       2, uint(ObjectPersistence_Selection::SingleObject),
       3, uint(ObjectPersistence_Selection::AllSettings),
       4, uint(ObjectPersistence_Selection::AllMetaObjects),
       5, uint(ObjectPersistence_Selection::AllObjects),

       0        // eod
};

void ObjectPersistence_Selection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ObjectPersistence_Selection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectPersistence_Selection.data,
    qt_meta_data_ObjectPersistence_Selection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectPersistence_Selection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectPersistence_Selection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectPersistence_Selection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectPersistence_Selection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ObjectPersistence_t {
    QByteArrayData data[30];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectPersistence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectPersistence_t qt_meta_stringdata_ObjectPersistence = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ObjectPersistence"
QT_MOC_LITERAL(1, 18, 15), // "objectIDChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 15), // "ObjectIDChanged"
QT_MOC_LITERAL(5, 57, 17), // "instanceIDChanged"
QT_MOC_LITERAL(6, 75, 17), // "InstanceIDChanged"
QT_MOC_LITERAL(7, 93, 16), // "operationChanged"
QT_MOC_LITERAL(8, 110, 33), // "ObjectPersistence_Operation::..."
QT_MOC_LITERAL(9, 144, 16), // "OperationChanged"
QT_MOC_LITERAL(10, 161, 16), // "selectionChanged"
QT_MOC_LITERAL(11, 178, 33), // "ObjectPersistence_Selection::..."
QT_MOC_LITERAL(12, 212, 16), // "SelectionChanged"
QT_MOC_LITERAL(13, 229, 11), // "setObjectID"
QT_MOC_LITERAL(14, 241, 13), // "setInstanceID"
QT_MOC_LITERAL(15, 255, 12), // "setOperation"
QT_MOC_LITERAL(16, 268, 12), // "setSelection"
QT_MOC_LITERAL(17, 281, 17), // "emitNotifications"
QT_MOC_LITERAL(18, 299, 11), // "getObjectID"
QT_MOC_LITERAL(19, 311, 13), // "getInstanceID"
QT_MOC_LITERAL(20, 325, 12), // "getOperation"
QT_MOC_LITERAL(21, 338, 12), // "getSelection"
QT_MOC_LITERAL(22, 351, 8), // "objectID"
QT_MOC_LITERAL(23, 360, 10), // "instanceID"
QT_MOC_LITERAL(24, 371, 9), // "operation"
QT_MOC_LITERAL(25, 381, 9), // "selection"
QT_MOC_LITERAL(26, 391, 8), // "ObjectID"
QT_MOC_LITERAL(27, 400, 10), // "InstanceID"
QT_MOC_LITERAL(28, 411, 9), // "Operation"
QT_MOC_LITERAL(29, 421, 9) // "Selection"

    },
    "ObjectPersistence\0objectIDChanged\0\0"
    "value\0ObjectIDChanged\0instanceIDChanged\0"
    "InstanceIDChanged\0operationChanged\0"
    "ObjectPersistence_Operation::Enum\0"
    "OperationChanged\0selectionChanged\0"
    "ObjectPersistence_Selection::Enum\0"
    "SelectionChanged\0setObjectID\0setInstanceID\0"
    "setOperation\0setSelection\0emitNotifications\0"
    "getObjectID\0getInstanceID\0getOperation\0"
    "getSelection\0objectID\0instanceID\0"
    "operation\0selection\0ObjectID\0InstanceID\0"
    "Operation\0Selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectPersistence[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       8,  156, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       5,    1,  115,    2, 0x06 /* Public */,
       6,    1,  118,    2, 0x06 /* Public */,
       7,    1,  121,    2, 0x06 /* Public */,
       9,    1,  124,    2, 0x06 /* Public */,
      10,    1,  127,    2, 0x06 /* Public */,
      12,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  133,    2, 0x0a /* Public */,
      14,    1,  136,    2, 0x0a /* Public */,
      15,    1,  139,    2, 0x0a /* Public */,
      15,    1,  142,    2, 0x0a /* Public */,
      16,    1,  145,    2, 0x0a /* Public */,
      16,    1,  148,    2, 0x0a /* Public */,
      17,    0,  151,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  152,    2, 0x02 /* Public */,
      19,    0,  153,    2, 0x02 /* Public */,
      20,    0,  154,    2, 0x02 /* Public */,
      21,    0,  155,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 11,    3,
    QMetaType::Void, QMetaType::UChar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, 0x80000000 | 11,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UChar,
    QMetaType::UChar,

 // properties: name, type, flags
      22, QMetaType::UInt, 0x00495103,
      23, QMetaType::UInt, 0x00495103,
      24, 0x80000000 | 8, 0x0049510b,
      25, 0x80000000 | 11, 0x0049510b,
      26, QMetaType::UInt, 0x00495103,
      27, QMetaType::UInt, 0x00495103,
      28, QMetaType::UChar, 0x00495103,
      29, QMetaType::UChar, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       4,
       6,
       1,
       3,
       5,
       7,

       0        // eod
};

void ObjectPersistence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectPersistence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: _t->ObjectIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->instanceIDChanged((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: _t->InstanceIDChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->operationChanged((*reinterpret_cast< const ObjectPersistence_Operation::Enum(*)>(_a[1]))); break;
        case 5: _t->OperationChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->selectionChanged((*reinterpret_cast< const ObjectPersistence_Selection::Enum(*)>(_a[1]))); break;
        case 7: _t->SelectionChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->setObjectID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 9: _t->setInstanceID((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 10: _t->setOperation((*reinterpret_cast< const ObjectPersistence_Operation::Enum(*)>(_a[1]))); break;
        case 11: _t->setOperation((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 12: _t->setSelection((*reinterpret_cast< const ObjectPersistence_Selection::Enum(*)>(_a[1]))); break;
        case 13: _t->setSelection((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 14: _t->emitNotifications(); break;
        case 15: { quint32 _r = _t->getObjectID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 16: { quint32 _r = _t->getInstanceID();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 17: { quint8 _r = _t->getOperation();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 18: { quint8 _r = _t->getSelection();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjectPersistence::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::objectIDChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::ObjectIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(const quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::instanceIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::InstanceIDChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(const ObjectPersistence_Operation::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::operationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::OperationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(const ObjectPersistence_Selection::Enum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::selectionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ObjectPersistence::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectPersistence::SelectionChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ObjectPersistence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->objectID(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->instanceID(); break;
        case 2: *reinterpret_cast< ObjectPersistence_Operation::Enum*>(_v) = _t->operation(); break;
        case 3: *reinterpret_cast< ObjectPersistence_Selection::Enum*>(_v) = _t->selection(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->getObjectID(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->getInstanceID(); break;
        case 6: *reinterpret_cast< quint8*>(_v) = _t->getOperation(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->getSelection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ObjectPersistence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObjectID(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setInstanceID(*reinterpret_cast< quint32*>(_v)); break;
        case 2: _t->setOperation(*reinterpret_cast< ObjectPersistence_Operation::Enum*>(_v)); break;
        case 3: _t->setSelection(*reinterpret_cast< ObjectPersistence_Selection::Enum*>(_v)); break;
        case 4: _t->setObjectID(*reinterpret_cast< quint32*>(_v)); break;
        case 5: _t->setInstanceID(*reinterpret_cast< quint32*>(_v)); break;
        case 6: _t->setOperation(*reinterpret_cast< quint8*>(_v)); break;
        case 7: _t->setSelection(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ObjectPersistence[] = {
    QMetaObject::SuperData::link<ObjectPersistence_Operation::staticMetaObject>(),
    QMetaObject::SuperData::link<ObjectPersistence_Selection::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ObjectPersistence::staticMetaObject = { {
    QMetaObject::SuperData::link<UAVDataObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectPersistence.data,
    qt_meta_data_ObjectPersistence,
    qt_static_metacall,
    qt_meta_extradata_ObjectPersistence,
    nullptr
} };


const QMetaObject *ObjectPersistence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectPersistence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectPersistence.stringdata0))
        return static_cast<void*>(this);
    return UAVDataObject::qt_metacast(_clname);
}

int ObjectPersistence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAVDataObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ObjectPersistence::objectIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ObjectPersistence::ObjectIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ObjectPersistence::instanceIDChanged(const quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ObjectPersistence::InstanceIDChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ObjectPersistence::operationChanged(const ObjectPersistence_Operation::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ObjectPersistence::OperationChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ObjectPersistence::selectionChanged(const ObjectPersistence_Selection::Enum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ObjectPersistence::SelectionChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
