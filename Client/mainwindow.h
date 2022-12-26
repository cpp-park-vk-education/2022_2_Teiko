#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QMessageBox>
#include <QLCDNumber>
#include <QTextEdit>
#include <QTimer>
#include <QTime>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonParseError>
#include <QStandardItemModel>
#include <QTcpServer>
#include <QWidget>
#include <QAbstractSocket>
#include <QInputDialog>
#include <QStandardItemModel>

#include "client_worker.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_DISABLE_COPY(MainWindow)

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int salary;
    int wastes;
    int happiness_decrease;
    int intelligenct_decrease;
    int hunger_decrease;
    //work with server
private:
    client_worker *client;
    QStandardItemModel *Model;
    QString last_user_name;
    int move_number;

    //metrics
    bool change_money(int value, QPushButton *button, QLCDNumber *number);
    void change_metrics(int value, QPushButton *button, QProgressBar *progess_bar);
    void change_metrics(int value, QProgressBar *progress_bar);
    void change_metric(int value, const QString &metric, const QString &user_name);
private slots:
    //connection
    void attempt_connection();
    void connected_to_server();
    //messages
    void message_received(const QString &sender, const QString &text);
    void send_message();
    //user
    void attempt_login(const QString &userName);
    void logged_in();
    void login_failed(const QString &reason);
    void disconnected_from_server();
    void user_joined(const QString &username);
    void user_left(const QString &username);
    void error(QAbstractSocket::SocketError socketError);
    void game_start();
    void set_name(const QString &user_name);
    void start_move();
    void end_game();
    //news
    void add_news(QString text);
    void change_money_from_news(int value);
    void change_happiness_from_news(int value);
    void change_intelligence_from_news(int value);
    void change_hunger_from_news(int value);
signals:
    void end_move();
    void bad_ending();
    void send_metric(const QString &metric_name, const QString &sender, int value);

private slots:

    //buttons

    void buttons_acces(bool is_available);

    void on_pushButton_book_clicked();

    void on_pushButton_courses_clicked();

    void on_pushButton_gdz_clicked();

    void on_pushButton_chips_clicked();

    void on_pushButton_energy_clicked();

    void on_pushButton_vegetables_clicked();

    void on_pushButton_hat_clicked();

    void on_pushButton_coat_clicked();

    void on_pushButton_jacket_clicked();

    void on_pushButton_laptop_clicked();

    void on_pushButton_phone_clicked();

    void on_pushButton_mouse_clicked();

    void on_pushButton_headphones_clicked();

    void on_pushButton_keyboard_clicked();

    void on_pushButton_teapot_clicked();

    void on_pushButton_robot_cleaner_clicked();

    void on_pushButton_fridge_clicked();

    void on_pushButton_microwave_clicked();

    void on_pushButton_dishwasher_clicked();

    void on_pushButton_coursework_clicked();

    void on_pushButton_office_supplies_clicked();

    void on_pushButton_ms_clicked();

    void on_pushButton_bag_clicked();

    void on_pushButton_scientific_journal_clicked();

    void on_pushButton_rolls_clicked();

    void on_pushButton_pizza_clicked();

    void on_pushButton_coffee_clicked();

    void on_pushButton_cola_clicked();

    void on_pushButton_sandwich_clicked();

    void on_pushButton_bun_clicked();

    void on_pushButton_hoodies_clicked();

    void on_pushButton_t_shirt_clicked();

    void on_pushButton_sneakers_clicked();

    void on_pushButton_socks_clicked();

    void on_pushButton_cap_clicked();

    void on_pushButton_uniform_clicked();

    //time
    void updateTime();



    void on_pushButton_move_end_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QPushButton*> buttons;
    QTimer *timer;
    int time_m;
    int time_s;


};
#endif // MAINWINDOW_H
