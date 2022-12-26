#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "client_worker.h"

inline void delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
     // create the chat client
    ,salary(25000)
    ,wastes(750)
    ,happiness_decrease(15)
    ,intelligenct_decrease(15)
    ,hunger_decrease(15)
    ,client(new client_worker(this))
    ,Model(new QStandardItemModel(this))
    ,move_number(0)
    ,ui(new Ui::MainWindow)
    ,time_m(2)
    ,time_s(0)

{
    //create window
    ui->setupUi(this);

    //add buttons to array, this needs because i need to enable them
    //by the cycle

    //education
    buttons.append(ui->pushButton_book);
    buttons.append(ui->pushButton_courses);
    buttons.append(ui->pushButton_gdz);
    buttons.append(ui->pushButton_coursework);
    buttons.append(ui->pushButton_office_supplies);
    buttons.append(ui->pushButton_ms);
    buttons.append(ui->pushButton_bag);
    buttons.append(ui->pushButton_scientific_journal);

    //food
    buttons.append(ui->pushButton_chips);
    buttons.append(ui->pushButton_energy);
    buttons.append(ui->pushButton_vegetables);
    buttons.append(ui->pushButton_rolls);
    buttons.append(ui->pushButton_coffee);
    buttons.append(ui->pushButton_pizza);
    buttons.append(ui->pushButton_cola);
    buttons.append(ui->pushButton_sandwich);
    buttons.append(ui->pushButton_bun);

    //clothes
    buttons.append(ui->pushButton_hat);
    buttons.append(ui->pushButton_coat);
    buttons.append(ui->pushButton_jacket);
    buttons.append(ui->pushButton_hoodies);
    buttons.append(ui->pushButton_t_shirt);
    buttons.append(ui->pushButton_sneakers);
    buttons.append(ui->pushButton_socks);
    buttons.append(ui->pushButton_cap);
    buttons.append(ui->pushButton_coursework);
    buttons.append(ui->pushButton_uniform);

    //electronics
    buttons.append(ui->pushButton_laptop);
    buttons.append(ui->pushButton_phone);
    buttons.append(ui->pushButton_mouse);
    buttons.append(ui->pushButton_headphones);
    buttons.append(ui->pushButton_keyboard);
    buttons.append(ui->pushButton_teapot);
    buttons.append(ui->pushButton_robot_cleaner);
    buttons.append(ui->pushButton_fridge);
    buttons.append(ui->pushButton_microwave);
    buttons.append(ui->pushButton_dishwasher);

    //disable buttons
    buttons_acces(false);
    ui->pushButton_move_end->setDisabled(true);

    // creating timer and set timeout 1 second
    timer = new QTimer();
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));

    //creating client
    Model->insertColumn(0);

        ui->chatView->setModel(Model);

        connect(client, &client_worker::connected, this, &MainWindow::connected_to_server);
        connect(client, &client_worker::logged_in, this, &MainWindow::logged_in);
        connect(client, &client_worker::message_received, this, &MainWindow::message_received);
        connect(client, &client_worker::disconnected, this, &MainWindow::disconnected_from_server);
        connect(client, &client_worker::user_joined, this, &MainWindow::user_joined);
        connect(client, &client_worker::user_left, this, &MainWindow::user_left);
        connect(client, &client_worker::game_start, this, &MainWindow::game_start);
        connect(client, &client_worker::set_name, this, &MainWindow::set_name);
        connect(this, &MainWindow::end_move, client, &client_worker::end_move);
        connect(client, &client_worker::start_move, this, &MainWindow::start_move);
        connect(this, &MainWindow::bad_ending, client, &client_worker::bad_ending);
        connect(this, &MainWindow::send_metric, client, &client_worker::send_metric);
        //news
        connect(client, &client_worker::add_news, this, &MainWindow::add_news);
        connect(client, &client_worker::change_money_from_news, this, &MainWindow::change_money_from_news);
        connect(client, &client_worker::change_happiness_from_news, this, &MainWindow::change_happiness_from_news);
        connect(client, &client_worker::change_intelligence_from_news, this, &MainWindow::change_intelligence_from_news);

        connect(client, &client_worker::change_metric, this, &MainWindow::change_metric);

        connect(ui->pushButton_start, &QPushButton::clicked, this, &MainWindow::attempt_connection);


        connect(ui->pushButton_send, &QPushButton::clicked, this, &MainWindow::send_message);
        connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::send_message);


}


