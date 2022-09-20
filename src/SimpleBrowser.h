#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleBrowser.h"

class SimpleBrowser : public QMainWindow
{
    Q_OBJECT

public:
    SimpleBrowser(QWidget *parent = nullptr);
    ~SimpleBrowser();

private:
    Ui::SimpleBrowserClass ui;
};
