#pragma once

#include <QObject>

class Setup  : public QObject
{
	Q_OBJECT

public:
	Setup(QObject *parent);
	~Setup();
};
