#pragma once
#include <iostream>
#include <qjsondocument.h>
class BodyProtocol
{
public:
	BodyProtocol();
	virtual ~BodyProtocol();
	virtual void viewMessage(const std::ostream& out) = 0;
protected:
	QJsonDocument body;
};

