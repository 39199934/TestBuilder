#pragma once
#include <qjsondocument.h>
class HeadProtocol
{
public:
	HeadProtocol();
	virtual ~HeadProtocol();
protected:
	QJsonDocument head;
public:
	//virtual  char* getDescription() = 0;


};

