/****************************************************************************
** Meta object code from reading C++ file 'quickwidgetproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../ground/gcs/src/libs/utils/quickwidgetproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickwidgetproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QuickWidgetProxy_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickWidgetProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickWidgetProxy_t qt_meta_stringdata_QuickWidgetProxy = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QuickWidgetProxy"
QT_MOC_LITERAL(1, 17, 15), // "onStatusChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "QQuickWidget::Status"
QT_MOC_LITERAL(4, 55, 6), // "status"
QT_MOC_LITERAL(5, 62, 18), // "QQuickView::Status"
QT_MOC_LITERAL(6, 81, 17), // "onSceneGraphError"
QT_MOC_LITERAL(7, 99, 29), // "QQuickWindow::SceneGraphError"
QT_MOC_LITERAL(8, 129, 5), // "error"
QT_MOC_LITERAL(9, 135, 7) // "message"

    },
    "QuickWidgetProxy\0onStatusChanged\0\0"
    "QQuickWidget::Status\0status\0"
    "QQuickView::Status\0onSceneGraphError\0"
    "QQuickWindow::SceneGraphError\0error\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickWidgetProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       1,    1,   32,    2, 0x0a /* Public */,
       6,    2,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,

       0        // eod
};

void QuickWidgetProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickWidgetProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStatusChanged((*reinterpret_cast< QQuickWidget::Status(*)>(_a[1]))); break;
        case 1: _t->onStatusChanged((*reinterpret_cast< QQuickView::Status(*)>(_a[1]))); break;
        case 2: _t->onSceneGraphError((*reinterpret_cast< QQuickWindow::SceneGraphError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QuickWidgetProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QuickWidgetProxy.data,
    qt_meta_data_QuickWidgetProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuickWidgetProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickWidgetProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickWidgetProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QuickWidgetProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
