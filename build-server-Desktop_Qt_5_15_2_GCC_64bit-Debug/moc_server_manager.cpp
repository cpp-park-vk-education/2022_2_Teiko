/****************************************************************************
** Meta object code from reading C++ file 'server_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../2022_2_Teiko/server/server_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_server_manager_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_server_manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_server_manager_t qt_meta_stringdata_server_manager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "server_manager"
QT_MOC_LITERAL(1, 15, 13), // "json_received"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "json_doc"
QT_MOC_LITERAL(4, 39, 24), // "disconnected_from_client"
QT_MOC_LITERAL(5, 64, 5), // "error"
QT_MOC_LITERAL(6, 70, 11), // "log_message"
QT_MOC_LITERAL(7, 82, 3), // "log"
QT_MOC_LITERAL(8, 86, 22), // "disconnect_from_client"
QT_MOC_LITERAL(9, 109, 12) // "receive_json"

    },
    "server_manager\0json_received\0\0json_doc\0"
    "disconnected_from_client\0error\0"
    "log_message\0log\0disconnect_from_client\0"
    "receive_json"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_server_manager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void server_manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<server_manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->json_received((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 1: _t->disconnected_from_client(); break;
        case 2: _t->error(); break;
        case 3: _t->log_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->disconnect_from_client(); break;
        case 5: _t->receive_json(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (server_manager::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_manager::json_received)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (server_manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_manager::disconnected_from_client)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (server_manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_manager::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (server_manager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&server_manager::log_message)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject server_manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_server_manager.data,
    qt_meta_data_server_manager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *server_manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *server_manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_server_manager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int server_manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void server_manager::json_received(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void server_manager::disconnected_from_client()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void server_manager::error()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void server_manager::log_message(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
