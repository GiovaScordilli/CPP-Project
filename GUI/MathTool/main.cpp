/*
 * Author: Giovanni Scordilli
 * Project: GUI math helper made with C++, Qt and GSL libraries
 * Date: 22/04/2024
 * Version: 0.0
 */

#include "window.h"

#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/icons/pi.png"));

    Window* window = new Window();
    window->show();

    return app.exec();
}
