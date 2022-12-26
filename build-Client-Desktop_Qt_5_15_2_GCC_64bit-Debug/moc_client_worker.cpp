/****************************************************************************
** Meta object code from reading C++ file 'client_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Client/client_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_client_worker_t {
    QByteArrayData data[38];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_client_worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_client_worker_t qt_meta_stringdata_client_worker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "client_worker"
QT_MOC_LITERAL(1, 14, 9), // "logged_in"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "login_error"
QT_MOC_LITERAL(4, 37, 6), // "reason"
QT_MOC_LITERAL(5, 44, 11), // "user_joined"
QT_MOC_LITERAL(6, 56, 8), // "username"
QT_MOC_LITERAL(7, 65, 9), // "user_left"
QT_MOC_LITERAL(8, 75, 9), // "connected"
QT_MOC_LITERAL(9, 85, 12), // "disconnected"
QT_MOC_LITERAL(10, 98, 10), // "game_start"
QT_MOC_LITERAL(11, 109, 10), // "start_move"
QT_MOC_LITERAL(12, 120, 8), // "set_name"
QT_MOC_LITERAL(13, 129, 9), // "user_name"
QT_MOC_LITERAL(14, 139, 16), // "message_received"
QT_MOC_LITERAL(15, 156, 6), // "sender"
QT_MOC_LITERAL(16, 163, 4), // "text"
QT_MOC_LITERAL(17, 168, 8), // "add_news"
QT_MOC_LITERAL(18, 177, 22), // "change_money_from_news"
QT_MOC_LITERAL(19, 200, 5), // "value"
QT_MOC_LITERAL(20, 206, 26), // "change_happiness_from_news"
QT_MOC_LITERAL(21, 233, 29), // "change_intelligence_from_news"
QT_MOC_LITERAL(22, 263, 23), // "change_hunger_from_news"
QT_MOC_LITERAL(23, 287, 13), // "change_metric"
QT_MOC_LITERAL(24, 301, 6), // "metric"
QT_MOC_LITERAL(25, 308, 17), // "connect_to_server"
QT_MOC_LITERAL(26, 326, 12), // "QHostAddress"
QT_MOC_LITERAL(27, 339, 7), // "address"
QT_MOC_LITERAL(28, 347, 4), // "port"
QT_MOC_LITERAL(29, 352, 20), // "disconnect_from_host"
QT_MOC_LITERAL(30, 373, 5), // "login"
QT_MOC_LITERAL(31, 379, 8), // "userName"
QT_MOC_LITERAL(32, 388, 12), // "send_message"
QT_MOC_LITERAL(33, 401, 8), // "end_move"
QT_MOC_LITERAL(34, 410, 10), // "bad_ending"
QT_MOC_LITERAL(35, 421, 11), // "send_metric"
QT_MOC_LITERAL(36, 433, 11), // "metric_name"
QT_MOC_LITERAL(37, 445, 13) // "on_ready_read"

    },
    "client_worker\0logged_in\0\0login_error\0"
    "reason\0user_joined\0username\0user_left\0"
    "connected\0disconnected\0game_start\0"
    "start_move\0set_name\0user_name\0"
    "message_received\0sender\0text\0add_news\0"
    "change_money_from_news\0value\0"
    "change_happiness_from_news\0"
    "change_intelligence_from_news\0"
    "change_hunger_from_news\0change_metric\0"
    "metric\0connect_to_server\0QHostAddress\0"
    "address\0port\0disconnect_from_host\0"
    "login\0userName\0send_message\0end_move\0"
    "bad_ending\0send_metric\0metric_name\0"
    "on_ready_read"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_client_worker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    1,  135,    2, 0x06 /* Public */,
       5,    1,  138,    2, 0x06 /* Public */,
       7,    1,  141,    2, 0x06 /* Public */,
       8,    0,  144,    2, 0x06 /* Public */,
       9,    0,  145,    2, 0x06 /* Public */,
      10,    0,  146,    2, 0x06 /* Public */,
      11,    0,  147,    2, 0x06 /* Public */,
      12,    1,  148,    2, 0x06 /* Public */,
      14,    2,  151,    2, 0x06 /* Public */,
      17,    1,  156,    2, 0x06 /* Public */,
      18,    1,  159,    2, 0x06 /* Public */,
      20,    1,  162,    2, 0x06 /* Public */,
      21,    1,  165,    2, 0x06 /* Public */,
      22,    1,  168,    2, 0x06 /* Public */,
      23,    3,  171,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    2,  178,    2, 0x0a /* Public */,
      29,    0,  183,    2, 0x0a /* Public */,
      30,    1,  184,    2, 0x0a /* Public */,
      32,    1,  187,    2, 0x0a /* Public */,
      33,    0,  190,    2, 0x0a /* Public */,
      34,    0,  191,    2, 0x0a /* Public */,
      35,    3,  192,    2, 0x0a /* Public */,
      37,    0,  199,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   19,   24,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 26, QMetaType::UShort,   27,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   36,   13,   19,
    QMetaType::Void,

       0        // eod
};

void client_worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<client_worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logged_in(); break;
        case 1: _t->login_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->user_joined((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->user_left((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->connected(); break;
        case 5: _t->disconnected(); break;
        case 6: _t->game_start(); break;
        case 7: _t->start_move(); break;
        case 8: _t->set_name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->message_received((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->add_news((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->change_money_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->change_happiness_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->change_intelligence_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->change_hunger_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->change_metric((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: _t->connect_to_server((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 17: _t->disconnect_from_host(); break;
        case 18: _t->login((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->send_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->end_move(); break;
        case 21: _t->bad_ending(); break;
        case 22: _t->send_metric((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->on_ready_read(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (client_worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::logged_in)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::login_error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::user_joined)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::user_left)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (client_worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::connected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (client_worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::disconnected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (client_worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::game_start)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (client_worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::start_move)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::set_name)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::message_received)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::add_news)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::change_money_from_news)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::change_happiness_from_news)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::change_intelligence_from_news)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::change_hunger_from_news)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (client_worker::*)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&client_worker::change_metric)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject client_worker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_client_worker.data,
    qt_meta_data_client_worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *client_worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *client_worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_client_worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int client_worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void client_worker::logged_in()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void client_worker::login_error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void client_worker::user_joined(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void client_worker::user_left(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void client_worker::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void client_worker::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void client_worker::game_start()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void client_worker::start_move()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void client_worker::set_name(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void client_worker::message_received(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void client_worker::add_news(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void client_worker::change_money_from_news(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void client_worker::change_happiness_from_news(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void client_worker::change_intelligence_from_news(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void client_worker::change_hunger_from_news(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void client_worker::change_metric(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
