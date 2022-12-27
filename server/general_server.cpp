#include "general_server.h"
#include "server_manager.h"
#include <QThread>
#include <functional>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QTimer>
#include <unistd.h>
#include <QEventLoop>


general_server::general_server(QObject *parent)
    : QTcpServer(parent)
    ,new_number(0)
    ,time_s(0)
{
    News[0].text = "Налог на недвижимость вырос\n"
                   "\n";
    News[0].money_change = -1000;

    News[1].text = "Сегодня прекрасный солнечный день, желаем отличного настроения\n";
    News[1].happiness_value = 2;

    News[2].text = "Совсем скоро 1 сентября, день знаний! Пора готовить детей к школе!\n";

    News[3].text = "Синоптики обещают хорошую погоду на ближайшие несколько дней\n";
    News[3].happiness_value = 20;

    News[4].text = "По указу мэра учебный год начнется на неделю позже\n";
    News[4].happiness_value = 10;
    News[4].intelligence_value = -5;

    News[5].text = "С днём знаний!\n";
    News[5].happiness_value = 2;
    News[5].intelligence_value = 5;

    News[6].text = "В честь открытия новой пиццерии бесплатная пицца\n";
    News[6].hunger_value = 50;

    News[7].text = "Подарок на день рождения\n";
    News[7].money_change = 5000;

    News[8].text = "Осень подходит к концу! Скоро наступит зима\n";
    News[8].happiness_value = 1;

    News[9].text = "Вы разбили телефон, срочно нужен новый.\n";
    News[9].happiness_value = -5;

    News[10].text = "Синоптики обещают скорое похолодание, советуем утепляться к зиме\n";
    News[10].happiness_value = -30;

    News[11].text = "Прогноз погоды: В Январе будет холодно, весь месяц температура не выше -20\n";
    News[11].happiness_value = -30;

    News[12].text = "Из-за серьезного похолодания двигатели общественного транспорта стали давать сбои, жители города перемещаются на такси\n";
    News[12].money_change = -2000;
    News[12].happiness_value = -10;

    News[13].text = "Местная шоколадная фабрика устраивает день открытых дверей\n";
    News[13].happiness_value = 20;
    News[13].hunger_value = 10;

    News[14].text = "Скоро Новый Год, на улицах поставили ёлки и повсили гирлянды\n";
    News[14].happiness_value = 10;

    News[15].text = "В предверии Нового Года всем выплатили премию\n";
    News[15].money_change = 10000;
    News[15].happiness_value = 10;

    News[16].text = "Местный университет устроил день науки\n";
    News[16].happiness_value = 10;
    News[16].intelligence_value = 20;

    News[16].text = "С Новым Годом!\n";
    News[16].happiness_value = 30;

    News[17].text = "Местный университет устроил день науки\n";
    News[17].happiness_value = 10;
    News[17].intelligence_value = 20;

    News[18].text = "Премия на работе\n";
    News[18].money_change = 3000;

    News[19].text = "Солнечный зимний денёк!\n";
    News[19].happiness_value = 2;

    timer = new QTimer();
    timer->setInterval(1000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));

}

inline void delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

void general_server::updateTime()
{
    time_s++;
    if(time_s == 10){
        timer->stop();
        delay(2000);
        QJsonObject users_names;
        users_names[QStringLiteral("type")] = QStringLiteral("names");
        for(int i = 0;i<clients.size();++i){
            QString user = "user_" + QString::number(i+1);
            users_names[QStringLiteral("user_1")] = clients[i]->get_user_name();

        }
        broadcast(users_names);

        delay(20000);
        QJsonObject news_message;
        news_message[QStringLiteral("type")] = QStringLiteral("news");
        news_message[QStringLiteral("text")] = News[new_number].text;
        news_message[QStringLiteral("happines_value")] = News[new_number].happiness_value;
        news_message[QStringLiteral("intelligence_value")] = News[new_number].intelligence_value;
        news_message[QStringLiteral("hunger_value")] = News[new_number].hunger_value;
        news_message[QStringLiteral("money_change")] = News[new_number].money_change;
        broadcast(news_message);
        new_number++;

        QJsonObject start_message;
        start_message[QStringLiteral("type")] = QStringLiteral("start");
        start_message[QStringLiteral("starting")] = true;
        broadcast(start_message);
    }
}

