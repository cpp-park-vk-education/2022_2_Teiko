#include "client_worker.h"
#include <QTcpSocket>
#include <QDataStream>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>



client_worker::client_worker(QObject *parent)
    : QObject(parent)
    , socket(new QTcpSocket(this))
    , logged(false)
{
    connect(socket, &QTcpSocket::connected, this, &client_worker::connected);

    connect(socket, &QTcpSocket::disconnected, this, &client_worker::disconnected);

    connect(socket, &QTcpSocket::readyRead, this, &client_worker::on_ready_read);

    connect(socket, &QTcpSocket::disconnected, this, [this]()->void{logged = false;});

}

void client_worker::login(const QString &userName)
{
    if (socket->state() == QAbstractSocket::ConnectedState) {

        QDataStream clientStream(socket);
        clientStream.setVersion(QDataStream::Qt_5_7);

        QJsonObject message;

        message[QStringLiteral("type")] = QStringLiteral("login");
        message[QStringLiteral("username")] = userName;

        clientStream << QJsonDocument(message).toJson(QJsonDocument::Compact);
    }
}

void client_worker::end_move(){
    QDataStream clientStream(socket);
    clientStream.setVersion(QDataStream::Qt_5_7);

    QJsonObject end_move_message;
    end_move_message[QStringLiteral("type")] = QStringLiteral("ready");
    end_move_message[QStringLiteral("is_ready")] = true;


    clientStream << QJsonDocument(end_move_message).toJson();

}
void client_worker::bad_ending(){

    QDataStream clientStream(socket);
    clientStream.setVersion(QDataStream::Qt_5_7);

    QJsonObject message;
    message[QStringLiteral("type")] = QStringLiteral("force_end");

    clientStream << QJsonDocument(message).toJson();
};

void client_worker::send_message(const QString &text)
{
    if (text.isEmpty())
        return;
    QDataStream clientStream(socket);
    clientStream.setVersion(QDataStream::Qt_5_7);

    QJsonObject message;
    message[QStringLiteral("type")] = QStringLiteral("message");
    message[QStringLiteral("text")] = text;

    clientStream << QJsonDocument(message).toJson();
}

void client_worker::send_metric(const QString &metric_name,const QString &user_name, int value)
{
    QDataStream clientStream(socket);
    clientStream.setVersion(QDataStream::Qt_5_7);

    QJsonObject message;
    message[QStringLiteral("type")] = QStringLiteral("metric_change");
    message[QStringLiteral("sender")] = user_name;
    message[QStringLiteral("metric")] = metric_name;
    message[QStringLiteral("value")] = value;


    clientStream << QJsonDocument(message).toJson();
}

void client_worker::disconnect_from_host()
{
    socket->disconnectFromHost();
}

void client_worker::send_final(int all_metrics_sum){
    QDataStream clientStream(socket);
    clientStream.setVersion(QDataStream::Qt_5_7);

    QJsonObject message;
    message[QStringLiteral("type")] = QStringLiteral("metrics_sum");
    message[QStringLiteral("sum")] = all_metrics_sum;

    clientStream << QJsonDocument(message).toJson();
}

