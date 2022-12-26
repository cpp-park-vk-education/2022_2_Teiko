#ifndef SERVER_MANAGER_H
#define SERVER_MANAGER_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QJsonDocument>

class server_manager : public QObject{

    Q_OBJECT
private:
    QTcpSocket *socket;
    QString user_name;
public:
    explicit server_manager(QObject *parent = nullptr);
    virtual bool set_socket_descriptor(qintptr socket_descriptor);
    void set_user_name(const QString &_user_name);
    void send_json(const QJsonObject &json_data);
    QString get_user_name() const;
    bool is_ready;
    bool is_loss;
signals:
    void json_received(const QJsonObject &json_doc);
    void disconnected_from_client();
    void error();
    void log_message(const QString &log);
public slots:
    void disconnect_from_client();
private slots:
    void receive_json();
};

#endif // SERVER_MANAGER_H