void general_server::incomingConnection(qintptr socket_descriptor)
{
    if(clients.size() == 4){
        return;
    }
    server_manager *manager = new server_manager(this);
    if (!manager->set_socket_descriptor(socket_descriptor)) {
       manager->deleteLater();
        return;
    }
    connect(manager, &server_manager::disconnected_from_client, this, std::bind(&general_server::user_disconnected, this, manager));
    connect(manager, &server_manager::error, this, std::bind(&general_server::user_error, this, manager));
    connect(manager, &server_manager::json_received, this, std::bind(&general_server::json_received, this, manager, std::placeholders::_1));
    connect(manager, &server_manager::log_message, this, &general_server::log_message);

    clients.append(manager);

    emit log_message(QStringLiteral("New client Connected"));

}
void general_server::send_json(server_manager *destination, const QJsonObject &message)
{
    destination->send_json(message);
}
void general_server::broadcast(const QJsonObject &message, server_manager *exclude)
{
    for (server_manager *worker : clients) {

        if (worker == exclude)
            continue;
        send_json(worker, message);
    }
}
void general_server::broadcast(const QJsonObject &message){
    for (server_manager *worker : clients) {
        send_json(worker, message);
    }

}

void general_server::json_received(server_manager *sender, const QJsonObject &doc)
{
    emit log_message(QLatin1String("JSON received ") + QString::fromUtf8(QJsonDocument(doc).toJson()));

    if (sender->get_user_name().isEmpty())
        return json_from_logged_out(sender, doc);
    json_from_logged_in(sender, doc);
}

void general_server::user_disconnected(server_manager *sender)
{
    clients.removeAll(sender);
        const QString name = sender->get_user_name();
        if (!name.isEmpty()) {
            QJsonObject disconnected_message;
            disconnected_message[QStringLiteral("type")] = QStringLiteral("userdisconnected");
            disconnected_message[QStringLiteral("username")] = name;
            broadcast(disconnected_message, nullptr);
            emit log_message(name + QLatin1String(" disconnected"));
        }
        sender->deleteLater();
}

void general_server::user_error(server_manager *sender)
{
    emit log_message(QLatin1String("Error from ") + sender->get_user_name());
}

void general_server::stop_server()
{
    for (server_manager *worker : clients) {
        worker->disconnect_from_client();
    }
    close();
}

void general_server::json_from_logged_out(server_manager *sender, const QJsonObject &doc)
{
    const QJsonValue type = doc.value(QLatin1String("type"));
    if (type.isNull() || !type.isString())
        return;
    if (type.toString().compare(QLatin1String("login"), Qt::CaseInsensitive) != 0)
        return;
    const QJsonValue user_name_val = doc.value(QLatin1String("username"));
    if (user_name_val.isNull() || !user_name_val.isString())
        return;
    const QString new_user_name = user_name_val.toString().simplified();
    if (new_user_name.isEmpty())
        return;
    for (server_manager *worker : qAsConst(clients)) {
        if (worker == sender)
            continue;
        if (worker->get_user_name().compare(new_user_name, Qt::CaseInsensitive) == 0) {
            QJsonObject message;
            message[QStringLiteral("type")] = QStringLiteral("login");
            message[QStringLiteral("success")] = false;
            message[QStringLiteral("reason")] = QStringLiteral("duplicate username");
            send_json(sender, message);
            return;
        }
    }
    sender->set_user_name(new_user_name);
    QJsonObject successMessage;
    successMessage[QStringLiteral("type")] = QStringLiteral("login");
    successMessage[QStringLiteral("success")] = true;
    send_json(sender, successMessage);
    QJsonObject connectedMessage;
    connectedMessage[QStringLiteral("type")] = QStringLiteral("newuser");
    connectedMessage[QStringLiteral("username")] = new_user_name;
    broadcast(connectedMessage, sender);
}

