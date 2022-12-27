#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QJsonDocument>

class client_worker : public QObject
{
    Q_OBJECT
public:
    explicit client_worker(QObject *parent = nullptr);
    bool is_connected();
public slots:
    void connect_to_server(const QHostAddress &address, quint16 port);
    void disconnect_from_host();
    void login(const QString &userName);
    void send_message(const QString &text);
    void end_move();
    void bad_ending();
    void send_metric(const QString &metric_name,const QString &user_name, int value);
    void send_final(int all_metrics_sum);
private slots:
    void on_ready_read();
signals:
    //user
    void logged_in();
    void login_error(const QString &reason);
    void user_joined(const QString &username);
    void user_left(const QString &username);
    //states
    void connected();
    void disconnected();
    void game_start();
    void start_move();
    void set_name(const QString &user_name);
    //message
    void message_received(const QString &sender, const QString &text);
    //news
    void add_news(QString text);
    void change_money_from_news(int value);
    void change_happiness_from_news(int value);
    void change_intelligence_from_news(int value);
    void change_hunger_from_news(int value);
    void change_metric(int value, const QString &metric, const QString &user_name);
    void champion(const QString &name);

private:
    QTcpSocket *socket;
    bool logged;
    void json_received(const QJsonObject &doc);
};

#endif // CHATCLIENT_H
