#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "general_server.h"
#include "news.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    general_server *server;
    news News[10];

private slots:
    void start_server();
    void log_message(const QString &log);
};
#endif // MAINWINDOW_H