void general_server::json_from_logged_in(server_manager *sender, const QJsonObject &doc)
{
    const QJsonValue type = doc.value(QLatin1String("type"));
    if (type.isNull() || !type.isString())
        return;
    if (type.toString().compare(QLatin1String("ready"), Qt::CaseInsensitive) == 0){

        const QJsonValue is_ready = doc.value(QLatin1String("is_ready"));
        if (is_ready.isNull() || !is_ready.isBool())
                    return;
        sender->is_ready = true;
        if(all_ready() && !final.empty()){
            send_final();
        }
        else if(all_ready()){
            delay(5000);
            QJsonObject message;
            message[QStringLiteral("type")] = QStringLiteral("ready");
            message[QStringLiteral("next_move")] = true;
            broadcast(message);
            for(int i = 0;i<clients.size();++i)
                clients[i]->is_ready = false;
            QJsonObject news_message;
            news_message[QStringLiteral("type")] = QStringLiteral("news");
            news_message[QStringLiteral("text")] = News[new_number].text;
            news_message[QStringLiteral("happines_value")] = News[new_number].happiness_value;
            news_message[QStringLiteral("intelligence_value")] = News[new_number].intelligence_value;
            news_message[QStringLiteral("hunger_value")] = News[new_number].hunger_value;
            news_message[QStringLiteral("money_change")] = News[new_number].money_change;
            broadcast(news_message);
            new_number++;
        }
    }


    else if (type.toString().compare(QLatin1String("message"), Qt::CaseInsensitive) == 0){
        const QJsonValue text_val = doc.value(QLatin1String("text"));
        if (text_val.isNull() || !text_val.isString())
            return;
        const QString text = text_val.toString().trimmed();
        if (text.isEmpty())
            return;
        QJsonObject message;
        message[QStringLiteral("type")] = QStringLiteral("message");
        message[QStringLiteral("text")] = text;
        message[QStringLiteral("sender")] = sender->get_user_name();
        broadcast(message, sender);
    }
    else if(type.toString().compare(QLatin1String("metric_change"), Qt::CaseInsensitive) == 0){

        const QJsonValue metric = doc.value(QLatin1String("metric"));
        if (metric.isNull() || !metric.isString())
            return;
        const QJsonValue _sender = doc.value(QLatin1String("sender"));
        if (_sender.isNull() || !_sender.isString())
            return;
        const QJsonValue value = doc.value(QLatin1String("value"));
        if (value.isNull())
            return;
        QJsonObject message;
        message[QStringLiteral("type")] = QStringLiteral("metric_change");
        message[QStringLiteral("metric")] = metric.toString();
        message[QStringLiteral("sender")] = _sender.toString();
        message[QStringLiteral("value")] = value.toInt();
        broadcast(message);


    }
    else if (type.toString().compare(QLatin1String("force_end"), Qt::CaseInsensitive) == 0){
        sender->is_loss = true;
    }
     else if(type.toString().compare(QLatin1String("metrics_sum"), Qt::CaseInsensitive) == 0){
        const QJsonValue sum = doc.value(QLatin1String("sum"));
        if (sum.isNull() )
            return;
        final.insert(std::make_pair(sum.toInt(),sender));
        send_final();
    }

}
bool general_server::all_ready(){
    for(int i = 0;i<clients.size();++i){
        if(clients[i]->is_ready || clients[i]->is_loss)
            continue;
        else return false;
    }
    return true;
}
void general_server::send_final(){
    if(all_ready() && !final.empty()){
        QJsonObject message;
        message[QStringLiteral("type")] = QStringLiteral("champion");
        message[QStringLiteral("name")] = final.begin()->second->get_user_name();
        broadcast(message);
    }
};


