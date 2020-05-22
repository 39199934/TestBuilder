#include "CommandBody.h"

CommandBody::CommandBody(char* command)
{
	this->body = command;
}

void CommandBody::viewMessage(const std::ostream& out)
{
	printf("the command is:%s", body);
}