void client_worker::json_received(const QJsonObject &doc)
{

    const QJsonValue type = doc.value(QLatin1String("type"));
    if (type.isNull() || !type.isString())
        return;
    if (type.toString().compare(QLatin1String("login"), Qt::CaseInsensitive) == 0) {
        if (logged)
            return;
        const QJsonValue resultVal = doc.value(QLatin1String("success"));
        if (resultVal.isNull() || !resultVal.isBool())
            return;
        const bool loginSuccess = resultVal.toBool();
        if (loginSuccess) {

            emit logged_in();
            return;
        }

        const QJsonValue reasonVal = doc.value(QLatin1String("reason"));
        emit login_error(reasonVal.toString());
    } else if (type.toString().compare(QLatin1String("message"), Qt::CaseInsensitive) == 0) {

        const QJsonValue text = doc.value(QLatin1String("text"));

        const QJsonValue sender = doc.value(QLatin1String("sender"));
        if (text.isNull() || !text.isString())
            return;
        if (sender.isNull() || !sender.isString())
            return;
        emit message_received(sender.toString(), text.toString());
    } else if (type.toString().compare(QLatin1String("newuser"), Qt::CaseInsensitive) == 0) {

        const QJsonValue username = doc.value(QLatin1String("username"));
        if (username.isNull() || !username.isString())
            return;
        emit user_joined(username.toString());
    } else if (type.toString().compare(QLatin1String("userdisconnected"), Qt::CaseInsensitive) == 0) { // A user left the chat

        const QJsonValue username = doc.value(QLatin1String("username"));
        if (username.isNull() || !username.isString())
            return;
        emit user_left(username.toString());
    }
    else if(type.toString().compare(QLatin1String("start"), Qt::CaseInsensitive) == 0){
        const QJsonValue start = doc.value(QLatin1String("starting"));
        if(start.isNull() || !start.isBool()){
            return;
        }
        if(start == true)
            emit game_start();
    }
    else if(type.toString().compare(QLatin1String("names"), Qt::CaseInsensitive) == 0){

         const QJsonValue name_1 = doc.value(QLatin1String("user_1"));
         if(name_1.isNull() || !name_1.isString())
             return;
         emit set_name(name_1.toString());

         const QJsonValue name_2 = doc.value(QLatin1String("user_2"));
         if(name_2.isNull() || !name_2.isString())
             return;
         emit set_name(name_2.toString());

         const QJsonValue name_3 = doc.value(QLatin1String("user_3"));
         if(name_3.isNull() || !name_3.isString())
             return;
         emit set_name(name_3.toString());

         const QJsonValue name_4 = doc.value(QLatin1String("user_4"));
         if(name_4.isNull() || !name_4.isString())
             return;
         emit set_name(name_4.toString());
    }
    else if(type.toString().compare(QLatin1String("ready"), Qt::CaseInsensitive) == 0){
        const QJsonValue start = doc.value(QLatin1String("next_move"));
        if(start.isNull() || !start.isBool()){
            return;
        }
        if(start == true)
            emit start_move();
    }
    else if(type.toString().compare(QLatin1String("news"), Qt::CaseInsensitive) == 0){
        const QJsonValue text = doc.value(QLatin1String("text"));
        if(text.isNull() || !text.isString()){
            return;
        }
        emit add_news(text.toString());
        const QJsonValue money_change = doc.value(QLatin1String("money_change"));
        if(!money_change.isNull() && money_change.toInt() !=0){
            emit change_money_from_news(money_change.toInt());
        }
        const QJsonValue happiness_value = doc.value(QLatin1String("happiness_value"));
        if(!happiness_value.isNull() && happiness_value.toInt() !=0){
            emit change_happiness_from_news(happiness_value.toInt());
        }
        const QJsonValue intelligence_value = doc.value(QLatin1String("intelligence_vale"));
        if(!intelligence_value.isNull() && intelligence_value.toInt() !=0){
            emit change_intelligence_from_news(intelligence_value.toInt());
        }
        const QJsonValue hunger_value = doc.value(QLatin1String("hunger_value"));
        if(!hunger_value.isNull() && hunger_value.toInt() !=0){
            emit change_hunger_from_news(hunger_value.toInt());
        }


    }
    else if(type.toString().compare(QLatin1String("metric_change"), Qt::CaseInsensitive) == 0){
        const QJsonValue metric = doc.value(QLatin1String("metric"));
        if(metric.isNull() || !metric.isString()){
            return;
        }
        const QJsonValue sender = doc.value(QLatin1String("sender"));
        if(sender.isNull() || !sender.isString()){
            return;
        }
        const QJsonValue value = doc.value(QLatin1String("value"));
        if(value.isNull()){
            return;
        }


        emit change_metric(value.toInt(),metric.toString(),sender.toString());
    }
    else if(type.toString().compare(QLatin1String("champion"), Qt::CaseInsensitive) == 0){
        const QJsonValue name = doc.value(QLatin1String("name"));
        if(name.isNull() || !name.isString()){
            return;
        }
        emit champion(name.toString());
    }
}

void client_worker::connect_to_server(const QHostAddress &address, quint16 port)
{
    socket->connectToHost(address, port);
}

void client_worker::on_ready_read()
{

    QByteArray jsonData;
    QDataStream socketStream(socket);

    socketStream.setVersion(QDataStream::Qt_5_7);

    for (;;) {

        socketStream.startTransaction();
        socketStream >> jsonData;
        if (socketStream.commitTransaction()) {
            QJsonParseError parseError;
            const QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &parseError);
            if (parseError.error == QJsonParseError::NoError) {
                if (jsonDoc.isObject())
                    json_received(jsonDoc.object());
            }

        }
        else break;

    }
}