MainWindow::~MainWindow(){
    delete ui;
    delete timer;
}

void MainWindow::start_move(){
    ui->pushButton_move_end->setEnabled(true);
    time_m = 2;
    time_s = 0;
    timer->start();
    buttons_acces(true);
    if(move_number %5 == 0){
        ui->lcdNumber->display(ui->lcdNumber->value()+salary);
    }
    ui->progressBar_happiness->setValue(ui->progressBar_happiness->value()-happiness_decrease);
    ui->progressBar_hunger->setValue(ui->progressBar_hunger->value()-hunger_decrease);
    ui->progressBar_intelligence->setValue(ui->progressBar_intelligence->value()-intelligenct_decrease);
    ui->lcdNumber->display(ui->lcdNumber->value() - wastes);

    if(move_number == 5){
           if(change_money(5000,ui->pushButton_uniform,ui->lcdNumber)) {
               change_metrics(-10,ui->pushButton_uniform,ui->progressBar_happiness);
               change_metrics(5,ui->pushButton_uniform,ui->progressBar_intelligence);
               ui->pushButton_uniform->setVisible(false);
               ui->label_uniform->setText("Куплено");
           }
           else {
               change_money(ui->lcdNumber->value(),ui->pushButton_uniform,ui->lcdNumber);
               change_metrics(-20,ui->pushButton_uniform,ui->progressBar_happiness);
               change_metrics(15,ui->pushButton_uniform,ui->progressBar_intelligence);
               ui->pushButton_uniform->setVisible(false);
               ui->label_uniform->setText("Куплено");

           }
           ui->textBrowser_news->append("Вы не купили вовремя школьную форму, пришлось срочно покупать в ближайшем магазине за 5000 рублей\n");
    }
    if(move_number == 10){
        if((ui->label_coat->text() != ("Куплено")) && (ui->label_jacket->text() != ("Куплено"))){
            ui->textBrowser_news->append("Вы не купили вовремя зимнюю одежду, приходится тратить больше денег на такси\n");
            wastes +=400;
        }
    }
    if(move_number == 16){
        if(ui->label_phone->text() != ("Куплено")){
            ui->textBrowser_news->append("Из-за отсутсвия телефона до вас не дозвонились клиенты и вы потеряличасть дохода\n");
            if(change_money(5000,ui->pushButton_uniform,ui->lcdNumber)) {
                change_metrics(-20,ui->pushButton_uniform,ui->progressBar_happiness);
            }
            }
            else {
                change_money(ui->lcdNumber->value(),ui->pushButton_uniform,ui->lcdNumber);
                change_metrics(-20,ui->pushButton_uniform,ui->progressBar_happiness);
        }
    }

}

void MainWindow::game_start(){
    move_number = 0;
    ui->pushButton_start->setVisible(false);
    if(ui->player_2->text() == "Игрок"){
        ui->player_2->setVisible(false);
        ui->groupBox_player_2->setVisible(false);
    }
    if(ui->player_3->text() == "Игрок"){
        ui->player_3->setVisible(false);
        ui->groupBox_player_3->setVisible(false);
    }
    if(ui->player_4->text() == "Игрок"){
        ui->player_4->setVisible(false);
        ui->groupBox_player_4->setVisible(false);
    }
    start_move();

};
void MainWindow::end_game(){
    buttons_acces(false);
    QMessageBox::information(this,"Спасибо за игру!","Игра закончена");
    delay(100000);
    client->disconnect_from_host();
}

void MainWindow::on_pushButton_move_end_clicked()
{   ui->pushButton_move_end->setDisabled(true);
    move_number++;
    timer->stop();
    if(move_number == 19){
        end_game();
        return;
    }
    emit end_move();
    return;


}


