#include "server_manager.h"
#include <QDataStream>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>

server_manager::server_manager(QObject *parent)
    : QObject(parent)
    , socket(new QTcpSocket(this))
    , is_ready(false)
    , is_loss(false)
{
    connect(socket, &QTcpSocket::readyRead, this, &server_manager::receive_json);

    connect(socket, &QTcpSocket::disconnected, this, &server_manager::disconnected_from_client);
}


bool server_manager::set_socket_descriptor(qintptr socket_descriptor)
{
    return socket->setSocketDescriptor(socket_descriptor);
}

void server_manager::disconnect_from_client()
{
    socket->disconnectFromHost();
}

QString server_manager::get_user_name() const
{
    return user_name;
}

void server_manager::set_user_name(const QString &userName)
{
    user_name = userName;
}


void server_manager::send_json(const QJsonObject &_json_data)
{

    const QByteArray json_data = QJsonDocument(_json_data).toJson(QJsonDocument::Compact);

    emit log_message(QLatin1String("Sending to ") + get_user_name() + QLatin1String(" - ") + QString::fromUtf8(json_data));

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_5_7);
    socketStream << json_data;
}

void server_manager::receive_json()
{
    //container for received json from socket
    QByteArray jsonData;
    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_5_7);
    for (;;) {
        //transaction for th case when we read more data then available
        socketStream.startTransaction();
        //read json
        socketStream >> jsonData;
        if (socketStream.commitTransaction()) {
            //if read some data
            // json - valid?
            QJsonParseError parseError;
            //try to create json document
            const QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &parseError);
            if (parseError.error == QJsonParseError::NoError) {
                //if json - valid
                if (jsonDoc.isObject()) //if it's json object
                    emit json_received(jsonDoc.object()); //send message to main server
                else
                    emit log_message(QLatin1String("Invalid message: ") + QString::fromUtf8(jsonData));
            }
            else
                emit log_message(QLatin1String("Invalid message: ") + QString::fromUtf8(jsonData));

        }
        //any other case - break
        else break;

    }
}


