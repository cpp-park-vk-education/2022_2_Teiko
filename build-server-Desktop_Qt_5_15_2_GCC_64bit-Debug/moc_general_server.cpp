/****************************************************************************
** Meta object code from reading C++ file 'general_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../2022_2_Teiko/server/general_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'general_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_general_server_t {
    QByteArrayData data[14];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_general_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_general_server_t qt_meta_stringdata_general_server = {
    {
QT_MOC_LITERAL(0, 0, 14), // "general_server"
QT_MOC_LITERAL(1, 15, 11), // "log_message"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "log"
QT_MOC_LITERAL(4, 32, 11), // "stop_server"
QT_MOC_LITERAL(5, 44, 9), // "broadcast"
QT_MOC_LITERAL(6, 54, 7), // "message"
QT_MOC_LITERAL(7, 62, 15), // "server_manager*"
QT_MOC_LITERAL(8, 78, 7), // "exclude"
QT_MOC_LITERAL(9, 86, 13), // "json_received"
QT_MOC_LITERAL(10, 100, 6), // "sender"
QT_MOC_LITERAL(11, 107, 3), // "doc"
QT_MOC_LITERAL(12, 111, 17), // "user_disconnected"
QT_MOC_LITERAL(13, 129, 10) // "user_error"

    },
    "general_server\0log_message\0\0log\0"
    "stop_server\0broadcast\0message\0"
    "server_manager*\0exclude\0json_received\0"
    "sender\0doc\0user_disconnected\0user_error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_general_server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    2,   53,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       9,    2,   61,    2, 0x08 /* Private */,
      12,    1,   66,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QJsonObject,    6,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QJsonObject,   10,   11,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void, 0x80000000 | 7,   10,

       0        // eod
};

void general_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<general_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->log_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stop_server(); break;
        case 2: _t->broadcast((*reinterpret_cast< const QJsonObject(*)>(_a[1])),(*reinterpret_cast< server_manager*(*)>(_a[2]))); break;
        case 3: _t->broadcast((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 4: _t->json_received((*reinterpret_cast< server_manager*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 5: _t->user_disconnected((*reinterpret_cast< server_manager*(*)>(_a[1]))); break;
        case 6: _t->user_error((*reinterpret_cast< server_manager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< server_manager* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< server_manager* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< server_manager* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< server_manager* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (general_server::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&general_server::log_message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject general_server::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_general_server.data,
    qt_meta_data_general_server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *general_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *general_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_general_server.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int general_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void general_server::log_message(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