void MainWindow::updateTime()
{
    if(time_s <= 0 && time_m<=0){
        ui->pushButton_move_end->setDisabled(true);
        buttons_acces(false);
        timer->stop();
        ++move_number;
        if(move_number == 20){
            end_game();
            return;
        }
        emit end_move();
        return;
    }
    else if(time_s<=0){
        --time_m;
        time_s = 60;
    }

    --time_s;

    ui->label_time_m->setText("0" + QString::number(time_m) + "  : ");
    ui->label_time_s->setText(QString::number(time_s));
    if(time_s == 0)ui->label_time_s->setText("00");
    if(time_s/10 == 0)ui->label_time_s->setText("0" + QString::number(time_s));
}
//news
void MainWindow::add_news(QString text){
    ui->textBrowser_news->append(text);
}
void MainWindow::change_money_from_news(int value){
    if(ui->lcdNumber->value()+value>=0){
        ui->lcdNumber->display(ui->lcdNumber->value()+value);
            emit send_metric("money",ui->main_player_user_name->text(),ui->lcdNumber->value());
    }
    else {
        ui->lcdNumber->display(0);
    }
    emit send_metric("money",ui->main_player_user_name->text(),ui->lcdNumber->value());
}
void MainWindow::change_happiness_from_news(int value){
    change_metrics(value,nullptr,ui->progressBar_happiness);
}
void MainWindow::change_intelligence_from_news(int value){
    change_metrics(value,nullptr,ui->progressBar_intelligence);
}
void MainWindow::change_hunger_from_news(int value){
    change_metrics(value,nullptr,ui->progressBar_hunger);
}

void MainWindow::buttons_acces(bool is_available){

    if(!is_available){
        for(int  i = 0;i<buttons.size();++i){
            buttons[i]->setDisabled(true);
        }
    }
    else {
        for(int  i = 0;i<buttons.size();++i){
            buttons[i]->setEnabled(true);
        }

    }
}

void MainWindow::attempt_connection()
{   QMessageBox box;
    box.setWindowTitle("It's finance");
    box.setText("Добро пожаловать!\n\n"
                " С этого момента вы семья из 4 игроков!\n"
                " Ваша главная задача - максимально эффективно использовать ресурсы,"
                "чтобы каждый член семьи был счастлив, сыт и интеллектуально удовлетворён.\n"
                "Успехов в игре!");

    QAbstractButton* ans_yes = box.addButton(tr("хорошо"), QMessageBox::YesRole);
    box.exec();

    const QString hostAddress = QInputDialog::getText(
        this
        , tr("Chose Server")
        , tr("Server Address")
        , QLineEdit::Normal
        , QStringLiteral("127.0.0.1")
    );
    if (hostAddress.isEmpty())

    ui->pushButton_start->setEnabled(false);

    client->connect_to_server(QHostAddress(hostAddress), 1967);

}

void MainWindow::connected_to_server()
{

    const QString new_username = QInputDialog::getText(this, tr("Chose Username"), tr("Username"));
    if (new_username.isEmpty()){

        return client->disconnect_from_host();
    }
    ui->main_player_user_name->setText(new_username);

    attempt_login(new_username);
}

void MainWindow::attempt_login(const QString &user_name)
{

    client->login(user_name);
}

void MainWindow::set_name(const QString &user_name){
    if(ui->main_player_user_name->text() == user_name ||
       ui->player_2->text() == user_name ||
       ui->player_3->text()== user_name||
       ui->player_4->text()== user_name )
        return;
    if(ui->player_2->text() == "Игрок")
        ui->player_2->setText(user_name);
    else if(ui->player_3->text() == "Игрок")
        ui->player_3->setText(user_name);
    else if(ui->player_4->text() == "Игрок")
        ui->player_4->setText(user_name);


}

void MainWindow::logged_in()
{

    ui->pushButton_send->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    ui->chatView->setEnabled(true);

    last_user_name.clear();
}

void MainWindow::login_failed(const QString &reason)
{
    QMessageBox::critical(this, tr("Error"), reason);
    connected_to_server();
}

