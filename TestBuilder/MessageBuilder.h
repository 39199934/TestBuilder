#pragma once
#include "Message.h"
class MessageBuilder
{
public:
	void init();
	Message* getResult();

protected:
	Message* message;
	virtual HeadProtocol* buildHead() { return nullptr; };
	virtual BodyProtocol* buildBody() { return nullptr; };
};

