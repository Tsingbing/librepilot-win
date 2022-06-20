/****************************************************************************
** Meta object code from reading C++ file 'uavobjecttreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../ground/gcs/src/plugins/uavobjectbrowser/uavobjecttreemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uavobjecttreemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UAVObjectTreeModel_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAVObjectTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAVObjectTreeModel_t qt_meta_stringdata_UAVObjectTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UAVObjectTreeModel"
QT_MOC_LITERAL(1, 19, 9), // "newObject"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "UAVObject*"
QT_MOC_LITERAL(4, 41, 3), // "obj"
QT_MOC_LITERAL(5, 45, 12), // "updateObject"
QT_MOC_LITERAL(6, 58, 13), // "updateIsKnown"
QT_MOC_LITERAL(7, 72, 16), // "refreshHighlight"
QT_MOC_LITERAL(8, 89, 9), // "TreeItem*"
QT_MOC_LITERAL(9, 99, 4), // "item"
QT_MOC_LITERAL(10, 104, 14) // "refreshIsKnown"

    },
    "UAVObjectTreeModel\0newObject\0\0UAVObject*\0"
    "obj\0updateObject\0updateIsKnown\0"
    "refreshHighlight\0TreeItem*\0item\0"
    "refreshIsKnown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAVObjectTreeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void UAVObjectTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UAVObjectTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newObject((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 1: _t->updateObject((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 2: _t->updateIsKnown((*reinterpret_cast< UAVObject*(*)>(_a[1]))); break;
        case 3: _t->refreshHighlight((*reinterpret_cast< TreeItem*(*)>(_a[1]))); break;
        case 4: _t->refreshIsKnown((*reinterpret_cast< TreeItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UAVObject* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UAVObjectTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_UAVObjectTreeModel.data,
    qt_meta_data_UAVObjectTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UAVObjectTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAVObjectTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UAVObjectTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int UAVObjectTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
