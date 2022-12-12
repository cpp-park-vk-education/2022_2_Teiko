#ifndef UNTITLED_INTERFACE_H
#define UNTITLED_INTERFACE_H

#include <QMainWindow>
#include <QLineEdit

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class game_main_window : public QMainWindow
{
Q_OBJECT

public:
    explicit game_main_window(QWidget* parent = nullptr): QMainWindow(parent){};

    ~game_main_window() = default;

private:
    Ui::MainWindow *ui;
public slots:
    change_metrics(){};

};
#endif //UNTITLED_INTERFACE_H
