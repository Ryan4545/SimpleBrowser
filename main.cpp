#include "stdafx.h"
#include "SimpleBrowser.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SimpleBrowser MainWindow;

    MainWindow.show();

    return app.exec();
}
