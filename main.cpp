#include "stdafx.h"
#include "SimpleBrowser.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(500, 500);

    QPushButton *button = new QPushButton(& window);
    button->setText("Hello");


    window.show();

    return app.exec();
}
