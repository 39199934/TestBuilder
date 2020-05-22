#pragma once

#include <QObject>
#include <QJsonDocument>
#include <QTcpSocket>
#include <QTextBrowser>
#include "HeadProtocol.h"
#include "BodyProtocol.h"
class Message : public QObject
{
	Q_OBJECT

public:
	Message(HeadProtocol * head,BodyProtocol* body, QObject *parent= nullptr);
	~Message();

	void viewMessage(QTextBrowser * browser);

protected:
	HeadProtocol* head;
	BodyProtocol* body;
};