void MainWindow::message_received(const QString &sender, const QString &text)
{

    int newRow = Model->rowCount();
    if (last_user_name != sender) {

        last_user_name = sender;
        QFont boldFont;
        boldFont.setBold(true);
        Model->insertRows(newRow, 2);

        Model->setData(Model->index(newRow, 0), sender + QLatin1Char(':'));
        Model->setData(Model->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

        Model->setData(Model->index(newRow, 0), boldFont, Qt::FontRole);
        ++newRow;
    } else {

        Model->insertRow(newRow);
    }

    Model->setData(Model->index(newRow, 0), text);

    Model->setData(Model->index(newRow, 0), int(Qt::AlignLeft | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->chatView->scrollToBottom();
}

void MainWindow::send_message()
{

    client->send_message(ui->lineEdit->text());
    const int newRow = Model->rowCount();

    Model->insertRow(newRow);

    Model->setData(Model->index(newRow, 0), ui->lineEdit->text());

    Model->setData(Model->index(newRow, 0), int(Qt::AlignRight | Qt::AlignVCenter), Qt::TextAlignmentRole);

    ui->lineEdit->clear();

    ui->chatView->scrollToBottom();

    last_user_name.clear();
}

void MainWindow::disconnected_from_server()
{

    QMessageBox::warning(this, tr("Disconnected"), tr("The host terminated the connection"));

    ui->pushButton_send->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->chatView->setEnabled(false);

    ui->pushButton_start->setEnabled(true);

    last_user_name.clear();
}

void MainWindow::user_joined(const QString &username)
{

    const int newRow = Model->rowCount();

    Model->insertRow(newRow);
    Model->setData(Model->index(newRow, 0), tr("%1 Joined the Chat").arg(username));

    Model->setData(Model->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    Model->setData(Model->index(newRow, 0), QBrush(Qt::blue), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();
}

void MainWindow::user_left(const QString &username)
{
    const int newRow = Model->rowCount();

    Model->insertRow(newRow);

    Model->setData(Model->index(newRow, 0), tr("%1 Left the Chat").arg(username));

    Model->setData(Model->index(newRow, 0), Qt::AlignCenter, Qt::TextAlignmentRole);

    Model->setData(Model->index(newRow, 0), QBrush(Qt::red), Qt::ForegroundRole);

    ui->chatView->scrollToBottom();

    last_user_name.clear();
}
void MainWindow::error(QAbstractSocket::SocketError socketError)
{

    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
    case QAbstractSocket::ProxyConnectionClosedError:
        return;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::critical(this, tr("Error"), tr("The host refused the connection"));
        break;
    case QAbstractSocket::ProxyConnectionRefusedError:
        QMessageBox::critical(this, tr("Error"), tr("The proxy refused the connection"));
        break;
    case QAbstractSocket::ProxyNotFoundError:
        QMessageBox::critical(this, tr("Error"), tr("Could not find the proxy"));
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::critical(this, tr("Error"), tr("Could not find the server"));
        break;
    case QAbstractSocket::SocketAccessError:
        QMessageBox::critical(this, tr("Error"), tr("You don't have permissions to execute this operation"));
        break;
    case QAbstractSocket::SocketResourceError:
        QMessageBox::critical(this, tr("Error"), tr("Too many connections opened"));
        break;
    case QAbstractSocket::SocketTimeoutError:
        QMessageBox::warning(this, tr("Error"), tr("Operation timed out"));
        return;
    case QAbstractSocket::ProxyConnectionTimeoutError:
        QMessageBox::critical(this, tr("Error"), tr("Proxy timed out"));
        break;
    case QAbstractSocket::NetworkError:
        QMessageBox::critical(this, tr("Error"), tr("Unable to reach the network"));
        break;
    case QAbstractSocket::UnknownSocketError:
        QMessageBox::critical(this, tr("Error"), tr("An unknown error occured"));
        break;
    case QAbstractSocket::UnsupportedSocketOperationError:
        QMessageBox::critical(this, tr("Error"), tr("Operation not supported"));
        break;
    case QAbstractSocket::ProxyAuthenticationRequiredError:
        QMessageBox::critical(this, tr("Error"), tr("Your proxy requires authentication"));
        break;
    case QAbstractSocket::ProxyProtocolError:
        QMessageBox::critical(this, tr("Error"), tr("Proxy comunication failed"));
        break;
    case QAbstractSocket::TemporaryError:
    case QAbstractSocket::OperationError:
        QMessageBox::warning(this, tr("Error"), tr("Operation failed, please try again"));
        return;
    default:
        Q_UNREACHABLE();
    }
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_send->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->chatView->setEnabled(false);
    last_user_name.clear();
}


