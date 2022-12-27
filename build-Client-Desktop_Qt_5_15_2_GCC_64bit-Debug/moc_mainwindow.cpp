/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Client/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[79];
    char stringdata0[1642];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "end_move"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "bad_ending"
QT_MOC_LITERAL(4, 32, 11), // "send_metric"
QT_MOC_LITERAL(5, 44, 11), // "metric_name"
QT_MOC_LITERAL(6, 56, 6), // "sender"
QT_MOC_LITERAL(7, 63, 5), // "value"
QT_MOC_LITERAL(8, 69, 10), // "send_final"
QT_MOC_LITERAL(9, 80, 15), // "all_metrics_sum"
QT_MOC_LITERAL(10, 96, 18), // "attempt_connection"
QT_MOC_LITERAL(11, 115, 19), // "connected_to_server"
QT_MOC_LITERAL(12, 135, 16), // "message_received"
QT_MOC_LITERAL(13, 152, 4), // "text"
QT_MOC_LITERAL(14, 157, 12), // "send_message"
QT_MOC_LITERAL(15, 170, 13), // "attempt_login"
QT_MOC_LITERAL(16, 184, 8), // "userName"
QT_MOC_LITERAL(17, 193, 9), // "logged_in"
QT_MOC_LITERAL(18, 203, 12), // "login_failed"
QT_MOC_LITERAL(19, 216, 6), // "reason"
QT_MOC_LITERAL(20, 223, 24), // "disconnected_from_server"
QT_MOC_LITERAL(21, 248, 11), // "user_joined"
QT_MOC_LITERAL(22, 260, 8), // "username"
QT_MOC_LITERAL(23, 269, 9), // "user_left"
QT_MOC_LITERAL(24, 279, 5), // "error"
QT_MOC_LITERAL(25, 285, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(26, 314, 11), // "socketError"
QT_MOC_LITERAL(27, 326, 10), // "game_start"
QT_MOC_LITERAL(28, 337, 8), // "set_name"
QT_MOC_LITERAL(29, 346, 9), // "user_name"
QT_MOC_LITERAL(30, 356, 10), // "start_move"
QT_MOC_LITERAL(31, 367, 8), // "end_game"
QT_MOC_LITERAL(32, 376, 8), // "add_news"
QT_MOC_LITERAL(33, 385, 22), // "change_money_from_news"
QT_MOC_LITERAL(34, 408, 26), // "change_happiness_from_news"
QT_MOC_LITERAL(35, 435, 29), // "change_intelligence_from_news"
QT_MOC_LITERAL(36, 465, 23), // "change_hunger_from_news"
QT_MOC_LITERAL(37, 489, 13), // "buttons_acces"
QT_MOC_LITERAL(38, 503, 12), // "is_available"
QT_MOC_LITERAL(39, 516, 26), // "on_pushButton_book_clicked"
QT_MOC_LITERAL(40, 543, 29), // "on_pushButton_courses_clicked"
QT_MOC_LITERAL(41, 573, 25), // "on_pushButton_gdz_clicked"
QT_MOC_LITERAL(42, 599, 27), // "on_pushButton_chips_clicked"
QT_MOC_LITERAL(43, 627, 28), // "on_pushButton_energy_clicked"
QT_MOC_LITERAL(44, 656, 32), // "on_pushButton_vegetables_clicked"
QT_MOC_LITERAL(45, 689, 25), // "on_pushButton_hat_clicked"
QT_MOC_LITERAL(46, 715, 26), // "on_pushButton_coat_clicked"
QT_MOC_LITERAL(47, 742, 28), // "on_pushButton_jacket_clicked"
QT_MOC_LITERAL(48, 771, 28), // "on_pushButton_laptop_clicked"
QT_MOC_LITERAL(49, 800, 27), // "on_pushButton_phone_clicked"
QT_MOC_LITERAL(50, 828, 27), // "on_pushButton_mouse_clicked"
QT_MOC_LITERAL(51, 856, 32), // "on_pushButton_headphones_clicked"
QT_MOC_LITERAL(52, 889, 30), // "on_pushButton_keyboard_clicked"
QT_MOC_LITERAL(53, 920, 28), // "on_pushButton_teapot_clicked"
QT_MOC_LITERAL(54, 949, 35), // "on_pushButton_robot_cleaner_c..."
QT_MOC_LITERAL(55, 985, 28), // "on_pushButton_fridge_clicked"
QT_MOC_LITERAL(56, 1014, 31), // "on_pushButton_microwave_clicked"
QT_MOC_LITERAL(57, 1046, 32), // "on_pushButton_dishwasher_clicked"
QT_MOC_LITERAL(58, 1079, 32), // "on_pushButton_coursework_clicked"
QT_MOC_LITERAL(59, 1112, 37), // "on_pushButton_office_supplies..."
QT_MOC_LITERAL(60, 1150, 24), // "on_pushButton_ms_clicked"
QT_MOC_LITERAL(61, 1175, 25), // "on_pushButton_bag_clicked"
QT_MOC_LITERAL(62, 1201, 40), // "on_pushButton_scientific_jour..."
QT_MOC_LITERAL(63, 1242, 27), // "on_pushButton_rolls_clicked"
QT_MOC_LITERAL(64, 1270, 27), // "on_pushButton_pizza_clicked"
QT_MOC_LITERAL(65, 1298, 28), // "on_pushButton_coffee_clicked"
QT_MOC_LITERAL(66, 1327, 26), // "on_pushButton_cola_clicked"
QT_MOC_LITERAL(67, 1354, 30), // "on_pushButton_sandwich_clicked"
QT_MOC_LITERAL(68, 1385, 25), // "on_pushButton_bun_clicked"
QT_MOC_LITERAL(69, 1411, 29), // "on_pushButton_hoodies_clicked"
QT_MOC_LITERAL(70, 1441, 29), // "on_pushButton_t_shirt_clicked"
QT_MOC_LITERAL(71, 1471, 30), // "on_pushButton_sneakers_clicked"
QT_MOC_LITERAL(72, 1502, 27), // "on_pushButton_socks_clicked"
QT_MOC_LITERAL(73, 1530, 25), // "on_pushButton_cap_clicked"
QT_MOC_LITERAL(74, 1556, 29), // "on_pushButton_uniform_clicked"
QT_MOC_LITERAL(75, 1586, 10), // "updateTime"
QT_MOC_LITERAL(76, 1597, 30), // "on_pushButton_move_end_clicked"
QT_MOC_LITERAL(77, 1628, 8), // "champion"
QT_MOC_LITERAL(78, 1637, 4) // "name"

    },
    "MainWindow\0end_move\0\0bad_ending\0"
    "send_metric\0metric_name\0sender\0value\0"
    "send_final\0all_metrics_sum\0"
    "attempt_connection\0connected_to_server\0"
    "message_received\0text\0send_message\0"
    "attempt_login\0userName\0logged_in\0"
    "login_failed\0reason\0disconnected_from_server\0"
    "user_joined\0username\0user_left\0error\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "game_start\0set_name\0user_name\0start_move\0"
    "end_game\0add_news\0change_money_from_news\0"
    "change_happiness_from_news\0"
    "change_intelligence_from_news\0"
    "change_hunger_from_news\0buttons_acces\0"
    "is_available\0on_pushButton_book_clicked\0"
    "on_pushButton_courses_clicked\0"
    "on_pushButton_gdz_clicked\0"
    "on_pushButton_chips_clicked\0"
    "on_pushButton_energy_clicked\0"
    "on_pushButton_vegetables_clicked\0"
    "on_pushButton_hat_clicked\0"
    "on_pushButton_coat_clicked\0"
    "on_pushButton_jacket_clicked\0"
    "on_pushButton_laptop_clicked\0"
    "on_pushButton_phone_clicked\0"
    "on_pushButton_mouse_clicked\0"
    "on_pushButton_headphones_clicked\0"
    "on_pushButton_keyboard_clicked\0"
    "on_pushButton_teapot_clicked\0"
    "on_pushButton_robot_cleaner_clicked\0"
    "on_pushButton_fridge_clicked\0"
    "on_pushButton_microwave_clicked\0"
    "on_pushButton_dishwasher_clicked\0"
    "on_pushButton_coursework_clicked\0"
    "on_pushButton_office_supplies_clicked\0"
    "on_pushButton_ms_clicked\0"
    "on_pushButton_bag_clicked\0"
    "on_pushButton_scientific_journal_clicked\0"
    "on_pushButton_rolls_clicked\0"
    "on_pushButton_pizza_clicked\0"
    "on_pushButton_coffee_clicked\0"
    "on_pushButton_cola_clicked\0"
    "on_pushButton_sandwich_clicked\0"
    "on_pushButton_bun_clicked\0"
    "on_pushButton_hoodies_clicked\0"
    "on_pushButton_t_shirt_clicked\0"
    "on_pushButton_sneakers_clicked\0"
    "on_pushButton_socks_clicked\0"
    "on_pushButton_cap_clicked\0"
    "on_pushButton_uniform_clicked\0updateTime\0"
    "on_pushButton_move_end_clicked\0champion\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,
       3,    0,  335,    2, 0x06 /* Public */,
       4,    3,  336,    2, 0x06 /* Public */,
       8,    1,  343,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  346,    2, 0x08 /* Private */,
      11,    0,  347,    2, 0x08 /* Private */,
      12,    2,  348,    2, 0x08 /* Private */,
      14,    0,  353,    2, 0x08 /* Private */,
      15,    1,  354,    2, 0x08 /* Private */,
      17,    0,  357,    2, 0x08 /* Private */,
      18,    1,  358,    2, 0x08 /* Private */,
      20,    0,  361,    2, 0x08 /* Private */,
      21,    1,  362,    2, 0x08 /* Private */,
      23,    1,  365,    2, 0x08 /* Private */,
      24,    1,  368,    2, 0x08 /* Private */,
      27,    0,  371,    2, 0x08 /* Private */,
      28,    1,  372,    2, 0x08 /* Private */,
      30,    0,  375,    2, 0x08 /* Private */,
      31,    0,  376,    2, 0x08 /* Private */,
      32,    1,  377,    2, 0x08 /* Private */,
      33,    1,  380,    2, 0x08 /* Private */,
      34,    1,  383,    2, 0x08 /* Private */,
      35,    1,  386,    2, 0x08 /* Private */,
      36,    1,  389,    2, 0x08 /* Private */,
      37,    1,  392,    2, 0x08 /* Private */,
      39,    0,  395,    2, 0x08 /* Private */,
      40,    0,  396,    2, 0x08 /* Private */,
      41,    0,  397,    2, 0x08 /* Private */,
      42,    0,  398,    2, 0x08 /* Private */,
      43,    0,  399,    2, 0x08 /* Private */,
      44,    0,  400,    2, 0x08 /* Private */,
      45,    0,  401,    2, 0x08 /* Private */,
      46,    0,  402,    2, 0x08 /* Private */,
      47,    0,  403,    2, 0x08 /* Private */,
      48,    0,  404,    2, 0x08 /* Private */,
      49,    0,  405,    2, 0x08 /* Private */,
      50,    0,  406,    2, 0x08 /* Private */,
      51,    0,  407,    2, 0x08 /* Private */,
      52,    0,  408,    2, 0x08 /* Private */,
      53,    0,  409,    2, 0x08 /* Private */,
      54,    0,  410,    2, 0x08 /* Private */,
      55,    0,  411,    2, 0x08 /* Private */,
      56,    0,  412,    2, 0x08 /* Private */,
      57,    0,  413,    2, 0x08 /* Private */,
      58,    0,  414,    2, 0x08 /* Private */,
      59,    0,  415,    2, 0x08 /* Private */,
      60,    0,  416,    2, 0x08 /* Private */,
      61,    0,  417,    2, 0x08 /* Private */,
      62,    0,  418,    2, 0x08 /* Private */,
      63,    0,  419,    2, 0x08 /* Private */,
      64,    0,  420,    2, 0x08 /* Private */,
      65,    0,  421,    2, 0x08 /* Private */,
      66,    0,  422,    2, 0x08 /* Private */,
      67,    0,  423,    2, 0x08 /* Private */,
      68,    0,  424,    2, 0x08 /* Private */,
      69,    0,  425,    2, 0x08 /* Private */,
      70,    0,  426,    2, 0x08 /* Private */,
      71,    0,  427,    2, 0x08 /* Private */,
      72,    0,  428,    2, 0x08 /* Private */,
      73,    0,  429,    2, 0x08 /* Private */,
      74,    0,  430,    2, 0x08 /* Private */,
      75,    0,  431,    2, 0x08 /* Private */,
      76,    0,  432,    2, 0x08 /* Private */,
      77,    1,  433,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   78,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->end_move(); break;
        case 1: _t->bad_ending(); break;
        case 2: _t->send_metric((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->send_final((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->attempt_connection(); break;
        case 5: _t->connected_to_server(); break;
        case 6: _t->message_received((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->send_message(); break;
        case 8: _t->attempt_login((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->logged_in(); break;
        case 10: _t->login_failed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->disconnected_from_server(); break;
        case 12: _t->user_joined((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->user_left((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 15: _t->game_start(); break;
        case 16: _t->set_name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->start_move(); break;
        case 18: _t->end_game(); break;
        case 19: _t->add_news((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->change_money_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->change_happiness_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->change_intelligence_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->change_hunger_from_news((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->buttons_acces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_pushButton_book_clicked(); break;
        case 26: _t->on_pushButton_courses_clicked(); break;
        case 27: _t->on_pushButton_gdz_clicked(); break;
        case 28: _t->on_pushButton_chips_clicked(); break;
        case 29: _t->on_pushButton_energy_clicked(); break;
        case 30: _t->on_pushButton_vegetables_clicked(); break;
        case 31: _t->on_pushButton_hat_clicked(); break;
        case 32: _t->on_pushButton_coat_clicked(); break;
        case 33: _t->on_pushButton_jacket_clicked(); break;
        case 34: _t->on_pushButton_laptop_clicked(); break;
        case 35: _t->on_pushButton_phone_clicked(); break;
        case 36: _t->on_pushButton_mouse_clicked(); break;
        case 37: _t->on_pushButton_headphones_clicked(); break;
        case 38: _t->on_pushButton_keyboard_clicked(); break;
        case 39: _t->on_pushButton_teapot_clicked(); break;
        case 40: _t->on_pushButton_robot_cleaner_clicked(); break;
        case 41: _t->on_pushButton_fridge_clicked(); break;
        case 42: _t->on_pushButton_microwave_clicked(); break;
        case 43: _t->on_pushButton_dishwasher_clicked(); break;
        case 44: _t->on_pushButton_coursework_clicked(); break;
        case 45: _t->on_pushButton_office_supplies_clicked(); break;
        case 46: _t->on_pushButton_ms_clicked(); break;
        case 47: _t->on_pushButton_bag_clicked(); break;
        case 48: _t->on_pushButton_scientific_journal_clicked(); break;
        case 49: _t->on_pushButton_rolls_clicked(); break;
        case 50: _t->on_pushButton_pizza_clicked(); break;
        case 51: _t->on_pushButton_coffee_clicked(); break;
        case 52: _t->on_pushButton_cola_clicked(); break;
        case 53: _t->on_pushButton_sandwich_clicked(); break;
        case 54: _t->on_pushButton_bun_clicked(); break;
        case 55: _t->on_pushButton_hoodies_clicked(); break;
        case 56: _t->on_pushButton_t_shirt_clicked(); break;
        case 57: _t->on_pushButton_sneakers_clicked(); break;
        case 58: _t->on_pushButton_socks_clicked(); break;
        case 59: _t->on_pushButton_cap_clicked(); break;
        case 60: _t->on_pushButton_uniform_clicked(); break;
        case 61: _t->updateTime(); break;
        case 62: _t->on_pushButton_move_end_clicked(); break;
        case 63: _t->champion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::end_move)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::bad_ending)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_metric)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_final)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::end_move()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::bad_ending()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::send_metric(const QString & _t1, const QString & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::send_final(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
