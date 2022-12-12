#include <QApplication>
#include "./ui_interface.h"
#include "interface.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    game_main_window window(nullptr);
    Ui::MainWindow interface;
    interface.setupUi(&window);
    window.show();
    return app.exec();
}
