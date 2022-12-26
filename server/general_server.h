#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QTcpServer>
#include <QVector>
#include "server_manager.h"
#include "news.h"
#include <QTimer>
class general_server : public QTcpServer
{
    Q_OBJECT
public:
    explicit general_server(QObject *parent = nullptr);
    news News[20];
    bool all_ready();
protected:
    void incomingConnection(qintptr socket_descriptor) override;
public slots:
    void stop_server();
private slots:
    void broadcast(const QJsonObject &message, server_manager *exclude);
    void broadcast(const QJsonObject &message);
    void json_received(server_manager *sender, const QJsonObject &doc);
    void user_disconnected(server_manager *sender);
    void user_error(server_manager *sender);
    void updateTime();
private:
    void json_from_logged_out(server_manager *sender, const QJsonObject &doc);
    void json_from_logged_in(server_manager *sender, const QJsonObject &doc);
    void send_json(server_manager *destination, const QJsonObject &message);
    QVector<server_manager *> clients;
    int new_number;
    QTimer *timer;
    int time_s;
signals:
    void log_message(const QString &log);
};

#endif // CHATSERVER_H
