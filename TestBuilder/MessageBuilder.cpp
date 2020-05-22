#include "MessageBuilder.h"

void MessageBuilder::init()
{
	auto head = buildHead();
	auto body = buildBody();
	message = new Message(head, body);
}
