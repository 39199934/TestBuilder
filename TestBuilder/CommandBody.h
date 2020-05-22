#pragma once
#include "BodyProtocol.h"
class CommandBody :
	public BodyProtocol
{
public:
	CommandBody(char* command);
	virtual void viewMessage(const std::ostream& out) override;
};

