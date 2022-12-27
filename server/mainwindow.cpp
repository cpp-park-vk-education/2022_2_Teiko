#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "general_server.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , server(new general_server(this))
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::start_server);
    connect(server, &general_server::log_message, this, &MainWindow::log_message);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_server()
{
    if (server->isListening()) {
        server->stop_server();
        ui->pushButton->setText(tr("Start Server"));
        ui->plainTextEdit->appendPlainText("server stopped");
        log_message(QStringLiteral("Server Stopped"));
    } else {
        if (!server->listen(QHostAddress::Any, 1967)) {
            QMessageBox::critical(this, tr("Error"), tr("Unable to start the server"));
            return;
        }
        log_message(QStringLiteral("Server Started"));
        ui->pushButton->setText(tr("Stop Server"));

    }
}
void MainWindow::log_message(const QString &msg)
{
    ui->plainTextEdit->appendPlainText(msg + QLatin1Char('\n'));
}
